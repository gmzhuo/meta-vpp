DESCRIPTION = "Vector Packet Processing"

include vpp-common.inc
SRCREV = "a361a3951c5cc825fcb4e94c41255e2074261769"
PV = "23.06"

SRC_URI += " file://startup.conf file://vcl.conf "

#export DPDK_PATH= "${RECIPE_SYSROOT}"
#EXTRA_OECMAKE = "-DDPDK_INCLUDE_DIR=${RECIPE_SYSROOT}/usr/include -DDPDK_LIB=${RECIPE_SYSROOT}/usr/lib64/libdpdk.a"
#include vpp-pkgs.inc


do_configure:append () {
	( cd ${B} &&  mkdir -p vppinfra vpp/app )
}

do_install:append() {
	mkdir -p ${D}/etc/vpp
	cp ${WORKDIR}/startup.conf ${D}/etc/vpp/startup.conf
	cp ${WORKDIR}/vcl.conf ${D}/etc/vpp/vcl.conf
	rm -rf ${D}/usr/share/vpp
	rm -rf ${D}/usr/lib/cmake
	rm -rf ${D}/usr/lib/cmake/vpp
	rm -rf ${D}/usr/share
	rm -rf ${D}/usr/etc
	rm -rf ${D}/usr/lib64/libvatclient.so
	rm -rf ${D}/usr/lib64/libnat.so
	rm -rf ${D}/usr/lib/python3.8/
	rm -rf ${D}/usr/lib/vpp_api_test_plugins/
	rm -rf ${D}/usr/lib/vat2_plugins/
}

#do_package_qa() {
#}

pkg_postinst_ontarget_${PN} () {
echo vm.nr_hugepages=1024 >> /etc/sysctl.conf

# Must be greater than or equal to (2 * vm.nr_hugepages).
echo  vm.max_map_count=3096 >> /etc/sysctl.conf

# All groups allowed to access hugepages
echo vm.hugetlb_shm_group=0 >> /etc/sysctl.conf

# Shared Memory Max must be greator or equal to the total size of hugepages.
# For 2MB pages, TotalHugepageSize = vm.nr_hugepages * 2 * 1024 * 1024
# If the existing kernel.shmmax setting  (cat /sys/proc/kernel/shmmax)
# is greater than the calculated TotalHugepageSize then set this parameter
# to current shmmax value.
echo kernel.shmmax=2147483648 >> /etc/sysctl.conf
	
# And add to rc.local
echo mkdir -p /var/log/vpp >> /etc/rc.local
echo "/usr/bin/vpp -c /etc/vpp/startup.conf" >> /etc/rc.local
chmod 755 /etc/rc.local
}

PACKAGES += " vpp-core-plugin"

FILES:vpp-core-plugin = " ${libdir}/vpp_plugins/*.so "
RDEPENDS:vpp-core-plugin += "vpp-core"
FILES:${PN}-dev = " \
		${includedir}/* \
		${libdir}/lib*.so \
		"



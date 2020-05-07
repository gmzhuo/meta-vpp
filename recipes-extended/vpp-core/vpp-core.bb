DESCRIPTION = "Vector Packet Processing"

STABLE = "master"
BRANCH = "master"
SRCREV = "0e2751cc1d246145cee6b1e4a588c30270c7ce21"
S = "${WORKDIR}/git"
PV = "20.05"

LICENSE = "Apache-2.0"

LIC_FILES_CHKSUM = "file://LICENSE;md5=175792518e4ac015ab6696d16c4f607e"

AUTOTOOLS_SCRIPT_PATH = "${S}/src"


SRC_URI = "git://github.com/FDio/vpp;branch=${STABLE} \
	file://fix-libdir.patch \
	file://002-private-event.patch \
	file://0001-GCC-above-5.4-fails-when-we-specify-arch-funattribut.patch \
	file://003-runtime-conf.patch \
	"
DEPENDS = "dpdk numactl openssl util-linux"

OECMAKE_SOURCEPATH = "${S}/src"

inherit cmake
inherit pkgconfig

export OPENSSL_PATH = "${RECIPE_SYSROOT}"
export DPDK_PATH= "${RECIPE_SYSROOT}"

EXTRA_OECMAKE = "-DDPDK_INCLUDE_DIR=${RECIPE_SYSROOT}/usr/include -DDPDK_LIB=${RECIPE_SYSROOT}/usr/lib64/libdpdk.a"

include vpp-pkgs.inc


do_configure_append () {
	( cd ${B} &&  mkdir -p vppinfra vpp/app )
}

do_install_append() {
	mkdir -p ${D}/etc/vpp
	cp ${S}/src/vpp/conf/startup.conf ${D}/etc/vpp/startup.conf
	cp ${S}/src/vpp/conf/vcl.conf ${D}/etc/vpp/vcl.conf
	rm -rf ${D}/usr/share/vpp
	rm -rf ${D}/usr/lib/cmake
	rm -rf ${D}/${libdir}/vpp_api_test_plugins/
	rm -rf ${D}/usr/lib/cmake/vpp
	rm -rf ${D}/usr/share
	rm -rf ${D}/usr/etc
	rm -rf ${D}/usr/lib64/libvatclient.so
	rm -rf ${D}/usr/lib64/libnat.so
	rm -rf ${D}/usr/lib/
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



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
DEPENDS = "dpdk numactl openssl util-linux vpp-core"

OECMAKE_SOURCEPATH = "${S}/extras/libmemif/"

inherit cmake

export OPENSSL_PATH = "${RECIPE_SYSROOT}"
export DPDK_PATH= "${RECIPE_SYSROOT}"

EXTRA_OECMAKE = "-DDPDK_INCLUDE_DIR=${RECIPE_SYSROOT}/usr/include -DDPDK_LIB=${RECIPE_SYSROOT}/usr/lib64/libdpdk.a"

FILES_${PN}-dev = ""

FILES_${PN} = " \
	/usr/lib64/libmemif.so \
	"


FILES_${PN} += " \
	/usr/include/memif/memif.h \
	/usr/include/memif/libmemif.h \
	"


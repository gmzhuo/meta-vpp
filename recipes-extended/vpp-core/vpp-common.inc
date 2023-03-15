DESCRIPTION = "Vector Packet Processing"

STABLE = "master"
SRCREV = "a361a3951c5cc825fcb4e94c41255e2074261769"
S = "${WORKDIR}/git"
PV = "23.06"

LICENSE = "Apache-2.0"

LIC_FILES_CHKSUM = "file://LICENSE;md5=175792518e4ac015ab6696d16c4f607e"

AUTOTOOLS_SCRIPT_PATH = "${S}/src"


SRC_URI = "git://github.com/FDio/vpp;branch=${STABLE}"
SRC_URI += " file://fix-libdir.patch "
#	file://fix-libdir.patch \
#	file://002-private-event.patch \
#	file://0001-GCC-above-5.4-fails-when-we-specify-arch-funattribut.patch \
#	file://003-runtime-conf.patch \
#	"
DEPENDS = "numactl openssl util-linux"

OECMAKE_SOURCEPATH = "${S}/src"

inherit cmake
inherit pkgconfig

export OPENSSL_PATH = "${RECIPE_SYSROOT}"

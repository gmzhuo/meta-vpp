DESCRIPTION = "Vector Packet Processing libmemif"

include vpp-common.inc
SRCREV = "a361a3951c5cc825fcb4e94c41255e2074261769"
PV = "23.06"

OECMAKE_SOURCEPATH = "${S}/extras/libmemif/"

do_install:append() {
	mv ${D}/usr/lib/libmemif.so ${D}/usr/lib/libmemif.so.23.06
	cd ${D}/usr/lib/
	ln -s libmemif.so.23.06 libmemif.so
}
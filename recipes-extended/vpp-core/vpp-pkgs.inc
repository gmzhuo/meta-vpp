
PACKAGES += "vpp-core-data vpp-core-plugin-igmp vpp-core-plugin-gtpu vpp-core-plugin-gbp \
		vpp-core-plugin-lb vpp-core-plugin-avf vpp-core-plugin-cdp vpp-core-plugin-map vpp-core-plugin-srv6as \
		vpp-core-plugin-l2e vpp-core-plugin-acl vpp-core-plugin-flowprobe vpp-core-plugin-abf \
		vpp-core-plugin-pppoe vpp-core-plugin-lacp vpp-core-plugin-ioam vpp-core-plugin-memif \
		vpp-core-plugin-stn vpp-core-plugin-srv6ad vpp-core-plugin-mactime vpp-core-plugin-unittest \
		vpp-core-plugin-nat vpp-core-plugin-srv6am vpp-core-plugin-lb_test \
		vpp-core-plugin-ioam_vxlan_gpe_test vpp-core-plugin-map_test vpp-core-plugin-avf_test \
		vpp-core-plugin-mactime_test vpp-core-plugin-udp_ping_test vpp-core-plugin-ioam_trace_test \
		vpp-core-plugin-lacp_test vpp-core-plugin-stn_test vpp-core-plugin-memif_test \
		vpp-core-plugin-nat_test_test vpp-core-plugin-ioam_export_test \
		vpp-core-plugin-flowprobe_test vpp-core-plugin-ioam_pot_test \
		vpp-core-plugin-vxlan_gpe_ioam_export_test  vpp-core-plugin-pppoe_test vpp-core-plugin-gtpu_test \
		vpp-core-plugin-cdp_test vpp-core-plugin-dpdk vpp-core-plugin-dpdk_test vpp-core-test \
		vpp-core-plugin-tlsopenssl vpp-core-plugin-ixge vpp-core-plugin-ila vpp-core-plugin-data \
		"


FILES_${PN}-plugin-acl = " ${libdir}/vpp_plugins/acl_plugin.so "

FILES_${PN} = " \
			/etc/vpp/startup.conf \
			/etc/vpp/vcl.conf \
			/usr/bin/vpp_get_metrics \
			/usr/bin/vpp_get_stats \
			/usr/bin/vpp_restart \
			/usr/bin/vpp_api_test \
			/usr/bin/svmtool \
			/usr/bin/vapi_c_gen.py \
			/usr/bin/vapi_json_parser.py \
			/usr/bin/vppapigen \
			/usr/bin/vpp_prometheus_export \
			/usr/bin/elftool \
			/usr/bin/vapi_cpp_gen.py \
			/usr/bin/svmdbtool \
			/usr/bin/vpp \
			/usr/bin/vppctl \
			/usr/bin/vpp_echo \
			/usr/lib64/vpp_plugins/builtinurl_plugin.so \
			/usr/lib64/vpp_plugins/ping_plugin.so \
			/usr/lib64/vpp_plugins/stn_plugin.so \
			/usr/lib64/vpp_plugins/ixge_plugin.so \
			/usr/lib64/vpp_plugins/ioam_plugin.so \
			/usr/lib64/vpp_plugins/oddbuf_plugin.so \
			/usr/lib64/vpp_plugins/crypto_ia32_plugin.so \
			/usr/lib64/vpp_plugins/mactime_plugin.so \
			/usr/lib64/vpp_plugins/l2e_plugin.so \
			/usr/lib64/vpp_plugins/unittest_plugin.so \
			/usr/lib64/vpp_plugins/mdata_plugin.so \
			/usr/lib64/vpp_plugins/crypto_openssl_plugin.so \
			/usr/lib64/vpp_plugins/tlsopenssl_plugin.so \
			/usr/lib64/vpp_plugins/lb_plugin.so \
			/usr/lib64/vpp_plugins/http_static_plugin.so \
			/usr/lib64/vpp_plugins/l3xc_plugin.so \
			/usr/lib64/vpp_plugins/abf_plugin.so \
			/usr/lib64/vpp_plugins/gbp_plugin.so \
			/usr/lib64/vpp_plugins/perfmon_plugin.so \
			/usr/lib64/vpp_plugins/svs_plugin.so \
			/usr/lib64/vpp_plugins/srv6am_plugin.so \
			/usr/lib64/vpp_plugins/vmxnet3_plugin.so \
			/usr/lib64/vpp_plugins/sctp_plugin.so \
			/usr/lib64/vpp_plugins/srv6mobile_plugin.so \
			/usr/lib64/vpp_plugins/ikev2_plugin.so \
			/usr/lib64/vpp_plugins/ct6_plugin.so \
			/usr/lib64/vpp_plugins/flowprobe_plugin.so \
			/usr/lib64/vpp_plugins/avf_plugin.so \
			/usr/lib64/vpp_plugins/pppoe_plugin.so \
			/usr/lib64/vpp_plugins/dns_plugin.so \
			/usr/lib64/vpp_plugins/dpdk_plugin.so \
			/usr/lib64/vpp_plugins/memif_plugin.so \
			/usr/lib64/vpp_plugins/cdp_plugin.so \
			/usr/lib64/vpp_plugins/srv6ad_plugin.so \
			/usr/lib64/vpp_plugins/nsh_plugin.so \
			/usr/lib64/vpp_plugins/dhcp_plugin.so \
			/usr/lib64/vpp_plugins/srv6as_plugin.so \
			/usr/lib64/vpp_plugins/nsim_plugin.so \
			/usr/lib64/vpp_plugins/gtpu_plugin.so \
			/usr/lib64/vpp_plugins/acl_plugin.so \
			/usr/lib64/vpp_plugins/nat_plugin.so \
			/usr/lib64/vpp_plugins/ila_plugin.so \
			/usr/lib64/vpp_plugins/igmp_plugin.so \
			/usr/lib64/vpp_plugins/hs_apps_plugin.so \
			/usr/lib64/vpp_plugins/map_plugin.so \
			/usr/lib64/vpp_plugins/lacp_plugin.so \
			${libdir}/libvatplugin.so.20.05 \
			${libdir}/libsvmdb.so.20.05 \
			${libdir}/libsvm.so.20.05 \
			${libdir}/libvppapiclient.so.20.05 \
			${libdir}/libvlibmemoryclient.so.20.05 \
			${libdir}/libvnet.so.20.05 \
			${libdir}/libnat.so.20.05 \
			${libdir}/libvatclient.so.20.05 \
			${libdir}/libvlib.so.20.05 \
			${libdir}/libvppcom.so.20.05 \
			${libdir}/libvlibmemory.so.20.05 \
			${libdir}/libvppinfra.so.20.05 \
			${libdir}/libvapiclient.so.20.05 \
			${libdir}/libvcl_ldpreload.so.20.05 \
			${libdir}/vpp_plugins/vrrp_plugin.so \
			${libdir}/vpp_plugins/dslite_plugin.so \
			${libdir}/vpp_plugins/crypto_native_plugin.so \
			${libdir}/vpp_plugins/urpf_plugin.so \
			"

FILES_${PN}-dev = " \
		${includedir}/* \
		${libdir}/libvcl_ldpreload.so \
		${libdir}/libvppapiclient.so \
		${libdir}/libvppcom.so \
		${libdir}/libvlib.so \
		${libdir}/libsvm.so \
		${libdir}/libsvmdb.so \
		${libdir}/libvatplugin.so \
		${libdir}/libvlibmemory.so \
		${libdir}/libvapiclient.so \
		${libdir}/libvnet.so \
		${libdir}/libvppinfra.so \
		${libdir}/libcperf.so \
		${libdir}/libvlibmemoryclient.so "
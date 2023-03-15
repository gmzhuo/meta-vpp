
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


FILES_${PN}-plugin-acl = " /lib/vpp_plugins/acl_plugin.so \
			/lib/vpp_plugins/dslite_plugin.so \
			/lib/vpp_plugins/crypto_native_plugin.so \
			/lib/vpp_plugins/urpf_plugin.so \
			/lib/vpp_plugins/vrrp_plugin.so \
			/lib/vpp_plugins/vmxnet3_plugin.so \
			/lib/vpp_plugins/mss_clamp_plugin.so \
			/lib/vpp_plugins/nsim_plugin.so \
			/lib/vpp_plugins/arping_plugin.so \
			/lib/vpp_plugins/srv6mobile_plugin.so \
			/lib/vpp_plugins/prom_plugin.so \
			/lib/vpp_plugins/oddbuf_plugin.so \
			/lib/vpp_plugins/ct6_plugin.so \
			/lib/vpp_plugins/dslite_plugin.so \
			/lib/vpp_plugins/http_static_plugin.so \
			/lib/vpp_plugins/perfmon_plugin.so \
			/lib/vpp_plugins/nat66_plugin.so \
			/lib/vpp_plugins/srv6as_plugin.so \
			/lib/vpp_plugins/geneve_plugin.so \
			/lib/vpp_plugins/srv6ad_plugin.so \
			/lib/vpp_plugins/snort_plugin.so \
			/lib/vpp_plugins/dns_plugin.so \
			/lib/vpp_plugins/lisp_unittest_plugin.so \
			/lib/vpp_plugins/gtpu_plugin.so \
			/lib/vpp_plugins/mdata_plugin.so \
			/lib/vpp_plugins/lldp_plugin.so \
			/lib/vpp_plugins/mactime_plugin.so \
			/lib/vpp_plugins/nat64_plugin.so \
			/lib/vpp_plugins/dhcp_plugin.so \
			/lib/vpp_plugins/ping_plugin.so \
			/lib/vpp_plugins/crypto_sw_scheduler_plugin.so \
			/lib/vpp_plugins/crypto_native_plugin.so \
			/lib/vpp_plugins/builtinurl_plugin.so \
			/lib/vpp_plugins/cnat_plugin.so \
			/lib/vpp_plugins/adl_plugin.so \
			/lib/vpp_plugins/nat_plugin.so \
			/lib/vpp_plugins/map_plugin.so \
			/lib/vpp_plugins/lisp_plugin.so \
			/lib/vpp_plugins/ioam_plugin.so \
			/lib/vpp_plugins/lb_plugin.so \
			/lib/vpp_plugins/flowprobe_plugin.so \
			/lib/vpp_plugins/svs_plugin.so \
			/lib/vpp_plugins/igmp_plugin.so \
			/lib/vpp_plugins/pnat_plugin.so \
			/lib/vpp_plugins/pppoe_plugin.so \
			/lib/vpp_plugins/srv6am_plugin.so \
			/lib/vpp_plugins/ikev2_plugin.so \
			/lib/vpp_plugins/vhost_plugin.so \
			/lib/vpp_plugins/ila_plugin.so \
			/lib/vpp_plugins/vxlan_plugin.so \
			/lib/vpp_plugins/bufmon_plugin.so \
			/lib/vpp_plugins/l3xc_plugin.so \
			/lib/vpp_plugins/lacp_plugin.so \
			/lib/vpp_plugins/srv6adflow_plugin.so \
			/lib/vpp_plugins/tlsopenssl_plugin.so \
			/lib/vpp_plugins/avf_plugin.so \
			/lib/vpp_plugins/l2tp_plugin.so \
			/lib/vpp_plugins/crypto_openssl_plugin.so \
			/lib/vpp_plugins/nsh_plugin.so \
			/lib/vpp_plugins/unittest_plugin.so \
			/lib/vpp_plugins/memif_plugin.so \
			/lib/vpp_plugins/acl_plugin.so \
			/lib/vpp_plugins/stn_plugin.so \
			/lib/vpp_plugins/abf_plugin.so \
			/lib/vpp_plugins/dispatch_trace_plugin.so \
			/lib/vpp_plugins/hsi_plugin.so \
			/lib/vpp_plugins/cdp_plugin.so \
			/lib/vpp_plugins/det44_plugin.so \
			/lib/vpp_plugins/nat44_ei_plugin.so \
			/lib/vpp_plugins/hs_apps_plugin.so \
			/lib/vpp_plugins/tracedump_plugin.so \
			/lib/vpp_plugins/urpf_plugin.so \
			/lib/vpp_plugins/af_packet_plugin.so \
			/lib/vpp_plugins/http_plugin.so \
			/lib/vpp_plugins/wireguard_plugin.so \
			/lib/vpp_plugins/dma_intel_plugin.so \
			"

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
			/lib/vpp_plugins/builtinurl_plugin.so \
			/lib/vpp_plugins/ping_plugin.so \
			/lib/vpp_plugins/stn_plugin.so \
			/lib/vpp_plugins/ixge_plugin.so \
			/lib/vpp_plugins/ioam_plugin.so \
			/lib/vpp_plugins/oddbuf_plugin.so \
			/lib/vpp_plugins/crypto_ia32_plugin.so \
			/lib/vpp_plugins/mactime_plugin.so \
			/lib/vpp_plugins/l2e_plugin.so \
			/lib/vpp_plugins/unittest_plugin.so \
			/lib/vpp_plugins/mdata_plugin.so \
			/lib/vpp_plugins/crypto_openssl_plugin.so \
			/lib/vpp_plugins/tlsopenssl_plugin.so \
			/lib/vpp_plugins/lb_plugin.so \
			/lib/vpp_plugins/http_static_plugin.so \
			/lib/vpp_plugins/l3xc_plugin.so \
			/lib/vpp_plugins/abf_plugin.so \
			/lib/vpp_plugins/gbp_plugin.so \
			/lib/vpp_plugins/perfmon_plugin.so \
			/lib/vpp_plugins/svs_plugin.so \
			/lib/vpp_plugins/srv6am_plugin.so \
			/lib/vpp_plugins/vmxnet3_plugin.so \
			/lib/vpp_plugins/sctp_plugin.so \
			/lib/vpp_plugins/srv6mobile_plugin.so \
			/lib/vpp_plugins/ikev2_plugin.so \
			/lib/vpp_plugins/ct6_plugin.so \
			/lib/vpp_plugins/flowprobe_plugin.so \
			/lib/vpp_plugins/avf_plugin.so \
			/lib/vpp_plugins/pppoe_plugin.so \
			/lib/vpp_plugins/dns_plugin.so \
			/lib/vpp_plugins/dpdk_plugin.so \
			/lib/vpp_plugins/memif_plugin.so \
			/lib/vpp_plugins/cdp_plugin.so \
			/lib/vpp_plugins/srv6ad_plugin.so \
			/lib/vpp_plugins/nsh_plugin.so \
			/lib/vpp_plugins/dhcp_plugin.so \
			/lib/vpp_plugins/srv6as_plugin.so \
			/lib/vpp_plugins/nsim_plugin.so \
			/lib/vpp_plugins/gtpu_plugin.so \
			/lib/vpp_plugins/acl_plugin.so \
			/lib/vpp_plugins/nat_plugin.so \
			/lib/vpp_plugins/ila_plugin.so \
			/lib/vpp_plugins/igmp_plugin.so \
			/lib/vpp_plugins/hs_apps_plugin.so \
			/lib/vpp_plugins/map_plugin.so \
			/lib/vpp_plugins/lacp_plugin.so \
			/lib/libvatplugin.so.23.06 \
			/lib/libsvmdb.so.23.06 \
			/lib/libsvm.so.23.06 \
			/lib/libvppapiclient.so.23.06 \
			/lib/libvlibmemoryclient.so.23.06 \
			/lib/libvnet.so.23.06 \
			/lib/libnat.so.23.06 \
			/lib/libvatclient.so.23.06 \
			/lib/libvlib.so.23.06 \
			/lib/libvppcom.so.23.06 \
			/lib/libvlibmemory.so.23.06 \
			/lib/libvppinfra.so.23.06 \
			/lib/libvapiclient.so.23.06 \
			/lib/libvcl_ldpreload.so.23.06 \
			"

FILES_${PN}-dev = " \
		${includedir}/* \
		/lib/lib*.so \
		/lib/libvcl_ldpreload.so \
		/lib/libvppapiclient.so \
		/lib/libvppcom.so \
		/lib/libvlib.so \
		/lib/libsvm.so \
		/lib/libsvmdb.so \
		/lib/libvatplugin.so \
		/lib/libvlibmemory.so \
		/lib/libvapiclient.so \
		/lib/libvnet.so \
		/lib/libvppinfra.so \
		/lib/libcperf.so \
		/lib/libvlibmemoryclient.so "
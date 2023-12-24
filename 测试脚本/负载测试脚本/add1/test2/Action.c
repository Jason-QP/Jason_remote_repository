Action()
{

	web_add_cookie("PHPSESSID=1cc80924ccfa386761566986283992a1; DOMAIN=192.168.129.196");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("index.html", 
		"URL=http://192.168.129.196/home/login/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t409.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(10);

	web_submit_data("login_submit", 
		"Action=http://192.168.129.196/home/login/login_submit", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/login/index.html", 
		"Snapshot=t410.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=lixiaobin", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=captcha", "Value=33", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("192.168.129.196", 
		"URL=http://192.168.129.196/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.129.196/home/login/index.html", 
		"Snapshot=t411.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("get_note_list", 
		"URL=http://192.168.129.196/home/api/get_note_list?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t412.inf", 
		"Mode=HTML", 
		LAST);

	web_url("get_article_list", 
		"URL=http://192.168.129.196/home/api/get_article_list?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t413.inf", 
		"Mode=HTML", 
		LAST);

	web_url("get_view_data", 
		"URL=http://192.168.129.196/home/api/get_view_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t414.inf", 
		"Mode=HTML", 
		LAST);

	web_url("get_view_log", 
		"URL=http://192.168.129.196/home/api/get_view_log", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t415.inf", 
		"Mode=HTML", 
		LAST);

	web_url("log_list", 
		"URL=http://192.168.129.196/home/api/log_list?page=1&limit=20", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t416.inf", 
		"Mode=HTML", 
		LAST);

	web_url("get_article_list_2", 
		"URL=http://192.168.129.196/home/api/get_article_list?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t417.inf", 
		"Mode=HTML", 
		LAST);

	web_url("get_view_data_2", 
		"URL=http://192.168.129.196/home/api/get_view_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/index/main.html", 
		"Snapshot=t418.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_revert_auto_header("X-Requested-With");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=120", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t419.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"kbgigmcnifmaklccibmlepmahpfdhjch,nhdogjmejiglipccpnnnanhbledajbpd,nmmhkkegccagdldgiimedpiccmgmieda");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-120.0.6099.129");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:p4M8zla1dQn0uXNjFESRzZEorgtGCyc3Ax7MqxMaqBY&cup2hreq=51c083df509b0fc7281010b305a4ffba95e029afbb9dad8e655d4f2af51457d3", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t420.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"kbgigmcnifmaklccibmlepmahpfdhjch\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5798,\"installedby\":\"internal\",\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.73e69b89448134fc3f1785450b7cfa6a323dfe791e5c0f97a150279d1ba589aa\"}]},\"ping\":{\"ping_freshness\":\"{95d3b77b-beb2-493b-b518-365be12471d5}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"0.2.9\"},{\"appid\""
		":\"nhdogjmejiglipccpnnnanhbledajbpd\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5798,\"installedby\":\"internal\",\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.ae69ebb7a546c360f81fecb4b75a420df107d609ea746a70864f4c2e585c1de2\"}]},\"ping\":{\"ping_freshness\":\"{a0cb7ec6-8ae3-47b7-91c5-a2cc8d15fb04}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"6.5.1\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5798,\"installedby\":\""
		"other\",\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.81e3a4d43a73699e1b7781723f56b8717175c536685c5450122b30789464ad82\"}]},\"ping\":{\"ping_freshness\":\"{f515c6af-f2b3-4c40-86fc-7ec6defa4e3a}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{"
		"\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"120.0.6099.129\",\"protocol\":\"3.1\",\"requestid\":\"{11d2951b-827f-4c62-b5ac-141c48c04fef}\",\"sessionid\":\"{0213e44a-3139-4acd-bebb-9b8ed8a556f1}\",\"updaterversion\":\"120.0.6099.129\"}}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("flow_type", 
		"URL=http://192.168.129.196/home/cate/flow_type", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.129.196/", 
		"Snapshot=t421.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("gougutab={\"tab_id\":\"32\",\"tab_array\":[{\"id\":\"32\",\"url\":\"/home/cate/flow_type\",\"title\":\"审批类型\"}]}; DOMAIN=192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("flow_type_2", 
		"URL=http://192.168.129.196/home/cate/flow_type?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t422.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("flow_type_add", 
		"URL=http://192.168.129.196/home/cate/flow_type_add", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t423.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("get_department_select", 
		"URL=http://192.168.129.196/api/index/get_department_select?keyword=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t424.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://192.168.129.196");

	lr_think_time(5);

/* Added by Async CodeGen.
ID=Poll_0
ScanType = Recording

The following URLs are considered part of this conversation:
	http://192.168.129.196/home/index/index

TODO - The following callbacks have been added to AsyncCallbacks.c.
Add your code to the callback implementations as necessary.
	Poll_0_RequestCB
	Poll_0_ResponseCB
 */
	web_reg_async_attributes("ID=Poll_0", 
		"Pattern=Poll", 
		"URL=http://192.168.129.196/home/index/index", 
		"PollIntervalMs=9900", 
		"RequestCB=Poll_0_RequestCB", 
		"ResponseCB=Poll_0_ResponseCB", 
		LAST);

	web_custom_request("index", 
		"URL=http://192.168.129.196/home/index/index", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/", 
		"Snapshot=t425.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_submit_data("flow_type_add_2", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t429.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=type", "Value=1", ENDITEM, 
		"Name=title", "Value=test", ENDITEM, 
		"Name=department_ids", "Value=", ENDITEM, 
		"Name=name", "Value=test", ENDITEM, 
		"Name=icon", "Value=icon-jichupeizhi", ENDITEM, 
		"Name=id", "Value=0", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"ofWwWk5bhyidegiZijoia7ntsqD3I8+PQsWI068O/rc=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"2B74B64E9B17599B91015A8D1EB147B7FFE558A8");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAE=");

	web_url("geturl.php", 
		"URL=http://config.pinyin.sogou.com/api/toolbox/geturl.php?h=CCC53520B843C480D6E5E83629CE8383&v=9.6.0.3568&r=0000_11_5c22aa18aacd73dbeb4ce82881547dd31", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t431.inf", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,oimompecagnajdejgnnjijobebaeigek,obedbbhbpmojnkanicioggnmelmoomoc,gcmjkmgdlgnkkcocmoeiminaijmmjnii,kiabhabjdbkjdpjbpigfodbdjmbglcoo,lmelglejhemejginpboagddgdfbepgmp,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,hfnkpimlhhgieaddgfemjhofmfblmnib,laoigpblnllgcgjnjnllmfolckpjlhki,ehgidpndbllacpjalkiimkbadgjfnnmc,efniojlnjndmcbiieegkicadnoecjjef,jflookgnkcckhobaglndicnbbgbonegd,"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jflhchccmppkfebkiaminageehmchikm,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe,niikhdgajlphfehepabhhblakbdgeefj");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-120.0.6099.129");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:tyO8g3HPQnDy5HqefINxc_h4slULESO7mORPQ2ayBvc&cup2hreq=a867f0ef9a506af7dcf98f12fe671663610beb3c767d5b739a69b9c646589279", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t432.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{aeb5f217-2984-4518-b4d1-3b267c5d3f5c}\",\"rd\":6200},\"updatecheck\":{},\"version\":\""
		"1.3.36.141\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5817,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{1ff6e383-4558-4eca-8599-fdb3dd851efe}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\""
		"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"zh-CN\",\"ping\":{\"ping_freshness\":\"{3fffb28c-d0e5-4894-808d-c79f096c494f}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"accept_locale\":\"ZHCN500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\","
		"\"enabled\":true,\"lang\":\"zh-CN\",\"ping\":{\"ping_freshness\":\"{2acbef10-aa7e-4256-8eec-ef1db5b7991c}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\""
		"{f141dd27-e590-4243-bd1b-40f75c581ff1}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\"ping\":{\"ping_freshness\":\"{0f14561e-9d56-46e4-b992-c270be8b1b2b}\",\"rd\":6200},\"updatecheck\":{},\"version\":\""
		"2023.9.4.1\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.d150a306d4f66bb142f405df4fc9e0f070b6f266e5f180f3bda29b5410c5f8b5\"}]},\"ping\":{\"ping_freshness\":\"{432c2976-04d9-48c7-ac3e-ebdf29577277}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"426\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1"
		":j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{dfb9d93b-2707-4624-8bb7-05d52a702e52}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\""
		"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{ed262a17-9d7a-4c6f-bfa2-9deb72d419d3}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\""
		"{adbf2597-e58d-44f5-84fb-7786758eefb7}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.8e34893ddcba80b5c528309ed27aef7c767f00133add98ce303ab1462f4ddfac\"}]},\"ping\":{\"ping_freshness\":\"{8c69fd4a-508f-473b-a6c9-8dd3fadcb331}\",\"rd\":6200},\"updatecheck\":{},\"version\":\""
		"8439\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"ping\":{\"ping_freshness\":\"{e7179239-3629-4ebc-baf2-5746c386bf64}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"zh-CN\","
		"\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{7fe6eb36-b982-446a-9ddf-4c9014051a68}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\""
		"1.d6ba1124f51bb0d5449d9c3dfb7677f6a8daaebb32b2e9be4c5b9f683d9323af\"}]},\"ping\":{\"ping_freshness\":\"{c4641212-8c16-4d3e-8f87-c3c01f61f983}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"801\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.7725493ed68e793a0033e02d76eb3d72a848b9a519394d0865088d34555b6a26\"}]},\"ping\":{\""
		"ping_freshness\":\"{33b3134d-1a43-49d1-a654-66ab19bede4a}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"3012\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\""
		"{da3acc3b-e3eb-4d66-838d-037814e31a79}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{ed070c88-cb59-4e04-8448-39b2fccaf925}\",\"rd\":6200},\"updatecheck\":{},\"version"
		"\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{4604bde4-c435-4787-879b-c620ca299b2a}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:24vr:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6154,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.68f2a97ebd0c5436160350ac66184e9f1729021a9cbd15243ef2a5bcac1219d7\"}]},\"ping\":{\"ping_freshness\":\"{46c6263a-5173-4ee7-9a01-1375cf1776d8}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.12.15.4\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,"
		"\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{32e1c734-d1f2-4880-8233-c027b924264a}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x/251f/251l:\",\"cohorthint\":\"General release\",\"cohortname\":\"Control\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\""
		"1.d0d9621c5361c9598566d6096509d86e75eaa0b19bd7c4aa8ecf3f146fa66147\"}]},\"ping\":{\"ping_freshness\":\"{7d3fa06a-3236-411f-84fe-91a8b3d19594}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.12.13.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6127,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.a88f57a307b604c88507143c96d383ed913fa98543928fd172483d3f00c0c44f\"}]},\""
		"ping\":{\"ping_freshness\":\"{3a75cf77-e45e-4d58-a13d-7b59deddab53}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.12.18.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"120.0.6099.129\",\"protocol\":\"3.1\","
		"\"requestid\":\"{fb7411d2-6a0d-4001-95ea-bb020d7fbb0f}\",\"sessionid\":\"{f0851a56-b4fb-4db1-95aa-bb952a558c4b}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.352\"},\"updaterversion\":\"120.0.6099.129\"}}", 
		LAST);

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Mode");

	web_revert_auto_header("Sec-Fetch-Site");

	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("flow_type_add_3", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t433.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=type", "Value=1", ENDITEM, 
		"Name=title", "Value=test3", ENDITEM, 
		"Name=department_ids", "Value=", ENDITEM, 
		"Name=name", "Value=test", ENDITEM, 
		"Name=icon", "Value=icon-jichupeizhi", ENDITEM, 
		"Name=id", "Value=0", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"bEqhGxK2CCrycM/Sz3Jl3+HlMcq4a0/wQ6WX1KOSFTo=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"B7008E592D4BFBAFC3A7F9C4DBF6D07BF46D4413");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");


	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_custom_request("index_5",
		"URL=http://192.168.129.196/home/index/index",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.129.196/",
		"Snapshot=t435.inf",
		"Mode=HTML",
		"EncType=",
		LAST); 
	*/

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"ykUI+4EpP49KPpxOauem4Bbvm1ZDN5O1Bms8yXJNkMU=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"CF4CC0C2F8B5685DBC3FAB4ABA0A769A0BB9C4F5");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");


	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("flow_type_add_4", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t437.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=type", "Value=1", ENDITEM, 
		"Name=title", "Value=test4", ENDITEM, 
		"Name=department_ids", "Value=", ENDITEM, 
		"Name=name", "Value=test", ENDITEM, 
		"Name=icon", "Value=icon-jichupeizhi", ENDITEM, 
		"Name=id", "Value=0", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"/oXoAroQgIrryHY4N8OAVGHc+rqEaXc7LQQnC3sKpdM=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"984C7F8380740E9D45EC2E83EF198746ECFFA6CA");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");



	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("flow_type_add_5", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t439.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=type", "Value=1", ENDITEM, 
		"Name=title", "Value=test5", ENDITEM, 
		"Name=department_ids", "Value=", ENDITEM, 
		"Name=name", "Value=test", ENDITEM, 
		"Name=icon", "Value=icon-jichupeizhi", ENDITEM, 
		"Name=id", "Value=0", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"yjEeImyWF6G0bw+DrCMjxAE1SlPFBKUWPlJWUs/WX4A=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"80AB5143340D1318C76E5ADDF74973179EF6F475");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");

	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_custom_request("index_6",
		"URL=http://192.168.129.196/home/index/index",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.129.196/",
		"Snapshot=t441.inf",
		"Mode=HTML",
		"EncType=",
		LAST); 
	*/

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Site", 
		"none");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"LWCbCHKDczXrpMGxQqo+gj8T6XurIg6yacEvig9RnLE=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"E489A262FA3190D32A5211313DE37CA049FEA6D4");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");



	web_add_auto_header("Origin", 
		"http://192.168.129.196");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_custom_request("index_7",
		"URL=http://192.168.129.196/home/index/index",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.129.196/",
		"Snapshot=t443.inf",
		"Mode=HTML",
		"EncType=",
		LAST); 
	*/

	lr_think_time(12);

	web_submit_data("flow_type_add_6", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t444.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=type", "Value=1", ENDITEM, 
		"Name=title", "Value=test3", ENDITEM, 
		"Name=department_ids", "Value=", ENDITEM, 
		"Name=name", "Value=This is a test", ENDITEM, 
		"Name=icon", "Value=icon-jichupeizhi", ENDITEM, 
		"Name=id", "Value=0", ENDITEM, 
		LAST);

	lr_think_time(4);

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_custom_request("index_8",
		"URL=http://192.168.129.196/home/index/index",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.129.196/",
		"Snapshot=t445.inf",
		"Mode=HTML",
		"EncType=",
		LAST); 
	*/

	web_submit_data("flow_type_add_7", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t446.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=type", "Value=1", ENDITEM, 
		"Name=title", "Value=test3", ENDITEM, 
		"Name=department_ids", "Value=", ENDITEM, 
		"Name=name", "Value=this is a test", ENDITEM, 
		"Name=icon", "Value=icon-jichupeizhi", ENDITEM, 
		"Name=id", "Value=0", ENDITEM, 
		LAST);

	lr_think_time(7);

	web_submit_data("flow_type_add_8", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add", 
		"Snapshot=t447.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=type", "Value=1", ENDITEM, 
		"Name=title", "Value=test3", ENDITEM, 
		"Name=department_ids", "Value=", ENDITEM, 
		"Name=name", "Value=thisisatest", ENDITEM, 
		"Name=icon", "Value=icon-jichupeizhi", ENDITEM, 
		"Name=id", "Value=0", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_url("flow_type_3", 
		"URL=http://192.168.129.196/home/cate/flow_type?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t448.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://192.168.129.196");

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_custom_request("index_9",
		"URL=http://192.168.129.196/home/index/index",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.129.196/",
		"Snapshot=t449.inf",
		"Mode=HTML",
		"EncType=",
		LAST); 
	*/

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(6);

	web_url("flow_type_add_9", 
		"URL=http://192.168.129.196/home/cate/flow_type_add?id=29", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t450.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_url("get_department_select_2", 
		"URL=http://192.168.129.196/api/index/get_department_select?keyword=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add?id=29", 
		"Snapshot=t451.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://192.168.129.196");

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_custom_request("index_10",
		"URL=http://192.168.129.196/home/index/index",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.129.196/",
		"Snapshot=t452.inf",
		"Mode=HTML",
		"EncType=",
		LAST); 
	*/

	lr_think_time(4);

	web_submit_data("flow_type_add_10", 
		"Action=http://192.168.129.196/home/cate/flow_type_add", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type_add?id=29", 
		"Snapshot=t453.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=type", "Value=1", ENDITEM, 
		"Name=title", "Value=testt3", ENDITEM, 
		"Name=department_ids", "Value=", ENDITEM, 
		"Name=name", "Value=thisisatest", ENDITEM, 
		"Name=icon", "Value=icon-jichupeizhi", ENDITEM, 
		"Name=id", "Value=29", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_url("flow_type_4", 
		"URL=http://192.168.129.196/home/cate/flow_type?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t454.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"http://192.168.129.196");

	lr_think_time(4);

	web_submit_data("flow_type_check", 
		"Action=http://192.168.129.196/home/cate/flow_type_check", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t455.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=29", ENDITEM, 
		"Name=status", "Value=0", ENDITEM, 
		LAST);

	web_url("flow_type_5", 
		"URL=http://192.168.129.196/home/cate/flow_type?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t456.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"http://192.168.129.196");

/* Removed by Async CodeGen.
ID = Poll_0
 */
	/*
 web_custom_request("index_11",
		"URL=http://192.168.129.196/home/index/index",
		"Method=POST",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://192.168.129.196/",
		"Snapshot=t457.inf",
		"Mode=HTML",
		"EncType=",
		LAST); 
	*/

/* Added by Async CodeGen.
ID = Poll_0
 */
	web_stop_async("ID=Poll_0", 
		LAST);

	web_submit_data("flow_type_check_2", 
		"Action=http://192.168.129.196/home/cate/flow_type_check", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t458.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=id", "Value=29", ENDITEM, 
		"Name=status", "Value=1", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_url("flow_type_6", 
		"URL=http://192.168.129.196/home/cate/flow_type?page=1&limit=10", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/cate/flow_type", 
		"Snapshot=t459.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

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
		"Snapshot=t44.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"kbgigmcnifmaklccibmlepmahpfdhjch,nhdogjmejiglipccpnnnanhbledajbpd,nmmhkkegccagdldgiimedpiccmgmieda");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chromecrx-120.0.6099.129");

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:z0ABhXR-IGLhj7TIeQ49HBXEV4pIpnyFXtKN7X4xFxk&cup2hreq=0614ac4522c691f792910822e891eb5d6fbdff5911499ca1102d338432268b91", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t45.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chromecrx\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"kbgigmcnifmaklccibmlepmahpfdhjch\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5798,\"installedby\":\"internal\",\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.73e69b89448134fc3f1785450b7cfa6a323dfe791e5c0f97a150279d1ba589aa\"}]},\"ping\":{\"ping_freshness\":\"{ab160d97-297f-4e5c-a770-2f43b29fcc03}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"0.2.9\"},{\"appid\""
		":\"nhdogjmejiglipccpnnnanhbledajbpd\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5798,\"installedby\":\"internal\",\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.ae69ebb7a546c360f81fecb4b75a420df107d609ea746a70864f4c2e585c1de2\"}]},\"ping\":{\"ping_freshness\":\"{2e16b5f0-24a4-4bf3-963f-5d06b31f2fc1}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"6.5.1\"},{\"appid\":\"nmmhkkegccagdldgiimedpiccmgmieda\",\"cohort\":\"1::\",\"enabled\":true,\"installdate\":5798,\"installedby\":\""
		"other\",\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.81e3a4d43a73699e1b7781723f56b8717175c536685c5450122b30789464ad82\"}]},\"ping\":{\"ping_freshness\":\"{834a94ca-6c57-46e2-9f65-0f0ec5b35c7e}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.0.6\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{"
		"\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"120.0.6099.129\",\"protocol\":\"3.1\",\"requestid\":\"{4cd7c59b-2d3f-4eea-9798-9c6e7edd4c41}\",\"sessionid\":\"{61b1d5d7-7804-4ca8-b376-8e1fd81050b5}\",\"updaterversion\":\"120.0.6099.129\"}}", 
		LAST);

	lr_think_time(22);

	web_url("group.png", 
		"URL=https://pub.idqqimg.com/wpa/images/group.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/", 
		"Snapshot=t46.inf", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"UbYwDsCA28PG9B3ooh5bcXrOkSJz6y8xKwMcc/UCXBc=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"A3BF8903439B302C80EB29AFF239AD0B3548CC39");

	web_add_header("X-Chrome-UMA-ReportingInfo", 
		"CAE=");

	lr_think_time(25);

	web_custom_request("v2", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t47.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"Body=\tvÑß¶FÍø‡Ç\b€ƒá¨120.0.6099.129-64≥˛˚\"zh-CN*\n\nWindows NT\n10.0.190452ü\nx86_64⁄]ÄÄ»ÄÓˇ\"80WA(0¿8ÑBê\bÜÅõ≤\r21.20.16.46272Google Inc. (Intel):bANGLE (Intel, Intel(R) HD Graphics 630 (0x0000591B) Direct3D11 vs_5_0 ps_5_0, D3D11-21.20.16.4627)MqGÏBU%‰ÏBe", 
		LAST);

	web_add_header("X-Goog-Update-AppId", 
		"ihnlcenocehgdaegdmhbidjhnhdchfmm,neifaoindggfcjicffkgpmnlppeffabd,oimompecagnajdejgnnjijobebaeigek,gcmjkmgdlgnkkcocmoeiminaijmmjnii,obedbbhbpmojnkanicioggnmelmoomoc,lmelglejhemejginpboagddgdfbepgmp,kiabhabjdbkjdpjbpigfodbdjmbglcoo,giekcmmlnklenlaomppkphknjmnnpneh,khaoiebndkojlmppeemjhbpbandiljpe,llkgjffcdpffmhiakmfcdcblohccpfmo,hfnkpimlhhgieaddgfemjhofmfblmnib,laoigpblnllgcgjnjnllmfolckpjlhki,ehgidpndbllacpjalkiimkbadgjfnnmc,jflookgnkcckhobaglndicnbbgbonegd,efniojlnjndmcbiieegkicadnoecjjef,"
		"ggkkehgbnfjpeggfpleeakpidbkibbmn,jamhcnnkihinmdlkakkaopbjbbcngflc,ojhpjlocmbogdgmfpkhlaaeamibhnphh,jflhchccmppkfebkiaminageehmchikm,eeigpngbgcognadeebkilcpcaedhellh,gonpemdgkjcecdgbnaabipppbmgfggbe,niikhdgajlphfehepabhhblakbdgeefj");

	web_add_header("X-Goog-Update-Interactivity", 
		"bg");

	web_add_header("X-Goog-Update-Updater", 
		"chrome-120.0.6099.129");

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=13:zJ7pqy4GJlrJrg5-XoOMjQ0SqKnE715u_-g79SsSWrM&cup2hreq=bd6327e31e294b327ec54e54cb3c63b30955df7ae13bf295079e814416e5e71b", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3,puff\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"cohorthint\":\"Win (Including up-to-date)\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.aeedb246d19256a956fedaa89fb62423ae5bd8855a2a1f3189161cf045645a19\"}]},\"ping\":{\"ping_freshness\":\"{2f8104a6-1710-4b43-8a8e-06cb138e3a66}\",\"rd\":6200},\"updatecheck\":{},\"version\":\""
		"1.3.36.141\"},{\"appid\":\"neifaoindggfcjicffkgpmnlppeffabd\",\"brand\":\"GGLS\",\"cohort\":\"1:1299:\",\"cohorthint\":\"Windows (102+, canary/dev/beta/stable)\",\"cohortname\":\"Auto\",\"enabled\":true,\"installdate\":5817,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c900ba9a2d8318263fd43782ee6fd5fb50bad78bf0eb2c972b5922c458af45ed\"}]},\"ping\":{\"ping_freshness\":\"{0595c3a7-da67-4456-b9d8-52c13b360975}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.2738.0\"},{\"appid\":\""
		"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"GGLS\",\"cohort\":\"1:1zdx:\",\"cohorthint\":\"4.10.2557.0 for Chrome 95+\",\"cohortname\":\"Chrome 106+\",\"enabled\":true,\"lang\":\"zh-CN\",\"ping\":{\"ping_freshness\":\"{3cdc0ffe-59e4-4f55-8886-210ba7019142}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"4.10.2710.0\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"GGLS\",\"cohort\":\"1:bm1:\",\"cohorthint\":\"M54AndUp\",\"cohortname\":\"Stable\",\"enabled\":true,\"lang\":\"zh-CN\","
		"\"packages\":{\"package\":[{\"fp\":\"1.cd1978742a4afdbaaa15bf712d5c90bef4144caa99024df98f6a9ad58043ae85\"}]},\"ping\":{\"ping_freshness\":\"{f879e1be-45b0-4112-b532-cbf0c7b79a09}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"9.49.1\"},{\"accept_locale\":\"ZHCN500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"GGLS\",\"cohort\":\"1:s6f:20ol@0.5\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"ping\":{\"ping_freshness\":\""
		"{99f7d5a0-84bf-44ef-81c5-615ee127e0f6}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"GGLS\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.d150a306d4f66bb142f405df4fc9e0f070b6f266e5f180f3bda29b5410c5f8b5\"}]},\"ping\":{\"ping_freshness\":\"{9dcdd3fa-bf10-4943-9fb1-42ef0d29f4cd}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"426"
		"\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"GGLS\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.d777e561d401292893abda887af337f2d2e9755e47dd4a42402130484d09429b\"}]},\"ping\":{\"ping_freshness\":\"{1853f2f2-eaf8-454d-b952-cf94da277505}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.9.4.1\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"GGLS\",\"cohort\":\"1"
		":j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.fd515ec0dc30d25a09641b8b83729234bc50f4511e35ce17d24fd996252eaace\"}]},\"ping\":{\"ping_freshness\":\"{c6bd1c81-3e0b-4522-b469-a74dd896e0b7}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"GGLS\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\""
		"packages\":{\"package\":[{\"fp\":\"1.f4f1eb04881095d1cc8f2e1799a8144c10476dc1088a03ecdb4418644040a554\"}]},\"ping\":{\"ping_freshness\":\"{6f47bb5a-7cf8-45fe-b985-ce054311b301}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"63\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"GGLS\",\"cohort\":\"1::\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.3e4f959036fef1cae2b1f426864a23f11caae1c96a2816523f2daf4213c3cc73\"}]},\"ping\":{\"ping_freshness\":\""
		"{f2f6fe45-b1e4-4f69-8245-54a3c552fbfa}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.0.14\"},{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"GGLS\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.8e34893ddcba80b5c528309ed27aef7c767f00133add98ce303ab1462f4ddfac\"}]},\"ping\":{\"ping_freshness\":\"{343950eb-c776-4ee3-916e-99021dd218ab}\",\"rd\":6200},\"updatecheck\":{},\"version\":\""
		"8439\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"GGLS\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"ping\":{\"ping_freshness\":\"{8fb633b2-9312-47f2-84af-ff34147cdace}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"1.0.7.1652906823\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"GGLS\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"lang\":\"zh-CN\","
		"\"packages\":{\"package\":[{\"fp\":\"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{678e2656-8831-4138-8c91-bb6267b811c0}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"GGLS\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\""
		"1.7725493ed68e793a0033e02d76eb3d72a848b9a519394d0865088d34555b6a26\"}]},\"ping\":{\"ping_freshness\":\"{e6bf3a7f-3a75-49b4-b046-8b722af54c68}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"3012\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"GGLS\",\"cohort\":\"1:18ql:\",\"cohorthint\":\"Auto Stage3\",\"cohortname\":\"Auto Stage3\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.d6ba1124f51bb0d5449d9c3dfb7677f6a8daaebb32b2e9be4c5b9f683d9323af\"}]},\"ping"
		"\":{\"ping_freshness\":\"{f08006b8-d217-458e-b86b-8a9c8e655f65}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"801\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"GGLS\",\"cohort\":\"1:ut9/1a0f:23ml@0.1\",\"cohorthint\":\"108-and-above-all-users\",\"cohortname\":\"M108 and Above\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c45cd56a0a8da0883c8f9757b31891d6c628f38cb80724015ffdf33b419a73f3\"}]},\"ping\":{\"ping_freshness\":\""
		"{35c222af-f0e8-4a77-a49d-273ea86e901b}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.11.27.1202\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"GGLS\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c52c62a7c50daf7d3f73ec16977cd4b0ea401710807d5dbe3850941dd1b73a70\"}]},\"ping\":{\"ping_freshness\":\"{5817be9d-ea79-4333-b2d2-e53791c6525c}\",\"rd\":6200},\"updatecheck\":{},\"version"
		"\":\"120.0.6050.0\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\"brand\":\"GGLS\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"All users\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.545666a4efd056351597bb386aea1368105ededc976ed5650d8682daab9f37ff\"}]},\"ping\":{\"ping_freshness\":\"{f8aa8148-c383-4391-a2fd-467e4fbc854a}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"3\"},{\"appid\":\"jflhchccmppkfebkiaminageehmchikm\",\"brand\":\"GGLS\",\""
		"cohort\":\"1:24vr:\",\"cohortname\":\"Stable\",\"enabled\":true,\"installdate\":6154,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.68f2a97ebd0c5436160350ac66184e9f1729021a9cbd15243ef2a5bcac1219d7\"}]},\"ping\":{\"ping_freshness\":\"{9c2c1c1d-89eb-4880-9794-38f513f1d5eb}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.12.15.4\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\"GGLS\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,"
		"\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{a621ea44-97d0-4e7f-80aa-0ddc6192b30f}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"GGLS\",\"cohort\":\"1:z1x/251f/251l:\",\"cohorthint\":\"General release\",\"cohortname\":\"Control\",\"enabled\":true,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\""
		"1.d0d9621c5361c9598566d6096509d86e75eaa0b19bd7c4aa8ecf3f146fa66147\"}]},\"ping\":{\"ping_freshness\":\"{5794e78d-320f-4e3f-a8c3-cab06a0be506}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.12.13.0\"},{\"appid\":\"niikhdgajlphfehepabhhblakbdgeefj\",\"brand\":\"GGLS\",\"cohort\":\"1:1uh3:\",\"cohortname\":\"Auto Main Cohort.\",\"enabled\":true,\"installdate\":6127,\"lang\":\"zh-CN\",\"packages\":{\"package\":[{\"fp\":\"1.a88f57a307b604c88507143c96d383ed913fa98543928fd172483d3f00c0c44f\"}]},\""
		"ping\":{\"ping_freshness\":\"{32aebe8a-292b-43be-866e-3fac4bec0ac4}\",\"rd\":6200},\"updatecheck\":{},\"version\":\"2023.12.18.0\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":12,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.19045.3324\"},\"prodversion\":\"120.0.6099.129\",\"protocol\":\"3.1\","
		"\"requestid\":\"{36e4abfa-79a0-4514-b02d-e0bd99ce8f95}\",\"sessionid\":\"{cf150972-4459-4a9e-a2b6-6375938801e6}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.352\"},\"updaterversion\":\"120.0.6099.129\"}}", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"BC32890840811F553BAAB77535C78F96198C6244");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"mEaYsBsd+JVAJ88klQkVyMZTcdhT5BRpjpFWeqpxSTs=");

	web_add_auto_header("X-Chrome-UMA-ReportingInfo", 
		"CAEQyAEYACAB");

	web_custom_request("v2_2", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t49.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"Body=\tvÑß¶FÍø·’\b€ƒá¨120.0.6099.129-64≥˛˚\"zh-CN*\n\nWindows NT\n10.0.190452ü\nx86_64⁄]ÄÄ»ÄÓˇ\"80WA(0¿8ÑBê\bÜÅõ≤\r21.20.16.46272Google Inc. (Intel):bANGLE (Intel, Intel(R) HD Graphics 630 (0x0000591B) Direct3D11 vs_5_0 ps_5_0, D3D11-21.20.16.4627)MqGÏBU%‰ÏBe", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"F2D936E0F0ACB5A33EE952845C0B42C250F3B650");

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"UxSd4gUW5FMi1dh7Cm2L9q5Qt+DRUxvfPAhsZxKLAtw=");

	lr_think_time(4);

	web_custom_request("v2_3", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t50.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"Body=\tvÑß¶FÍø·á\b€ƒá¨120.0.6099.129-64≥˛˚\"zh-CN*\n\nWindows NT\n10.0.190452ü\nx86_64⁄]ÄÄ»ÄÓˇ\"80WA(0¿8ÑBê\bÜÅõ≤\r21.20.16.46272Google Inc. (Intel):bANGLE (Intel, Intel(R) HD Graphics 630 (0x0000591B) Direct3D11 vs_5_0 ps_5_0, D3D11-21.20.16.4627)MqGÏBU%‰ÏBe", 
		LAST);

	web_add_header("X-Chrome-UMA-Log-HMAC-SHA256", 
		"+PgoVeF18/kR0BDzFgvMEGFmEM7jhbhaoJmM/M3r1GM=");

	web_add_header("X-Chrome-UMA-Log-SHA1", 
		"0AD0B7DE0BA3C0C7BA941C1C8D0BD7CD407841E9");

	web_custom_request("v2_4", 
		"URL=https://clientservices.googleapis.com/uma/v2", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t51.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/vnd.chrome.uma", 
		"Body=\tvÑß¶FÍø‡ã\b€ƒá¨120.0.6099.129-64≥˛˚\"zh-CN*\n\nWindows NT\n10.0.190452ü\nx86_64⁄]ÄÄ»ÄÓˇ\"80WA(0¿8ÑBê\bÜÅõ≤\r21.20.16.46272Google Inc. (Intel):bANGLE (Intel, Intel(R) HD Graphics 630 (0x0000591B) Direct3D11 vs_5_0 ps_5_0, D3D11-21.20.16.4627)MqGÏBU%‰ÏBe", 
		LAST);

	return 0;
}
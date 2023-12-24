Action()
{

	web_add_cookie("PHPSESSID=1cc80924ccfa386761566986283992a1; DOMAIN=192.168.129.196");

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7");

	web_add_auto_header("Accept-Encoding", 
		"gzip, deflate");

	web_add_auto_header("Accept-Language", 
		"zh-CN,zh;q=0.9");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("User-Agent", 
		"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36");

	web_url("index.html", 
		"URL=http://192.168.129.196/home/login/index.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t343.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("1_transaction_login");

	web_add_auto_header("Accept", 
		"*/*");

	web_add_header("Expect", 
		"100-continue");

	web_add_header("Origin", 
		"http://192.168.129.196");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	lr_think_time(18);

	web_submit_data("login_submit", 
		"Action=http://192.168.129.196/home/login/login_submit", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://192.168.129.196/home/login/index.html", 
		"Snapshot=t344.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=username", "Value=lixiaobin", ENDITEM, 
		"Name=password", "Value=123456", ENDITEM, 
		"Name=captcha", "Value=17", ENDITEM, 
		LAST);

	web_add_auto_header("Accept", 
		"text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	lr_think_time(9);

	web_url("192.168.129.196", 
		"URL=http://192.168.129.196/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://192.168.129.196/home/login/index.html", 
		"Snapshot=t345.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("1_transaction_login",LR_AUTO);

	return 0;
}
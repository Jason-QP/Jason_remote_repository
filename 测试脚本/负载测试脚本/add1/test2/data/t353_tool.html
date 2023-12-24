layui.define([], function (exports) {
	var MOD_NAME = 'tool';
	var tool = {
		loading: false,
		//右侧iframe的方式打开页面，参考勾股CMS、勾股OA
		side: function (url, width) {
			let that = this;
			if (that.loading == true) {
				return false;
			}
			that.loading = true;
			var countWidth = window.innerWidth-(window.innerWidth*0.5)+456;
			if(window.innerWidth<=1000){
				countWidth = 750;
			}
			if (width && width > 0) {
				sideWidth = width + 'px';
			}
			else{
				sideWidth = countWidth + 'px';
			}
			layer.open({
				type: 2,
				title: '',
				offset: ['0', '100%'],
				skin: 'layui-anim layui-anim-rl layui-layer-admin-right',
				closeBtn: 0,
				content: url,
				area: [sideWidth, '100%'],
				success: function (obj, index) {
						var btn = '<div data-index="'+index+'" class="express-close" title="关闭">关闭</div>';
						obj.append(btn);
						$('body').addClass('right-open');
						that.loading = false;
						obj.on('click','.express-close', function () {
							let op_width = obj.outerWidth();
							obj.animate({ left: '+=' + op_width + 'px' }, 200, 'linear', function () {
								$('body').removeClass('right-open');
								layer.close(index);
								if (layui.pageTable) {
									layui.pageTable.resize();
								}
							})
						})
						$(window).resize(function () {
							var resizeWidth = window.innerWidth-(window.innerWidth*0.5)+456;
							if(window.innerWidth<=1000){
								resizeWidth = 750;
							}
							obj.width(resizeWidth);
						})
					}
			})
		},
		//右侧ajax请求的方式打开页面参考勾股DEV
		open: function (url, width) {
			let that = this;
			if (that.loading == true) {
				return false;
			}
			that.loading = true;
			var countWidth = window.innerWidth-(window.innerWidth*0.5)+456;
			if(window.innerWidth<=1000){
				countWidth = 750;
			}
			if (width && width > 0) {
				sideWidth = width + 'px';
			}
			else{
				sideWidth = countWidth + 'px';
			}
			$.ajax({
				url: url,
				type: "GET",
				timeout: 10000,
				success: function (res) {
					if (res['code'] && res['code'] > 0) {
						layer.msg(res.msg);
						return false;
					}
					var express = '<section id="expressLayer" class="express-box" style="width:' + sideWidth + '"><article id="articleLayer">' + res + '</article><div id="expressClose" class="express-close" title="关闭">关闭</div></section><div id="expressMask" class="express-mask"></div>';

					$('body').append(express).addClass('right-open');
					$('#expressMask').fadeIn(200);
					$('#expressLayer').animate({ 'right': 0 }, 200, 'linear', function () {
						if (typeof (openInit) == "function") {
							openInit();
						}						
					});					
					that.loading = false;
					
					//关闭
					$('body').on('click','.express-close', function () {
						$('#expressMask').fadeOut(100);
						$('body').removeClass('right-open');
						let op_width = $('#expressLayer').outerWidth();
						$('#expressLayer').animate({ left: '+=' + op_width + 'px' }, 200, 'linear', function () {
							$('#expressLayer').remove();
							$('#expressMask').remove();
							if (layui.pageTable) {
								layui.pageTable.resize();
							}
						})
					})
					$(window).resize(function () {
						var resizeWidth = window.innerWidth-(window.innerWidth*0.5)+456;
						if(window.innerWidth<=1000){
							resizeWidth = 750;
						}
						$('#expressLayer').width(resizeWidth);
					})					
					
				}
				, error: function (xhr, textstatus, thrown) {
					console.log('错误');
				},
				complete: function () {
					that.loading = false;
				}
			});
		},
		load: function (url) {
			let that = this;
			if (that.loading == true) {
				return false;
			}
			that.loading = true;
			$.ajax({
				url: url,
				type: "GET",
				timeout: 10000,
				success: function (res) {
					if (res['code'] && res['code'] > 0) {
						layer.msg(res.msg);
						return false;
					}
					$('#articleLayer').html(res);
					openInit();
				}
				, error: function (xhr, textstatus, thrown) {
					console.log('错误');
				},
				complete: function () {
					that.loading = false;
				}
			});
		},
		page: function (url) {
			let that = this;
			if (that.loading == true) {
				return false;
			}
			that.loading = true;
			$.ajax({
				url: url,
				type: "GET",
				timeout: 10000,
				success: function (res) {
					if (res['code'] && res['code'] > 0) {
						layer.msg(res.msg);
						return false;
					}
					$('#pageBox').html(res);
					pageInit();
				}
				, error: function (xhr, textstatus, thrown) {
					console.log('错误');
				},
				complete: function () {
					that.loading = false;
				}
			});
		},
		close: function (delay) {
			//延迟关闭，一般是在编辑完页面数据后需要自动关闭页面用到
			if(delay && delay>0){
				setTimeout(function () {
					$('.express-close').last().click();
				}, delay);
			}else{
				$('.express-close').last().click();
			}
			if (layui.pageTable) {
				layui.pageTable.reload();
			}
		},
		ajax: function (options, callback) {
			var format = 'json';
			if (options.hasOwnProperty('data')) {
				format = options.data.hasOwnProperty('format') ? options.data.format : 'json';
			}
			callback = callback || options.success;
			callback && delete options.success;
			var optsetting = { timeout: 10000 };
			if (format == 'jsonp') {
				optsetting = { timeout: 10000, dataType: 'jsonp', jsonp: 'callback' }
			}
			var opts = $.extend({}, optsetting, {
				success: function (res) {
					if (callback && typeof callback === 'function') {
						callback(res);
					}
				}
			}, options);
			$.ajax(opts);
		},
		get: function (url, data, callback) {
			this.ajax({
				url: url,
				type: "GET",
				data: data
			}, callback);
		},
		post: function (url, data, callback) {
			this.ajax({
				url: url,
				type: "POST",
				data: data
			}, callback);
		},
		put: function (url, data, callback) {
			this.ajax({
				url: url,
				type: "PUT",
				data: data
			}, callback);
		},
		delete: function (url, data, callback) {
			this.ajax({
				url: url,
				type: "DELETE",
				data: data
			}, callback);
		},
		sideClose(delay){
			if(parent.layui.tool){
				parent.layui.tool.close(delay);
			}
			else{
				console.log('父页面没引用tool模块');
			}		
		},
		tabAdd:function(url,title,id){
			if(parent.layui.admin){
				parent.layui.admin.sonAdd(url,title,id);
			}
			else{
				console.log('父页面没引用admin模块');
			}			
		},
		tabClose:function(){
			if(parent.layui.admin){
				parent.layui.admin.sonClose();
			}
			else{
				console.log('父页面没引用admin模块');
			}
		},
		tabDelete:function(id){
			if(parent.layui.admin){
				parent.layui.admin.tabDelete(id);
			}
			else{
				console.log('父页面没引用admin模块');
			}
		},
		tabChange:function(id){
			if(parent.layui.admin){
				parent.layui.admin.tabChange(id);
			}
			else{
				console.log('父页面没引用admin模块');
			}
		},
		tabRefresh:function(id){
			if(parent.layui.admin){
				parent.layui.admin.refresh(id);
			}
			else{
				console.log('父页面没引用admin模块');
			}			
		}
	};
	
	$('body').on('click', '.tab-a', function () {
        let id = $(this).data('id');
		let url = $(this).data('href');
		let title = $(this).data('title');
		if (url && url !== '') {
			if (typeof(id) == "undefined" || id == '') {
				id = Date.now();
			}
			tool.tabAdd(url,title,id);
		}
		return false;
	});
	
	$('body').on('click', '.side-a', function () {
		let url = $(this).data('href');
		if (url && url !== '') {
			tool.side(url);
		}
		return false;
	});
	$('body').on('click', '.open-a', function () {
		let url = $(this).data('href');
		if (url && url !== '') {
			tool.open(url);
		}
		return false;
	});
	$('body').on('click', '.link-a', function () {
		let url = $(this).data('href');
		if (url && url !== '') {
			window.location.href=url;
		}
		return false;
	});
	exports(MOD_NAME, tool);
});  
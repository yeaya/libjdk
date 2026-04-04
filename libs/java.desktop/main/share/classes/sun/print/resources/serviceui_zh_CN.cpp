#include <sun/print/resources/serviceui_zh_CN.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

void serviceui_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_zh_CN::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Automatic-Feeder"_s,
			u"自动馈送器"_s
		}),
		$$new($ObjectArray, {
			"Cassette"_s,
			u"纸盒"_s
		}),
		$$new($ObjectArray, {
			"Form-Source"_s,
			u"表格来源"_s
		}),
		$$new($ObjectArray, {
			"Large-Format"_s,
			u"大号版式"_s
		}),
		$$new($ObjectArray, {
			"Manual-Envelope"_s,
			u"手动信封"_s
		}),
		$$new($ObjectArray, {
			"Small-Format"_s,
			u"小号版式"_s
		}),
		$$new($ObjectArray, {
			"Tractor-Feeder"_s,
			u"牵引式馈送器"_s
		}),
		$$new($ObjectArray, {
			"a"_s,
			u"工程 A"_s
		}),
		$$new($ObjectArray, {
			"accepting-jobs"_s,
			u"接受作业"_s
		}),
		$$new($ObjectArray, {
			"auto-select"_s,
			u"自动选择"_s
		}),
		$$new($ObjectArray, {
			"b"_s,
			u"工程 B"_s
		}),
		$$new($ObjectArray, {
			"border.chromaticity"_s,
			u"颜色外观"_s
		}),
		$$new($ObjectArray, {
			"border.copies"_s,
			u"份数"_s
		}),
		$$new($ObjectArray, {
			"border.jobattributes"_s,
			u"作业属性"_s
		}),
		$$new($ObjectArray, {
			"border.margins"_s,
			u"边距"_s
		}),
		$$new($ObjectArray, {
			"border.media"_s,
			u"介质"_s
		}),
		$$new($ObjectArray, {
			"border.orientation"_s,
			u"方向"_s
		}),
		$$new($ObjectArray, {
			"border.printrange"_s,
			u"打印区域"_s
		}),
		$$new($ObjectArray, {
			"border.printservice"_s,
			u"打印服务"_s
		}),
		$$new($ObjectArray, {
			"border.quality"_s,
			u"质量"_s
		}),
		$$new($ObjectArray, {
			"border.sides"_s,
			u"边"_s
		}),
		$$new($ObjectArray, {
			"bottom"_s,
			u"下"_s
		}),
		$$new($ObjectArray, {
			"button.cancel"_s,
			u"取消"_s
		}),
		$$new($ObjectArray, {
			"button.ok"_s,
			u"确定"_s
		}),
		$$new($ObjectArray, {
			"button.print"_s,
			u"打印"_s
		}),
		$$new($ObjectArray, {
			"button.properties"_s,
			u"属性(&R)..."_s
		}),
		$$new($ObjectArray, {
			"c"_s,
			u"工程 C"_s
		}),
		$$new($ObjectArray, {
			"checkbox.collate"_s,
			u"逐份打印(&C)"_s
		}),
		$$new($ObjectArray, {
			"checkbox.jobsheets"_s,
			u"标帜页(&B)"_s
		}),
		$$new($ObjectArray, {
			"checkbox.printtofile"_s,
			u"打印到文件(&F)"_s
		}),
		$$new($ObjectArray, {
			"d"_s,
			u"工程 D"_s
		}),
		$$new($ObjectArray, {
			"dialog.noprintermsg"_s,
			u"找不到打印服务。"_s
		}),
		$$new($ObjectArray, {
			"dialog.overwrite"_s,
			u"该文件已经存在。是否要覆盖现有文件?"_s
		}),
		$$new($ObjectArray, {
			"dialog.owtitle"_s,
			u"打印到文件"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtitle"_s,
			u"打印"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtofile"_s,
			u"打印到文件"_s
		}),
		$$new($ObjectArray, {
			"dialog.pstitle"_s,
			u"页面设置"_s
		}),
		$$new($ObjectArray, {
			"dialog.writeerror"_s,
			u"无法写入文件:"_s
		}),
		$$new($ObjectArray, {
			"e"_s,
			u"工程 E"_s
		}),
		$$new($ObjectArray, {
			"envelope"_s,
			u"信封"_s
		}),
		$$new($ObjectArray, {
			"error.destination"_s,
			u"无效的文件名; 请重试"_s
		}),
		$$new($ObjectArray, {
			"error.pagerange"_s,
			u"无效的页面范围; 请重新输入数值 (例如 1-3,5,7-10)"_s
		}),
		$$new($ObjectArray, {
			"executive"_s,
			u"执行程序"_s
		}),
		$$new($ObjectArray, {
			"folio"_s,
			u"对开页"_s
		}),
		$$new($ObjectArray, {
			"invite-envelope"_s,
			u"邀请函信封"_s
		}),
		$$new($ObjectArray, {
			"invoice"_s,
			u"发票"_s
		}),
		$$new($ObjectArray, {
			"iso-2a0"_s,
			"2A0 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-4a0"_s,
			"4A0 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-a0"_s,
			"A0 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-a1"_s,
			"A1 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-a10"_s,
			"A10 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-a2"_s,
			"A2 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-a3"_s,
			"A3 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-a4"_s,
			"A4 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-a5"_s,
			"A5 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-a6"_s,
			"A6 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-a7"_s,
			"A7 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-a8"_s,
			"A8 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-a9"_s,
			"A9 (ISO/DIN & JIS)"_s
		}),
		$$new($ObjectArray, {
			"iso-b0"_s,
			"B0 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-b1"_s,
			"B1 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-b10"_s,
			"B10 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-b2"_s,
			"B2 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-b3"_s,
			"B3 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-b4"_s,
			"B4 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-b5"_s,
			"B5 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-b6"_s,
			"B6 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-b7"_s,
			"B7 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-b8"_s,
			"B8 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-b9"_s,
			"B9 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-c0"_s,
			"C0 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-c1"_s,
			"C1 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-c10"_s,
			"C10 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-c2"_s,
			"C2 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-c3"_s,
			"C3 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-c4"_s,
			"C4 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-c5"_s,
			"C5 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-c6"_s,
			"C6 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-c7"_s,
			"C7 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-c8"_s,
			"C8 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-c9"_s,
			"C9 (ISO/DIN)"_s
		}),
		$$new($ObjectArray, {
			"iso-designated-long"_s,
			u"ISO 指定长度"_s
		}),
		$$new($ObjectArray, {
			"italian-envelope"_s,
			u"意大利信封"_s
		}),
		$$new($ObjectArray, {
			"italy-envelope"_s,
			u"意大利信封"_s
		}),
		$$new($ObjectArray, {
			"japanese-postcard"_s,
			u"明信片 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"jis-b0"_s,
			"B0 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"jis-b1"_s,
			"B1 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"jis-b10"_s,
			"B10 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"jis-b2"_s,
			"B2 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"jis-b3"_s,
			"B3 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"jis-b4"_s,
			"B4 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"jis-b5"_s,
			"B5 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"jis-b6"_s,
			"B6 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"jis-b7"_s,
			"B7 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"jis-b8"_s,
			"B8 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"jis-b9"_s,
			"B9 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"label.bottommargin"_s,
			u"下边距(&B)"_s
		}),
		$$new($ObjectArray, {
			"label.inches"_s,
			u"(英寸)"_s
		}),
		$$new($ObjectArray, {
			"label.info"_s,
			u"信息: "_s
		}),
		$$new($ObjectArray, {
			"label.jobname"_s,
			u"作业名(&J):"_s
		}),
		$$new($ObjectArray, {
			"label.leftmargin"_s,
			u"左边距(&F)"_s
		}),
		$$new($ObjectArray, {
			"label.millimetres"_s,
			u"(毫米)"_s
		}),
		$$new($ObjectArray, {
			"label.numcopies"_s,
			u"打印份数(&O):"_s
		}),
		$$new($ObjectArray, {
			"label.priority"_s,
			u"优先级(&R):"_s
		}),
		$$new($ObjectArray, {
			"label.psname"_s,
			u"名称(&N):"_s
		}),
		$$new($ObjectArray, {
			"label.pstype"_s,
			u"类型: "_s
		}),
		$$new($ObjectArray, {
			"label.rangeto"_s,
			u"至"_s
		}),
		$$new($ObjectArray, {
			"label.rightmargin"_s,
			u"右边距(&R)"_s
		}),
		$$new($ObjectArray, {
			"label.size"_s,
			u"大小(&Z):"_s
		}),
		$$new($ObjectArray, {
			"label.source"_s,
			u"来源(&C):"_s
		}),
		$$new($ObjectArray, {
			"label.status"_s,
			u"状态: "_s
		}),
		$$new($ObjectArray, {
			"label.topmargin"_s,
			u"上边距(&T)"_s
		}),
		$$new($ObjectArray, {
			"label.username"_s,
			u"用户名(&U):"_s
		}),
		$$new($ObjectArray, {
			"large-capacity"_s,
			u"大容量"_s
		}),
		$$new($ObjectArray, {
			"ledger"_s,
			u"帐目"_s
		}),
		$$new($ObjectArray, {
			"main"_s,
			u"主"_s
		}),
		$$new($ObjectArray, {
			"manual"_s,
			u"手动"_s
		}),
		$$new($ObjectArray, {
			"middle"_s,
			u"中"_s
		}),
		$$new($ObjectArray, {
			"monarch-envelope"_s,
			u"Monarch 信封"_s
		}),
		$$new($ObjectArray, {
			"na-10x13-envelope"_s,
			u"10x15 信封"_s
		}),
		$$new($ObjectArray, {
			"na-10x14-envelope"_s,
			u"10x15 信封"_s
		}),
		$$new($ObjectArray, {
			"na-10x15-envelope"_s,
			u"10x15 信封"_s
		}),
		$$new($ObjectArray, {
			"na-5x7"_s,
			u"5\" x 7\" 纸张"_s
		}),
		$$new($ObjectArray, {
			"na-6x9-envelope"_s,
			u"6x9 信封"_s
		}),
		$$new($ObjectArray, {
			"na-7x9-envelope"_s,
			u"6x7 信封"_s
		}),
		$$new($ObjectArray, {
			"na-8x10"_s,
			u"8\" x 10\" 纸张"_s
		}),
		$$new($ObjectArray, {
			"na-9x11-envelope"_s,
			u"9x11 信封"_s
		}),
		$$new($ObjectArray, {
			"na-9x12-envelope"_s,
			u"9x12 信封"_s
		}),
		$$new($ObjectArray, {
			"na-legal"_s,
			u"法律文书"_s
		}),
		$$new($ObjectArray, {
			"na-letter"_s,
			u"信函"_s
		}),
		$$new($ObjectArray, {
			"na-number-10-envelope"_s,
			u"10 号信封"_s
		}),
		$$new($ObjectArray, {
			"na-number-11-envelope"_s,
			u"11 号信封"_s
		}),
		$$new($ObjectArray, {
			"na-number-12-envelope"_s,
			u"12 号信封"_s
		}),
		$$new($ObjectArray, {
			"na-number-14-envelope"_s,
			u"14 号信封"_s
		}),
		$$new($ObjectArray, {
			"na-number-9-envelope"_s,
			u"9 号信封"_s
		}),
		$$new($ObjectArray, {
			"not-accepting-jobs"_s,
			u"不接受作业"_s
		}),
		$$new($ObjectArray, {
			"oufuko-postcard"_s,
			u"双面明信片 (JIS)"_s
		}),
		$$new($ObjectArray, {
			"personal-envelope"_s,
			u"个人信封"_s
		}),
		$$new($ObjectArray, {
			"quarto"_s,
			u"四开页"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.color"_s,
			u"颜色(&C)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.draftq"_s,
			u"草图(&F)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.duplex"_s,
			u"双面打印(&D)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.highq"_s,
			u"高(&H)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.landscape"_s,
			u"横向(&L)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.monochrome"_s,
			u"单色(&M)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.normalq"_s,
			u"正常(&N)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.oneside"_s,
			u"单面(&O)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.portrait"_s,
			u"纵向(&P)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangeall"_s,
			u"全部(&L)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangepages"_s,
			u"页码范围(&E)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revlandscape"_s,
			u"横向反面打印(&N)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revportrait"_s,
			u"纵向反面打印(&I)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.tumble"_s,
			u"翻转(&T)"_s
		}),
		$$new($ObjectArray, {
			"side"_s,
			u"侧"_s
		}),
		$$new($ObjectArray, {
			"tab.appearance"_s,
			u"外观(&A)"_s
		}),
		$$new($ObjectArray, {
			"tab.general"_s,
			u"一般信息(&G)"_s
		}),
		$$new($ObjectArray, {
			"tab.pagesetup"_s,
			u"页面设置(&S)"_s
		}),
		$$new($ObjectArray, {
			"tabloid"_s,
			u"小报"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			u"上"_s
		})
	});
}

serviceui_zh_CN::serviceui_zh_CN() {
}

$Class* serviceui_zh_CN::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serviceui_zh_CN, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serviceui_zh_CN, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.resources.serviceui_zh_CN",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serviceui_zh_CN, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serviceui_zh_CN);
	});
	return class$;
}

$Class* serviceui_zh_CN::class$ = nullptr;

		} // resources
	} // print
} // sun
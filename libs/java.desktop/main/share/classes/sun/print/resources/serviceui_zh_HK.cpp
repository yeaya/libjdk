#include <sun/print/resources/serviceui_zh_HK.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

void serviceui_zh_HK::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_zh_HK::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Automatic-Feeder"_s,
			u"自動饋紙器"_s
		}),
		$$new($ObjectArray, {
			"Cassette"_s,
			u"卡式磁帶機"_s
		}),
		$$new($ObjectArray, {
			"Form-Source"_s,
			u"表格來源"_s
		}),
		$$new($ObjectArray, {
			"Large-Format"_s,
			u"大格式"_s
		}),
		$$new($ObjectArray, {
			"Manual-Envelope"_s,
			u"手送封套"_s
		}),
		$$new($ObjectArray, {
			"Small-Format"_s,
			u"小格式"_s
		}),
		$$new($ObjectArray, {
			"Tractor-Feeder"_s,
			u"拖曳饋紙器"_s
		}),
		$$new($ObjectArray, {
			"a"_s,
			u"工程 A"_s
		}),
		$$new($ObjectArray, {
			"accepting-jobs"_s,
			u"接受的工作"_s
		}),
		$$new($ObjectArray, {
			"auto-select"_s,
			u"自動選取"_s
		}),
		$$new($ObjectArray, {
			"b"_s,
			u"工程 B"_s
		}),
		$$new($ObjectArray, {
			"border.chromaticity"_s,
			u"色彩外觀"_s
		}),
		$$new($ObjectArray, {
			"border.copies"_s,
			u"份數"_s
		}),
		$$new($ObjectArray, {
			"border.jobattributes"_s,
			u"工作屬性"_s
		}),
		$$new($ObjectArray, {
			"border.margins"_s,
			u"邊距"_s
		}),
		$$new($ObjectArray, {
			"border.media"_s,
			u"媒體"_s
		}),
		$$new($ObjectArray, {
			"border.orientation"_s,
			u"方向"_s
		}),
		$$new($ObjectArray, {
			"border.printrange"_s,
			u"列印範圍"_s
		}),
		$$new($ObjectArray, {
			"border.printservice"_s,
			u"列印服務"_s
		}),
		$$new($ObjectArray, {
			"border.quality"_s,
			u"品質"_s
		}),
		$$new($ObjectArray, {
			"border.sides"_s,
			u"邊"_s
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
			u"確定"_s
		}),
		$$new($ObjectArray, {
			"button.print"_s,
			u"列印"_s
		}),
		$$new($ObjectArray, {
			"button.properties"_s,
			u"特性(&R)..."_s
		}),
		$$new($ObjectArray, {
			"c"_s,
			u"工程 C"_s
		}),
		$$new($ObjectArray, {
			"checkbox.collate"_s,
			u"理序(&C)"_s
		}),
		$$new($ObjectArray, {
			"checkbox.jobsheets"_s,
			u"標題頁(&B)"_s
		}),
		$$new($ObjectArray, {
			"checkbox.printtofile"_s,
			u"列印至檔案(&F)"_s
		}),
		$$new($ObjectArray, {
			"d"_s,
			u"工程 D"_s
		}),
		$$new($ObjectArray, {
			"dialog.noprintermsg"_s,
			u"找不到列印服務。"_s
		}),
		$$new($ObjectArray, {
			"dialog.overwrite"_s,
			u"這個檔案已經存在。您要覆寫已存在的檔案嗎？"_s
		}),
		$$new($ObjectArray, {
			"dialog.owtitle"_s,
			u"列印至檔案"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtitle"_s,
			u"列印"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtofile"_s,
			u"列印至檔案"_s
		}),
		$$new($ObjectArray, {
			"dialog.pstitle"_s,
			u"頁面設定"_s
		}),
		$$new($ObjectArray, {
			"dialog.writeerror"_s,
			u"無法寫入至檔案:"_s
		}),
		$$new($ObjectArray, {
			"e"_s,
			u"工程 E"_s
		}),
		$$new($ObjectArray, {
			"envelope"_s,
			u"封套"_s
		}),
		$$new($ObjectArray, {
			"error.destination"_s,
			u"無效的檔名; 請再試一次"_s
		}),
		$$new($ObjectArray, {
			"error.pagerange"_s,
			u"無效的頁面範圍; 請重新輸入數值 (例如 1-3,5,7-10)"_s
		}),
		$$new($ObjectArray, {
			"executive"_s,
			"Executive"_s
		}),
		$$new($ObjectArray, {
			"folio"_s,
			"Folio"_s
		}),
		$$new($ObjectArray, {
			"invite-envelope"_s,
			"Invitation Envelope"_s
		}),
		$$new($ObjectArray, {
			"invoice"_s,
			"Invoice"_s
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
			"ISO Designated Long"_s
		}),
		$$new($ObjectArray, {
			"italian-envelope"_s,
			"Italy Envelope"_s
		}),
		$$new($ObjectArray, {
			"italy-envelope"_s,
			"Italy Envelope"_s
		}),
		$$new($ObjectArray, {
			"japanese-postcard"_s,
			"Postcard (JIS)"_s
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
			u"底部邊距(&B)"_s
		}),
		$$new($ObjectArray, {
			"label.inches"_s,
			"(in)"_s
		}),
		$$new($ObjectArray, {
			"label.info"_s,
			u"資訊: "_s
		}),
		$$new($ObjectArray, {
			"label.jobname"_s,
			u"工作名稱(&J):"_s
		}),
		$$new($ObjectArray, {
			"label.leftmargin"_s,
			u"左邊距(&F)"_s
		}),
		$$new($ObjectArray, {
			"label.millimetres"_s,
			"(mm)"_s
		}),
		$$new($ObjectArray, {
			"label.numcopies"_s,
			u"列印份數(&O): "_s
		}),
		$$new($ObjectArray, {
			"label.priority"_s,
			u"優先權(&R):"_s
		}),
		$$new($ObjectArray, {
			"label.psname"_s,
			u"名稱(&N):"_s
		}),
		$$new($ObjectArray, {
			"label.pstype"_s,
			u"類型: "_s
		}),
		$$new($ObjectArray, {
			"label.rangeto"_s,
			u"至"_s
		}),
		$$new($ObjectArray, {
			"label.rightmargin"_s,
			u"右邊距(&R)"_s
		}),
		$$new($ObjectArray, {
			"label.size"_s,
			u"大小(&Z):"_s
		}),
		$$new($ObjectArray, {
			"label.source"_s,
			u"來源(&C): "_s
		}),
		$$new($ObjectArray, {
			"label.status"_s,
			u"狀態: "_s
		}),
		$$new($ObjectArray, {
			"label.topmargin"_s,
			u"頂端邊距(&T)"_s
		}),
		$$new($ObjectArray, {
			"label.username"_s,
			u"使用者名稱(&U):"_s
		}),
		$$new($ObjectArray, {
			"large-capacity"_s,
			u"大容量"_s
		}),
		$$new($ObjectArray, {
			"ledger"_s,
			"Ledger"_s
		}),
		$$new($ObjectArray, {
			"main"_s,
			u"主"_s
		}),
		$$new($ObjectArray, {
			"manual"_s,
			u"手送"_s
		}),
		$$new($ObjectArray, {
			"middle"_s,
			u"中"_s
		}),
		$$new($ObjectArray, {
			"monarch-envelope"_s,
			"Monarch Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-10x13-envelope"_s,
			"10x15 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-10x14-envelope"_s,
			"10x15 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-10x15-envelope"_s,
			"10x15 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-5x7"_s,
			"5\" x 7\" Paper"_s
		}),
		$$new($ObjectArray, {
			"na-6x9-envelope"_s,
			"6x9 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-7x9-envelope"_s,
			"6x7 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-8x10"_s,
			"8\" x 10\" Paper"_s
		}),
		$$new($ObjectArray, {
			"na-9x11-envelope"_s,
			"9x11 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-9x12-envelope"_s,
			"9x12 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-legal"_s,
			"Legal"_s
		}),
		$$new($ObjectArray, {
			"na-letter"_s,
			"Letter"_s
		}),
		$$new($ObjectArray, {
			"na-number-10-envelope"_s,
			"No. 10 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-number-11-envelope"_s,
			"No. 11 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-number-12-envelope"_s,
			"No. 12 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-number-14-envelope"_s,
			"No. 14 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-number-9-envelope"_s,
			"No. 9 Envelope"_s
		}),
		$$new($ObjectArray, {
			"not-accepting-jobs"_s,
			u"不接受的工作"_s
		}),
		$$new($ObjectArray, {
			"oufuko-postcard"_s,
			"Double Postcard (JIS)"_s
		}),
		$$new($ObjectArray, {
			"personal-envelope"_s,
			"Personal Envelope"_s
		}),
		$$new($ObjectArray, {
			"quarto"_s,
			"Quarto"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.color"_s,
			u"顏色(&C)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.draftq"_s,
			u"草稿(&F)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.duplex"_s,
			u"雙面列印(&D)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.highq"_s,
			u"高(&H)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.landscape"_s,
			u"橫向(&L)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.monochrome"_s,
			u"單色(&M)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.normalq"_s,
			u"正常(&N)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.oneside"_s,
			u"單面(&O)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.portrait"_s,
			u"直向(&P)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangeall"_s,
			u"全部(&L)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangepages"_s,
			u"頁面(&E)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revlandscape"_s,
			u"反向橫印(&N)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revportrait"_s,
			u"反向直印(&I)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.tumble"_s,
			u"翻轉(&T)"_s
		}),
		$$new($ObjectArray, {
			"side"_s,
			u"邊"_s
		}),
		$$new($ObjectArray, {
			"tab.appearance"_s,
			u"外觀(&A)"_s
		}),
		$$new($ObjectArray, {
			"tab.general"_s,
			u"一般(&G)"_s
		}),
		$$new($ObjectArray, {
			"tab.pagesetup"_s,
			u"頁面設定(&S)"_s
		}),
		$$new($ObjectArray, {
			"tabloid"_s,
			"Tabloid"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			u"上"_s
		})
	});
}

serviceui_zh_HK::serviceui_zh_HK() {
}

$Class* serviceui_zh_HK::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serviceui_zh_HK, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serviceui_zh_HK, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.resources.serviceui_zh_HK",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serviceui_zh_HK, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serviceui_zh_HK);
	});
	return class$;
}

$Class* serviceui_zh_HK::class$ = nullptr;

		} // resources
	} // print
} // sun
#include <sun/print/resources/serviceui_ja.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

void serviceui_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_ja::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Automatic-Feeder"_s,
			u"自動フィーダ"_s
		}),
		$$new($ObjectArray, {
			"Cassette"_s,
			u"カセット"_s
		}),
		$$new($ObjectArray, {
			"Form-Source"_s,
			u"フォーム・ソース"_s
		}),
		$$new($ObjectArray, {
			"Large-Format"_s,
			u"ラージ・フォーマット"_s
		}),
		$$new($ObjectArray, {
			"Manual-Envelope"_s,
			u"マニュアル封筒"_s
		}),
		$$new($ObjectArray, {
			"Small-Format"_s,
			u"スモール・フォーマット"_s
		}),
		$$new($ObjectArray, {
			"Tractor-Feeder"_s,
			u"トラクタ・フィーダ"_s
		}),
		$$new($ObjectArray, {
			"a"_s,
			u"エンジニアリングA"_s
		}),
		$$new($ObjectArray, {
			"accepting-jobs"_s,
			u"ジョブを受け付けています"_s
		}),
		$$new($ObjectArray, {
			"auto-select"_s,
			u"自動選択"_s
		}),
		$$new($ObjectArray, {
			"b"_s,
			u"エンジニアリングB"_s
		}),
		$$new($ObjectArray, {
			"border.chromaticity"_s,
			u"色の表現"_s
		}),
		$$new($ObjectArray, {
			"border.copies"_s,
			u"印刷部数"_s
		}),
		$$new($ObjectArray, {
			"border.jobattributes"_s,
			u"ジョブの属性"_s
		}),
		$$new($ObjectArray, {
			"border.margins"_s,
			u"マージン"_s
		}),
		$$new($ObjectArray, {
			"border.media"_s,
			u"メディア"_s
		}),
		$$new($ObjectArray, {
			"border.orientation"_s,
			u"用紙の向き"_s
		}),
		$$new($ObjectArray, {
			"border.printrange"_s,
			u"印刷範囲"_s
		}),
		$$new($ObjectArray, {
			"border.printservice"_s,
			u"印刷サービス"_s
		}),
		$$new($ObjectArray, {
			"border.quality"_s,
			u"品質"_s
		}),
		$$new($ObjectArray, {
			"border.sides"_s,
			u"面"_s
		}),
		$$new($ObjectArray, {
			"bottom"_s,
			u"下部"_s
		}),
		$$new($ObjectArray, {
			"button.cancel"_s,
			u"取消"_s
		}),
		$$new($ObjectArray, {
			"button.ok"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"button.print"_s,
			u"印刷"_s
		}),
		$$new($ObjectArray, {
			"button.properties"_s,
			u"プロパティ(&R)..."_s
		}),
		$$new($ObjectArray, {
			"c"_s,
			u"エンジニアリングC"_s
		}),
		$$new($ObjectArray, {
			"checkbox.collate"_s,
			u"丁合い(&C)"_s
		}),
		$$new($ObjectArray, {
			"checkbox.jobsheets"_s,
			u"バナー・ページ(&B)"_s
		}),
		$$new($ObjectArray, {
			"checkbox.printtofile"_s,
			u"ファイルに出力(&F)"_s
		}),
		$$new($ObjectArray, {
			"d"_s,
			u"エンジニアリングD"_s
		}),
		$$new($ObjectArray, {
			"dialog.noprintermsg"_s,
			u"印刷サービスが見つかりません。"_s
		}),
		$$new($ObjectArray, {
			"dialog.overwrite"_s,
			u"このファイルはすでに存在します。既存のファイルに上書きしますか。"_s
		}),
		$$new($ObjectArray, {
			"dialog.owtitle"_s,
			u"ファイルに出力"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtitle"_s,
			u"印刷"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtofile"_s,
			u"ファイルに出力"_s
		}),
		$$new($ObjectArray, {
			"dialog.pstitle"_s,
			u"ページ設定"_s
		}),
		$$new($ObjectArray, {
			"dialog.writeerror"_s,
			u"ファイルに書き込めません:"_s
		}),
		$$new($ObjectArray, {
			"e"_s,
			u"エンジニアリングE"_s
		}),
		$$new($ObjectArray, {
			"envelope"_s,
			u"封筒"_s
		}),
		$$new($ObjectArray, {
			"error.destination"_s,
			u"無効なファイル名。ファイル名を再入力してください"_s
		}),
		$$new($ObjectArray, {
			"error.pagerange"_s,
			u"無効なページ範囲。値を再入力してください(例、1-3,5,7-10)"_s
		}),
		$$new($ObjectArray, {
			"executive"_s,
			u"エグゼクティブ"_s
		}),
		$$new($ObjectArray, {
			"folio"_s,
			u"フォリオ"_s
		}),
		$$new($ObjectArray, {
			"invite-envelope"_s,
			u"招待封筒"_s
		}),
		$$new($ObjectArray, {
			"invoice"_s,
			u"インボイス"_s
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
			u"ISO DL(長寸)"_s
		}),
		$$new($ObjectArray, {
			"italian-envelope"_s,
			u"イタリア封筒"_s
		}),
		$$new($ObjectArray, {
			"italy-envelope"_s,
			u"イタリア封筒"_s
		}),
		$$new($ObjectArray, {
			"japanese-postcard"_s,
			u"はがき(JIS)"_s
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
			u"下(&B)"_s
		}),
		$$new($ObjectArray, {
			"label.inches"_s,
			"(in)"_s
		}),
		$$new($ObjectArray, {
			"label.info"_s,
			u"情報:"_s
		}),
		$$new($ObjectArray, {
			"label.jobname"_s,
			u"ジョブ名(&J):"_s
		}),
		$$new($ObjectArray, {
			"label.leftmargin"_s,
			u"左(&F)"_s
		}),
		$$new($ObjectArray, {
			"label.millimetres"_s,
			"(mm)"_s
		}),
		$$new($ObjectArray, {
			"label.numcopies"_s,
			u"印刷部数(&O):"_s
		}),
		$$new($ObjectArray, {
			"label.priority"_s,
			u"優先度(&R):"_s
		}),
		$$new($ObjectArray, {
			"label.psname"_s,
			u"名前(&N):"_s
		}),
		$$new($ObjectArray, {
			"label.pstype"_s,
			u"タイプ:"_s
		}),
		$$new($ObjectArray, {
			"label.rangeto"_s,
			u"印刷範囲"_s
		}),
		$$new($ObjectArray, {
			"label.rightmargin"_s,
			u"右(&R)"_s
		}),
		$$new($ObjectArray, {
			"label.size"_s,
			u"サイズ(&Z):"_s
		}),
		$$new($ObjectArray, {
			"label.source"_s,
			u"ソース(&C):"_s
		}),
		$$new($ObjectArray, {
			"label.status"_s,
			u"状態:"_s
		}),
		$$new($ObjectArray, {
			"label.topmargin"_s,
			u"上(&T)"_s
		}),
		$$new($ObjectArray, {
			"label.username"_s,
			u"ユーザー名(&U):"_s
		}),
		$$new($ObjectArray, {
			"large-capacity"_s,
			u"大容量"_s
		}),
		$$new($ObjectArray, {
			"ledger"_s,
			u"レッジャ"_s
		}),
		$$new($ObjectArray, {
			"main"_s,
			u"メイン"_s
		}),
		$$new($ObjectArray, {
			"manual"_s,
			u"マニュアル"_s
		}),
		$$new($ObjectArray, {
			"middle"_s,
			u"中間"_s
		}),
		$$new($ObjectArray, {
			"monarch-envelope"_s,
			u"モナーク封筒"_s
		}),
		$$new($ObjectArray, {
			"na-10x13-envelope"_s,
			u"10x15封筒"_s
		}),
		$$new($ObjectArray, {
			"na-10x14-envelope"_s,
			u"10x15封筒"_s
		}),
		$$new($ObjectArray, {
			"na-10x15-envelope"_s,
			u"10x15封筒"_s
		}),
		$$new($ObjectArray, {
			"na-5x7"_s,
			u"5x7インチ用紙"_s
		}),
		$$new($ObjectArray, {
			"na-6x9-envelope"_s,
			u"6x9封筒"_s
		}),
		$$new($ObjectArray, {
			"na-7x9-envelope"_s,
			u"6x7封筒"_s
		}),
		$$new($ObjectArray, {
			"na-8x10"_s,
			u"8x10インチ用紙"_s
		}),
		$$new($ObjectArray, {
			"na-9x11-envelope"_s,
			u"9x11封筒"_s
		}),
		$$new($ObjectArray, {
			"na-9x12-envelope"_s,
			u"9x12封筒"_s
		}),
		$$new($ObjectArray, {
			"na-legal"_s,
			u"リーガル"_s
		}),
		$$new($ObjectArray, {
			"na-letter"_s,
			u"レター"_s
		}),
		$$new($ObjectArray, {
			"na-number-10-envelope"_s,
			u"No. 10封筒"_s
		}),
		$$new($ObjectArray, {
			"na-number-11-envelope"_s,
			u"No. 11封筒"_s
		}),
		$$new($ObjectArray, {
			"na-number-12-envelope"_s,
			u"No. 12封筒"_s
		}),
		$$new($ObjectArray, {
			"na-number-14-envelope"_s,
			u"No. 14封筒"_s
		}),
		$$new($ObjectArray, {
			"na-number-9-envelope"_s,
			u"No. 9封筒"_s
		}),
		$$new($ObjectArray, {
			"not-accepting-jobs"_s,
			u"ジョブを受け付けません"_s
		}),
		$$new($ObjectArray, {
			"oufuko-postcard"_s,
			u"往復はがき(JIS)"_s
		}),
		$$new($ObjectArray, {
			"personal-envelope"_s,
			u"個人用封筒"_s
		}),
		$$new($ObjectArray, {
			"quarto"_s,
			u"クォート"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.color"_s,
			u"カラー(&C)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.draftq"_s,
			u"ドラフト(&F)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.duplex"_s,
			u"両面(&D)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.highq"_s,
			u"高(&H)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.landscape"_s,
			u"横(&L)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.monochrome"_s,
			u"モノクロ(&M)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.normalq"_s,
			u"標準(&N)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.oneside"_s,
			u"片面(&O)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.portrait"_s,
			u"縦(&P)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangeall"_s,
			u"すべて(&L)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangepages"_s,
			u"ページ(&E)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revlandscape"_s,
			u"ランドスケープ(反転)(&N)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revportrait"_s,
			u"ポートレイト(反転)(&I)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.tumble"_s,
			u"反転(&T)"_s
		}),
		$$new($ObjectArray, {
			"side"_s,
			u"面"_s
		}),
		$$new($ObjectArray, {
			"tab.appearance"_s,
			u"外観(&A)"_s
		}),
		$$new($ObjectArray, {
			"tab.general"_s,
			u"一般(&G)"_s
		}),
		$$new($ObjectArray, {
			"tab.pagesetup"_s,
			u"ページ設定(&S)"_s
		}),
		$$new($ObjectArray, {
			"tabloid"_s,
			u"タブロイド"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			u"上部"_s
		})
	});
}

serviceui_ja::serviceui_ja() {
}

$Class* serviceui_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serviceui_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serviceui_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.resources.serviceui_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serviceui_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serviceui_ja);
	});
	return class$;
}

$Class* serviceui_ja::class$ = nullptr;

		} // resources
	} // print
} // sun
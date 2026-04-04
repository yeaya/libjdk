#include <sun/print/resources/serviceui_ko.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

void serviceui_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_ko::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Automatic-Feeder"_s,
			u"자동 공급기"_s
		}),
		$$new($ObjectArray, {
			"Cassette"_s,
			u"카세트"_s
		}),
		$$new($ObjectArray, {
			"Form-Source"_s,
			u"양식 소스"_s
		}),
		$$new($ObjectArray, {
			"Large-Format"_s,
			u"큰 형식"_s
		}),
		$$new($ObjectArray, {
			"Manual-Envelope"_s,
			u"수동 봉투"_s
		}),
		$$new($ObjectArray, {
			"Small-Format"_s,
			u"작은 형식"_s
		}),
		$$new($ObjectArray, {
			"Tractor-Feeder"_s,
			u"트랙터 공급기"_s
		}),
		$$new($ObjectArray, {
			"a"_s,
			"Engineering A"_s
		}),
		$$new($ObjectArray, {
			"accepting-jobs"_s,
			u"작업 승인"_s
		}),
		$$new($ObjectArray, {
			"auto-select"_s,
			u"자동 선택"_s
		}),
		$$new($ObjectArray, {
			"b"_s,
			"Engineering B"_s
		}),
		$$new($ObjectArray, {
			"border.chromaticity"_s,
			u"색상 모양"_s
		}),
		$$new($ObjectArray, {
			"border.copies"_s,
			u"복사"_s
		}),
		$$new($ObjectArray, {
			"border.jobattributes"_s,
			u"작업 속성"_s
		}),
		$$new($ObjectArray, {
			"border.margins"_s,
			u"여백"_s
		}),
		$$new($ObjectArray, {
			"border.media"_s,
			u"매체"_s
		}),
		$$new($ObjectArray, {
			"border.orientation"_s,
			u"방향"_s
		}),
		$$new($ObjectArray, {
			"border.printrange"_s,
			u"인쇄 범위"_s
		}),
		$$new($ObjectArray, {
			"border.printservice"_s,
			u"인쇄 서비스"_s
		}),
		$$new($ObjectArray, {
			"border.quality"_s,
			u"품질"_s
		}),
		$$new($ObjectArray, {
			"border.sides"_s,
			u"측면"_s
		}),
		$$new($ObjectArray, {
			"bottom"_s,
			u"아래쪽"_s
		}),
		$$new($ObjectArray, {
			"button.cancel"_s,
			u"취소"_s
		}),
		$$new($ObjectArray, {
			"button.ok"_s,
			u"확인"_s
		}),
		$$new($ObjectArray, {
			"button.print"_s,
			u"인쇄"_s
		}),
		$$new($ObjectArray, {
			"button.properties"_s,
			u"속성(&R)..."_s
		}),
		$$new($ObjectArray, {
			"c"_s,
			"Engineering C"_s
		}),
		$$new($ObjectArray, {
			"checkbox.collate"_s,
			u"한 부씩 인쇄(&C)"_s
		}),
		$$new($ObjectArray, {
			"checkbox.jobsheets"_s,
			u"배너 페이지(&B)"_s
		}),
		$$new($ObjectArray, {
			"checkbox.printtofile"_s,
			u"파일로 인쇄(&F)"_s
		}),
		$$new($ObjectArray, {
			"d"_s,
			"Engineering D"_s
		}),
		$$new($ObjectArray, {
			"dialog.noprintermsg"_s,
			u"인쇄 서비스를 찾을 수 없습니다."_s
		}),
		$$new($ObjectArray, {
			"dialog.overwrite"_s,
			u"이 파일이 존재합니다. 기존 파일을 겹쳐 쓰겠습니까?"_s
		}),
		$$new($ObjectArray, {
			"dialog.owtitle"_s,
			u"파일로 인쇄"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtitle"_s,
			u"인쇄"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtofile"_s,
			u"파일로 인쇄"_s
		}),
		$$new($ObjectArray, {
			"dialog.pstitle"_s,
			u"페이지 설정"_s
		}),
		$$new($ObjectArray, {
			"dialog.writeerror"_s,
			u"파일에 쓸 수 없음:"_s
		}),
		$$new($ObjectArray, {
			"e"_s,
			"Engineering E"_s
		}),
		$$new($ObjectArray, {
			"envelope"_s,
			"Envelope"_s
		}),
		$$new($ObjectArray, {
			"error.destination"_s,
			u"부적합한 파일 이름: 다시 시도하십시오."_s
		}),
		$$new($ObjectArray, {
			"error.pagerange"_s,
			u"부적합한 페이지 범위: 값을 다시 입력하십시오(예: 1-3,5,7-10)."_s
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
			u"아래쪽(&B)"_s
		}),
		$$new($ObjectArray, {
			"label.inches"_s,
			u"(인치)"_s
		}),
		$$new($ObjectArray, {
			"label.info"_s,
			u"정보:"_s
		}),
		$$new($ObjectArray, {
			"label.jobname"_s,
			u"작업 이름(&J):"_s
		}),
		$$new($ObjectArray, {
			"label.leftmargin"_s,
			u"왼쪽(&F)"_s
		}),
		$$new($ObjectArray, {
			"label.millimetres"_s,
			"(mm)"_s
		}),
		$$new($ObjectArray, {
			"label.numcopies"_s,
			u"매수(&O):"_s
		}),
		$$new($ObjectArray, {
			"label.priority"_s,
			u"우선순위(&R):"_s
		}),
		$$new($ObjectArray, {
			"label.psname"_s,
			u"이름(&N):"_s
		}),
		$$new($ObjectArray, {
			"label.pstype"_s,
			u"유형:"_s
		}),
		$$new($ObjectArray, {
			"label.rangeto"_s,
			u"종료"_s
		}),
		$$new($ObjectArray, {
			"label.rightmargin"_s,
			u"오른쪽(&R)"_s
		}),
		$$new($ObjectArray, {
			"label.size"_s,
			u"크기(&Z):"_s
		}),
		$$new($ObjectArray, {
			"label.source"_s,
			u"소스(&C):"_s
		}),
		$$new($ObjectArray, {
			"label.status"_s,
			u"상태:"_s
		}),
		$$new($ObjectArray, {
			"label.topmargin"_s,
			u"위쪽(&T)"_s
		}),
		$$new($ObjectArray, {
			"label.username"_s,
			u"사용자 이름(&U):"_s
		}),
		$$new($ObjectArray, {
			"large-capacity"_s,
			u"큰 용량"_s
		}),
		$$new($ObjectArray, {
			"ledger"_s,
			"Ledger"_s
		}),
		$$new($ObjectArray, {
			"main"_s,
			u"주"_s
		}),
		$$new($ObjectArray, {
			"manual"_s,
			u"수동"_s
		}),
		$$new($ObjectArray, {
			"middle"_s,
			u"가운데"_s
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
			u"5\" x 7\" 용지"_s
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
			u"8\" x 10\" 용지"_s
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
			u"작업 승인 안함"_s
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
			u"색상(&C)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.draftq"_s,
			u"초안(&F)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.duplex"_s,
			u"양면(&D)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.highq"_s,
			u"높음(&H)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.landscape"_s,
			u"가로(&L)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.monochrome"_s,
			u"단색(&M)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.normalq"_s,
			u"보통(&N)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.oneside"_s,
			u"단면(&O)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.portrait"_s,
			u"세로(&P)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangeall"_s,
			u"전체(&L)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangepages"_s,
			u"페이지(&E)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revlandscape"_s,
			u"가로 반전(&N)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revportrait"_s,
			u"세로 반전(&I)"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.tumble"_s,
			u"회전식(&T)"_s
		}),
		$$new($ObjectArray, {
			"side"_s,
			u"측면"_s
		}),
		$$new($ObjectArray, {
			"tab.appearance"_s,
			u"모양(&A)"_s
		}),
		$$new($ObjectArray, {
			"tab.general"_s,
			u"일반 사항(&G)"_s
		}),
		$$new($ObjectArray, {
			"tab.pagesetup"_s,
			u"페이지 설정(&S)"_s
		}),
		$$new($ObjectArray, {
			"tabloid"_s,
			"Tabloid"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			u"위쪽"_s
		})
	});
}

serviceui_ko::serviceui_ko() {
}

$Class* serviceui_ko::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serviceui_ko, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serviceui_ko, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.resources.serviceui_ko",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serviceui_ko, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serviceui_ko);
	});
	return class$;
}

$Class* serviceui_ko::class$ = nullptr;

		} // resources
	} // print
} // sun
#include <sun/awt/resources/awt_ko.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

void awt_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_ko::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AWT.CompositionWindowTitle"_s,
			u"입력 창"_s
		}),
		$$new($ObjectArray, {
			"AWT.CrosshairCursor"_s,
			u"십자 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultCursor"_s,
			u"기본 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDragCursor"_s,
			u"기본 끌기 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDropCursor"_s,
			u"기본 놓기 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultNoDropCursor"_s,
			u"기본 NoDrag 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.EResizeCursor"_s,
			u"동쪽 방향 크기 조정 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.HandCursor"_s,
			u"손 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.HostInputMethodDisplayName"_s,
			u"시스템 입력 방법"_s
		}),
		$$new($ObjectArray, {
			"AWT.InconsistentDLLsWarning"_s,
			u"시스템에 설치된 DLL(Dynamic Linking Libraries) 집합이 일치하지 않아 텍스트 기반 작업이 제대로 작동하지 않을 수 있습니다. 이 문제에 대한 자세한 내용과 해결 방법 제안 사항은 java.sun.com의 Java(TM) 2 SDK, Standard Edition Release Notes를 참조하십시오."_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodCreationFailed"_s,
			u"{0}을(를) 생성할 수 없습니다. 원인: {1}"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ja"_s,
			u"일본어"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ko"_s,
			u"한국어"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh"_s,
			u"중국어"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_CN"_s,
			u"중국어 간체"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_TW"_s,
			u"중국어 번체"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodSelectionMenu"_s,
			u"입력 방법 선택"_s
		}),
		$$new($ObjectArray, {
			"AWT.Less"_s,
			"Less"_s
		}),
		$$new($ObjectArray, {
			"AWT.MoveCursor"_s,
			u"이동 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.NEResizeCursor"_s,
			u"북동 방향 크기 조정 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.NResizeCursor"_s,
			u"북쪽 방향 크기 조정 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.NWResizeCursor"_s,
			u"북서 방향 크기 조정 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.SEResizeCursor"_s,
			u"남동 방향 크기 조정 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.SResizeCursor"_s,
			u"남쪽 방향 크기 조정 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.SWResizeCursor"_s,
			u"남서 방향 크기 조정 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.TextCursor"_s,
			u"텍스트 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.WResizeCursor"_s,
			u"서쪽 방향 크기 조정 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.WaitCursor"_s,
			u"대기 커서"_s
		}),
		$$new($ObjectArray, {
			"AWT.accept"_s,
			u"동의"_s
		}),
		$$new($ObjectArray, {
			"AWT.add"_s,
			"NumPad +"_s
		}),
		$$new($ObjectArray, {
			"AWT.again"_s,
			u"다시"_s
		}),
		$$new($ObjectArray, {
			"AWT.allCandidates"_s,
			u"모든 후보"_s
		}),
		$$new($ObjectArray, {
			"AWT.alphanumeric"_s,
			u"영숫자"_s
		}),
		$$new($ObjectArray, {
			"AWT.alt"_s,
			"Alt"_s
		}),
		$$new($ObjectArray, {
			"AWT.altGraph"_s,
			"Alt Graph"_s
		}),
		$$new($ObjectArray, {
			"AWT.ampersand"_s,
			"Ampersand"_s
		}),
		$$new($ObjectArray, {
			"AWT.asterisk"_s,
			"Asterisk"_s
		}),
		$$new($ObjectArray, {
			"AWT.at"_s,
			"At"_s
		}),
		$$new($ObjectArray, {
			"AWT.backQuote"_s,
			"Back Quote"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSlash"_s,
			"Back Slash"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSpace"_s,
			"Backspace"_s
		}),
		$$new($ObjectArray, {
			"AWT.begin"_s,
			"Begin"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceLeft"_s,
			"Left Brace"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceRight"_s,
			"Right Brace"_s
		}),
		$$new($ObjectArray, {
			"AWT.cancel"_s,
			"Cancel"_s
		}),
		$$new($ObjectArray, {
			"AWT.capsLock"_s,
			"Caps Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.circumflex"_s,
			"Circumflex"_s
		}),
		$$new($ObjectArray, {
			"AWT.clear"_s,
			"Clear"_s
		}),
		$$new($ObjectArray, {
			"AWT.closeBracket"_s,
			"Close Bracket"_s
		}),
		$$new($ObjectArray, {
			"AWT.codeInput"_s,
			u"코드 입력"_s
		}),
		$$new($ObjectArray, {
			"AWT.colon"_s,
			"Colon"_s
		}),
		$$new($ObjectArray, {
			"AWT.comma"_s,
			"Comma"_s
		}),
		$$new($ObjectArray, {
			"AWT.compose"_s,
			u"구성"_s
		}),
		$$new($ObjectArray, {
			"AWT.context"_s,
			"Context Menu"_s
		}),
		$$new($ObjectArray, {
			"AWT.control"_s,
			"Ctrl"_s
		}),
		$$new($ObjectArray, {
			"AWT.convert"_s,
			u"변환"_s
		}),
		$$new($ObjectArray, {
			"AWT.copy"_s,
			u"복사"_s
		}),
		$$new($ObjectArray, {
			"AWT.cut"_s,
			u"잘라내기"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveDot"_s,
			"Dead Above Dot"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveRing"_s,
			"Dead Above Ring"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAcute"_s,
			"Dead Acute"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadBreve"_s,
			"Dead Breve"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCaron"_s,
			"Dead Caron"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCedilla"_s,
			"Dead Cedilla"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCircumflex"_s,
			"Dead Circumflex"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDiaeresis"_s,
			"Dead Diaeresis"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDoubleAcute"_s,
			"Dead Double Acute"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadGrave"_s,
			"Dead Grave"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadIota"_s,
			"Dead Iota"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadMacron"_s,
			"Dead Macron"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadOgonek"_s,
			"Dead Ogonek"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadSemivoicedSound"_s,
			"Dead Semivoiced Sound"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadTilde"_s,
			"Dead Tilde"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadVoicedSound"_s,
			"Dead Voiced Sound"_s
		}),
		$$new($ObjectArray, {
			"AWT.decimal"_s,
			"NumPad ."_s
		}),
		$$new($ObjectArray, {
			"AWT.delete"_s,
			"Delete"_s
		}),
		$$new($ObjectArray, {
			"AWT.divide"_s,
			"NumPad /"_s
		}),
		$$new($ObjectArray, {
			"AWT.dollar"_s,
			"Dollar"_s
		}),
		$$new($ObjectArray, {
			"AWT.down"_s,
			"Down"_s
		}),
		$$new($ObjectArray, {
			"AWT.end"_s,
			"End"_s
		}),
		$$new($ObjectArray, {
			"AWT.enter"_s,
			"Enter"_s
		}),
		$$new($ObjectArray, {
			"AWT.equals"_s,
			"Equals"_s
		}),
		$$new($ObjectArray, {
			"AWT.escape"_s,
			"Escape"_s
		}),
		$$new($ObjectArray, {
			"AWT.euro"_s,
			"Euro"_s
		}),
		$$new($ObjectArray, {
			"AWT.exclamationMark"_s,
			"Exclamation Mark"_s
		}),
		$$new($ObjectArray, {
			"AWT.f1"_s,
			"F1"_s
		}),
		$$new($ObjectArray, {
			"AWT.f10"_s,
			"F10"_s
		}),
		$$new($ObjectArray, {
			"AWT.f11"_s,
			"F11"_s
		}),
		$$new($ObjectArray, {
			"AWT.f12"_s,
			"F12"_s
		}),
		$$new($ObjectArray, {
			"AWT.f13"_s,
			"F13"_s
		}),
		$$new($ObjectArray, {
			"AWT.f14"_s,
			"F14"_s
		}),
		$$new($ObjectArray, {
			"AWT.f15"_s,
			"F15"_s
		}),
		$$new($ObjectArray, {
			"AWT.f16"_s,
			"F16"_s
		}),
		$$new($ObjectArray, {
			"AWT.f17"_s,
			"F17"_s
		}),
		$$new($ObjectArray, {
			"AWT.f18"_s,
			"F18"_s
		}),
		$$new($ObjectArray, {
			"AWT.f19"_s,
			"F19"_s
		}),
		$$new($ObjectArray, {
			"AWT.f2"_s,
			"F2"_s
		}),
		$$new($ObjectArray, {
			"AWT.f20"_s,
			"F20"_s
		}),
		$$new($ObjectArray, {
			"AWT.f21"_s,
			"F21"_s
		}),
		$$new($ObjectArray, {
			"AWT.f22"_s,
			"F22"_s
		}),
		$$new($ObjectArray, {
			"AWT.f23"_s,
			"F23"_s
		}),
		$$new($ObjectArray, {
			"AWT.f24"_s,
			"F24"_s
		}),
		$$new($ObjectArray, {
			"AWT.f3"_s,
			"F3"_s
		}),
		$$new($ObjectArray, {
			"AWT.f4"_s,
			"F4"_s
		}),
		$$new($ObjectArray, {
			"AWT.f5"_s,
			"F5"_s
		}),
		$$new($ObjectArray, {
			"AWT.f6"_s,
			"F6"_s
		}),
		$$new($ObjectArray, {
			"AWT.f7"_s,
			"F7"_s
		}),
		$$new($ObjectArray, {
			"AWT.f8"_s,
			"F8"_s
		}),
		$$new($ObjectArray, {
			"AWT.f9"_s,
			"F9"_s
		}),
		$$new($ObjectArray, {
			"AWT.final"_s,
			"Final"_s
		}),
		$$new($ObjectArray, {
			"AWT.find"_s,
			u"찾기"_s
		}),
		$$new($ObjectArray, {
			"AWT.fullWidth"_s,
			"Full-Width"_s
		}),
		$$new($ObjectArray, {
			"AWT.greater"_s,
			"Greater"_s
		}),
		$$new($ObjectArray, {
			"AWT.halfWidth"_s,
			"Half-Width"_s
		}),
		$$new($ObjectArray, {
			"AWT.help"_s,
			"Help"_s
		}),
		$$new($ObjectArray, {
			"AWT.hiragana"_s,
			u"히라가나"_s
		}),
		$$new($ObjectArray, {
			"AWT.home"_s,
			"Home"_s
		}),
		$$new($ObjectArray, {
			"AWT.inputMethodOnOff"_s,
			u"입력 방법 설정/해제"_s
		}),
		$$new($ObjectArray, {
			"AWT.insert"_s,
			"Insert"_s
		}),
		$$new($ObjectArray, {
			"AWT.invertedExclamationMark"_s,
			"Inverted Exclamation Mark"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseHiragana"_s,
			u"일본어 히라가나"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseKatakana"_s,
			u"일본어 가타카나"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseRoman"_s,
			u"일본어 로마 문자"_s
		}),
		$$new($ObjectArray, {
			"AWT.kana"_s,
			u"가나"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanaLock"_s,
			u"가나 잠금"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanji"_s,
			u"간지"_s
		}),
		$$new($ObjectArray, {
			"AWT.katakana"_s,
			u"가타카나"_s
		}),
		$$new($ObjectArray, {
			"AWT.left"_s,
			"Left"_s
		}),
		$$new($ObjectArray, {
			"AWT.leftParenthesis"_s,
			"Left Parenthesis"_s
		}),
		$$new($ObjectArray, {
			"AWT.meta"_s,
			"Meta"_s
		}),
		$$new($ObjectArray, {
			"AWT.minus"_s,
			"Minus"_s
		}),
		$$new($ObjectArray, {
			"AWT.modechange"_s,
			u"모드 변경"_s
		}),
		$$new($ObjectArray, {
			"AWT.multiply"_s,
			"NumPad *"_s
		}),
		$$new($ObjectArray, {
			"AWT.noconvert"_s,
			u"변환 안함"_s
		}),
		$$new($ObjectArray, {
			"AWT.numLock"_s,
			"Num Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.numberSign"_s,
			"Number Sign"_s
		}),
		$$new($ObjectArray, {
			"AWT.numpad"_s,
			"NumPad"_s
		}),
		$$new($ObjectArray, {
			"AWT.openBracket"_s,
			"Open Bracket"_s
		}),
		$$new($ObjectArray, {
			"AWT.paste"_s,
			u"붙여넣기"_s
		}),
		$$new($ObjectArray, {
			"AWT.pause"_s,
			"Pause"_s
		}),
		$$new($ObjectArray, {
			"AWT.period"_s,
			"Period"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgdn"_s,
			"Page Down"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgup"_s,
			"Page Up"_s
		}),
		$$new($ObjectArray, {
			"AWT.plus"_s,
			"Plus"_s
		}),
		$$new($ObjectArray, {
			"AWT.previousCandidate"_s,
			u"이전 후보"_s
		}),
		$$new($ObjectArray, {
			"AWT.printScreen"_s,
			"Print Screen"_s
		}),
		$$new($ObjectArray, {
			"AWT.props"_s,
			"Props"_s
		}),
		$$new($ObjectArray, {
			"AWT.quote"_s,
			"Quote"_s
		}),
		$$new($ObjectArray, {
			"AWT.quoteDbl"_s,
			"Double Quote"_s
		}),
		$$new($ObjectArray, {
			"AWT.right"_s,
			"Right"_s
		}),
		$$new($ObjectArray, {
			"AWT.rightParenthesis"_s,
			"Right Parenthesis"_s
		}),
		$$new($ObjectArray, {
			"AWT.romanCharacters"_s,
			u"로마 문자"_s
		}),
		$$new($ObjectArray, {
			"AWT.scrollLock"_s,
			"Scroll Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.semicolon"_s,
			"Semicolon"_s
		}),
		$$new($ObjectArray, {
			"AWT.separater"_s,
			"NumPad ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.separator"_s,
			"NumPad ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.shift"_s,
			"Shift"_s
		}),
		$$new($ObjectArray, {
			"AWT.slash"_s,
			"Slash"_s
		}),
		$$new($ObjectArray, {
			"AWT.space"_s,
			"Space"_s
		}),
		$$new($ObjectArray, {
			"AWT.stop"_s,
			u"정지"_s
		}),
		$$new($ObjectArray, {
			"AWT.subtract"_s,
			"NumPad -"_s
		}),
		$$new($ObjectArray, {
			"AWT.tab"_s,
			"Tab"_s
		}),
		$$new($ObjectArray, {
			"AWT.undefined"_s,
			u"정의되지 않음"_s
		}),
		$$new($ObjectArray, {
			"AWT.underscore"_s,
			"Underscore"_s
		}),
		$$new($ObjectArray, {
			"AWT.undo"_s,
			u"실행 취소"_s
		}),
		$$new($ObjectArray, {
			"AWT.unknown"_s,
			u"알 수 없음"_s
		}),
		$$new($ObjectArray, {
			"AWT.up"_s,
			"Up"_s
		}),
		$$new($ObjectArray, {
			"AWT.windows"_s,
			"Windows"_s
		}),
		$$new($ObjectArray, {
			"java.awt.def.delay"_s,
			"30"_s
		}),
		$$new($ObjectArray, {
			"java.awt.im.style"_s,
			"on-the-spot"_s
		})
	});
}

awt_ko::awt_ko() {
}

$Class* awt_ko::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awt_ko, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awt_ko, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.resources.awt_ko",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awt_ko, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awt_ko);
	});
	return class$;
}

$Class* awt_ko::class$ = nullptr;

		} // resources
	} // awt
} // sun
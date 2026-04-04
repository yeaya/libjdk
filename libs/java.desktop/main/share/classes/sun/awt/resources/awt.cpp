#include <sun/awt/resources/awt.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

void awt::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AWT.CompositionWindowTitle"_s,
			"Input Window"_s
		}),
		$$new($ObjectArray, {
			"AWT.CrosshairCursor"_s,
			"Crosshair Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultCursor"_s,
			"Default Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDragCursor"_s,
			"Default Drag Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDropCursor"_s,
			"Default Drop Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultNoDropCursor"_s,
			"Default NoDrag Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.EResizeCursor"_s,
			"East Resize Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.HandCursor"_s,
			"Hand Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.HostInputMethodDisplayName"_s,
			"System Input Methods"_s
		}),
		$$new($ObjectArray, {
			"AWT.InconsistentDLLsWarning"_s,
			"Text based operations may not work correctly due to an inconsistent set of dynamic linking libraries (DLLs) installed on your system. For more information on this problem and a suggested workaround please see the Java(TM) 2 SDK, Standard Edition Release Notes on java.sun.com."_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodCreationFailed"_s,
			"Could not create {0}.  Reason: {1}"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ja"_s,
			"Japanese"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ko"_s,
			"Korean"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh"_s,
			"Chinese"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_CN"_s,
			"Simplified Chinese"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_TW"_s,
			"Traditional Chinese"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodSelectionMenu"_s,
			"Select Input Method"_s
		}),
		$$new($ObjectArray, {
			"AWT.Less"_s,
			"Less"_s
		}),
		$$new($ObjectArray, {
			"AWT.MoveCursor"_s,
			"Move Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.NEResizeCursor"_s,
			"Northeast Resize Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.NResizeCursor"_s,
			"North Resize Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.NWResizeCursor"_s,
			"Northwest Resize Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.SEResizeCursor"_s,
			"Southeast Resize Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.SResizeCursor"_s,
			"South Resize Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.SWResizeCursor"_s,
			"Southwest Resize Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.TextCursor"_s,
			"Text Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.WResizeCursor"_s,
			"West Resize Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.WaitCursor"_s,
			"Wait Cursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.accept"_s,
			"Accept"_s
		}),
		$$new($ObjectArray, {
			"AWT.add"_s,
			"NumPad +"_s
		}),
		$$new($ObjectArray, {
			"AWT.again"_s,
			"Again"_s
		}),
		$$new($ObjectArray, {
			"AWT.allCandidates"_s,
			"All Candidates"_s
		}),
		$$new($ObjectArray, {
			"AWT.alphanumeric"_s,
			"Alphanumeric"_s
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
			"Code Input"_s
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
			"Compose"_s
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
			"Convert"_s
		}),
		$$new($ObjectArray, {
			"AWT.copy"_s,
			"Copy"_s
		}),
		$$new($ObjectArray, {
			"AWT.cut"_s,
			"Cut"_s
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
			"Find"_s
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
			"Hiragana"_s
		}),
		$$new($ObjectArray, {
			"AWT.home"_s,
			"Home"_s
		}),
		$$new($ObjectArray, {
			"AWT.inputMethodOnOff"_s,
			"Input Method On/Off"_s
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
			"Japanese Hiragana"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseKatakana"_s,
			"Japanese Katakana"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseRoman"_s,
			"Japanese Roman"_s
		}),
		$$new($ObjectArray, {
			"AWT.kana"_s,
			"Kana"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanaLock"_s,
			"Kana Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanji"_s,
			"Kanji"_s
		}),
		$$new($ObjectArray, {
			"AWT.katakana"_s,
			"Katakana"_s
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
			"Mode Change"_s
		}),
		$$new($ObjectArray, {
			"AWT.multiply"_s,
			"NumPad *"_s
		}),
		$$new($ObjectArray, {
			"AWT.noconvert"_s,
			"No Convert"_s
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
			"Paste"_s
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
			"Previous Candidate"_s
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
			"Roman Characters"_s
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
			"Stop"_s
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
			"Undefined"_s
		}),
		$$new($ObjectArray, {
			"AWT.underscore"_s,
			"Underscore"_s
		}),
		$$new($ObjectArray, {
			"AWT.undo"_s,
			"Undo"_s
		}),
		$$new($ObjectArray, {
			"AWT.unknown"_s,
			"Unknown"_s
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

awt::awt() {
}

$Class* awt::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awt, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awt, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.resources.awt",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awt, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awt);
	});
	return class$;
}

$Class* awt::class$ = nullptr;

		} // resources
	} // awt
} // sun
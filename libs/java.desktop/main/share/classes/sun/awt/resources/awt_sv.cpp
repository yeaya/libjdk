#include <sun/awt/resources/awt_sv.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

void awt_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_sv::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AWT.CompositionWindowTitle"_s,
			u"Inmatningsfönster"_s
		}),
		$$new($ObjectArray, {
			"AWT.CrosshairCursor"_s,
			u"Hårkorsmarkör"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultCursor"_s,
			u"Standardmarkör"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDragCursor"_s,
			u"Standarddragmarkör"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDropCursor"_s,
			u"Standardsläppmarkör"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultNoDropCursor"_s,
			u"Standardmarkör (ej drag)"_s
		}),
		$$new($ObjectArray, {
			"AWT.EResizeCursor"_s,
			u"Markör för storleksändring (öst)"_s
		}),
		$$new($ObjectArray, {
			"AWT.HandCursor"_s,
			u"Handmarkör"_s
		}),
		$$new($ObjectArray, {
			"AWT.HostInputMethodDisplayName"_s,
			"Systeminmatningsmetoder"_s
		}),
		$$new($ObjectArray, {
			"AWT.InconsistentDLLsWarning"_s,
			u"Textbaserade åtgärder kanske inte fungerar korrekt på grund av en inkonsekvent uppsättning dynamiskt länkade bibliotek (DLL) som är installerade i systemet. För mer information om detta problem och en tillfällig lösning, se Java(TM) 2 SDK, Standard Edition Release Notes på java.sun.com."_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodCreationFailed"_s,
			"Kan inte skapa {0}.  Orsak: {1}"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ja"_s,
			"Japanska"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ko"_s,
			"Koreanska"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh"_s,
			"Kinesiska"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_CN"_s,
			u"Förenklad kinesiska"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_TW"_s,
			"Traditionell kinesiska"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodSelectionMenu"_s,
			u"Välj inmatningsmetod"_s
		}),
		$$new($ObjectArray, {
			"AWT.Less"_s,
			"Mindre"_s
		}),
		$$new($ObjectArray, {
			"AWT.MoveCursor"_s,
			u"Flyttmarkör"_s
		}),
		$$new($ObjectArray, {
			"AWT.NEResizeCursor"_s,
			u"Markör för storleksändring (nordost)"_s
		}),
		$$new($ObjectArray, {
			"AWT.NResizeCursor"_s,
			u"Markör för storleksändring (nord)"_s
		}),
		$$new($ObjectArray, {
			"AWT.NWResizeCursor"_s,
			u"Markör för storleksändring (nordväst)"_s
		}),
		$$new($ObjectArray, {
			"AWT.SEResizeCursor"_s,
			u"Markör för storleksändring (sydost)"_s
		}),
		$$new($ObjectArray, {
			"AWT.SResizeCursor"_s,
			u"Markör för storleksändring (syd)"_s
		}),
		$$new($ObjectArray, {
			"AWT.SWResizeCursor"_s,
			u"Markör för storleksändring (sydväst)"_s
		}),
		$$new($ObjectArray, {
			"AWT.TextCursor"_s,
			u"Textmarkör"_s
		}),
		$$new($ObjectArray, {
			"AWT.WResizeCursor"_s,
			u"Markör för storleksändring (väst)"_s
		}),
		$$new($ObjectArray, {
			"AWT.WaitCursor"_s,
			u"Väntemarkör"_s
		}),
		$$new($ObjectArray, {
			"AWT.accept"_s,
			"Acceptera"_s
		}),
		$$new($ObjectArray, {
			"AWT.add"_s,
			"NUM +"_s
		}),
		$$new($ObjectArray, {
			"AWT.again"_s,
			"Upprepa"_s
		}),
		$$new($ObjectArray, {
			"AWT.allCandidates"_s,
			"Alla kandidater"_s
		}),
		$$new($ObjectArray, {
			"AWT.alphanumeric"_s,
			"Alfanumerisk"_s
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
			"Et-tecken"_s
		}),
		$$new($ObjectArray, {
			"AWT.asterisk"_s,
			"Asterisk"_s
		}),
		$$new($ObjectArray, {
			"AWT.at"_s,
			"Vid"_s
		}),
		$$new($ObjectArray, {
			"AWT.backQuote"_s,
			u"Vänster citattecken"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSlash"_s,
			u"Omvänt snedstreck"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSpace"_s,
			"Backsteg"_s
		}),
		$$new($ObjectArray, {
			"AWT.begin"_s,
			"Begin"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceLeft"_s,
			u"Vänster klammerparentes"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceRight"_s,
			u"Höger klammerparentes"_s
		}),
		$$new($ObjectArray, {
			"AWT.cancel"_s,
			"Avbryt"_s
		}),
		$$new($ObjectArray, {
			"AWT.capsLock"_s,
			"Caps Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.circumflex"_s,
			"Cirkumflex"_s
		}),
		$$new($ObjectArray, {
			"AWT.clear"_s,
			"Rensa"_s
		}),
		$$new($ObjectArray, {
			"AWT.closeBracket"_s,
			"Hakparentes"_s
		}),
		$$new($ObjectArray, {
			"AWT.codeInput"_s,
			"Kodindata"_s
		}),
		$$new($ObjectArray, {
			"AWT.colon"_s,
			"Kolon"_s
		}),
		$$new($ObjectArray, {
			"AWT.comma"_s,
			"Kommatecken"_s
		}),
		$$new($ObjectArray, {
			"AWT.compose"_s,
			"Skriv"_s
		}),
		$$new($ObjectArray, {
			"AWT.context"_s,
			"Snabbmeny"_s
		}),
		$$new($ObjectArray, {
			"AWT.control"_s,
			"Ctrl"_s
		}),
		$$new($ObjectArray, {
			"AWT.convert"_s,
			"Konvertera"_s
		}),
		$$new($ObjectArray, {
			"AWT.copy"_s,
			"Kopiera"_s
		}),
		$$new($ObjectArray, {
			"AWT.cut"_s,
			"Klipp ut"_s
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
			"NUM ."_s
		}),
		$$new($ObjectArray, {
			"AWT.delete"_s,
			"Ta bort"_s
		}),
		$$new($ObjectArray, {
			"AWT.divide"_s,
			"NUM /"_s
		}),
		$$new($ObjectArray, {
			"AWT.dollar"_s,
			"Dollar"_s
		}),
		$$new($ObjectArray, {
			"AWT.down"_s,
			"Nedpil"_s
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
			"Lika med"_s
		}),
		$$new($ObjectArray, {
			"AWT.escape"_s,
			"Esc"_s
		}),
		$$new($ObjectArray, {
			"AWT.euro"_s,
			"Euro"_s
		}),
		$$new($ObjectArray, {
			"AWT.exclamationMark"_s,
			"Utropstecken"_s
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
			"Slutlig"_s
		}),
		$$new($ObjectArray, {
			"AWT.find"_s,
			u"Sök"_s
		}),
		$$new($ObjectArray, {
			"AWT.fullWidth"_s,
			"Full bredd"_s
		}),
		$$new($ObjectArray, {
			"AWT.greater"_s,
			u"Större"_s
		}),
		$$new($ObjectArray, {
			"AWT.halfWidth"_s,
			"Halv bredd"_s
		}),
		$$new($ObjectArray, {
			"AWT.help"_s,
			u"Hjälp"_s
		}),
		$$new($ObjectArray, {
			"AWT.hiragana"_s,
			"Hiragana"_s
		}),
		$$new($ObjectArray, {
			"AWT.home"_s,
			"Hem"_s
		}),
		$$new($ObjectArray, {
			"AWT.inputMethodOnOff"_s,
			u"Indatametod på/av"_s
		}),
		$$new($ObjectArray, {
			"AWT.insert"_s,
			"Insert"_s
		}),
		$$new($ObjectArray, {
			"AWT.invertedExclamationMark"_s,
			"Inverterat utropstecken"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseHiragana"_s,
			"Japansk Hiragana"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseKatakana"_s,
			"Japansk Katakana"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseRoman"_s,
			"Japanska-latinska"_s
		}),
		$$new($ObjectArray, {
			"AWT.kana"_s,
			"Kana"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanaLock"_s,
			u"Kana-lås"_s
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
			u"Vänster"_s
		}),
		$$new($ObjectArray, {
			"AWT.leftParenthesis"_s,
			u"Vänsterparentes"_s
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
			u"Ändring av läge"_s
		}),
		$$new($ObjectArray, {
			"AWT.multiply"_s,
			"NUM *"_s
		}),
		$$new($ObjectArray, {
			"AWT.noconvert"_s,
			"Ingen konvertering"_s
		}),
		$$new($ObjectArray, {
			"AWT.numLock"_s,
			"Num Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.numberSign"_s,
			"Nummertecken"_s
		}),
		$$new($ObjectArray, {
			"AWT.numpad"_s,
			"NumPad"_s
		}),
		$$new($ObjectArray, {
			"AWT.openBracket"_s,
			"Parentes"_s
		}),
		$$new($ObjectArray, {
			"AWT.paste"_s,
			"Klistra in"_s
		}),
		$$new($ObjectArray, {
			"AWT.pause"_s,
			"Paus"_s
		}),
		$$new($ObjectArray, {
			"AWT.period"_s,
			"Punkt"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgdn"_s,
			"Sida ned"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgup"_s,
			"Sida upp"_s
		}),
		$$new($ObjectArray, {
			"AWT.plus"_s,
			"Plus"_s
		}),
		$$new($ObjectArray, {
			"AWT.previousCandidate"_s,
			u"Föregående kandidat"_s
		}),
		$$new($ObjectArray, {
			"AWT.printScreen"_s,
			u"Skärmutskrift"_s
		}),
		$$new($ObjectArray, {
			"AWT.props"_s,
			"Egenskaper"_s
		}),
		$$new($ObjectArray, {
			"AWT.quote"_s,
			"Citattecken"_s
		}),
		$$new($ObjectArray, {
			"AWT.quoteDbl"_s,
			"Dubbelt citattecken"_s
		}),
		$$new($ObjectArray, {
			"AWT.right"_s,
			u"Höger"_s
		}),
		$$new($ObjectArray, {
			"AWT.rightParenthesis"_s,
			u"Högerparentes"_s
		}),
		$$new($ObjectArray, {
			"AWT.romanCharacters"_s,
			"Latinska tecken"_s
		}),
		$$new($ObjectArray, {
			"AWT.scrollLock"_s,
			"Scroll Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.semicolon"_s,
			"Semikolon"_s
		}),
		$$new($ObjectArray, {
			"AWT.separater"_s,
			"NUM ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.separator"_s,
			"NUM ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.shift"_s,
			"Skift"_s
		}),
		$$new($ObjectArray, {
			"AWT.slash"_s,
			"Snedstreck"_s
		}),
		$$new($ObjectArray, {
			"AWT.space"_s,
			"Blanksteg"_s
		}),
		$$new($ObjectArray, {
			"AWT.stop"_s,
			"Stopp"_s
		}),
		$$new($ObjectArray, {
			"AWT.subtract"_s,
			"NUM -"_s
		}),
		$$new($ObjectArray, {
			"AWT.tab"_s,
			"Tabb"_s
		}),
		$$new($ObjectArray, {
			"AWT.undefined"_s,
			"Odefinierad"_s
		}),
		$$new($ObjectArray, {
			"AWT.underscore"_s,
			"Understreck"_s
		}),
		$$new($ObjectArray, {
			"AWT.undo"_s,
			u"Ångra"_s
		}),
		$$new($ObjectArray, {
			"AWT.unknown"_s,
			u"Okänd"_s
		}),
		$$new($ObjectArray, {
			"AWT.up"_s,
			"Upp"_s
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
			u"på stället"_s
		})
	});
}

awt_sv::awt_sv() {
}

$Class* awt_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awt_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awt_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.resources.awt_sv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awt_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awt_sv);
	});
	return class$;
}

$Class* awt_sv::class$ = nullptr;

		} // resources
	} // awt
} // sun
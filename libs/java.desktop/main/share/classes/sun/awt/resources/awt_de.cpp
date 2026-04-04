#include <sun/awt/resources/awt_de.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

void awt_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_de::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AWT.CompositionWindowTitle"_s,
			"Eingabefenster"_s
		}),
		$$new($ObjectArray, {
			"AWT.CrosshairCursor"_s,
			"Fadenkreuzcursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultCursor"_s,
			"Standardcursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDragCursor"_s,
			"Standardcursor beim Ziehen"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDropCursor"_s,
			"Standardcursor beim Ablegen"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultNoDropCursor"_s,
			"Standardcursor NoDrag"_s
		}),
		$$new($ObjectArray, {
			"AWT.EResizeCursor"_s,
			"Skaliercursor nach rechts"_s
		}),
		$$new($ObjectArray, {
			"AWT.HandCursor"_s,
			"Handcursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.HostInputMethodDisplayName"_s,
			"Systemeingabemethoden"_s
		}),
		$$new($ObjectArray, {
			"AWT.InconsistentDLLsWarning"_s,
			u"Textbasierte Vorgänge funktionieren möglicherweise nicht richtig, weil inkonsistente Dynamic Linking Librarys (DLLs) auf dem System installiert sind. Weitere Informationen zu diesem Problem sowie eine Empfehlung zu der Umgehung finden Sie in den Java(TM) 2 SDK, Standard Edition Release Notes unter java.sun.com."_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodCreationFailed"_s,
			"{0} konnte nicht erstellt werden.  Grund: {1}"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ja"_s,
			"Japanisch"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ko"_s,
			"Koreanisch"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh"_s,
			"Chinesisch"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_CN"_s,
			"Vereinfachtes Chinesisch"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_TW"_s,
			"Traditionelles Chinesisch"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodSelectionMenu"_s,
			u"Eingabemethode auswählen"_s
		}),
		$$new($ObjectArray, {
			"AWT.Less"_s,
			"Kleiner als"_s
		}),
		$$new($ObjectArray, {
			"AWT.MoveCursor"_s,
			"Verschiebecursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.NEResizeCursor"_s,
			"Skaliercursor nach oben/rechts"_s
		}),
		$$new($ObjectArray, {
			"AWT.NResizeCursor"_s,
			"Skaliercursor nach oben"_s
		}),
		$$new($ObjectArray, {
			"AWT.NWResizeCursor"_s,
			"Skaliercursor nach oben/links"_s
		}),
		$$new($ObjectArray, {
			"AWT.SEResizeCursor"_s,
			"Skaliercursor nach unten/rechts"_s
		}),
		$$new($ObjectArray, {
			"AWT.SResizeCursor"_s,
			"Skaliercursor nach unten"_s
		}),
		$$new($ObjectArray, {
			"AWT.SWResizeCursor"_s,
			"Skaliercursor nach unten/links"_s
		}),
		$$new($ObjectArray, {
			"AWT.TextCursor"_s,
			"Textcursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.WResizeCursor"_s,
			"Skaliercursor nach links"_s
		}),
		$$new($ObjectArray, {
			"AWT.WaitCursor"_s,
			"Wartecursor"_s
		}),
		$$new($ObjectArray, {
			"AWT.accept"_s,
			"Akzeptieren"_s
		}),
		$$new($ObjectArray, {
			"AWT.add"_s,
			"NumPad +"_s
		}),
		$$new($ObjectArray, {
			"AWT.again"_s,
			"Wiederholen"_s
		}),
		$$new($ObjectArray, {
			"AWT.allCandidates"_s,
			"Alle Kandidaten"_s
		}),
		$$new($ObjectArray, {
			"AWT.alphanumeric"_s,
			"Alphanumerisch"_s
		}),
		$$new($ObjectArray, {
			"AWT.alt"_s,
			"Alt"_s
		}),
		$$new($ObjectArray, {
			"AWT.altGraph"_s,
			"Alt Gr"_s
		}),
		$$new($ObjectArray, {
			"AWT.ampersand"_s,
			"Et-Zeichen"_s
		}),
		$$new($ObjectArray, {
			"AWT.asterisk"_s,
			"Sternchen"_s
		}),
		$$new($ObjectArray, {
			"AWT.at"_s,
			"Klammeraffe"_s
		}),
		$$new($ObjectArray, {
			"AWT.backQuote"_s,
			u"Schließendes Anführungszeichen"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSlash"_s,
			u"Umgekehrter Schrägstrich"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSpace"_s,
			u"Rücktaste"_s
		}),
		$$new($ObjectArray, {
			"AWT.begin"_s,
			"Anfang"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceLeft"_s,
			"Linke geschweifte Klammer"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceRight"_s,
			"Rechte geschweifte Klammer"_s
		}),
		$$new($ObjectArray, {
			"AWT.cancel"_s,
			"Abbrechen"_s
		}),
		$$new($ObjectArray, {
			"AWT.capsLock"_s,
			"Feststelltaste"_s
		}),
		$$new($ObjectArray, {
			"AWT.circumflex"_s,
			"Zirkumflex"_s
		}),
		$$new($ObjectArray, {
			"AWT.clear"_s,
			u"Löschen"_s
		}),
		$$new($ObjectArray, {
			"AWT.closeBracket"_s,
			u"Schließende Klammer"_s
		}),
		$$new($ObjectArray, {
			"AWT.codeInput"_s,
			"Codeeingabe"_s
		}),
		$$new($ObjectArray, {
			"AWT.colon"_s,
			"Doppelpunkt"_s
		}),
		$$new($ObjectArray, {
			"AWT.comma"_s,
			"Komma"_s
		}),
		$$new($ObjectArray, {
			"AWT.compose"_s,
			"Verfassen"_s
		}),
		$$new($ObjectArray, {
			"AWT.context"_s,
			u"Kontextmenü"_s
		}),
		$$new($ObjectArray, {
			"AWT.control"_s,
			"Strg"_s
		}),
		$$new($ObjectArray, {
			"AWT.convert"_s,
			"Konvertieren"_s
		}),
		$$new($ObjectArray, {
			"AWT.copy"_s,
			"Kopieren"_s
		}),
		$$new($ObjectArray, {
			"AWT.cut"_s,
			"Ausschneiden"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveDot"_s,
			"Oberer Punkt (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveRing"_s,
			"Oberer Ring (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAcute"_s,
			"Akut (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadBreve"_s,
			"Breve (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCaron"_s,
			"Caron (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCedilla"_s,
			"Cedille (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCircumflex"_s,
			"Zirkumflex (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDiaeresis"_s,
			"Trema (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDoubleAcute"_s,
			"Doppelakut (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadGrave"_s,
			"Gravis (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadIota"_s,
			"Iota (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadMacron"_s,
			"Macron (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadOgonek"_s,
			"Ogonek (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadSemivoicedSound"_s,
			"Halbstimmhaft (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadTilde"_s,
			"Tilde (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadVoicedSound"_s,
			"Stimmhaft (Dead)"_s
		}),
		$$new($ObjectArray, {
			"AWT.decimal"_s,
			"NumPad ."_s
		}),
		$$new($ObjectArray, {
			"AWT.delete"_s,
			"Entf"_s
		}),
		$$new($ObjectArray, {
			"AWT.divide"_s,
			"NumPad /"_s
		}),
		$$new($ObjectArray, {
			"AWT.dollar"_s,
			"Dollarzeichen"_s
		}),
		$$new($ObjectArray, {
			"AWT.down"_s,
			"Unten"_s
		}),
		$$new($ObjectArray, {
			"AWT.end"_s,
			"Ende"_s
		}),
		$$new($ObjectArray, {
			"AWT.enter"_s,
			"Eingabe"_s
		}),
		$$new($ObjectArray, {
			"AWT.equals"_s,
			"Entspricht"_s
		}),
		$$new($ObjectArray, {
			"AWT.escape"_s,
			"ESC"_s
		}),
		$$new($ObjectArray, {
			"AWT.euro"_s,
			"Euro"_s
		}),
		$$new($ObjectArray, {
			"AWT.exclamationMark"_s,
			"Ausrufezeichen"_s
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
			"Abschluss"_s
		}),
		$$new($ObjectArray, {
			"AWT.find"_s,
			"Suchen"_s
		}),
		$$new($ObjectArray, {
			"AWT.fullWidth"_s,
			"Volle Breite"_s
		}),
		$$new($ObjectArray, {
			"AWT.greater"_s,
			u"Größer als"_s
		}),
		$$new($ObjectArray, {
			"AWT.halfWidth"_s,
			"Halbe Breite"_s
		}),
		$$new($ObjectArray, {
			"AWT.help"_s,
			"Hilfe"_s
		}),
		$$new($ObjectArray, {
			"AWT.hiragana"_s,
			"Hiragana"_s
		}),
		$$new($ObjectArray, {
			"AWT.home"_s,
			"Pos 1"_s
		}),
		$$new($ObjectArray, {
			"AWT.inputMethodOnOff"_s,
			"Eingabemethode ein/aus"_s
		}),
		$$new($ObjectArray, {
			"AWT.insert"_s,
			"Einfg"_s
		}),
		$$new($ObjectArray, {
			"AWT.invertedExclamationMark"_s,
			"Umgekehrtes Ausrufezeichen"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseHiragana"_s,
			"Japanisch (Hiragana)"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseKatakana"_s,
			"Japanisch (Katakana)"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseRoman"_s,
			"Japanisch (Latein)"_s
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
			"Links"_s
		}),
		$$new($ObjectArray, {
			"AWT.leftParenthesis"_s,
			"Linke Klammer"_s
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
			u"Modusänderung"_s
		}),
		$$new($ObjectArray, {
			"AWT.multiply"_s,
			"NumPad *"_s
		}),
		$$new($ObjectArray, {
			"AWT.noconvert"_s,
			"Nicht konvertieren"_s
		}),
		$$new($ObjectArray, {
			"AWT.numLock"_s,
			"Num"_s
		}),
		$$new($ObjectArray, {
			"AWT.numberSign"_s,
			"Nummernzeichen"_s
		}),
		$$new($ObjectArray, {
			"AWT.numpad"_s,
			"NumPad"_s
		}),
		$$new($ObjectArray, {
			"AWT.openBracket"_s,
			u"Öffnende Klammer"_s
		}),
		$$new($ObjectArray, {
			"AWT.paste"_s,
			u"Einfügen"_s
		}),
		$$new($ObjectArray, {
			"AWT.pause"_s,
			"Pause"_s
		}),
		$$new($ObjectArray, {
			"AWT.period"_s,
			"Punkt"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgdn"_s,
			"Bild ab"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgup"_s,
			"Bild auf"_s
		}),
		$$new($ObjectArray, {
			"AWT.plus"_s,
			"Plus"_s
		}),
		$$new($ObjectArray, {
			"AWT.previousCandidate"_s,
			"Vorheriger Kandidat"_s
		}),
		$$new($ObjectArray, {
			"AWT.printScreen"_s,
			"Druck"_s
		}),
		$$new($ObjectArray, {
			"AWT.props"_s,
			"Eigenschaften"_s
		}),
		$$new($ObjectArray, {
			"AWT.quote"_s,
			u"Anführungszeichen"_s
		}),
		$$new($ObjectArray, {
			"AWT.quoteDbl"_s,
			u"Doppelte Anführungszeichen"_s
		}),
		$$new($ObjectArray, {
			"AWT.right"_s,
			"Rechts"_s
		}),
		$$new($ObjectArray, {
			"AWT.rightParenthesis"_s,
			"Rechte Klammer"_s
		}),
		$$new($ObjectArray, {
			"AWT.romanCharacters"_s,
			"Lateinische Zeichen"_s
		}),
		$$new($ObjectArray, {
			"AWT.scrollLock"_s,
			"Rollen"_s
		}),
		$$new($ObjectArray, {
			"AWT.semicolon"_s,
			"Semikolon"_s
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
			"Umschalt"_s
		}),
		$$new($ObjectArray, {
			"AWT.slash"_s,
			u"Schrägstrich"_s
		}),
		$$new($ObjectArray, {
			"AWT.space"_s,
			"Leertaste"_s
		}),
		$$new($ObjectArray, {
			"AWT.stop"_s,
			"Stopp"_s
		}),
		$$new($ObjectArray, {
			"AWT.subtract"_s,
			"NumPad -"_s
		}),
		$$new($ObjectArray, {
			"AWT.tab"_s,
			"Tabulator"_s
		}),
		$$new($ObjectArray, {
			"AWT.undefined"_s,
			"Undefiniert"_s
		}),
		$$new($ObjectArray, {
			"AWT.underscore"_s,
			"Unterstrich"_s
		}),
		$$new($ObjectArray, {
			"AWT.undo"_s,
			u"Rückgängig"_s
		}),
		$$new($ObjectArray, {
			"AWT.unknown"_s,
			"Unbekannt"_s
		}),
		$$new($ObjectArray, {
			"AWT.up"_s,
			"Oben"_s
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
			"On-the-Spot"_s
		})
	});
}

awt_de::awt_de() {
}

$Class* awt_de::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awt_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awt_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.resources.awt_de",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awt_de, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awt_de);
	});
	return class$;
}

$Class* awt_de::class$ = nullptr;

		} // resources
	} // awt
} // sun
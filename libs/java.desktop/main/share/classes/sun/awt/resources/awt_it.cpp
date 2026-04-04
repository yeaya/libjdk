#include <sun/awt/resources/awt_it.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

void awt_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_it::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AWT.CompositionWindowTitle"_s,
			"Finestra di immissione"_s
		}),
		$$new($ObjectArray, {
			"AWT.CrosshairCursor"_s,
			"Puntatore a croce"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultCursor"_s,
			"Cursore predefinito"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDragCursor"_s,
			"Cursore di trascinamento predefinito"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDropCursor"_s,
			"Cursore di rilasciamento predefinito"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultNoDropCursor"_s,
			"Cursore NoDrag predefinito"_s
		}),
		$$new($ObjectArray, {
			"AWT.EResizeCursor"_s,
			"Cursore di ridimensionamento orientale"_s
		}),
		$$new($ObjectArray, {
			"AWT.HandCursor"_s,
			"Cursore mano"_s
		}),
		$$new($ObjectArray, {
			"AWT.HostInputMethodDisplayName"_s,
			"Metodi di immissione di sistema"_s
		}),
		$$new($ObjectArray, {
			"AWT.InconsistentDLLsWarning"_s,
			"Le operazioni sul testo possono non funzionare correttamente, a causa di una serie non coerente di DLL installate sul sistema. Per ulteriori informazioni su questo problema e per la soluzione suggerita, vedere le note di rilascio di Java(TM) 2 SDK, Standard Edition su java.sun.com."_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodCreationFailed"_s,
			"Impossibile creare {0}.  Motivo: {1}"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ja"_s,
			"Giapponese"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ko"_s,
			"Coreano"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh"_s,
			"Cinese"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_CN"_s,
			"Cinese semplificato"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_TW"_s,
			"Cinese tradizionale"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodSelectionMenu"_s,
			"Seleziona metodo di immissione"_s
		}),
		$$new($ObjectArray, {
			"AWT.Less"_s,
			"Minore"_s
		}),
		$$new($ObjectArray, {
			"AWT.MoveCursor"_s,
			"Sposta cursore"_s
		}),
		$$new($ObjectArray, {
			"AWT.NEResizeCursor"_s,
			"Cursore di ridimensionamento nordorientale"_s
		}),
		$$new($ObjectArray, {
			"AWT.NResizeCursor"_s,
			"Cursore di ridimensionamento settentrionale"_s
		}),
		$$new($ObjectArray, {
			"AWT.NWResizeCursor"_s,
			"Cursore di ridimensionamento nordoccidentale"_s
		}),
		$$new($ObjectArray, {
			"AWT.SEResizeCursor"_s,
			"Cursore di ridimensionamento sudorientale"_s
		}),
		$$new($ObjectArray, {
			"AWT.SResizeCursor"_s,
			"Cursore di ridimensionamento meridionale"_s
		}),
		$$new($ObjectArray, {
			"AWT.SWResizeCursor"_s,
			"Cursore di ridimensionamento sudoccidentale"_s
		}),
		$$new($ObjectArray, {
			"AWT.TextCursor"_s,
			"Cursore testo"_s
		}),
		$$new($ObjectArray, {
			"AWT.WResizeCursor"_s,
			"Cursore di ridimensionamento occidentale"_s
		}),
		$$new($ObjectArray, {
			"AWT.WaitCursor"_s,
			"Cursore attesa"_s
		}),
		$$new($ObjectArray, {
			"AWT.accept"_s,
			"Accetto"_s
		}),
		$$new($ObjectArray, {
			"AWT.add"_s,
			"NumPad +"_s
		}),
		$$new($ObjectArray, {
			"AWT.again"_s,
			"Ancora"_s
		}),
		$$new($ObjectArray, {
			"AWT.allCandidates"_s,
			"Tutti i candidati"_s
		}),
		$$new($ObjectArray, {
			"AWT.alphanumeric"_s,
			"Alfanumerico"_s
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
			"E commerciale"_s
		}),
		$$new($ObjectArray, {
			"AWT.asterisk"_s,
			"Asterisco"_s
		}),
		$$new($ObjectArray, {
			"AWT.at"_s,
			"Chiocciola"_s
		}),
		$$new($ObjectArray, {
			"AWT.backQuote"_s,
			"Apice invertito"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSlash"_s,
			"Barra rovesciata"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSpace"_s,
			"Backspace"_s
		}),
		$$new($ObjectArray, {
			"AWT.begin"_s,
			"Inizio"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceLeft"_s,
			"Parentesi graffa aperta"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceRight"_s,
			"Parentesi graffa chiusa"_s
		}),
		$$new($ObjectArray, {
			"AWT.cancel"_s,
			"Annulla"_s
		}),
		$$new($ObjectArray, {
			"AWT.capsLock"_s,
			"Bloc Maiusc"_s
		}),
		$$new($ObjectArray, {
			"AWT.circumflex"_s,
			"Circonflesso"_s
		}),
		$$new($ObjectArray, {
			"AWT.clear"_s,
			"Cancella"_s
		}),
		$$new($ObjectArray, {
			"AWT.closeBracket"_s,
			"Parentesi quadra chiusa"_s
		}),
		$$new($ObjectArray, {
			"AWT.codeInput"_s,
			"Immissione codice"_s
		}),
		$$new($ObjectArray, {
			"AWT.colon"_s,
			"Due punti"_s
		}),
		$$new($ObjectArray, {
			"AWT.comma"_s,
			"Virgola"_s
		}),
		$$new($ObjectArray, {
			"AWT.compose"_s,
			"Componi"_s
		}),
		$$new($ObjectArray, {
			"AWT.context"_s,
			"Menu di scelta rapida"_s
		}),
		$$new($ObjectArray, {
			"AWT.control"_s,
			"Ctrl"_s
		}),
		$$new($ObjectArray, {
			"AWT.convert"_s,
			"Converti"_s
		}),
		$$new($ObjectArray, {
			"AWT.copy"_s,
			"Copia"_s
		}),
		$$new($ObjectArray, {
			"AWT.cut"_s,
			"Taglia"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveDot"_s,
			"Punto superiore non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveRing"_s,
			"Cerchio superiore non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAcute"_s,
			"Acuto non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadBreve"_s,
			"Breve non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCaron"_s,
			"Caron non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCedilla"_s,
			"Cediglia non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCircumflex"_s,
			"Circonflesso non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDiaeresis"_s,
			"Dieresi non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDoubleAcute"_s,
			"Acuto doppio non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadGrave"_s,
			"Grave non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadIota"_s,
			"Iota non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadMacron"_s,
			"Macron non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadOgonek"_s,
			"Ogonek non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadSemivoicedSound"_s,
			"Suono semivocalizzato non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadTilde"_s,
			"Tilde non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadVoicedSound"_s,
			"Suono vocalizzato non attivo"_s
		}),
		$$new($ObjectArray, {
			"AWT.decimal"_s,
			"NumPad ."_s
		}),
		$$new($ObjectArray, {
			"AWT.delete"_s,
			"Elimina"_s
		}),
		$$new($ObjectArray, {
			"AWT.divide"_s,
			"NumPad /"_s
		}),
		$$new($ObjectArray, {
			"AWT.dollar"_s,
			"Dollaro"_s
		}),
		$$new($ObjectArray, {
			"AWT.down"_s,
			u"Giù"_s
		}),
		$$new($ObjectArray, {
			"AWT.end"_s,
			"Fine"_s
		}),
		$$new($ObjectArray, {
			"AWT.enter"_s,
			"Invio"_s
		}),
		$$new($ObjectArray, {
			"AWT.equals"_s,
			"Uguale"_s
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
			"Punto esclamativo"_s
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
			"Finale"_s
		}),
		$$new($ObjectArray, {
			"AWT.find"_s,
			"Trova"_s
		}),
		$$new($ObjectArray, {
			"AWT.fullWidth"_s,
			"Spessore pieno"_s
		}),
		$$new($ObjectArray, {
			"AWT.greater"_s,
			"Maggiore"_s
		}),
		$$new($ObjectArray, {
			"AWT.halfWidth"_s,
			"Spessore ridotto"_s
		}),
		$$new($ObjectArray, {
			"AWT.help"_s,
			"?"_s
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
			"Metodo immissione On/Off"_s
		}),
		$$new($ObjectArray, {
			"AWT.insert"_s,
			"Ins"_s
		}),
		$$new($ObjectArray, {
			"AWT.invertedExclamationMark"_s,
			"Punto esclamativo invertito"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseHiragana"_s,
			"Hiragana giapponese"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseKatakana"_s,
			"Katakana giapponese"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseRoman"_s,
			"Romano Giapponese"_s
		}),
		$$new($ObjectArray, {
			"AWT.kana"_s,
			"Kana"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanaLock"_s,
			"Blocco Kana"_s
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
			"Sinistra"_s
		}),
		$$new($ObjectArray, {
			"AWT.leftParenthesis"_s,
			"Parentesi aperta"_s
		}),
		$$new($ObjectArray, {
			"AWT.meta"_s,
			"Meta"_s
		}),
		$$new($ObjectArray, {
			"AWT.minus"_s,
			"Meno"_s
		}),
		$$new($ObjectArray, {
			"AWT.modechange"_s,
			u"Modifica modalità"_s
		}),
		$$new($ObjectArray, {
			"AWT.multiply"_s,
			"NumPad *"_s
		}),
		$$new($ObjectArray, {
			"AWT.noconvert"_s,
			"Non convertire"_s
		}),
		$$new($ObjectArray, {
			"AWT.numLock"_s,
			"Bloc Num"_s
		}),
		$$new($ObjectArray, {
			"AWT.numberSign"_s,
			"Cancelletto"_s
		}),
		$$new($ObjectArray, {
			"AWT.numpad"_s,
			"NumPad"_s
		}),
		$$new($ObjectArray, {
			"AWT.openBracket"_s,
			"Parentesi quadra aperta"_s
		}),
		$$new($ObjectArray, {
			"AWT.paste"_s,
			"Incolla"_s
		}),
		$$new($ObjectArray, {
			"AWT.pause"_s,
			"Sospendi"_s
		}),
		$$new($ObjectArray, {
			"AWT.period"_s,
			"Punto"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgdn"_s,
			u"Pg Giù"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgup"_s,
			"Pg Su"_s
		}),
		$$new($ObjectArray, {
			"AWT.plus"_s,
			u"Più"_s
		}),
		$$new($ObjectArray, {
			"AWT.previousCandidate"_s,
			"Candidato precedente"_s
		}),
		$$new($ObjectArray, {
			"AWT.printScreen"_s,
			"Stamp"_s
		}),
		$$new($ObjectArray, {
			"AWT.props"_s,
			u"Proprietà"_s
		}),
		$$new($ObjectArray, {
			"AWT.quote"_s,
			"Apice"_s
		}),
		$$new($ObjectArray, {
			"AWT.quoteDbl"_s,
			"Virgolette"_s
		}),
		$$new($ObjectArray, {
			"AWT.right"_s,
			"Destra"_s
		}),
		$$new($ObjectArray, {
			"AWT.rightParenthesis"_s,
			"Parentesi chiusa"_s
		}),
		$$new($ObjectArray, {
			"AWT.romanCharacters"_s,
			"Caratteri romani"_s
		}),
		$$new($ObjectArray, {
			"AWT.scrollLock"_s,
			"Bloc Scorr"_s
		}),
		$$new($ObjectArray, {
			"AWT.semicolon"_s,
			"Punto e virgola"_s
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
			"Maiusc"_s
		}),
		$$new($ObjectArray, {
			"AWT.slash"_s,
			"Barra"_s
		}),
		$$new($ObjectArray, {
			"AWT.space"_s,
			"Barra spaziatrice"_s
		}),
		$$new($ObjectArray, {
			"AWT.stop"_s,
			"Arresta"_s
		}),
		$$new($ObjectArray, {
			"AWT.subtract"_s,
			"NumPad -"_s
		}),
		$$new($ObjectArray, {
			"AWT.tab"_s,
			"Tabulazione"_s
		}),
		$$new($ObjectArray, {
			"AWT.undefined"_s,
			"Non definito"_s
		}),
		$$new($ObjectArray, {
			"AWT.underscore"_s,
			"Sottolineatura"_s
		}),
		$$new($ObjectArray, {
			"AWT.undo"_s,
			"Annulla"_s
		}),
		$$new($ObjectArray, {
			"AWT.unknown"_s,
			"Sconosciuto"_s
		}),
		$$new($ObjectArray, {
			"AWT.up"_s,
			"Su"_s
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
			"immediato"_s
		})
	});
}

awt_it::awt_it() {
}

$Class* awt_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awt_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awt_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.resources.awt_it",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awt_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awt_it);
	});
	return class$;
}

$Class* awt_it::class$ = nullptr;

		} // resources
	} // awt
} // sun
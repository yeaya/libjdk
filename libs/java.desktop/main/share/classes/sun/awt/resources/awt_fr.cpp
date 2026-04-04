#include <sun/awt/resources/awt_fr.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

void awt_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_fr::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AWT.CompositionWindowTitle"_s,
			u"Fenêtre d\'entrée"_s
		}),
		$$new($ObjectArray, {
			"AWT.CrosshairCursor"_s,
			u"Curseur réticulaire"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultCursor"_s,
			u"Curseur par défaut"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDragCursor"_s,
			u"Curseur de déplacement par défaut"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDropCursor"_s,
			u"Curseur de pose par défaut"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultNoDropCursor"_s,
			u"Curseur non déplaçant par défaut"_s
		}),
		$$new($ObjectArray, {
			"AWT.EResizeCursor"_s,
			"Curseur de redimensionnement est"_s
		}),
		$$new($ObjectArray, {
			"AWT.HandCursor"_s,
			"Curseur en forme de main"_s
		}),
		$$new($ObjectArray, {
			"AWT.HostInputMethodDisplayName"_s,
			u"Méthodes d\'entrée système"_s
		}),
		$$new($ObjectArray, {
			"AWT.InconsistentDLLsWarning"_s,
			u"Il se peut que les opérations liées au texte ne fonctionnent pas correctement lorsqu\'un ensemble incohérent de DLL est installé sur le système. Vous trouverez plus de détails sur ce problème et sur sa solution dans le document Java(TM) 2 SDK, Standard Edition Release Notes sur java.sun.com."_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodCreationFailed"_s,
			u"Impossible de créer {0}.  Raison : {1}"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ja"_s,
			"Japonais"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ko"_s,
			u"Coréen"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh"_s,
			"Chinois"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_CN"_s,
			u"Chinois simplifié"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_TW"_s,
			"Chinois traditionnel"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodSelectionMenu"_s,
			u"Sélectionner la méthode d\'entrée"_s
		}),
		$$new($ObjectArray, {
			"AWT.Less"_s,
			u"Inférieur à"_s
		}),
		$$new($ObjectArray, {
			"AWT.MoveCursor"_s,
			u"Curseur de déplacement"_s
		}),
		$$new($ObjectArray, {
			"AWT.NEResizeCursor"_s,
			"Curseur de redimensionnement nord-est"_s
		}),
		$$new($ObjectArray, {
			"AWT.NResizeCursor"_s,
			"Curseur de redimensionnement nord"_s
		}),
		$$new($ObjectArray, {
			"AWT.NWResizeCursor"_s,
			"Curseur de redimensionnement nord-ouest"_s
		}),
		$$new($ObjectArray, {
			"AWT.SEResizeCursor"_s,
			"Curseur de redimensionnement sud-est"_s
		}),
		$$new($ObjectArray, {
			"AWT.SResizeCursor"_s,
			"Curseur de redimensionnement sud"_s
		}),
		$$new($ObjectArray, {
			"AWT.SWResizeCursor"_s,
			"Curseur de redimensionnement sud-ouest"_s
		}),
		$$new($ObjectArray, {
			"AWT.TextCursor"_s,
			"Curseur de texte"_s
		}),
		$$new($ObjectArray, {
			"AWT.WResizeCursor"_s,
			"Curseur de redimensionnement ouest"_s
		}),
		$$new($ObjectArray, {
			"AWT.WaitCursor"_s,
			"Curseur d\'attente"_s
		}),
		$$new($ObjectArray, {
			"AWT.accept"_s,
			"Accepter"_s
		}),
		$$new($ObjectArray, {
			"AWT.add"_s,
			u"Pavé numérique +"_s
		}),
		$$new($ObjectArray, {
			"AWT.again"_s,
			u"Répéter"_s
		}),
		$$new($ObjectArray, {
			"AWT.allCandidates"_s,
			"Tous les candidats"_s
		}),
		$$new($ObjectArray, {
			"AWT.alphanumeric"_s,
			u"Alphanumérique"_s
		}),
		$$new($ObjectArray, {
			"AWT.alt"_s,
			"Alt"_s
		}),
		$$new($ObjectArray, {
			"AWT.altGraph"_s,
			"Alt graphique"_s
		}),
		$$new($ObjectArray, {
			"AWT.ampersand"_s,
			"Esperluette"_s
		}),
		$$new($ObjectArray, {
			"AWT.asterisk"_s,
			u"Astérisque"_s
		}),
		$$new($ObjectArray, {
			"AWT.at"_s,
			"A commercial"_s
		}),
		$$new($ObjectArray, {
			"AWT.backQuote"_s,
			"Accent grave avec chasse"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSlash"_s,
			"Barre oblique inverse"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSpace"_s,
			u"Retour arrière"_s
		}),
		$$new($ObjectArray, {
			"AWT.begin"_s,
			u"Début"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceLeft"_s,
			"Accolade ouvrante"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceRight"_s,
			"Accolade fermante"_s
		}),
		$$new($ObjectArray, {
			"AWT.cancel"_s,
			"Annuler"_s
		}),
		$$new($ObjectArray, {
			"AWT.capsLock"_s,
			"Verrouillage des majuscules"_s
		}),
		$$new($ObjectArray, {
			"AWT.circumflex"_s,
			"Circonflexe"_s
		}),
		$$new($ObjectArray, {
			"AWT.clear"_s,
			"Effacer"_s
		}),
		$$new($ObjectArray, {
			"AWT.closeBracket"_s,
			"Crochet fermant"_s
		}),
		$$new($ObjectArray, {
			"AWT.codeInput"_s,
			u"Entrée de code"_s
		}),
		$$new($ObjectArray, {
			"AWT.colon"_s,
			"Deux-points"_s
		}),
		$$new($ObjectArray, {
			"AWT.comma"_s,
			"Virgule"_s
		}),
		$$new($ObjectArray, {
			"AWT.compose"_s,
			"Composer"_s
		}),
		$$new($ObjectArray, {
			"AWT.context"_s,
			"Menu contextuel"_s
		}),
		$$new($ObjectArray, {
			"AWT.control"_s,
			"Ctrl"_s
		}),
		$$new($ObjectArray, {
			"AWT.convert"_s,
			"Convertir"_s
		}),
		$$new($ObjectArray, {
			"AWT.copy"_s,
			"Copier"_s
		}),
		$$new($ObjectArray, {
			"AWT.cut"_s,
			"Couper"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveDot"_s,
			"Point en chef"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveRing"_s,
			"Anneau en chef"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAcute"_s,
			"Accent aigu"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadBreve"_s,
			"Dead Breve"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCaron"_s,
			"Caron"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCedilla"_s,
			u"Cédille"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCircumflex"_s,
			"Accent circonflexe"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDiaeresis"_s,
			u"Tréma"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDoubleAcute"_s,
			"Double accent aigu"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadGrave"_s,
			"Accent grave"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadIota"_s,
			"Iota"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadMacron"_s,
			"Macron"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadOgonek"_s,
			"Ogonek"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadSemivoicedSound"_s,
			u"Son semi-voisé"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadTilde"_s,
			"Tilde"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadVoicedSound"_s,
			u"Son voisé"_s
		}),
		$$new($ObjectArray, {
			"AWT.decimal"_s,
			u"Pavé numérique ."_s
		}),
		$$new($ObjectArray, {
			"AWT.delete"_s,
			"Supprimer"_s
		}),
		$$new($ObjectArray, {
			"AWT.divide"_s,
			u"Pavé numérique /"_s
		}),
		$$new($ObjectArray, {
			"AWT.dollar"_s,
			"Dollar"_s
		}),
		$$new($ObjectArray, {
			"AWT.down"_s,
			"Bas"_s
		}),
		$$new($ObjectArray, {
			"AWT.end"_s,
			"Fin"_s
		}),
		$$new($ObjectArray, {
			"AWT.enter"_s,
			u"Entrée"_s
		}),
		$$new($ObjectArray, {
			"AWT.equals"_s,
			"Egal"_s
		}),
		$$new($ObjectArray, {
			"AWT.escape"_s,
			"Echap"_s
		}),
		$$new($ObjectArray, {
			"AWT.euro"_s,
			"Euro"_s
		}),
		$$new($ObjectArray, {
			"AWT.exclamationMark"_s,
			"Point d\'exclamation"_s
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
			"Rechercher"_s
		}),
		$$new($ObjectArray, {
			"AWT.fullWidth"_s,
			"Pleine largeur"_s
		}),
		$$new($ObjectArray, {
			"AWT.greater"_s,
			u"Supérieur à"_s
		}),
		$$new($ObjectArray, {
			"AWT.halfWidth"_s,
			"Demi-largeur"_s
		}),
		$$new($ObjectArray, {
			"AWT.help"_s,
			"Aide"_s
		}),
		$$new($ObjectArray, {
			"AWT.hiragana"_s,
			"Hiragana"_s
		}),
		$$new($ObjectArray, {
			"AWT.home"_s,
			"Origine"_s
		}),
		$$new($ObjectArray, {
			"AWT.inputMethodOnOff"_s,
			u"Activation/désactivation de la méthode d\'entrée"_s
		}),
		$$new($ObjectArray, {
			"AWT.insert"_s,
			u"Insérer"_s
		}),
		$$new($ObjectArray, {
			"AWT.invertedExclamationMark"_s,
			u"Point d\'exclamation inversé"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseHiragana"_s,
			"Japonais Hiragana"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseKatakana"_s,
			"Japonais Katakana"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseRoman"_s,
			"Japonais romain"_s
		}),
		$$new($ObjectArray, {
			"AWT.kana"_s,
			"Kana"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanaLock"_s,
			"Verrouiller Kana"_s
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
			"Gauche"_s
		}),
		$$new($ObjectArray, {
			"AWT.leftParenthesis"_s,
			u"Parenthèse ouvrante"_s
		}),
		$$new($ObjectArray, {
			"AWT.meta"_s,
			u"Méta"_s
		}),
		$$new($ObjectArray, {
			"AWT.minus"_s,
			"Moins"_s
		}),
		$$new($ObjectArray, {
			"AWT.modechange"_s,
			"Changement de mode"_s
		}),
		$$new($ObjectArray, {
			"AWT.multiply"_s,
			u"Pavé numérique *"_s
		}),
		$$new($ObjectArray, {
			"AWT.noconvert"_s,
			"Ne pas convertir"_s
		}),
		$$new($ObjectArray, {
			"AWT.numLock"_s,
			u"Verrouillage du pavé numérique"_s
		}),
		$$new($ObjectArray, {
			"AWT.numberSign"_s,
			u"Dièse"_s
		}),
		$$new($ObjectArray, {
			"AWT.numpad"_s,
			u"Pavé numérique"_s
		}),
		$$new($ObjectArray, {
			"AWT.openBracket"_s,
			"Crochet ouvrant"_s
		}),
		$$new($ObjectArray, {
			"AWT.paste"_s,
			"Coller"_s
		}),
		$$new($ObjectArray, {
			"AWT.pause"_s,
			"Pause"_s
		}),
		$$new($ObjectArray, {
			"AWT.period"_s,
			"Point"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgdn"_s,
			"Page suivante"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgup"_s,
			u"Page précédente"_s
		}),
		$$new($ObjectArray, {
			"AWT.plus"_s,
			"Plus"_s
		}),
		$$new($ObjectArray, {
			"AWT.previousCandidate"_s,
			u"Candidat précédent"_s
		}),
		$$new($ObjectArray, {
			"AWT.printScreen"_s,
			u"Impression d\'écran"_s
		}),
		$$new($ObjectArray, {
			"AWT.props"_s,
			"Props"_s
		}),
		$$new($ObjectArray, {
			"AWT.quote"_s,
			"Apostrophe"_s
		}),
		$$new($ObjectArray, {
			"AWT.quoteDbl"_s,
			"Guillemets"_s
		}),
		$$new($ObjectArray, {
			"AWT.right"_s,
			"Droite"_s
		}),
		$$new($ObjectArray, {
			"AWT.rightParenthesis"_s,
			u"Parenthèse fermante"_s
		}),
		$$new($ObjectArray, {
			"AWT.romanCharacters"_s,
			u"Caractères romains"_s
		}),
		$$new($ObjectArray, {
			"AWT.scrollLock"_s,
			u"Verrouillage du défilement"_s
		}),
		$$new($ObjectArray, {
			"AWT.semicolon"_s,
			"Point-virgule"_s
		}),
		$$new($ObjectArray, {
			"AWT.separater"_s,
			u"Pavé numérique ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.separator"_s,
			u"Pavé numérique ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.shift"_s,
			"Maj"_s
		}),
		$$new($ObjectArray, {
			"AWT.slash"_s,
			"Barre oblique"_s
		}),
		$$new($ObjectArray, {
			"AWT.space"_s,
			"Espace"_s
		}),
		$$new($ObjectArray, {
			"AWT.stop"_s,
			u"Arrêter"_s
		}),
		$$new($ObjectArray, {
			"AWT.subtract"_s,
			u"Pavé numérique -"_s
		}),
		$$new($ObjectArray, {
			"AWT.tab"_s,
			"Tab"_s
		}),
		$$new($ObjectArray, {
			"AWT.undefined"_s,
			u"Non défini"_s
		}),
		$$new($ObjectArray, {
			"AWT.underscore"_s,
			"Trait de soulignement"_s
		}),
		$$new($ObjectArray, {
			"AWT.undo"_s,
			"Annuler"_s
		}),
		$$new($ObjectArray, {
			"AWT.unknown"_s,
			"Inconnu"_s
		}),
		$$new($ObjectArray, {
			"AWT.up"_s,
			"Haut"_s
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
			"sur place"_s
		})
	});
}

awt_fr::awt_fr() {
}

$Class* awt_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awt_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awt_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.resources.awt_fr",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awt_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awt_fr);
	});
	return class$;
}

$Class* awt_fr::class$ = nullptr;

		} // resources
	} // awt
} // sun
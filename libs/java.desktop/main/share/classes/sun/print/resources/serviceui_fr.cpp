#include <sun/print/resources/serviceui_fr.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

void serviceui_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_fr::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Automatic-Feeder"_s,
			"Alimentation automatique"_s
		}),
		$$new($ObjectArray, {
			"Cassette"_s,
			"Cassette"_s
		}),
		$$new($ObjectArray, {
			"Form-Source"_s,
			"Source du formulaire"_s
		}),
		$$new($ObjectArray, {
			"Large-Format"_s,
			"Grand format"_s
		}),
		$$new($ObjectArray, {
			"Manual-Envelope"_s,
			"Enveloppe (manuel)"_s
		}),
		$$new($ObjectArray, {
			"Small-Format"_s,
			"Petit format"_s
		}),
		$$new($ObjectArray, {
			"Tractor-Feeder"_s,
			"Alimentation en continu"_s
		}),
		$$new($ObjectArray, {
			"a"_s,
			u"Ingénierie A"_s
		}),
		$$new($ObjectArray, {
			"accepting-jobs"_s,
			u"Acceptation des tâches"_s
		}),
		$$new($ObjectArray, {
			"auto-select"_s,
			u"Sélection automatique"_s
		}),
		$$new($ObjectArray, {
			"b"_s,
			u"Ingénierie B"_s
		}),
		$$new($ObjectArray, {
			"border.chromaticity"_s,
			"Couleur"_s
		}),
		$$new($ObjectArray, {
			"border.copies"_s,
			"Copies"_s
		}),
		$$new($ObjectArray, {
			"border.jobattributes"_s,
			u"Attributs de tâche"_s
		}),
		$$new($ObjectArray, {
			"border.margins"_s,
			"Marges"_s
		}),
		$$new($ObjectArray, {
			"border.media"_s,
			"Support"_s
		}),
		$$new($ObjectArray, {
			"border.orientation"_s,
			"Orientation"_s
		}),
		$$new($ObjectArray, {
			"border.printrange"_s,
			"Plage d\'impression"_s
		}),
		$$new($ObjectArray, {
			"border.printservice"_s,
			"Service d\'impression"_s
		}),
		$$new($ObjectArray, {
			"border.quality"_s,
			u"Qualité"_s
		}),
		$$new($ObjectArray, {
			"border.sides"_s,
			u"Côtés"_s
		}),
		$$new($ObjectArray, {
			"bottom"_s,
			"Bas"_s
		}),
		$$new($ObjectArray, {
			"button.cancel"_s,
			"Annuler"_s
		}),
		$$new($ObjectArray, {
			"button.ok"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"button.print"_s,
			"Imprimer"_s
		}),
		$$new($ObjectArray, {
			"button.properties"_s,
			u"P&ropriétés..."_s
		}),
		$$new($ObjectArray, {
			"c"_s,
			u"Ingénierie C"_s
		}),
		$$new($ObjectArray, {
			"checkbox.collate"_s,
			"&Collationner"_s
		}),
		$$new($ObjectArray, {
			"checkbox.jobsheets"_s,
			u"Page de &bannière"_s
		}),
		$$new($ObjectArray, {
			"checkbox.printtofile"_s,
			"Imprimer dans un &fichier"_s
		}),
		$$new($ObjectArray, {
			"d"_s,
			u"Ingénierie D"_s
		}),
		$$new($ObjectArray, {
			"dialog.noprintermsg"_s,
			"Service d\'impression introuvable."_s
		}),
		$$new($ObjectArray, {
			"dialog.overwrite"_s,
			u"Ce fichier existe déjà. Remplacer le fichier existant ?"_s
		}),
		$$new($ObjectArray, {
			"dialog.owtitle"_s,
			"Imprimer dans un fichier"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtitle"_s,
			"Imprimer"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtofile"_s,
			"Imprimer dans un fichier"_s
		}),
		$$new($ObjectArray, {
			"dialog.pstitle"_s,
			"Mise en page"_s
		}),
		$$new($ObjectArray, {
			"dialog.writeerror"_s,
			u"Impossible d\'écrire dans le fichier :"_s
		}),
		$$new($ObjectArray, {
			"e"_s,
			u"Ingénierie E"_s
		}),
		$$new($ObjectArray, {
			"envelope"_s,
			"Enveloppe"_s
		}),
		$$new($ObjectArray, {
			"error.destination"_s,
			"Nom de fichier non valide ; recommencez"_s
		}),
		$$new($ObjectArray, {
			"error.pagerange"_s,
			u"Plage de pages non valide. Spécifiez les valeurs de nouveau (ex. : 1-3,5,7-10)"_s
		}),
		$$new($ObjectArray, {
			"executive"_s,
			"Administratif"_s
		}),
		$$new($ObjectArray, {
			"folio"_s,
			"Folio"_s
		}),
		$$new($ObjectArray, {
			"invite-envelope"_s,
			"Enveloppe invitation"_s
		}),
		$$new($ObjectArray, {
			"invoice"_s,
			"Facture"_s
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
			"Long ISO"_s
		}),
		$$new($ObjectArray, {
			"italian-envelope"_s,
			"Enveloppe Italie"_s
		}),
		$$new($ObjectArray, {
			"italy-envelope"_s,
			"Enveloppe Italie"_s
		}),
		$$new($ObjectArray, {
			"japanese-postcard"_s,
			"Carte postale (JIS)"_s
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
			"&bas"_s
		}),
		$$new($ObjectArray, {
			"label.inches"_s,
			"(po)"_s
		}),
		$$new($ObjectArray, {
			"label.info"_s,
			"Infos :"_s
		}),
		$$new($ObjectArray, {
			"label.jobname"_s,
			"Nom du tra&vail :"_s
		}),
		$$new($ObjectArray, {
			"label.leftmargin"_s,
			"gauc&he"_s
		}),
		$$new($ObjectArray, {
			"label.millimetres"_s,
			"(mm)"_s
		}),
		$$new($ObjectArray, {
			"label.numcopies"_s,
			"Nombre de c&opies :"_s
		}),
		$$new($ObjectArray, {
			"label.priority"_s,
			u"P&riorité :"_s
		}),
		$$new($ObjectArray, {
			"label.psname"_s,
			"&Nom :"_s
		}),
		$$new($ObjectArray, {
			"label.pstype"_s,
			"Type :"_s
		}),
		$$new($ObjectArray, {
			"label.rangeto"_s,
			"A"_s
		}),
		$$new($ObjectArray, {
			"label.rightmargin"_s,
			"&droite"_s
		}),
		$$new($ObjectArray, {
			"label.size"_s,
			"Tai&lle :"_s
		}),
		$$new($ObjectArray, {
			"label.source"_s,
			"Sour&ce :"_s
		}),
		$$new($ObjectArray, {
			"label.status"_s,
			"Statut :"_s
		}),
		$$new($ObjectArray, {
			"label.topmargin"_s,
			"&haut"_s
		}),
		$$new($ObjectArray, {
			"label.username"_s,
			"Nom ut&ilisateur :"_s
		}),
		$$new($ObjectArray, {
			"large-capacity"_s,
			u"Grande capacité"_s
		}),
		$$new($ObjectArray, {
			"ledger"_s,
			"Fiche"_s
		}),
		$$new($ObjectArray, {
			"main"_s,
			"Principal"_s
		}),
		$$new($ObjectArray, {
			"manual"_s,
			"Manuel"_s
		}),
		$$new($ObjectArray, {
			"middle"_s,
			"Centre"_s
		}),
		$$new($ObjectArray, {
			"monarch-envelope"_s,
			"Enveloppe Monarch"_s
		}),
		$$new($ObjectArray, {
			"na-10x13-envelope"_s,
			"Enveloppe 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-10x14-envelope"_s,
			"Enveloppe 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-10x15-envelope"_s,
			"Enveloppe 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-5x7"_s,
			"Papier 5x7 po"_s
		}),
		$$new($ObjectArray, {
			"na-6x9-envelope"_s,
			"Enveloppe 6x9"_s
		}),
		$$new($ObjectArray, {
			"na-7x9-envelope"_s,
			"Enveloppe 6x7"_s
		}),
		$$new($ObjectArray, {
			"na-8x10"_s,
			"Papier 8x10 po"_s
		}),
		$$new($ObjectArray, {
			"na-9x11-envelope"_s,
			"Enveloppe 9x11"_s
		}),
		$$new($ObjectArray, {
			"na-9x12-envelope"_s,
			"Enveloppe 9x12"_s
		}),
		$$new($ObjectArray, {
			"na-legal"_s,
			u"Légal"_s
		}),
		$$new($ObjectArray, {
			"na-letter"_s,
			"Lettre"_s
		}),
		$$new($ObjectArray, {
			"na-number-10-envelope"_s,
			u"Enveloppe n°10"_s
		}),
		$$new($ObjectArray, {
			"na-number-11-envelope"_s,
			u"Enveloppe n°11"_s
		}),
		$$new($ObjectArray, {
			"na-number-12-envelope"_s,
			u"Enveloppe n°12"_s
		}),
		$$new($ObjectArray, {
			"na-number-14-envelope"_s,
			u"Enveloppe n°14"_s
		}),
		$$new($ObjectArray, {
			"na-number-9-envelope"_s,
			u"Enveloppe n°9"_s
		}),
		$$new($ObjectArray, {
			"not-accepting-jobs"_s,
			u"Refus des tâches"_s
		}),
		$$new($ObjectArray, {
			"oufuko-postcard"_s,
			"Carte postale double (JIS)"_s
		}),
		$$new($ObjectArray, {
			"personal-envelope"_s,
			"Enveloppe personnelle"_s
		}),
		$$new($ObjectArray, {
			"quarto"_s,
			"Quarto"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.color"_s,
			"Coul&eur"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.draftq"_s,
			"Broui&llon"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.duplex"_s,
			"&Duplex"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.highq"_s,
			"Ma&x."_s
		}),
		$$new($ObjectArray, {
			"radiobutton.landscape"_s,
			"Pa&ysage"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.monochrome"_s,
			"Monoc&hrome"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.normalq"_s,
			"&Normal"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.oneside"_s,
			u"Un &côté"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.portrait"_s,
			"&Portrait"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangeall"_s,
			"&Tout"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangepages"_s,
			"Pag&es"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revlandscape"_s,
			u"Paysage i&nversé"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revportrait"_s,
			u"Portrait &inversé"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.tumble"_s,
			u"&Tête-bêche"_s
		}),
		$$new($ObjectArray, {
			"side"_s,
			u"Côté"_s
		}),
		$$new($ObjectArray, {
			"tab.appearance"_s,
			"&Apparence"_s
		}),
		$$new($ObjectArray, {
			"tab.general"_s,
			u"&Général"_s
		}),
		$$new($ObjectArray, {
			"tab.pagesetup"_s,
			"&Mise en page"_s
		}),
		$$new($ObjectArray, {
			"tabloid"_s,
			u"Tabloïd"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			"Haut"_s
		})
	});
}

serviceui_fr::serviceui_fr() {
}

$Class* serviceui_fr::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serviceui_fr, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serviceui_fr, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.resources.serviceui_fr",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serviceui_fr, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serviceui_fr);
	});
	return class$;
}

$Class* serviceui_fr::class$ = nullptr;

		} // resources
	} // print
} // sun
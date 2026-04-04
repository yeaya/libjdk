#include <sun/print/resources/serviceui_de.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

void serviceui_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_de::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Automatic-Feeder"_s,
			u"Automatische Zuführung"_s
		}),
		$$new($ObjectArray, {
			"Cassette"_s,
			"Kassette"_s
		}),
		$$new($ObjectArray, {
			"Form-Source"_s,
			"Formularquelle"_s
		}),
		$$new($ObjectArray, {
			"Large-Format"_s,
			u"Großformat"_s
		}),
		$$new($ObjectArray, {
			"Manual-Envelope"_s,
			u"Manuelle Umschlagzuführung"_s
		}),
		$$new($ObjectArray, {
			"Small-Format"_s,
			"Kleinformat"_s
		}),
		$$new($ObjectArray, {
			"Tractor-Feeder"_s,
			"Endlospapiereinzug"_s
		}),
		$$new($ObjectArray, {
			"a"_s,
			"Millimeterpapier A"_s
		}),
		$$new($ObjectArray, {
			"accepting-jobs"_s,
			"Jobs annehmen"_s
		}),
		$$new($ObjectArray, {
			"auto-select"_s,
			"Automatische Auswahl"_s
		}),
		$$new($ObjectArray, {
			"b"_s,
			"Millimeterpapier B"_s
		}),
		$$new($ObjectArray, {
			"border.chromaticity"_s,
			"Farbdarstellung"_s
		}),
		$$new($ObjectArray, {
			"border.copies"_s,
			"Kopien"_s
		}),
		$$new($ObjectArray, {
			"border.jobattributes"_s,
			"Jobattribute"_s
		}),
		$$new($ObjectArray, {
			"border.margins"_s,
			u"Ränder"_s
		}),
		$$new($ObjectArray, {
			"border.media"_s,
			"Medien"_s
		}),
		$$new($ObjectArray, {
			"border.orientation"_s,
			"Ausrichtung"_s
		}),
		$$new($ObjectArray, {
			"border.printrange"_s,
			"Druckbereich"_s
		}),
		$$new($ObjectArray, {
			"border.printservice"_s,
			"Druckservice"_s
		}),
		$$new($ObjectArray, {
			"border.quality"_s,
			u"Qualität"_s
		}),
		$$new($ObjectArray, {
			"border.sides"_s,
			"Seiten"_s
		}),
		$$new($ObjectArray, {
			"bottom"_s,
			"Unten"_s
		}),
		$$new($ObjectArray, {
			"button.cancel"_s,
			"Abbrechen"_s
		}),
		$$new($ObjectArray, {
			"button.ok"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"button.print"_s,
			"Drucken"_s
		}),
		$$new($ObjectArray, {
			"button.properties"_s,
			"E&igenschaften..."_s
		}),
		$$new($ObjectArray, {
			"c"_s,
			"Millimeterpapier C"_s
		}),
		$$new($ObjectArray, {
			"checkbox.collate"_s,
			"&Sortieren"_s
		}),
		$$new($ObjectArray, {
			"checkbox.jobsheets"_s,
			"Banner&seite"_s
		}),
		$$new($ObjectArray, {
			"checkbox.printtofile"_s,
			"Aus&gabe in Datei"_s
		}),
		$$new($ObjectArray, {
			"d"_s,
			"Millimeterpapier D"_s
		}),
		$$new($ObjectArray, {
			"dialog.noprintermsg"_s,
			"Kein Druckservice gefunden."_s
		}),
		$$new($ObjectArray, {
			"dialog.overwrite"_s,
			u"Diese Datei ist bereits vorhanden. Möchten Sie die vorhandene Datei überschreiben?"_s
		}),
		$$new($ObjectArray, {
			"dialog.owtitle"_s,
			"In Datei drucken"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtitle"_s,
			"Drucken"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtofile"_s,
			"In Datei drucken"_s
		}),
		$$new($ObjectArray, {
			"dialog.pstitle"_s,
			"Seite einrichten"_s
		}),
		$$new($ObjectArray, {
			"dialog.writeerror"_s,
			u"Schreiben in Datei nicht möglich:"_s
		}),
		$$new($ObjectArray, {
			"e"_s,
			"Millimeterpapier E"_s
		}),
		$$new($ObjectArray, {
			"envelope"_s,
			"Umschlag"_s
		}),
		$$new($ObjectArray, {
			"error.destination"_s,
			u"Ungültiger Dateiname. Wiederholen Sie den Vorgang"_s
		}),
		$$new($ObjectArray, {
			"error.pagerange"_s,
			u"Ungültiger Seitenbereich. Geben Sie die Werte erneut ein (Beispiel: 1-3,5,7-10)"_s
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
			"Einladungsumschlag"_s
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
			"Italy-Umschlag"_s
		}),
		$$new($ObjectArray, {
			"italy-envelope"_s,
			"Italy-Umschlag"_s
		}),
		$$new($ObjectArray, {
			"japanese-postcard"_s,
			"Postkarte (JIS)"_s
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
			"u&nten"_s
		}),
		$$new($ObjectArray, {
			"label.inches"_s,
			"(Zoll)"_s
		}),
		$$new($ObjectArray, {
			"label.info"_s,
			"Info:"_s
		}),
		$$new($ObjectArray, {
			"label.jobname"_s,
			"&Jobname:"_s
		}),
		$$new($ObjectArray, {
			"label.leftmargin"_s,
			"&links"_s
		}),
		$$new($ObjectArray, {
			"label.millimetres"_s,
			"(mm)"_s
		}),
		$$new($ObjectArray, {
			"label.numcopies"_s,
			"Anzahl &Kopien:"_s
		}),
		$$new($ObjectArray, {
			"label.priority"_s,
			u"P&riorität:"_s
		}),
		$$new($ObjectArray, {
			"label.psname"_s,
			"&Name:"_s
		}),
		$$new($ObjectArray, {
			"label.pstype"_s,
			"Typ:"_s
		}),
		$$new($ObjectArray, {
			"label.rangeto"_s,
			"Bis"_s
		}),
		$$new($ObjectArray, {
			"label.rightmargin"_s,
			"re&chts"_s
		}),
		$$new($ObjectArray, {
			"label.size"_s,
			u"G&röße:"_s
		}),
		$$new($ObjectArray, {
			"label.source"_s,
			"&Quelle:"_s
		}),
		$$new($ObjectArray, {
			"label.status"_s,
			"Status:"_s
		}),
		$$new($ObjectArray, {
			"label.topmargin"_s,
			"&oben"_s
		}),
		$$new($ObjectArray, {
			"label.username"_s,
			"&Benutzername:"_s
		}),
		$$new($ObjectArray, {
			"large-capacity"_s,
			u"Hohe Kapazität"_s
		}),
		$$new($ObjectArray, {
			"ledger"_s,
			"Ledger"_s
		}),
		$$new($ObjectArray, {
			"main"_s,
			"Haupt"_s
		}),
		$$new($ObjectArray, {
			"manual"_s,
			"Manuell"_s
		}),
		$$new($ObjectArray, {
			"middle"_s,
			"Mitte"_s
		}),
		$$new($ObjectArray, {
			"monarch-envelope"_s,
			"Monarch-Umschlag"_s
		}),
		$$new($ObjectArray, {
			"na-10x13-envelope"_s,
			"10x13-Umschlag"_s
		}),
		$$new($ObjectArray, {
			"na-10x14-envelope"_s,
			"10x14-Umschlag"_s
		}),
		$$new($ObjectArray, {
			"na-10x15-envelope"_s,
			"10x15-Umschlag"_s
		}),
		$$new($ObjectArray, {
			"na-5x7"_s,
			"5\" x 7\"-Papier"_s
		}),
		$$new($ObjectArray, {
			"na-6x9-envelope"_s,
			"6x9-Umschlag"_s
		}),
		$$new($ObjectArray, {
			"na-7x9-envelope"_s,
			"6x7-Umschlag"_s
		}),
		$$new($ObjectArray, {
			"na-8x10"_s,
			"8\" x 10\"-Papier"_s
		}),
		$$new($ObjectArray, {
			"na-9x11-envelope"_s,
			"9x11-Umschlag"_s
		}),
		$$new($ObjectArray, {
			"na-9x12-envelope"_s,
			"9x12-Umschlag"_s
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
			"Umschlag Nr. 10"_s
		}),
		$$new($ObjectArray, {
			"na-number-11-envelope"_s,
			"Umschlag Nr. 11"_s
		}),
		$$new($ObjectArray, {
			"na-number-12-envelope"_s,
			"Umschlag Nr. 12"_s
		}),
		$$new($ObjectArray, {
			"na-number-14-envelope"_s,
			"Umschlag Nr. 14"_s
		}),
		$$new($ObjectArray, {
			"na-number-9-envelope"_s,
			"Umschlag Nr. 9"_s
		}),
		$$new($ObjectArray, {
			"not-accepting-jobs"_s,
			"Jobs nicht annehmen"_s
		}),
		$$new($ObjectArray, {
			"oufuko-postcard"_s,
			"Doppelte Postkarte (JIS)"_s
		}),
		$$new($ObjectArray, {
			"personal-envelope"_s,
			u"Persönlicher Umschlag"_s
		}),
		$$new($ObjectArray, {
			"quarto"_s,
			"Quarto"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.color"_s,
			"&Farbe"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.draftq"_s,
			"Ent&wurf"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.duplex"_s,
			"Du&plex"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.highq"_s,
			"&Hoch"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.landscape"_s,
			"Querforma&t"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.monochrome"_s,
			"&Monochrom"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.normalq"_s,
			"&Normal"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.oneside"_s,
			"E&inseitig"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.portrait"_s,
			"Hochfor&mat"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangeall"_s,
			"A&lle"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangepages"_s,
			"Sei&ten"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revlandscape"_s,
			"Umgekehrtes Q&uerformat"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revportrait"_s,
			"Umgekehrtes &Hochformat"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.tumble"_s,
			"&Kalenderdruck"_s
		}),
		$$new($ObjectArray, {
			"side"_s,
			"Seite"_s
		}),
		$$new($ObjectArray, {
			"tab.appearance"_s,
			"&Darstellung"_s
		}),
		$$new($ObjectArray, {
			"tab.general"_s,
			"&Allgemein"_s
		}),
		$$new($ObjectArray, {
			"tab.pagesetup"_s,
			"Seite &einrichten"_s
		}),
		$$new($ObjectArray, {
			"tabloid"_s,
			"Tabloid"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			"Oben"_s
		})
	});
}

serviceui_de::serviceui_de() {
}

$Class* serviceui_de::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serviceui_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serviceui_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.resources.serviceui_de",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serviceui_de, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serviceui_de);
	});
	return class$;
}

$Class* serviceui_de::class$ = nullptr;

		} // resources
	} // print
} // sun
#include <sun/print/resources/serviceui_sv.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

void serviceui_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_sv::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Automatic-Feeder"_s,
			"Automatisk matning"_s
		}),
		$$new($ObjectArray, {
			"Cassette"_s,
			"Kassett"_s
		}),
		$$new($ObjectArray, {
			"Form-Source"_s,
			u"Formulärkälla"_s
		}),
		$$new($ObjectArray, {
			"Large-Format"_s,
			"Stort format"_s
		}),
		$$new($ObjectArray, {
			"Manual-Envelope"_s,
			"Manuell kuvertmatning"_s
		}),
		$$new($ObjectArray, {
			"Small-Format"_s,
			"Litet format"_s
		}),
		$$new($ObjectArray, {
			"Tractor-Feeder"_s,
			"Traktormatning"_s
		}),
		$$new($ObjectArray, {
			"a"_s,
			"Engineering A"_s
		}),
		$$new($ObjectArray, {
			"accepting-jobs"_s,
			"Accepterar jobb"_s
		}),
		$$new($ObjectArray, {
			"auto-select"_s,
			u"Välj automatiskt"_s
		}),
		$$new($ObjectArray, {
			"b"_s,
			"Engineering B"_s
		}),
		$$new($ObjectArray, {
			"border.chromaticity"_s,
			u"Färg"_s
		}),
		$$new($ObjectArray, {
			"border.copies"_s,
			"Antal exemplar"_s
		}),
		$$new($ObjectArray, {
			"border.jobattributes"_s,
			"Utskriftsattribut"_s
		}),
		$$new($ObjectArray, {
			"border.margins"_s,
			"Marginaler"_s
		}),
		$$new($ObjectArray, {
			"border.media"_s,
			"Media"_s
		}),
		$$new($ObjectArray, {
			"border.orientation"_s,
			"Orientering"_s
		}),
		$$new($ObjectArray, {
			"border.printrange"_s,
			"Utskriftsintervall"_s
		}),
		$$new($ObjectArray, {
			"border.printservice"_s,
			u"Utskriftstjänst"_s
		}),
		$$new($ObjectArray, {
			"border.quality"_s,
			"Kvalitet"_s
		}),
		$$new($ObjectArray, {
			"border.sides"_s,
			"Sidor"_s
		}),
		$$new($ObjectArray, {
			"bottom"_s,
			"Botten"_s
		}),
		$$new($ObjectArray, {
			"button.cancel"_s,
			"Avbryt"_s
		}),
		$$new($ObjectArray, {
			"button.ok"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"button.print"_s,
			"Skriv ut"_s
		}),
		$$new($ObjectArray, {
			"button.properties"_s,
			"&Egenskaper..."_s
		}),
		$$new($ObjectArray, {
			"c"_s,
			"Engineering C"_s
		}),
		$$new($ObjectArray, {
			"checkbox.collate"_s,
			"&Sortera"_s
		}),
		$$new($ObjectArray, {
			"checkbox.jobsheets"_s,
			u"F&örsättsblad"_s
		}),
		$$new($ObjectArray, {
			"checkbox.printtofile"_s,
			"Skriv ut till &fil"_s
		}),
		$$new($ObjectArray, {
			"d"_s,
			"Engineering D"_s
		}),
		$$new($ObjectArray, {
			"dialog.noprintermsg"_s,
			u"Hittade ingen utskriftstjänst."_s
		}),
		$$new($ObjectArray, {
			"dialog.overwrite"_s,
			u"Denna fil finns redan.  Vill du skriva över den befintliga filen?"_s
		}),
		$$new($ObjectArray, {
			"dialog.owtitle"_s,
			"Skriv till fil"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtitle"_s,
			"Skriv ut"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtofile"_s,
			"Skriv till fil"_s
		}),
		$$new($ObjectArray, {
			"dialog.pstitle"_s,
			"Utskriftsformat"_s
		}),
		$$new($ObjectArray, {
			"dialog.writeerror"_s,
			"Kan inte skriva till filen:"_s
		}),
		$$new($ObjectArray, {
			"e"_s,
			"Engineering E"_s
		}),
		$$new($ObjectArray, {
			"envelope"_s,
			"Kuvert"_s
		}),
		$$new($ObjectArray, {
			"error.destination"_s,
			u"Ogiltigt filnamn. Försök igen."_s
		}),
		$$new($ObjectArray, {
			"error.pagerange"_s,
			u"Ogiltigt sidintervall. Skriv in värdena igen (t ex 1-3,5,7-10)"_s
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
			"Invitation-kuvert"_s
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
			"Italienskt kuvert"_s
		}),
		$$new($ObjectArray, {
			"italy-envelope"_s,
			"Italienskt kuvert"_s
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
			"&nederkant"_s
		}),
		$$new($ObjectArray, {
			"label.inches"_s,
			"(tum)"_s
		}),
		$$new($ObjectArray, {
			"label.info"_s,
			"Info:"_s
		}),
		$$new($ObjectArray, {
			"label.jobname"_s,
			"&Utskrift:"_s
		}),
		$$new($ObjectArray, {
			"label.leftmargin"_s,
			u"v&änster"_s
		}),
		$$new($ObjectArray, {
			"label.millimetres"_s,
			"(mm)"_s
		}),
		$$new($ObjectArray, {
			"label.numcopies"_s,
			"Antal e&xemplar:"_s
		}),
		$$new($ObjectArray, {
			"label.priority"_s,
			"P&rioritet:"_s
		}),
		$$new($ObjectArray, {
			"label.psname"_s,
			"&Namn:"_s
		}),
		$$new($ObjectArray, {
			"label.pstype"_s,
			"Typ:"_s
		}),
		$$new($ObjectArray, {
			"label.rangeto"_s,
			"Till"_s
		}),
		$$new($ObjectArray, {
			"label.rightmargin"_s,
			u"&höger"_s
		}),
		$$new($ObjectArray, {
			"label.size"_s,
			"Stor&lek:"_s
		}),
		$$new($ObjectArray, {
			"label.source"_s,
			u"&Källa:"_s
		}),
		$$new($ObjectArray, {
			"label.status"_s,
			"Status:"_s
		}),
		$$new($ObjectArray, {
			"label.topmargin"_s,
			u"&överkant"_s
		}),
		$$new($ObjectArray, {
			"label.username"_s,
			u"A&nvändarnamn:"_s
		}),
		$$new($ObjectArray, {
			"large-capacity"_s,
			u"Hög kapacitet"_s
		}),
		$$new($ObjectArray, {
			"ledger"_s,
			"Ledger"_s
		}),
		$$new($ObjectArray, {
			"main"_s,
			"Huvud"_s
		}),
		$$new($ObjectArray, {
			"manual"_s,
			"Manuell"_s
		}),
		$$new($ObjectArray, {
			"middle"_s,
			"Mitten"_s
		}),
		$$new($ObjectArray, {
			"monarch-envelope"_s,
			"Monarch-kuvert"_s
		}),
		$$new($ObjectArray, {
			"na-10x13-envelope"_s,
			"10x15-kuvert"_s
		}),
		$$new($ObjectArray, {
			"na-10x14-envelope"_s,
			"10x15-kuvert"_s
		}),
		$$new($ObjectArray, {
			"na-10x15-envelope"_s,
			"10x15-kuvert"_s
		}),
		$$new($ObjectArray, {
			"na-5x7"_s,
			"5x7-tumspapper"_s
		}),
		$$new($ObjectArray, {
			"na-6x9-envelope"_s,
			"6x9-kuvert"_s
		}),
		$$new($ObjectArray, {
			"na-7x9-envelope"_s,
			"6x7-kuvert"_s
		}),
		$$new($ObjectArray, {
			"na-8x10"_s,
			"8x10-tumspapper"_s
		}),
		$$new($ObjectArray, {
			"na-9x11-envelope"_s,
			"9x11-kuvert"_s
		}),
		$$new($ObjectArray, {
			"na-9x12-envelope"_s,
			"9x12-kuvert"_s
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
			"No. 10-kuvert"_s
		}),
		$$new($ObjectArray, {
			"na-number-11-envelope"_s,
			"No. 11-kuvert"_s
		}),
		$$new($ObjectArray, {
			"na-number-12-envelope"_s,
			"No. 12-kuvert"_s
		}),
		$$new($ObjectArray, {
			"na-number-14-envelope"_s,
			"No. 14-kuvert"_s
		}),
		$$new($ObjectArray, {
			"na-number-9-envelope"_s,
			"No. 9-kuvert"_s
		}),
		$$new($ObjectArray, {
			"not-accepting-jobs"_s,
			"Accepterar inte jobb"_s
		}),
		$$new($ObjectArray, {
			"oufuko-postcard"_s,
			"Double Postcard (JIS)"_s
		}),
		$$new($ObjectArray, {
			"personal-envelope"_s,
			"Egen kuvertstorlek"_s
		}),
		$$new($ObjectArray, {
			"quarto"_s,
			"Quarto"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.color"_s,
			u"&Färg"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.draftq"_s,
			"Utka&st"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.duplex"_s,
			"&Dubbelsidig"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.highq"_s,
			u"&Hög"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.landscape"_s,
			"Liggan&de"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.monochrome"_s,
			"&Monokrom"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.normalq"_s,
			"&Normal"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.oneside"_s,
			"&Ensidig"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.portrait"_s,
			u"&Stående"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangeall"_s,
			"A&lla"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangepages"_s,
			"Sid&or"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revlandscape"_s,
			u"Omvänt li&ggande"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revportrait"_s,
			u"Omvänt ståen&de"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.tumble"_s,
			u"&Vänd"_s
		}),
		$$new($ObjectArray, {
			"side"_s,
			"Sida"_s
		}),
		$$new($ObjectArray, {
			"tab.appearance"_s,
			"Fo&rmat"_s
		}),
		$$new($ObjectArray, {
			"tab.general"_s,
			u"&Allmänt"_s
		}),
		$$new($ObjectArray, {
			"tab.pagesetup"_s,
			"&Utskriftsformat"_s
		}),
		$$new($ObjectArray, {
			"tabloid"_s,
			"Tabloid"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			"Topp"_s
		})
	});
}

serviceui_sv::serviceui_sv() {
}

$Class* serviceui_sv::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serviceui_sv, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serviceui_sv, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.resources.serviceui_sv",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serviceui_sv, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serviceui_sv);
	});
	return class$;
}

$Class* serviceui_sv::class$ = nullptr;

		} // resources
	} // print
} // sun
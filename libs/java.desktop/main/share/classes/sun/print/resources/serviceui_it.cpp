#include <sun/print/resources/serviceui_it.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

void serviceui_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_it::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Automatic-Feeder"_s,
			"Alimentazione automatica"_s
		}),
		$$new($ObjectArray, {
			"Cassette"_s,
			"Cassetta"_s
		}),
		$$new($ObjectArray, {
			"Form-Source"_s,
			"Origine modulo"_s
		}),
		$$new($ObjectArray, {
			"Large-Format"_s,
			"Formato grande"_s
		}),
		$$new($ObjectArray, {
			"Manual-Envelope"_s,
			"Busta manuale"_s
		}),
		$$new($ObjectArray, {
			"Small-Format"_s,
			"Formato piccolo"_s
		}),
		$$new($ObjectArray, {
			"Tractor-Feeder"_s,
			"Alimentazione continua"_s
		}),
		$$new($ObjectArray, {
			"a"_s,
			"Engineering A"_s
		}),
		$$new($ObjectArray, {
			"accepting-jobs"_s,
			"Accettazione job"_s
		}),
		$$new($ObjectArray, {
			"auto-select"_s,
			"Seleziona automaticamente"_s
		}),
		$$new($ObjectArray, {
			"b"_s,
			"Engineering B"_s
		}),
		$$new($ObjectArray, {
			"border.chromaticity"_s,
			"Aspetto colore"_s
		}),
		$$new($ObjectArray, {
			"border.copies"_s,
			"Copie"_s
		}),
		$$new($ObjectArray, {
			"border.jobattributes"_s,
			"Attributi job"_s
		}),
		$$new($ObjectArray, {
			"border.margins"_s,
			"Margini"_s
		}),
		$$new($ObjectArray, {
			"border.media"_s,
			"Supporti"_s
		}),
		$$new($ObjectArray, {
			"border.orientation"_s,
			"Orientamento"_s
		}),
		$$new($ObjectArray, {
			"border.printrange"_s,
			"Intervallo di stampa"_s
		}),
		$$new($ObjectArray, {
			"border.printservice"_s,
			"Servizio di stampa"_s
		}),
		$$new($ObjectArray, {
			"border.quality"_s,
			u"Qualità"_s
		}),
		$$new($ObjectArray, {
			"border.sides"_s,
			"Lati"_s
		}),
		$$new($ObjectArray, {
			"bottom"_s,
			"Basso"_s
		}),
		$$new($ObjectArray, {
			"button.cancel"_s,
			"Annulla"_s
		}),
		$$new($ObjectArray, {
			"button.ok"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"button.print"_s,
			"Stampa"_s
		}),
		$$new($ObjectArray, {
			"button.properties"_s,
			u"P&roprietà..."_s
		}),
		$$new($ObjectArray, {
			"c"_s,
			"Engineering C"_s
		}),
		$$new($ObjectArray, {
			"checkbox.collate"_s,
			"Fascico&la"_s
		}),
		$$new($ObjectArray, {
			"checkbox.jobsheets"_s,
			"Pagina &banner"_s
		}),
		$$new($ObjectArray, {
			"checkbox.printtofile"_s,
			"Stampa su &file"_s
		}),
		$$new($ObjectArray, {
			"d"_s,
			"Engineering D"_s
		}),
		$$new($ObjectArray, {
			"dialog.noprintermsg"_s,
			"Nessun servizio di stampa trovato"_s
		}),
		$$new($ObjectArray, {
			"dialog.overwrite"_s,
			u"Il file esiste già. Sovrascrivere il file esistente?"_s
		}),
		$$new($ObjectArray, {
			"dialog.owtitle"_s,
			"Stampa su file"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtitle"_s,
			"Stampa"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtofile"_s,
			"Stampa su file"_s
		}),
		$$new($ObjectArray, {
			"dialog.pstitle"_s,
			"Imposta pagina"_s
		}),
		$$new($ObjectArray, {
			"dialog.writeerror"_s,
			"Impossibile scrivere nel file:"_s
		}),
		$$new($ObjectArray, {
			"e"_s,
			"Engineering E"_s
		}),
		$$new($ObjectArray, {
			"envelope"_s,
			"Busta"_s
		}),
		$$new($ObjectArray, {
			"error.destination"_s,
			"Nome file non valido; riprovare"_s
		}),
		$$new($ObjectArray, {
			"error.pagerange"_s,
			"Intervallo pagine non valido; immettere nuovamente i valori (ad es. 1-3,5,7-10)"_s
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
			"Busta invito"_s
		}),
		$$new($ObjectArray, {
			"invoice"_s,
			"Fattura"_s
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
			"Lunghezza ISO"_s
		}),
		$$new($ObjectArray, {
			"italian-envelope"_s,
			"Busta Italia"_s
		}),
		$$new($ObjectArray, {
			"italy-envelope"_s,
			"Busta Italia"_s
		}),
		$$new($ObjectArray, {
			"japanese-postcard"_s,
			"Cartolina giapponese (JIS)"_s
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
			"in&feriore"_s
		}),
		$$new($ObjectArray, {
			"label.inches"_s,
			"(poll.)"_s
		}),
		$$new($ObjectArray, {
			"label.info"_s,
			"Informazioni:"_s
		}),
		$$new($ObjectArray, {
			"label.jobname"_s,
			"Nome &job:"_s
		}),
		$$new($ObjectArray, {
			"label.leftmargin"_s,
			"sinis&tro"_s
		}),
		$$new($ObjectArray, {
			"label.millimetres"_s,
			"(mm)"_s
		}),
		$$new($ObjectArray, {
			"label.numcopies"_s,
			"Numero di c&opie:"_s
		}),
		$$new($ObjectArray, {
			"label.priority"_s,
			u"P&riorità:"_s
		}),
		$$new($ObjectArray, {
			"label.psname"_s,
			"&Nome:"_s
		}),
		$$new($ObjectArray, {
			"label.pstype"_s,
			"Tipo:"_s
		}),
		$$new($ObjectArray, {
			"label.rangeto"_s,
			"A"_s
		}),
		$$new($ObjectArray, {
			"label.rightmargin"_s,
			"&destro"_s
		}),
		$$new($ObjectArray, {
			"label.size"_s,
			"Di&mensioni:"_s
		}),
		$$new($ObjectArray, {
			"label.source"_s,
			"O&rigine:"_s
		}),
		$$new($ObjectArray, {
			"label.status"_s,
			"Stato:"_s
		}),
		$$new($ObjectArray, {
			"label.topmargin"_s,
			"su&periore"_s
		}),
		$$new($ObjectArray, {
			"label.username"_s,
			"Nome &utente:"_s
		}),
		$$new($ObjectArray, {
			"large-capacity"_s,
			u"Grande capacità"_s
		}),
		$$new($ObjectArray, {
			"ledger"_s,
			"Ledger"_s
		}),
		$$new($ObjectArray, {
			"main"_s,
			"Principale"_s
		}),
		$$new($ObjectArray, {
			"manual"_s,
			"Manuale"_s
		}),
		$$new($ObjectArray, {
			"middle"_s,
			"Medio"_s
		}),
		$$new($ObjectArray, {
			"monarch-envelope"_s,
			"Busta Monarch"_s
		}),
		$$new($ObjectArray, {
			"na-10x13-envelope"_s,
			"Busta 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-10x14-envelope"_s,
			"Busta 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-10x15-envelope"_s,
			"Busta 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-5x7"_s,
			"Foglio 5\" x 7\""_s
		}),
		$$new($ObjectArray, {
			"na-6x9-envelope"_s,
			"Busta 6x9"_s
		}),
		$$new($ObjectArray, {
			"na-7x9-envelope"_s,
			"Busta 6x7"_s
		}),
		$$new($ObjectArray, {
			"na-8x10"_s,
			"Foglio 8\" x 10\""_s
		}),
		$$new($ObjectArray, {
			"na-9x11-envelope"_s,
			"Busta 9x11"_s
		}),
		$$new($ObjectArray, {
			"na-9x12-envelope"_s,
			"Busta 9x12"_s
		}),
		$$new($ObjectArray, {
			"na-legal"_s,
			"Legale"_s
		}),
		$$new($ObjectArray, {
			"na-letter"_s,
			"Lettera"_s
		}),
		$$new($ObjectArray, {
			"na-number-10-envelope"_s,
			"Busta n. 10"_s
		}),
		$$new($ObjectArray, {
			"na-number-11-envelope"_s,
			"Busta n. 11"_s
		}),
		$$new($ObjectArray, {
			"na-number-12-envelope"_s,
			"Busta n. 12"_s
		}),
		$$new($ObjectArray, {
			"na-number-14-envelope"_s,
			"Busta n. 14"_s
		}),
		$$new($ObjectArray, {
			"na-number-9-envelope"_s,
			"Busta n. 9"_s
		}),
		$$new($ObjectArray, {
			"not-accepting-jobs"_s,
			"Rifiuto job"_s
		}),
		$$new($ObjectArray, {
			"oufuko-postcard"_s,
			"Cartolina giapponese doppia (JIS)"_s
		}),
		$$new($ObjectArray, {
			"personal-envelope"_s,
			"Busta personalizzata"_s
		}),
		$$new($ObjectArray, {
			"quarto"_s,
			"Quarto"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.color"_s,
			"&Colore"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.draftq"_s,
			"Bo&zza"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.duplex"_s,
			"&Fronte retro"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.highq"_s,
			"A&lta"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.landscape"_s,
			"Orizzonta&le"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.monochrome"_s,
			"Monocrom&atico"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.normalq"_s,
			"&Normale"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.oneside"_s,
			"Un lat&o"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.portrait"_s,
			"&Verticale"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangeall"_s,
			"T&utto"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangepages"_s,
			"Pagin&e"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revlandscape"_s,
			"Orizzo&ntale capovolto"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revportrait"_s,
			"Vert&icale capovolto"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.tumble"_s,
			"La&to corto"_s
		}),
		$$new($ObjectArray, {
			"side"_s,
			"Laterale"_s
		}),
		$$new($ObjectArray, {
			"tab.appearance"_s,
			"As&petto"_s
		}),
		$$new($ObjectArray, {
			"tab.general"_s,
			"&Generale"_s
		}),
		$$new($ObjectArray, {
			"tab.pagesetup"_s,
			"Impo&sta pagina"_s
		}),
		$$new($ObjectArray, {
			"tabloid"_s,
			"Tabloid"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			"Alto"_s
		})
	});
}

serviceui_it::serviceui_it() {
}

$Class* serviceui_it::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serviceui_it, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serviceui_it, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.resources.serviceui_it",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serviceui_it, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serviceui_it);
	});
	return class$;
}

$Class* serviceui_it::class$ = nullptr;

		} // resources
	} // print
} // sun
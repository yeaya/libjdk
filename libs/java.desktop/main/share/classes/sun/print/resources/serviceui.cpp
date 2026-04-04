#include <sun/print/resources/serviceui.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

void serviceui::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Automatic-Feeder"_s,
			"Automatic Feeder"_s
		}),
		$$new($ObjectArray, {
			"Cassette"_s,
			"Cassette"_s
		}),
		$$new($ObjectArray, {
			"Form-Source"_s,
			"Form Source"_s
		}),
		$$new($ObjectArray, {
			"Large-Format"_s,
			"Large Format"_s
		}),
		$$new($ObjectArray, {
			"Manual-Envelope"_s,
			"Manual Envelope"_s
		}),
		$$new($ObjectArray, {
			"Small-Format"_s,
			"Small Format"_s
		}),
		$$new($ObjectArray, {
			"Tractor-Feeder"_s,
			"Tractor Feeder"_s
		}),
		$$new($ObjectArray, {
			"a"_s,
			"Engineering A"_s
		}),
		$$new($ObjectArray, {
			"accepting-jobs"_s,
			"Accepting jobs"_s
		}),
		$$new($ObjectArray, {
			"auto-select"_s,
			"Automatically Select"_s
		}),
		$$new($ObjectArray, {
			"b"_s,
			"Engineering B"_s
		}),
		$$new($ObjectArray, {
			"border.chromaticity"_s,
			"Color Appearance"_s
		}),
		$$new($ObjectArray, {
			"border.copies"_s,
			"Copies"_s
		}),
		$$new($ObjectArray, {
			"border.jobattributes"_s,
			"Job Attributes"_s
		}),
		$$new($ObjectArray, {
			"border.margins"_s,
			"Margins"_s
		}),
		$$new($ObjectArray, {
			"border.media"_s,
			"Media"_s
		}),
		$$new($ObjectArray, {
			"border.orientation"_s,
			"Orientation"_s
		}),
		$$new($ObjectArray, {
			"border.printrange"_s,
			"Print Range"_s
		}),
		$$new($ObjectArray, {
			"border.printservice"_s,
			"Print Service"_s
		}),
		$$new($ObjectArray, {
			"border.quality"_s,
			"Quality"_s
		}),
		$$new($ObjectArray, {
			"border.sides"_s,
			"Sides"_s
		}),
		$$new($ObjectArray, {
			"bottom"_s,
			"Bottom"_s
		}),
		$$new($ObjectArray, {
			"button.cancel"_s,
			"Cancel"_s
		}),
		$$new($ObjectArray, {
			"button.ok"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"button.print"_s,
			"Print"_s
		}),
		$$new($ObjectArray, {
			"button.properties"_s,
			"P&roperties..."_s
		}),
		$$new($ObjectArray, {
			"c"_s,
			"Engineering C"_s
		}),
		$$new($ObjectArray, {
			"checkbox.collate"_s,
			"&Collate"_s
		}),
		$$new($ObjectArray, {
			"checkbox.jobsheets"_s,
			"&Banner Page"_s
		}),
		$$new($ObjectArray, {
			"checkbox.printtofile"_s,
			"Print To &File"_s
		}),
		$$new($ObjectArray, {
			"d"_s,
			"Engineering D"_s
		}),
		$$new($ObjectArray, {
			"dialog.noprintermsg"_s,
			"No print service found."_s
		}),
		$$new($ObjectArray, {
			"dialog.overwrite"_s,
			"This file already exists.  Would you like to overwrite the existing file?"_s
		}),
		$$new($ObjectArray, {
			"dialog.owtitle"_s,
			"Print To File"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtitle"_s,
			"Print"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtofile"_s,
			"Print To File"_s
		}),
		$$new($ObjectArray, {
			"dialog.pstitle"_s,
			"Page Setup"_s
		}),
		$$new($ObjectArray, {
			"dialog.writeerror"_s,
			"Cannot write to file:"_s
		}),
		$$new($ObjectArray, {
			"e"_s,
			"Engineering E"_s
		}),
		$$new($ObjectArray, {
			"envelope"_s,
			"Envelope"_s
		}),
		$$new($ObjectArray, {
			"error.destination"_s,
			"Invalid filename; please try again"_s
		}),
		$$new($ObjectArray, {
			"error.pagerange"_s,
			"Invalid page range; please re-enter values (e.g. 1-3,5,7-10)"_s
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
			"Invitation Envelope"_s
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
			"Italy Envelope"_s
		}),
		$$new($ObjectArray, {
			"italy-envelope"_s,
			"Italy Envelope"_s
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
			"&bottom"_s
		}),
		$$new($ObjectArray, {
			"label.inches"_s,
			"(in)"_s
		}),
		$$new($ObjectArray, {
			"label.info"_s,
			"Info:"_s
		}),
		$$new($ObjectArray, {
			"label.jobname"_s,
			"&Job Name:"_s
		}),
		$$new($ObjectArray, {
			"label.leftmargin"_s,
			"le&ft"_s
		}),
		$$new($ObjectArray, {
			"label.millimetres"_s,
			"(mm)"_s
		}),
		$$new($ObjectArray, {
			"label.numcopies"_s,
			"Number &of copies:"_s
		}),
		$$new($ObjectArray, {
			"label.priority"_s,
			"P&riority:"_s
		}),
		$$new($ObjectArray, {
			"label.psname"_s,
			"&Name:"_s
		}),
		$$new($ObjectArray, {
			"label.pstype"_s,
			"Type:"_s
		}),
		$$new($ObjectArray, {
			"label.rangeto"_s,
			"To"_s
		}),
		$$new($ObjectArray, {
			"label.rightmargin"_s,
			"&right"_s
		}),
		$$new($ObjectArray, {
			"label.size"_s,
			"Si&ze:"_s
		}),
		$$new($ObjectArray, {
			"label.source"_s,
			"Sour&ce:"_s
		}),
		$$new($ObjectArray, {
			"label.status"_s,
			"Status:"_s
		}),
		$$new($ObjectArray, {
			"label.topmargin"_s,
			"&top"_s
		}),
		$$new($ObjectArray, {
			"label.username"_s,
			"&User Name:"_s
		}),
		$$new($ObjectArray, {
			"large-capacity"_s,
			"Large Capacity"_s
		}),
		$$new($ObjectArray, {
			"ledger"_s,
			"Ledger"_s
		}),
		$$new($ObjectArray, {
			"main"_s,
			"Main"_s
		}),
		$$new($ObjectArray, {
			"manual"_s,
			"Manual"_s
		}),
		$$new($ObjectArray, {
			"middle"_s,
			"Middle"_s
		}),
		$$new($ObjectArray, {
			"monarch-envelope"_s,
			"Monarch Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-10x13-envelope"_s,
			"10x15 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-10x14-envelope"_s,
			"10x15 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-10x15-envelope"_s,
			"10x15 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-5x7"_s,
			"5\" x 7\" Paper"_s
		}),
		$$new($ObjectArray, {
			"na-6x9-envelope"_s,
			"6x9 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-7x9-envelope"_s,
			"6x7 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-8x10"_s,
			"8\" x 10\" Paper"_s
		}),
		$$new($ObjectArray, {
			"na-9x11-envelope"_s,
			"9x11 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-9x12-envelope"_s,
			"9x12 Envelope"_s
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
			"No. 10 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-number-11-envelope"_s,
			"No. 11 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-number-12-envelope"_s,
			"No. 12 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-number-14-envelope"_s,
			"No. 14 Envelope"_s
		}),
		$$new($ObjectArray, {
			"na-number-9-envelope"_s,
			"No. 9 Envelope"_s
		}),
		$$new($ObjectArray, {
			"not-accepting-jobs"_s,
			"Not accepting jobs"_s
		}),
		$$new($ObjectArray, {
			"oufuko-postcard"_s,
			"Double Postcard (JIS)"_s
		}),
		$$new($ObjectArray, {
			"personal-envelope"_s,
			"Personal Envelope"_s
		}),
		$$new($ObjectArray, {
			"quarto"_s,
			"Quarto"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.color"_s,
			"&Color"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.draftq"_s,
			"Dra&ft"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.duplex"_s,
			"&Duplex"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.highq"_s,
			"&High"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.landscape"_s,
			"&Landscape"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.monochrome"_s,
			"&Monochrome"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.normalq"_s,
			"&Normal"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.oneside"_s,
			"&One Side"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.portrait"_s,
			"&Portrait"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangeall"_s,
			"A&ll"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangepages"_s,
			"Pag&es"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revlandscape"_s,
			"Reverse La&ndscape"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revportrait"_s,
			"Reverse Portra&it"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.tumble"_s,
			"&Tumble"_s
		}),
		$$new($ObjectArray, {
			"side"_s,
			"Side"_s
		}),
		$$new($ObjectArray, {
			"tab.appearance"_s,
			"&Appearance"_s
		}),
		$$new($ObjectArray, {
			"tab.general"_s,
			"&General"_s
		}),
		$$new($ObjectArray, {
			"tab.pagesetup"_s,
			"Page &Setup"_s
		}),
		$$new($ObjectArray, {
			"tabloid"_s,
			"Tabloid"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			"Top"_s
		})
	});
}

serviceui::serviceui() {
}

$Class* serviceui::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serviceui, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serviceui, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.resources.serviceui",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serviceui, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serviceui);
	});
	return class$;
}

$Class* serviceui::class$ = nullptr;

		} // resources
	} // print
} // sun
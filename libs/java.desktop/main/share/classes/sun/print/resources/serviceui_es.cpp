#include <sun/print/resources/serviceui_es.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

void serviceui_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_es::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Automatic-Feeder"_s,
			u"Alimentador Automático"_s
		}),
		$$new($ObjectArray, {
			"Cassette"_s,
			"Casete"_s
		}),
		$$new($ObjectArray, {
			"Form-Source"_s,
			"Origen de Formulario"_s
		}),
		$$new($ObjectArray, {
			"Large-Format"_s,
			"Formato Grande"_s
		}),
		$$new($ObjectArray, {
			"Manual-Envelope"_s,
			"Sobre Manual"_s
		}),
		$$new($ObjectArray, {
			"Small-Format"_s,
			u"Formato Pequeño"_s
		}),
		$$new($ObjectArray, {
			"Tractor-Feeder"_s,
			"Alimentador de Arrastre"_s
		}),
		$$new($ObjectArray, {
			"a"_s,
			u"Ingeniería A"_s
		}),
		$$new($ObjectArray, {
			"accepting-jobs"_s,
			"Aceptando trabajos"_s
		}),
		$$new($ObjectArray, {
			"auto-select"_s,
			u"Seleccionar Automáticamente"_s
		}),
		$$new($ObjectArray, {
			"b"_s,
			u"Ingeniería B"_s
		}),
		$$new($ObjectArray, {
			"border.chromaticity"_s,
			"Apariencia del Color"_s
		}),
		$$new($ObjectArray, {
			"border.copies"_s,
			"Copias"_s
		}),
		$$new($ObjectArray, {
			"border.jobattributes"_s,
			"Atributos del Trabajo"_s
		}),
		$$new($ObjectArray, {
			"border.margins"_s,
			u"Márgenes"_s
		}),
		$$new($ObjectArray, {
			"border.media"_s,
			"Soporte"_s
		}),
		$$new($ObjectArray, {
			"border.orientation"_s,
			u"Orientación"_s
		}),
		$$new($ObjectArray, {
			"border.printrange"_s,
			u"Rango de Impresión"_s
		}),
		$$new($ObjectArray, {
			"border.printservice"_s,
			u"Servicio de Impresión"_s
		}),
		$$new($ObjectArray, {
			"border.quality"_s,
			"Calidad"_s
		}),
		$$new($ObjectArray, {
			"border.sides"_s,
			"Caras"_s
		}),
		$$new($ObjectArray, {
			"bottom"_s,
			"Abajo"_s
		}),
		$$new($ObjectArray, {
			"button.cancel"_s,
			"Cancelar"_s
		}),
		$$new($ObjectArray, {
			"button.ok"_s,
			"Aceptar"_s
		}),
		$$new($ObjectArray, {
			"button.print"_s,
			"Imprimir"_s
		}),
		$$new($ObjectArray, {
			"button.properties"_s,
			"P&ropiedades..."_s
		}),
		$$new($ObjectArray, {
			"c"_s,
			u"Ingeniería C"_s
		}),
		$$new($ObjectArray, {
			"checkbox.collate"_s,
			"Inter&calar"_s
		}),
		$$new($ObjectArray, {
			"checkbox.jobsheets"_s,
			u"Página de Rótu&lo"_s
		}),
		$$new($ObjectArray, {
			"checkbox.printtofile"_s,
			"I&mprimir en Archivo"_s
		}),
		$$new($ObjectArray, {
			"d"_s,
			u"Ingeniería D"_s
		}),
		$$new($ObjectArray, {
			"dialog.noprintermsg"_s,
			u"No se ha encontrado el servicio de impresión."_s
		}),
		$$new($ObjectArray, {
			"dialog.overwrite"_s,
			u"Este archivo ya existe. ¿Desea sobrescribirlo?"_s
		}),
		$$new($ObjectArray, {
			"dialog.owtitle"_s,
			"Imprimir en Archivo"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtitle"_s,
			"Imprimir"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtofile"_s,
			"Imprimir en Archivo"_s
		}),
		$$new($ObjectArray, {
			"dialog.pstitle"_s,
			u"Preparar Página"_s
		}),
		$$new($ObjectArray, {
			"dialog.writeerror"_s,
			"No se puede escribir en el archivo:"_s
		}),
		$$new($ObjectArray, {
			"e"_s,
			u"Ingeniería E"_s
		}),
		$$new($ObjectArray, {
			"envelope"_s,
			"Sobre"_s
		}),
		$$new($ObjectArray, {
			"error.destination"_s,
			u"Nombre de archivo no válido; inténtelo de nuevo"_s
		}),
		$$new($ObjectArray, {
			"error.pagerange"_s,
			u"Rango de páginas no válido; vuelva a introducir los valores (por ejemplo, 1-3, 5, 7-10)"_s
		}),
		$$new($ObjectArray, {
			"executive"_s,
			"Ejecutivo"_s
		}),
		$$new($ObjectArray, {
			"folio"_s,
			"Folio"_s
		}),
		$$new($ObjectArray, {
			"invite-envelope"_s,
			u"Sobre de Invitación"_s
		}),
		$$new($ObjectArray, {
			"invoice"_s,
			"Factura"_s
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
			"Largo Designado ISO"_s
		}),
		$$new($ObjectArray, {
			"italian-envelope"_s,
			"Sobre Italiano"_s
		}),
		$$new($ObjectArray, {
			"italy-envelope"_s,
			"Sobre Italiano"_s
		}),
		$$new($ObjectArray, {
			"japanese-postcard"_s,
			"Postal (JIS)"_s
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
			"in&ferior"_s
		}),
		$$new($ObjectArray, {
			"label.inches"_s,
			"(pulg.)"_s
		}),
		$$new($ObjectArray, {
			"label.info"_s,
			u"Información:"_s
		}),
		$$new($ObjectArray, {
			"label.jobname"_s,
			"&Nombre del Trabajo:"_s
		}),
		$$new($ObjectArray, {
			"label.leftmargin"_s,
			"iz&quierdo"_s
		}),
		$$new($ObjectArray, {
			"label.millimetres"_s,
			"(mm)"_s
		}),
		$$new($ObjectArray, {
			"label.numcopies"_s,
			u"Número de C&opias:"_s
		}),
		$$new($ObjectArray, {
			"label.priority"_s,
			"Prior&idad:"_s
		}),
		$$new($ObjectArray, {
			"label.psname"_s,
			"&Nombre:"_s
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
			"d&erecho"_s
		}),
		$$new($ObjectArray, {
			"label.size"_s,
			u"Tama&ño:"_s
		}),
		$$new($ObjectArray, {
			"label.source"_s,
			"Orig&en:"_s
		}),
		$$new($ObjectArray, {
			"label.status"_s,
			"Estado:"_s
		}),
		$$new($ObjectArray, {
			"label.topmargin"_s,
			"s&uperior"_s
		}),
		$$new($ObjectArray, {
			"label.username"_s,
			"&Usuario:"_s
		}),
		$$new($ObjectArray, {
			"large-capacity"_s,
			"Gran Capacidad"_s
		}),
		$$new($ObjectArray, {
			"ledger"_s,
			"Libro Mayor"_s
		}),
		$$new($ObjectArray, {
			"main"_s,
			"Principal"_s
		}),
		$$new($ObjectArray, {
			"manual"_s,
			"Manual"_s
		}),
		$$new($ObjectArray, {
			"middle"_s,
			"Centro"_s
		}),
		$$new($ObjectArray, {
			"monarch-envelope"_s,
			"Sobre Monarch"_s
		}),
		$$new($ObjectArray, {
			"na-10x13-envelope"_s,
			"Sobre 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-10x14-envelope"_s,
			"Sobre 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-10x15-envelope"_s,
			"Sobre 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-5x7"_s,
			"Papel 5\" x 7\""_s
		}),
		$$new($ObjectArray, {
			"na-6x9-envelope"_s,
			"Sobre 6x9"_s
		}),
		$$new($ObjectArray, {
			"na-7x9-envelope"_s,
			"Sobre 6x7"_s
		}),
		$$new($ObjectArray, {
			"na-8x10"_s,
			"Papel 8\" x 10\""_s
		}),
		$$new($ObjectArray, {
			"na-9x11-envelope"_s,
			"Sobre 9x11"_s
		}),
		$$new($ObjectArray, {
			"na-9x12-envelope"_s,
			"Sobre 9x12"_s
		}),
		$$new($ObjectArray, {
			"na-legal"_s,
			"Legal"_s
		}),
		$$new($ObjectArray, {
			"na-letter"_s,
			"Carta"_s
		}),
		$$new($ObjectArray, {
			"na-number-10-envelope"_s,
			u"Sobre Nº 10"_s
		}),
		$$new($ObjectArray, {
			"na-number-11-envelope"_s,
			u"Sobre Nº 11"_s
		}),
		$$new($ObjectArray, {
			"na-number-12-envelope"_s,
			u"Sobre Nº 12"_s
		}),
		$$new($ObjectArray, {
			"na-number-14-envelope"_s,
			u"Sobre Nº 14"_s
		}),
		$$new($ObjectArray, {
			"na-number-9-envelope"_s,
			u"Sobre Nº 9"_s
		}),
		$$new($ObjectArray, {
			"not-accepting-jobs"_s,
			"No aceptando trabajos"_s
		}),
		$$new($ObjectArray, {
			"oufuko-postcard"_s,
			"Postal Doble (JIS)"_s
		}),
		$$new($ObjectArray, {
			"personal-envelope"_s,
			"Sobre Personal"_s
		}),
		$$new($ObjectArray, {
			"quarto"_s,
			"Cuarto"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.color"_s,
			"&Color"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.draftq"_s,
			"B&orrador"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.duplex"_s,
			u"&Dúplex"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.highq"_s,
			"Al&ta"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.landscape"_s,
			"Hori&zontal"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.monochrome"_s,
			"&Monocromo"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.normalq"_s,
			"&Normal"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.oneside"_s,
			"Una Ca&ra"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.portrait"_s,
			"&Vertical"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangeall"_s,
			"&Todo"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangepages"_s,
			u"Página&s"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revlandscape"_s,
			"&Horizontal Inverso"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revportrait"_s,
			"Vertical I&nverso"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.tumble"_s,
			"Cam&bio de Cara"_s
		}),
		$$new($ObjectArray, {
			"side"_s,
			"Cara"_s
		}),
		$$new($ObjectArray, {
			"tab.appearance"_s,
			"&Apariencia"_s
		}),
		$$new($ObjectArray, {
			"tab.general"_s,
			"&General"_s
		}),
		$$new($ObjectArray, {
			"tab.pagesetup"_s,
			u"&Preparar Página"_s
		}),
		$$new($ObjectArray, {
			"tabloid"_s,
			"Tabloide"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			"Arriba"_s
		})
	});
}

serviceui_es::serviceui_es() {
}

$Class* serviceui_es::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serviceui_es, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serviceui_es, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.resources.serviceui_es",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serviceui_es, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serviceui_es);
	});
	return class$;
}

$Class* serviceui_es::class$ = nullptr;

		} // resources
	} // print
} // sun
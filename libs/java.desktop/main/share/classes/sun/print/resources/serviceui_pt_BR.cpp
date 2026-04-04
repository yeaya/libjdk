#include <sun/print/resources/serviceui_pt_BR.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace print {
		namespace resources {

void serviceui_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* serviceui_pt_BR::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"Automatic-Feeder"_s,
			u"Alimentador Automático"_s
		}),
		$$new($ObjectArray, {
			"Cassette"_s,
			"Cassete"_s
		}),
		$$new($ObjectArray, {
			"Form-Source"_s,
			u"Origem do Formulário"_s
		}),
		$$new($ObjectArray, {
			"Large-Format"_s,
			"Formato Grande"_s
		}),
		$$new($ObjectArray, {
			"Manual-Envelope"_s,
			"Envelope Manual"_s
		}),
		$$new($ObjectArray, {
			"Small-Format"_s,
			"Formato Pequeno"_s
		}),
		$$new($ObjectArray, {
			"Tractor-Feeder"_s,
			"Alimentador por Tracionador"_s
		}),
		$$new($ObjectArray, {
			"a"_s,
			"Engenharia A"_s
		}),
		$$new($ObjectArray, {
			"accepting-jobs"_s,
			"Aceitando jobs"_s
		}),
		$$new($ObjectArray, {
			"auto-select"_s,
			"Selecionar Automaticamente"_s
		}),
		$$new($ObjectArray, {
			"b"_s,
			"Engenharia B"_s
		}),
		$$new($ObjectArray, {
			"border.chromaticity"_s,
			u"Aparência da Cor"_s
		}),
		$$new($ObjectArray, {
			"border.copies"_s,
			u"Cópias"_s
		}),
		$$new($ObjectArray, {
			"border.jobattributes"_s,
			"Atributos do Job"_s
		}),
		$$new($ObjectArray, {
			"border.margins"_s,
			"Margens"_s
		}),
		$$new($ObjectArray, {
			"border.media"_s,
			u"Mídia"_s
		}),
		$$new($ObjectArray, {
			"border.orientation"_s,
			u"Orientação"_s
		}),
		$$new($ObjectArray, {
			"border.printrange"_s,
			u"Faixa de Impressão"_s
		}),
		$$new($ObjectArray, {
			"border.printservice"_s,
			u"Serviço de Impressão"_s
		}),
		$$new($ObjectArray, {
			"border.quality"_s,
			"Qualidade"_s
		}),
		$$new($ObjectArray, {
			"border.sides"_s,
			"Lados"_s
		}),
		$$new($ObjectArray, {
			"bottom"_s,
			"Inferior"_s
		}),
		$$new($ObjectArray, {
			"button.cancel"_s,
			"Cancelar"_s
		}),
		$$new($ObjectArray, {
			"button.ok"_s,
			"OK"_s
		}),
		$$new($ObjectArray, {
			"button.print"_s,
			"Imprimir"_s
		}),
		$$new($ObjectArray, {
			"button.properties"_s,
			"P&ropriedades..."_s
		}),
		$$new($ObjectArray, {
			"c"_s,
			"Engenharia C"_s
		}),
		$$new($ObjectArray, {
			"checkbox.collate"_s,
			"&Agrupar"_s
		}),
		$$new($ObjectArray, {
			"checkbox.jobsheets"_s,
			u"Página com &Banner"_s
		}),
		$$new($ObjectArray, {
			"checkbox.printtofile"_s,
			"&Imprimir em Arquivo"_s
		}),
		$$new($ObjectArray, {
			"d"_s,
			"Engenharia D"_s
		}),
		$$new($ObjectArray, {
			"dialog.noprintermsg"_s,
			u"Nenhum serviço de impressão encontrado."_s
		}),
		$$new($ObjectArray, {
			"dialog.overwrite"_s,
			u"Este arquivo já existe. Deseja substituir o arquivo existente?"_s
		}),
		$$new($ObjectArray, {
			"dialog.owtitle"_s,
			"Imprimir em Arquivo"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtitle"_s,
			"Imprimir"_s
		}),
		$$new($ObjectArray, {
			"dialog.printtofile"_s,
			"Imprimir em Arquivo"_s
		}),
		$$new($ObjectArray, {
			"dialog.pstitle"_s,
			u"Configuração da Página"_s
		}),
		$$new($ObjectArray, {
			"dialog.writeerror"_s,
			u"Não é possível gravar no arquivo:"_s
		}),
		$$new($ObjectArray, {
			"e"_s,
			"Engenharia E"_s
		}),
		$$new($ObjectArray, {
			"envelope"_s,
			"Envelope"_s
		}),
		$$new($ObjectArray, {
			"error.destination"_s,
			u"Nome de arquivo inválido; tente novamente"_s
		}),
		$$new($ObjectArray, {
			"error.pagerange"_s,
			u"Faixa de páginas inválida; insira novamente os valores (por exemplo, 1-3,5,7-10)"_s
		}),
		$$new($ObjectArray, {
			"executive"_s,
			"Executivo"_s
		}),
		$$new($ObjectArray, {
			"folio"_s,
			u"Fólio"_s
		}),
		$$new($ObjectArray, {
			"invite-envelope"_s,
			"Envelope de Convite"_s
		}),
		$$new($ObjectArray, {
			"invoice"_s,
			"Fatura"_s
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
			"Longo Designado ISO"_s
		}),
		$$new($ObjectArray, {
			"italian-envelope"_s,
			"Envelope Italiano"_s
		}),
		$$new($ObjectArray, {
			"italy-envelope"_s,
			"Envelope Italiano"_s
		}),
		$$new($ObjectArray, {
			"japanese-postcard"_s,
			u"Cartão Postal (JIS)"_s
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
			"&inferior"_s
		}),
		$$new($ObjectArray, {
			"label.inches"_s,
			"(pol)"_s
		}),
		$$new($ObjectArray, {
			"label.info"_s,
			u"Informações:"_s
		}),
		$$new($ObjectArray, {
			"label.jobname"_s,
			"Nome do &Job:"_s
		}),
		$$new($ObjectArray, {
			"label.leftmargin"_s,
			"es&querda:"_s
		}),
		$$new($ObjectArray, {
			"label.millimetres"_s,
			"(mm)"_s
		}),
		$$new($ObjectArray, {
			"label.numcopies"_s,
			u"Númer&o de cópias:"_s
		}),
		$$new($ObjectArray, {
			"label.priority"_s,
			"Pri&oridade:"_s
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
			u"Até"_s
		}),
		$$new($ObjectArray, {
			"label.rightmargin"_s,
			"&direita"_s
		}),
		$$new($ObjectArray, {
			"label.size"_s,
			"Ta&manho:"_s
		}),
		$$new($ObjectArray, {
			"label.source"_s,
			"&Origem:"_s
		}),
		$$new($ObjectArray, {
			"label.status"_s,
			"Status:"_s
		}),
		$$new($ObjectArray, {
			"label.topmargin"_s,
			"&superior"_s
		}),
		$$new($ObjectArray, {
			"label.username"_s,
			u"Nome do &Usuário:"_s
		}),
		$$new($ObjectArray, {
			"large-capacity"_s,
			"Grande Capacidade"_s
		}),
		$$new($ObjectArray, {
			"ledger"_s,
			"Duplo Carta"_s
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
			"Meio"_s
		}),
		$$new($ObjectArray, {
			"monarch-envelope"_s,
			"Envelope Monarca"_s
		}),
		$$new($ObjectArray, {
			"na-10x13-envelope"_s,
			"Envelope 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-10x14-envelope"_s,
			"Envelope 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-10x15-envelope"_s,
			"Envelope 10x15"_s
		}),
		$$new($ObjectArray, {
			"na-5x7"_s,
			"Papel 5\" x 7\""_s
		}),
		$$new($ObjectArray, {
			"na-6x9-envelope"_s,
			"Envelope 6x9"_s
		}),
		$$new($ObjectArray, {
			"na-7x9-envelope"_s,
			"Envelope 6x7"_s
		}),
		$$new($ObjectArray, {
			"na-8x10"_s,
			"Papel 8\" x 10\""_s
		}),
		$$new($ObjectArray, {
			"na-9x11-envelope"_s,
			"Envelope 9x11"_s
		}),
		$$new($ObjectArray, {
			"na-9x12-envelope"_s,
			"Envelope 9x12"_s
		}),
		$$new($ObjectArray, {
			"na-legal"_s,
			u"Ofício"_s
		}),
		$$new($ObjectArray, {
			"na-letter"_s,
			"Carta"_s
		}),
		$$new($ObjectArray, {
			"na-number-10-envelope"_s,
			u"Envelope nº 10"_s
		}),
		$$new($ObjectArray, {
			"na-number-11-envelope"_s,
			u"Envelope nº 11"_s
		}),
		$$new($ObjectArray, {
			"na-number-12-envelope"_s,
			u"Envelope nº 12"_s
		}),
		$$new($ObjectArray, {
			"na-number-14-envelope"_s,
			u"Envelope nº 14"_s
		}),
		$$new($ObjectArray, {
			"na-number-9-envelope"_s,
			u"Envelope nº 9"_s
		}),
		$$new($ObjectArray, {
			"not-accepting-jobs"_s,
			u"Não aceitando jobs"_s
		}),
		$$new($ObjectArray, {
			"oufuko-postcard"_s,
			u"Cartão Postal Duplo (JIS)"_s
		}),
		$$new($ObjectArray, {
			"personal-envelope"_s,
			"Envelope Personalizado"_s
		}),
		$$new($ObjectArray, {
			"quarto"_s,
			"Quarto"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.color"_s,
			"&Cor"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.draftq"_s,
			"Rascun&ho"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.duplex"_s,
			"Duple&x"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.highq"_s,
			"A&lta"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.landscape"_s,
			"&Paisagem"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.monochrome"_s,
			u"&Monocromático"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.normalq"_s,
			"&Normal"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.oneside"_s,
			"Um La&do"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.portrait"_s,
			"Re&trato"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangeall"_s,
			"T&udo"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.rangepages"_s,
			u"&Páginas"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revlandscape"_s,
			"Paisagem I&nvertida"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.revportrait"_s,
			"Retrato In&vertido"_s
		}),
		$$new($ObjectArray, {
			"radiobutton.tumble"_s,
			"&Virar"_s
		}),
		$$new($ObjectArray, {
			"side"_s,
			"Lado"_s
		}),
		$$new($ObjectArray, {
			"tab.appearance"_s,
			u"Apa&rência"_s
		}),
		$$new($ObjectArray, {
			"tab.general"_s,
			"&Geral"_s
		}),
		$$new($ObjectArray, {
			"tab.pagesetup"_s,
			u"Con&figuração da Página"_s
		}),
		$$new($ObjectArray, {
			"tabloid"_s,
			u"Tablóide"_s
		}),
		$$new($ObjectArray, {
			"top"_s,
			"Superior"_s
		})
	});
}

serviceui_pt_BR::serviceui_pt_BR() {
}

$Class* serviceui_pt_BR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(serviceui_pt_BR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(serviceui_pt_BR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.print.resources.serviceui_pt_BR",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(serviceui_pt_BR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(serviceui_pt_BR);
	});
	return class$;
}

$Class* serviceui_pt_BR::class$ = nullptr;

		} // resources
	} // print
} // sun
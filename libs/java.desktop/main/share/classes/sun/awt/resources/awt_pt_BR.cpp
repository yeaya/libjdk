#include <sun/awt/resources/awt_pt_BR.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

void awt_pt_BR::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_pt_BR::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AWT.CompositionWindowTitle"_s,
			"Janela de Entrada"_s
		}),
		$$new($ObjectArray, {
			"AWT.CrosshairCursor"_s,
			"Cursor em Forma de Cruz"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultCursor"_s,
			u"Cursor Padrão"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDragCursor"_s,
			u"Cursor Padrão de Arrastar"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDropCursor"_s,
			u"Cursor Padrão de Soltar"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultNoDropCursor"_s,
			u"Cursor Padrão sem Arrastar"_s
		}),
		$$new($ObjectArray, {
			"AWT.EResizeCursor"_s,
			u"Cursor de Seta Que Aponta à Direita"_s
		}),
		$$new($ObjectArray, {
			"AWT.HandCursor"_s,
			u"Cursor em Forma de Mão"_s
		}),
		$$new($ObjectArray, {
			"AWT.HostInputMethodDisplayName"_s,
			u"Métodos de Entrada do Sistema"_s
		}),
		$$new($ObjectArray, {
			"AWT.InconsistentDLLsWarning"_s,
			u"Pode ser que as operações baseadas em texto não funcionem corretamente devido a um conjunto incoerente de bibliotecas de vinculação dinâmica (DLLs) instalado no seu sistema. Para obter mais informações sobre este problema e uma solução recomendada, consulte as Notas de Versão do Java(TM) 2 SDK, Standard Edition, em java.sun.com."_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodCreationFailed"_s,
			u"Não foi possível criar {0}. Motivo: {1}"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ja"_s,
			u"Japonês"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ko"_s,
			"Coreano"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh"_s,
			u"Chinês"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_CN"_s,
			u"Chinês Simplificado"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_TW"_s,
			u"Chinês Tradicional"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodSelectionMenu"_s,
			u"Selecionar Método de Entrada"_s
		}),
		$$new($ObjectArray, {
			"AWT.Less"_s,
			"Menos"_s
		}),
		$$new($ObjectArray, {
			"AWT.MoveCursor"_s,
			"Cursor de Movimento"_s
		}),
		$$new($ObjectArray, {
			"AWT.NEResizeCursor"_s,
			"Cursor de Seta Que Aponta para Nordeste"_s
		}),
		$$new($ObjectArray, {
			"AWT.NResizeCursor"_s,
			"Cursor de Seta Que Aponta para Cima"_s
		}),
		$$new($ObjectArray, {
			"AWT.NWResizeCursor"_s,
			"Cursor de Seta Que Aponta para Noroeste"_s
		}),
		$$new($ObjectArray, {
			"AWT.SEResizeCursor"_s,
			"Cursor de Seta Que Aponta para Sudeste"_s
		}),
		$$new($ObjectArray, {
			"AWT.SResizeCursor"_s,
			"Cursor de Seta Que Aponta para Baixo"_s
		}),
		$$new($ObjectArray, {
			"AWT.SWResizeCursor"_s,
			"Cursor de Seta Que Aponta para Sudoeste"_s
		}),
		$$new($ObjectArray, {
			"AWT.TextCursor"_s,
			"Cursor de Texto"_s
		}),
		$$new($ObjectArray, {
			"AWT.WResizeCursor"_s,
			u"Cursor de Seta Que Aponta à Esquerda"_s
		}),
		$$new($ObjectArray, {
			"AWT.WaitCursor"_s,
			"Cursor em Forma de Ampulheta"_s
		}),
		$$new($ObjectArray, {
			"AWT.accept"_s,
			"Aceitar"_s
		}),
		$$new($ObjectArray, {
			"AWT.add"_s,
			u"Teclado Numérico +"_s
		}),
		$$new($ObjectArray, {
			"AWT.again"_s,
			"Novamente"_s
		}),
		$$new($ObjectArray, {
			"AWT.allCandidates"_s,
			"Todos os Candidatos"_s
		}),
		$$new($ObjectArray, {
			"AWT.alphanumeric"_s,
			u"Alfanumérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.alt"_s,
			"Alt"_s
		}),
		$$new($ObjectArray, {
			"AWT.altGraph"_s,
			"Alt Graph"_s
		}),
		$$new($ObjectArray, {
			"AWT.ampersand"_s,
			"E Comercial"_s
		}),
		$$new($ObjectArray, {
			"AWT.asterisk"_s,
			"Asterisco"_s
		}),
		$$new($ObjectArray, {
			"AWT.at"_s,
			"Arroba"_s
		}),
		$$new($ObjectArray, {
			"AWT.backQuote"_s,
			"Crase"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSlash"_s,
			"Barra Invertida"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSpace"_s,
			"Backspace"_s
		}),
		$$new($ObjectArray, {
			"AWT.begin"_s,
			u"Começar"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceLeft"_s,
			"Chave Esquerda"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceRight"_s,
			"Chave Direta"_s
		}),
		$$new($ObjectArray, {
			"AWT.cancel"_s,
			"Cancelar"_s
		}),
		$$new($ObjectArray, {
			"AWT.capsLock"_s,
			"Caps Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.circumflex"_s,
			"Circunflexo"_s
		}),
		$$new($ObjectArray, {
			"AWT.clear"_s,
			"Limpar"_s
		}),
		$$new($ObjectArray, {
			"AWT.closeBracket"_s,
			u"Parêntese de Fechamento"_s
		}),
		$$new($ObjectArray, {
			"AWT.codeInput"_s,
			u"Entrada de Código"_s
		}),
		$$new($ObjectArray, {
			"AWT.colon"_s,
			u"Vírgula"_s
		}),
		$$new($ObjectArray, {
			"AWT.comma"_s,
			u"Vírgula"_s
		}),
		$$new($ObjectArray, {
			"AWT.compose"_s,
			"Compor"_s
		}),
		$$new($ObjectArray, {
			"AWT.context"_s,
			"Menu de Contexto"_s
		}),
		$$new($ObjectArray, {
			"AWT.control"_s,
			"Ctrl"_s
		}),
		$$new($ObjectArray, {
			"AWT.convert"_s,
			"Converter"_s
		}),
		$$new($ObjectArray, {
			"AWT.copy"_s,
			"Copiar"_s
		}),
		$$new($ObjectArray, {
			"AWT.cut"_s,
			"Recortar"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveDot"_s,
			"Ponto em Cima"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveRing"_s,
			u"Símbolo de Grau"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAcute"_s,
			"Acento Agudo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadBreve"_s,
			"Braquia"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCaron"_s,
			"Acento Circunflexo Invertido"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCedilla"_s,
			"Cedilha"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCircumflex"_s,
			"Acento Circunflexo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDiaeresis"_s,
			"Trema"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDoubleAcute"_s,
			"Acento Agudo Duplo"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadGrave"_s,
			"Acento Grave"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadIota"_s,
			"Lota"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadMacron"_s,
			u"Mácron"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadOgonek"_s,
			u"Gancho Polonês"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadSemivoicedSound"_s,
			"Surdo (Som)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadTilde"_s,
			"Til"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadVoicedSound"_s,
			"Sonoro (Som)"_s
		}),
		$$new($ObjectArray, {
			"AWT.decimal"_s,
			u"Teclado Numérico ."_s
		}),
		$$new($ObjectArray, {
			"AWT.delete"_s,
			"Excluir"_s
		}),
		$$new($ObjectArray, {
			"AWT.divide"_s,
			u"Teclado Numérico /"_s
		}),
		$$new($ObjectArray, {
			"AWT.dollar"_s,
			u"Dólar"_s
		}),
		$$new($ObjectArray, {
			"AWT.down"_s,
			"Abaixo"_s
		}),
		$$new($ObjectArray, {
			"AWT.end"_s,
			"Fim"_s
		}),
		$$new($ObjectArray, {
			"AWT.enter"_s,
			"Enter"_s
		}),
		$$new($ObjectArray, {
			"AWT.equals"_s,
			"Igual"_s
		}),
		$$new($ObjectArray, {
			"AWT.escape"_s,
			"Escape"_s
		}),
		$$new($ObjectArray, {
			"AWT.euro"_s,
			"Euro"_s
		}),
		$$new($ObjectArray, {
			"AWT.exclamationMark"_s,
			u"Ponto de Exclamação"_s
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
			"Localizar"_s
		}),
		$$new($ObjectArray, {
			"AWT.fullWidth"_s,
			"Largura Total"_s
		}),
		$$new($ObjectArray, {
			"AWT.greater"_s,
			"Maior"_s
		}),
		$$new($ObjectArray, {
			"AWT.halfWidth"_s,
			"Meia Largura"_s
		}),
		$$new($ObjectArray, {
			"AWT.help"_s,
			"Ajuda"_s
		}),
		$$new($ObjectArray, {
			"AWT.hiragana"_s,
			"Hiragana"_s
		}),
		$$new($ObjectArray, {
			"AWT.home"_s,
			u"Início"_s
		}),
		$$new($ObjectArray, {
			"AWT.inputMethodOnOff"_s,
			u"Método de Entrada Ativado/Desativado"_s
		}),
		$$new($ObjectArray, {
			"AWT.insert"_s,
			"Insert"_s
		}),
		$$new($ObjectArray, {
			"AWT.invertedExclamationMark"_s,
			u"Ponto de Exclamação Invertido"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseHiragana"_s,
			u"Hiragana Japonês"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseKatakana"_s,
			u"Katakana Japonês"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseRoman"_s,
			u"Romano Japonês"_s
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
			"Esquerda"_s
		}),
		$$new($ObjectArray, {
			"AWT.leftParenthesis"_s,
			u"Parêntese Esquerdo"_s
		}),
		$$new($ObjectArray, {
			"AWT.meta"_s,
			"Meta"_s
		}),
		$$new($ObjectArray, {
			"AWT.minus"_s,
			"Menos"_s
		}),
		$$new($ObjectArray, {
			"AWT.modechange"_s,
			u"Alteração de Modo"_s
		}),
		$$new($ObjectArray, {
			"AWT.multiply"_s,
			u"Teclado Numérico *"_s
		}),
		$$new($ObjectArray, {
			"AWT.noconvert"_s,
			u"Não Converter"_s
		}),
		$$new($ObjectArray, {
			"AWT.numLock"_s,
			"Num Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.numberSign"_s,
			u"Sinal Numérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.numpad"_s,
			u"Teclado Numérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.openBracket"_s,
			u"Parêntese de Abertura"_s
		}),
		$$new($ObjectArray, {
			"AWT.paste"_s,
			"Colar"_s
		}),
		$$new($ObjectArray, {
			"AWT.pause"_s,
			"Pausar"_s
		}),
		$$new($ObjectArray, {
			"AWT.period"_s,
			"Ponto Final"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgdn"_s,
			u"Página Abaixo"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgup"_s,
			u"Página Acima"_s
		}),
		$$new($ObjectArray, {
			"AWT.plus"_s,
			"Mais"_s
		}),
		$$new($ObjectArray, {
			"AWT.previousCandidate"_s,
			"Candidato Anterior"_s
		}),
		$$new($ObjectArray, {
			"AWT.printScreen"_s,
			"Print Screen"_s
		}),
		$$new($ObjectArray, {
			"AWT.props"_s,
			"Sustentar"_s
		}),
		$$new($ObjectArray, {
			"AWT.quote"_s,
			"Aspas"_s
		}),
		$$new($ObjectArray, {
			"AWT.quoteDbl"_s,
			"Aspas Duplas"_s
		}),
		$$new($ObjectArray, {
			"AWT.right"_s,
			"Direita"_s
		}),
		$$new($ObjectArray, {
			"AWT.rightParenthesis"_s,
			u"Parêntese Direito"_s
		}),
		$$new($ObjectArray, {
			"AWT.romanCharacters"_s,
			"Caracteres Romanos"_s
		}),
		$$new($ObjectArray, {
			"AWT.scrollLock"_s,
			"Scroll Lock"_s
		}),
		$$new($ObjectArray, {
			"AWT.semicolon"_s,
			u"Ponto-e-Vírgula"_s
		}),
		$$new($ObjectArray, {
			"AWT.separater"_s,
			u"Teclado Numérico ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.separator"_s,
			u"Teclado Numérico ,"_s
		}),
		$$new($ObjectArray, {
			"AWT.shift"_s,
			"Shift"_s
		}),
		$$new($ObjectArray, {
			"AWT.slash"_s,
			"Barra"_s
		}),
		$$new($ObjectArray, {
			"AWT.space"_s,
			u"Espaço"_s
		}),
		$$new($ObjectArray, {
			"AWT.stop"_s,
			"Interromper"_s
		}),
		$$new($ObjectArray, {
			"AWT.subtract"_s,
			u"Teclado Numérico -"_s
		}),
		$$new($ObjectArray, {
			"AWT.tab"_s,
			"Guia"_s
		}),
		$$new($ObjectArray, {
			"AWT.undefined"_s,
			"Indefinido"_s
		}),
		$$new($ObjectArray, {
			"AWT.underscore"_s,
			"Sublinhado"_s
		}),
		$$new($ObjectArray, {
			"AWT.undo"_s,
			"Desfazer"_s
		}),
		$$new($ObjectArray, {
			"AWT.unknown"_s,
			"Desconhecido"_s
		}),
		$$new($ObjectArray, {
			"AWT.up"_s,
			"Acima"_s
		}),
		$$new($ObjectArray, {
			"AWT.windows"_s,
			"Janelas"_s
		}),
		$$new($ObjectArray, {
			"java.awt.def.delay"_s,
			"30"_s
		}),
		$$new($ObjectArray, {
			"java.awt.im.style"_s,
			"no momento"_s
		})
	});
}

awt_pt_BR::awt_pt_BR() {
}

$Class* awt_pt_BR::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awt_pt_BR, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awt_pt_BR, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.resources.awt_pt_BR",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awt_pt_BR, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awt_pt_BR);
	});
	return class$;
}

$Class* awt_pt_BR::class$ = nullptr;

		} // resources
	} // awt
} // sun
#include <sun/awt/resources/awt_es.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace awt {
		namespace resources {

void awt_es::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* awt_es::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			"AWT.CompositionWindowTitle"_s,
			"Ventana de Entrada"_s
		}),
		$$new($ObjectArray, {
			"AWT.CrosshairCursor"_s,
			"Cursor de Punto de Mira"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultCursor"_s,
			"Cursor Por defecto"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDragCursor"_s,
			"Cursor de Arrastrar Por defecto"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultDropCursor"_s,
			"Cursor de Soltar Por Defecto"_s
		}),
		$$new($ObjectArray, {
			"AWT.DefaultNoDropCursor"_s,
			"Cursor de No Arrastrar Por Defecto"_s
		}),
		$$new($ObjectArray, {
			"AWT.EResizeCursor"_s,
			u"Cursor de Cambio de Tamaño este"_s
		}),
		$$new($ObjectArray, {
			"AWT.HandCursor"_s,
			"Cursor de Mano"_s
		}),
		$$new($ObjectArray, {
			"AWT.HostInputMethodDisplayName"_s,
			u"Métodos de Entrada del Sistema"_s
		}),
		$$new($ObjectArray, {
			"AWT.InconsistentDLLsWarning"_s,
			u"Puede que las operaciones textuales no funcionen correctamente debido a un juego incoherente de bibliotecas de enlaces dinámicos (DLL) instaladas en su sistema. Para obtener más información acerca de este problema y de la solución alternativa sugerida, consulte Java(TM) 2 SDK, Standard Edition Release Notes en java.sun.com."_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodCreationFailed"_s,
			"No se ha podido crear {0}. Motivo: {1}"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ja"_s,
			u"Japonés"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.ko"_s,
			"Coreano"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh"_s,
			"chino"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_CN"_s,
			"Chino Simplificado"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodLanguage.zh_TW"_s,
			"Chino Tradicional"_s
		}),
		$$new($ObjectArray, {
			"AWT.InputMethodSelectionMenu"_s,
			u"Seleccionar Método de Entrada"_s
		}),
		$$new($ObjectArray, {
			"AWT.Less"_s,
			"Menor que"_s
		}),
		$$new($ObjectArray, {
			"AWT.MoveCursor"_s,
			"Cursor de Movimiento"_s
		}),
		$$new($ObjectArray, {
			"AWT.NEResizeCursor"_s,
			u"Cursor de Cambio de Tamaño Nordeste"_s
		}),
		$$new($ObjectArray, {
			"AWT.NResizeCursor"_s,
			u"Cursor de Cambio de Tamaño Norte"_s
		}),
		$$new($ObjectArray, {
			"AWT.NWResizeCursor"_s,
			u"Cursor de Cambio de Tamaño Noroeste"_s
		}),
		$$new($ObjectArray, {
			"AWT.SEResizeCursor"_s,
			u"Cursor de Cambio de Tamaño Sudeste"_s
		}),
		$$new($ObjectArray, {
			"AWT.SResizeCursor"_s,
			u"Cursor de Cambio de Tamaño Sur"_s
		}),
		$$new($ObjectArray, {
			"AWT.SWResizeCursor"_s,
			u"Cursor de Cambio de Tamaño Suroeste"_s
		}),
		$$new($ObjectArray, {
			"AWT.TextCursor"_s,
			"Cursor de Texto"_s
		}),
		$$new($ObjectArray, {
			"AWT.WResizeCursor"_s,
			u"Cursor de Cambio de Tamaño Oeste"_s
		}),
		$$new($ObjectArray, {
			"AWT.WaitCursor"_s,
			"Cursor de Espera"_s
		}),
		$$new($ObjectArray, {
			"AWT.accept"_s,
			"Aceptar"_s
		}),
		$$new($ObjectArray, {
			"AWT.add"_s,
			u"+ de Teclado Numérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.again"_s,
			"Repetir"_s
		}),
		$$new($ObjectArray, {
			"AWT.allCandidates"_s,
			"Todos los Candidatos"_s
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
			"Alt Gr"_s
		}),
		$$new($ObjectArray, {
			"AWT.ampersand"_s,
			"Ampersand"_s
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
			"Comilla Invertida"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSlash"_s,
			"Barra Invertida"_s
		}),
		$$new($ObjectArray, {
			"AWT.backSpace"_s,
			"Retroceso"_s
		}),
		$$new($ObjectArray, {
			"AWT.begin"_s,
			"Inicio"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceLeft"_s,
			"Llave de Apertura"_s
		}),
		$$new($ObjectArray, {
			"AWT.braceRight"_s,
			"Llave de Cierre"_s
		}),
		$$new($ObjectArray, {
			"AWT.cancel"_s,
			"Cancelar"_s
		}),
		$$new($ObjectArray, {
			"AWT.capsLock"_s,
			u"Bloqueo de Mayúsculas"_s
		}),
		$$new($ObjectArray, {
			"AWT.circumflex"_s,
			"Circunflejo"_s
		}),
		$$new($ObjectArray, {
			"AWT.clear"_s,
			"Borrar"_s
		}),
		$$new($ObjectArray, {
			"AWT.closeBracket"_s,
			u"Paréntesis de Cierre"_s
		}),
		$$new($ObjectArray, {
			"AWT.codeInput"_s,
			u"Entrada de Código"_s
		}),
		$$new($ObjectArray, {
			"AWT.colon"_s,
			"Dos puntos"_s
		}),
		$$new($ObjectArray, {
			"AWT.comma"_s,
			"Coma"_s
		}),
		$$new($ObjectArray, {
			"AWT.compose"_s,
			"Componer"_s
		}),
		$$new($ObjectArray, {
			"AWT.context"_s,
			u"Menú Contextual"_s
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
			"Copiar"_s
		}),
		$$new($ObjectArray, {
			"AWT.cut"_s,
			"Cortar"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveDot"_s,
			"Punto Superior (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAboveRing"_s,
			u"Círculo Superior (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadAcute"_s,
			"Acento Agudo Muerto"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadBreve"_s,
			"Acento Breve (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCaron"_s,
			"Acento Articircunflejo (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCedilla"_s,
			"Cedilla (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadCircumflex"_s,
			"Circunflejo (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDiaeresis"_s,
			u"Diéresis (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadDoubleAcute"_s,
			"Acento Agudo Doble (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadGrave"_s,
			"Acento Grave (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadIota"_s,
			"Iota (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadMacron"_s,
			u"Macrón (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadOgonek"_s,
			u"Espíritu Áspero (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadSemivoicedSound"_s,
			"Sonido Semisonoro (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadTilde"_s,
			"Tilde (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.deadVoicedSound"_s,
			"Sonido Sonoro (Tecla Muerta)"_s
		}),
		$$new($ObjectArray, {
			"AWT.decimal"_s,
			u". de Teclado Numérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.delete"_s,
			"Suprimir"_s
		}),
		$$new($ObjectArray, {
			"AWT.divide"_s,
			u"/ de Teclado Numérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.dollar"_s,
			u"Dólar"_s
		}),
		$$new($ObjectArray, {
			"AWT.down"_s,
			"Abajo"_s
		}),
		$$new($ObjectArray, {
			"AWT.end"_s,
			"Fin"_s
		}),
		$$new($ObjectArray, {
			"AWT.enter"_s,
			"Intro"_s
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
			u"Signo de Exclamación de Cierre"_s
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
			"Buscar"_s
		}),
		$$new($ObjectArray, {
			"AWT.fullWidth"_s,
			"Anchura Completa"_s
		}),
		$$new($ObjectArray, {
			"AWT.greater"_s,
			"Mayor que"_s
		}),
		$$new($ObjectArray, {
			"AWT.halfWidth"_s,
			"Media Anchura"_s
		}),
		$$new($ObjectArray, {
			"AWT.help"_s,
			"Ayuda"_s
		}),
		$$new($ObjectArray, {
			"AWT.hiragana"_s,
			"Hiragana"_s
		}),
		$$new($ObjectArray, {
			"AWT.home"_s,
			"Inicio"_s
		}),
		$$new($ObjectArray, {
			"AWT.inputMethodOnOff"_s,
			u"Activar/Desactivar Método de Entrada"_s
		}),
		$$new($ObjectArray, {
			"AWT.insert"_s,
			"Insertar"_s
		}),
		$$new($ObjectArray, {
			"AWT.invertedExclamationMark"_s,
			u"Signo de Exclamación de Apertura"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseHiragana"_s,
			"Caracteres Hiragana Japoneses"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseKatakana"_s,
			"Caracteres Katakana Japoneses"_s
		}),
		$$new($ObjectArray, {
			"AWT.japaneseRoman"_s,
			"Caracteres Romanos Japoneses"_s
		}),
		$$new($ObjectArray, {
			"AWT.kana"_s,
			"Kana"_s
		}),
		$$new($ObjectArray, {
			"AWT.kanaLock"_s,
			"Bloqueo Kana"_s
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
			"Izquierda"_s
		}),
		$$new($ObjectArray, {
			"AWT.leftParenthesis"_s,
			u"Paréntesis Izquierdo"_s
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
			"Cambio de Modo"_s
		}),
		$$new($ObjectArray, {
			"AWT.multiply"_s,
			u"* de Teclado Numérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.noconvert"_s,
			"No Convertir"_s
		}),
		$$new($ObjectArray, {
			"AWT.numLock"_s,
			u"Bloqueo Numérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.numberSign"_s,
			u"Signo de Número"_s
		}),
		$$new($ObjectArray, {
			"AWT.numpad"_s,
			u"Teclado Numérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.openBracket"_s,
			u"Paréntesis de Apertura"_s
		}),
		$$new($ObjectArray, {
			"AWT.paste"_s,
			"Pegar"_s
		}),
		$$new($ObjectArray, {
			"AWT.pause"_s,
			"Pausa"_s
		}),
		$$new($ObjectArray, {
			"AWT.period"_s,
			"Punto"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgdn"_s,
			u"AvPág"_s
		}),
		$$new($ObjectArray, {
			"AWT.pgup"_s,
			u"RePág"_s
		}),
		$$new($ObjectArray, {
			"AWT.plus"_s,
			u"Más"_s
		}),
		$$new($ObjectArray, {
			"AWT.previousCandidate"_s,
			"Candidato Anterior"_s
		}),
		$$new($ObjectArray, {
			"AWT.printScreen"_s,
			"Imprimir Pantalla"_s
		}),
		$$new($ObjectArray, {
			"AWT.props"_s,
			"Propiedades"_s
		}),
		$$new($ObjectArray, {
			"AWT.quote"_s,
			"Comilla"_s
		}),
		$$new($ObjectArray, {
			"AWT.quoteDbl"_s,
			"Dobles Comillas"_s
		}),
		$$new($ObjectArray, {
			"AWT.right"_s,
			"Derecha"_s
		}),
		$$new($ObjectArray, {
			"AWT.rightParenthesis"_s,
			u"Paréntesis Derecho"_s
		}),
		$$new($ObjectArray, {
			"AWT.romanCharacters"_s,
			"Caracteres Romanos"_s
		}),
		$$new($ObjectArray, {
			"AWT.scrollLock"_s,
			"Bloqueo de Desplazamiento"_s
		}),
		$$new($ObjectArray, {
			"AWT.semicolon"_s,
			"Punto y coma"_s
		}),
		$$new($ObjectArray, {
			"AWT.separater"_s,
			u", de Teclado Numérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.separator"_s,
			u", de Teclado Numérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.shift"_s,
			u"Mayús"_s
		}),
		$$new($ObjectArray, {
			"AWT.slash"_s,
			"Barra"_s
		}),
		$$new($ObjectArray, {
			"AWT.space"_s,
			"Espacio"_s
		}),
		$$new($ObjectArray, {
			"AWT.stop"_s,
			"Parar"_s
		}),
		$$new($ObjectArray, {
			"AWT.subtract"_s,
			u"- de Teclado Numérico"_s
		}),
		$$new($ObjectArray, {
			"AWT.tab"_s,
			"Tabulador"_s
		}),
		$$new($ObjectArray, {
			"AWT.undefined"_s,
			"No Definido"_s
		}),
		$$new($ObjectArray, {
			"AWT.underscore"_s,
			"Subrayado"_s
		}),
		$$new($ObjectArray, {
			"AWT.undo"_s,
			"Deshacer"_s
		}),
		$$new($ObjectArray, {
			"AWT.unknown"_s,
			"Desconocido"_s
		}),
		$$new($ObjectArray, {
			"AWT.up"_s,
			"Arriba"_s
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
			"en el lugar"_s
		})
	});
}

awt_es::awt_es() {
}

$Class* awt_es::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(awt_es, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(awt_es, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.awt.resources.awt_es",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(awt_es, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(awt_es);
	});
	return class$;
}

$Class* awt_es::class$ = nullptr;

		} // resources
	} // awt
} // sun
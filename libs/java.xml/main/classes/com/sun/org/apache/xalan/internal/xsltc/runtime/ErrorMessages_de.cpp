#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_de.h>
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/BasisLibrary.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef AXIS_SUPPORT_ERR
#undef CANT_RESOLVE_RELATIVE_URI_ERR
#undef DATA_CONVERSION_ERR
#undef DOM_ADAPTER_INIT_ERR
#undef EQUALITY_EXPR_ERR
#undef EXTERNAL_FUNC_ERR
#undef FORMAT_NUMBER_ERR
#undef INVALID_ARGUMENT_ERR
#undef INVALID_NCNAME_ERR
#undef INVALID_QNAME_ERR
#undef ITERATOR_CLONE_ERR
#undef NAMESPACES_SUPPORT_ERR
#undef NAMESPACE_PREFIX_ERR
#undef PARSER_DTD_SUPPORT_ERR
#undef RUN_TIME_COPY_ERR
#undef RUN_TIME_INTERNAL_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRAY_NAMESPACE_ERR
#undef TYPED_AXIS_SUPPORT_ERR
#undef UNALLOWED_EXTENSION_ELEMENT_ERR
#undef UNALLOWED_EXTENSION_FUNCTION_ERR
#undef UNKNOWN_TRANSLET_VERSION_ERR
#undef UNSUPPORTED_EXT_ERR
#undef UNSUPPORTED_XSL_ERR

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $BasisLibrary = ::com::sun::org::apache::xalan::internal::xsltc::runtime::BasisLibrary;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {

void ErrorMessages_de::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_de::getContents() {
	$useLocalObjectStack();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$BasisLibrary::RUN_TIME_INTERNAL_ERR,
			"Interner Laufzeitfehler in \"{0}\""_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::RUN_TIME_COPY_ERR,
			u"Laufzeitfehler beim Ausführen von <xsl:copy>."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::DATA_CONVERSION_ERR,
			u"Ungültige Konvertierung von \"{0}\" in \"{1}\"."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::EXTERNAL_FUNC_ERR,
			u"Externe Funktion \"{0}\" nicht unterstützt von XSLTC."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::EQUALITY_EXPR_ERR,
			"Unbekannter Argumenttyp in Gleichheitsausdruck."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::INVALID_ARGUMENT_ERR,
			u"Ungültiger Argumenttyp \"{0}\" in Aufruf von \"{1}\""_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::FORMAT_NUMBER_ERR,
			"Versuch, Zahl \"{0}\" mit Muster \"{1}\" zu formatieren."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::ITERATOR_CLONE_ERR,
			"Iterator \"{0}\" kann nicht geclont werden."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::AXIS_SUPPORT_ERR,
			u"Iterator für Achse \"{0}\" nicht unterstützt."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::TYPED_AXIS_SUPPORT_ERR,
			u"Iterator für typisierte Achse \"{0}\" nicht unterstützt."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::STRAY_ATTRIBUTE_ERR,
			u"Attribut \"{0}\" außerhalb des Elements."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::STRAY_NAMESPACE_ERR,
			u"Namespace-Deklaration {0}={1} außerhalb des Elements."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::NAMESPACE_PREFIX_ERR,
			u"Namespace für Präfix \"{0}\" wurde nicht deklariert."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::DOM_ADAPTER_INIT_ERR,
			"DOMAdapter mit falschem Typ von Quell-DOM erstellt."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::PARSER_DTD_SUPPORT_ERR,
			"Der verwendete SAX-Parser verarbeitet keine DTD-Deklarationsereignisse."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::NAMESPACES_SUPPORT_ERR,
			u"Der verwendete SAX-Parser unterstützt keine XML-Namespaces."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR,
			u"URI-Referenz \"{0}\" konnte nicht aufgelöst werden."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNSUPPORTED_XSL_ERR,
			u"Nicht unterstütztes XSL-Element \"{0}\""_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNSUPPORTED_EXT_ERR,
			"Unbekannte XSLTC-Erweiterung \"{0}\""_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR,
			u"Das angegebene Translet \"{0}\" wurde mit einer neueren Version von XSLTC als die verwendete Version der XSLTC-Laufzeit erstellt. Sie müssen das Stylesheet neu kompilieren oder eine aktuellere Version von XSLTC verwenden, um dieses Translet auszuführen."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::INVALID_QNAME_ERR,
			"Ein Attribut, dessen Wert ein QName sein muss, hatte den Wert \"{0}\""_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::INVALID_NCNAME_ERR,
			"Ein Attribut, dessen Wert ein NCName sein muss, hatte den Wert \"{0}\""_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR,
			u"Verwendung der Erweiterungsfunktion \"{0}\" ist nicht zulässig, wenn das Feature für die sichere Verarbeitung auf \"true\" gesetzt ist."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR,
			u"Verwendung des Erweiterungselements \"{0}\" ist nicht zulässig, wenn das Feature für die sichere Verarbeitung auf \"true\" gesetzt ist."_s
		})
	});
}

ErrorMessages_de::ErrorMessages_de() {
}

$Class* ErrorMessages_de::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_de, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_de, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_de",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorMessages_de, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorMessages_de);
	});
	return class$;
}

$Class* ErrorMessages_de::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
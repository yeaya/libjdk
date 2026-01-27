#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_it.h>

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

$MethodInfo _ErrorMessages_it_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_it, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_it, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _ErrorMessages_it_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_it",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_it_MethodInfo_
};

$Object* allocate$ErrorMessages_it($Class* clazz) {
	return $of($alloc(ErrorMessages_it));
}

void ErrorMessages_it::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_it::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of("Errore interno in fase di esecuzione in \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of("Errore in fase di esecuzione durante l\'esecuzione di <xsl:copy>."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of("Conversione non valida da \'\'{0}\'\' a \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of("Funzione esterna \'\'{0}\'\' non supportata da XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of("Tipo di argomento sconosciuto nell\'espressione di uguaglianza."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of("Tipo di argomento \'\'{0}\'\' non valido nella chiamata a \'\'{1}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of("Tentativo di formattare il numero \'\'{0}\'\' mediante il pattern \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of("Impossibile duplicare l\'\'iteratore \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of("Iteratore per l\'\'asse \'\'{0}\'\' non supportato."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of("Iteratore per l\'\'asse immesso \'\'{0}\'\' non supportato."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of("Attributo \'\'{0}\'\' al di fuori dell\'\'elemento."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of("Dichiarazione dello spazio di nomi \'\'{0}\'\'=\'\'{1}\'\' al di fuori dell\'\'elemento."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"Lo spazio di nomi per il prefisso \'\'{0}\'\' non è stato dichiarato."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of("DOMAdapter creato utilizzando il tipo errato di DOM di origine."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of("Il parser SAX in uso non gestisce gli eventi di dichiarazione DTD."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of("Il parser SAX in uso non supporta gli spazi di nomi XML."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of("Impossibile risolvere il riferimento URI \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of("Elemento XSL \"{0}\" non supportato"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of("Estensione XSLTC \'\'{0}\'\' non riconosciuta"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"Il translet specificato \'\'{0}\'\' è stato creato utilizzando una versione di XSLTC più recente di quella della fase di esecuzione XSLTC in uso. Ricompilare il foglio di stile o utilizzare una versione più recente di XSLTC per eseguire questo translet."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of("Un attributo il cui valore deve essere un QName contiene il valore \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of("Un attributo il cui valore deve essere un NCName contiene il valore \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"Non è consentito utilizzare la funzione di estensione \'\'{0}\'\' se la funzione di elaborazione sicura è impostata su true."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"Non è consentito utilizzare l\'\'elemento di estensione \'\'{0}\'\' se la funzione di elaborazione sicura è impostata su true."_s)
		})
	});
}

ErrorMessages_it::ErrorMessages_it() {
}

$Class* ErrorMessages_it::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_it, name, initialize, &_ErrorMessages_it_ClassInfo_, allocate$ErrorMessages_it);
	return class$;
}

$Class* ErrorMessages_it::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_sv.h>

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

$MethodInfo _ErrorMessages_sv_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_sv, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_sv, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _ErrorMessages_sv_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_sv",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_sv_MethodInfo_
};

$Object* allocate$ErrorMessages_sv($Class* clazz) {
	return $of($alloc(ErrorMessages_sv));
}

void ErrorMessages_sv::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_sv::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of("Internt exekveringsfel i \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of("Exekveringsexekveringsfel av <xsl:copy>."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"Ogiltig konvertering från \'\'{0}\'\' till \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"Den externa funktionen \'\'{0}\'\' understöds inte i XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"Okänd argumenttyp i likhetsuttryck."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"Argumenttyp \'\'{0}\'\' i anrop till \'\'{1}\'\' är inte giltig"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"Försöker formatera talet \'\'{0}\'\' med mönstret \'\'{1}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of("Kan inte klona iteratorn \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"Iteratorn för axeln \'\'{0}\'\' understöds inte."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"Iteratorn för den typade axeln \'\'{0}\'\' understöds inte."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"Attributet \'\'{0}\'\' finns utanför elementet."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"Namnrymdsdeklarationen \'\'{0}\'\'=\'\'{1}\'\' finns utanför element."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"Namnrymd för prefix \'\'{0}\'\' har inte deklarerats."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"DOMAdapter har skapats med fel typ av DOM-källa."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"Den SAX-parser som du använder hanterar inga DTD-deklarationshändelser."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"Den SAX-parser som du använder saknar stöd för XML-namnrymder."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of("Kunde inte matcha URI-referensen \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of(u"XSL-elementet \'\'{0}\'\' stöds inte"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of(u"XSLTC-tillägget \'\'{0}\'\' är okänt"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"Angiven translet, \'\'{0}\'\', har skapats med en XSLTC-version som är senare än den XSLTC-körning i bruk. För att kunna köra denna translet måste du omkompilera formatmallen eller använda en senare version av XSLTC."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of(u"Ett attribut vars värde måste vara ett QName hade värdet \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of(u"Ett attribut vars värde måste vara ett NCName hade värdet \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"Användning av tilläggsfunktionen \'\'{0}\'\' är inte tillåtet när säker bearbetning tillämpas."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"Användning av tilläggselementet \'\'{0}\'\' är inte tillåtet när säker bearbetning tillämpas."_s)
		})
	});
}

ErrorMessages_sv::ErrorMessages_sv() {
}

$Class* ErrorMessages_sv::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_sv, name, initialize, &_ErrorMessages_sv_ClassInfo_, allocate$ErrorMessages_sv);
	return class$;
}

$Class* ErrorMessages_sv::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
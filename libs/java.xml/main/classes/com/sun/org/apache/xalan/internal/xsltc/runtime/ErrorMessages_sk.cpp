#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_sk.h>
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
#undef ITERATOR_CLONE_ERR
#undef NAMESPACES_SUPPORT_ERR
#undef NAMESPACE_PREFIX_ERR
#undef PARSER_DTD_SUPPORT_ERR
#undef RUN_TIME_COPY_ERR
#undef RUN_TIME_INTERNAL_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRAY_NAMESPACE_ERR
#undef TYPED_AXIS_SUPPORT_ERR

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

void ErrorMessages_sk::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_sk::getContents() {
	$useLocalObjectStack();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$BasisLibrary::RUN_TIME_INTERNAL_ERR,
			u"Interná chyba času spustenia v \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::RUN_TIME_COPY_ERR,
			u"Chyba času spustenia pri spúšťaní <xsl:copy>."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::DATA_CONVERSION_ERR,
			u"Neplatná konverzia z \'\'{0}\'\' na \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::EXTERNAL_FUNC_ERR,
			u"XSLTC nepodporuje externú funkciu \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::EQUALITY_EXPR_ERR,
			u"Neznámy typ argumentu je výrazom rovnosti."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::INVALID_ARGUMENT_ERR,
			u"Neplatný typ argumentu \'\'{0}\'\' vo volaní do \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::FORMAT_NUMBER_ERR,
			u"Pokus o formátovanie čísla \'\'{0}\'\' pomocou vzoru \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::ITERATOR_CLONE_ERR,
			u"Nie je možné klonovať iterátor \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::AXIS_SUPPORT_ERR,
			u"Iterátor pre os \'\'{0}\'\' nie je podporovaný."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::TYPED_AXIS_SUPPORT_ERR,
			u"Iterátor pre napísanú os \'\'{0}\'\' nie je podporovaný."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::STRAY_ATTRIBUTE_ERR,
			u"Atribút \'\'{0}\'\' je mimo elementu."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::STRAY_NAMESPACE_ERR,
			u"Deklarácia názvového priestoru \'\'{0}\'\'=\'\'{1}\'\' je mimo elementu."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::NAMESPACE_PREFIX_ERR,
			u"Názvový priestor pre predponu \'\'{0}\'\' nebol deklarovaný."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::DOM_ADAPTER_INIT_ERR,
			u"DOMAdapter bol vytvorený pomocou nesprávneho typu zdrojového DOM."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::PARSER_DTD_SUPPORT_ERR,
			u"Analyzátor SAX, ktorý používate, nespracúva udalosti deklarácie DTD."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::NAMESPACES_SUPPORT_ERR,
			u"Analyzátor SAX, ktorý používate, nemá podporu pre názvové priestory XML."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR,
			u"Nebolo možné rozlíšiť referenciu URI \'\'{0}\'\'."_s
		})
	});
}

ErrorMessages_sk::ErrorMessages_sk() {
}

$Class* ErrorMessages_sk::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_sk, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_sk, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_sk",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorMessages_sk, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorMessages_sk);
	});
	return class$;
}

$Class* ErrorMessages_sk::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
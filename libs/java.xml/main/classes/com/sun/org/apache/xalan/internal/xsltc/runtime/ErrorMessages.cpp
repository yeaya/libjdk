#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages.h>
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

void ErrorMessages::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages::getContents() {
	$useLocalObjectStack();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$BasisLibrary::RUN_TIME_INTERNAL_ERR,
			"Run-time internal error in \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::RUN_TIME_COPY_ERR,
			"Run-time error when executing <xsl:copy>."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::DATA_CONVERSION_ERR,
			"Invalid conversion from \'\'{0}\'\' to \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::EXTERNAL_FUNC_ERR,
			"External function \'\'{0}\'\' not supported by XSLTC."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::EQUALITY_EXPR_ERR,
			"Unknown argument type in equality expression."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::INVALID_ARGUMENT_ERR,
			"Invalid argument type \'\'{0}\'\' in call to \'\'{1}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::FORMAT_NUMBER_ERR,
			"Attempting to format number \'\'{0}\'\' using pattern \'\'{1}\'\'."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::ITERATOR_CLONE_ERR,
			"Cannot clone iterator \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::AXIS_SUPPORT_ERR,
			"Iterator for axis \'\'{0}\'\' not supported."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::TYPED_AXIS_SUPPORT_ERR,
			"Iterator for typed axis \'\'{0}\'\' not supported."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::STRAY_ATTRIBUTE_ERR,
			"Attribute \'\'{0}\'\' outside of element."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::STRAY_NAMESPACE_ERR,
			"Namespace declaration \'\'{0}\'\'=\'\'{1}\'\' outside of element."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::NAMESPACE_PREFIX_ERR,
			"Namespace for prefix \'\'{0}\'\' has not been declared."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::DOM_ADAPTER_INIT_ERR,
			"DOMAdapter created using wrong type of source DOM."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::PARSER_DTD_SUPPORT_ERR,
			"The SAX parser you are using does not handle DTD declaration events."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::NAMESPACES_SUPPORT_ERR,
			"The SAX parser you are using does not have support for XML Namespaces."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR,
			"Could not resolve the URI reference \'\'{0}\'\'."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNSUPPORTED_XSL_ERR,
			"Unsupported XSL element \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNSUPPORTED_EXT_ERR,
			"Unrecognized XSLTC extension \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR,
			"The specified translet, \'\'{0}\'\', was created using a version of XSLTC more recent than the version of the XSLTC run-time that is in use.  You must recompile the stylesheet or use a more recent version of XSLTC to run this translet."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::INVALID_QNAME_ERR,
			"An attribute whose value must be a QName had the value \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::INVALID_NCNAME_ERR,
			"An attribute whose value must be an NCName had the value \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR,
			"Use of the extension function \'\'{0}\'\' is not allowed when the secure processing feature is set to true."_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR,
			"Use of the extension element \'\'{0}\'\' is not allowed when the secure processing feature is set to true."_s
		})
	});
}

ErrorMessages::ErrorMessages() {
}

$Class* ErrorMessages::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorMessages, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorMessages);
	});
	return class$;
}

$Class* ErrorMessages::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
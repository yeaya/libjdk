#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_zh_TW.h>
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

void ErrorMessages_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_zh_TW::getContents() {
	$useLocalObjectStack();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$BasisLibrary::RUN_TIME_INTERNAL_ERR,
			u"\'\'{0}\'\' 中的執行階段內部錯誤"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::RUN_TIME_COPY_ERR,
			u"執行 <xsl:copy> 時發生執行階段錯誤"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::DATA_CONVERSION_ERR,
			u"從 \'\'{0}\'\' 至 \'\'{1}\'\' 的轉換無效。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::EXTERNAL_FUNC_ERR,
			u"XSLTC 不支援外部函數 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::EQUALITY_EXPR_ERR,
			u"相等性表示式中的引數類型不明。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::INVALID_ARGUMENT_ERR,
			u"呼叫 \'\'{1}\'\' 中的引數類型 \'\'{0}\'\' 無效"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::FORMAT_NUMBER_ERR,
			u"嘗試使用樣式 \'\'{1}\'\' 格式化數字 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::ITERATOR_CLONE_ERR,
			u"無法複製重複程式 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::AXIS_SUPPORT_ERR,
			u"不支援軸 \'\'{0}\'\' 的重複程式。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::TYPED_AXIS_SUPPORT_ERR,
			u"不支援類型軸 \'\'{0}\'\' 的重複程式。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::STRAY_ATTRIBUTE_ERR,
			u"屬性 \'\'{0}\'\' 在元素之外。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::STRAY_NAMESPACE_ERR,
			u"命名空間宣告 \'\'{0}\'\'=\'\'{1}\'\' 超出元素外。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::NAMESPACE_PREFIX_ERR,
			u"字首 \'\'{0}\'\' 的命名空間尚未宣告。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::DOM_ADAPTER_INIT_ERR,
			u"使用錯誤的來源 DOM 類型建立 DOMAdapter。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::PARSER_DTD_SUPPORT_ERR,
			u"您正在使用的 SAX 剖析器不會處理 DTD 宣告事件。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::NAMESPACES_SUPPORT_ERR,
			u"您正在使用的 SAX 剖析器不支援 XML 命名空間。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR,
			u"無法解析 URI 參照 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNSUPPORTED_XSL_ERR,
			u"不支援的 XSL 元素 \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNSUPPORTED_EXT_ERR,
			u"無法辨識的 XSLTC 擴充套件 \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR,
			u"建立指定 translet \'\'{0}\'\' 的 XSLTC 版本比使用中 XSLTC 執行階段的版本較新。您必須重新編譯樣式表，或使用較新的 XSLTC 版本來執行此 translet。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::INVALID_QNAME_ERR,
			u"值必須為 QName 的屬性，具有值 \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::INVALID_NCNAME_ERR,
			u"值必須為 NCName 的屬性，具有值 \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR,
			u"當安全處理功能設為真時，不允許使用擴充套件函數 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR,
			u"當安全處理功能設為真時，不允許使用擴充套件元素 \'\'{0}\'\'。"_s
		})
	});
}

ErrorMessages_zh_TW::ErrorMessages_zh_TW() {
}

$Class* ErrorMessages_zh_TW::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_zh_TW, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_zh_TW, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_zh_TW",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorMessages_zh_TW, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorMessages_zh_TW);
	});
	return class$;
}

$Class* ErrorMessages_zh_TW::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
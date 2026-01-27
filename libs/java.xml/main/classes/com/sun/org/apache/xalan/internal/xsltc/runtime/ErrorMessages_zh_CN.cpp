#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_zh_CN.h>

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

$MethodInfo _ErrorMessages_zh_CN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_zh_CN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_zh_CN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _ErrorMessages_zh_CN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_zh_CN",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_zh_CN_MethodInfo_
};

$Object* allocate$ErrorMessages_zh_CN($Class* clazz) {
	return $of($alloc(ErrorMessages_zh_CN));
}

void ErrorMessages_zh_CN::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_zh_CN::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"\'\'{0}\'\' 中的运行时内部错误"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"执行 <xsl:copy> 时出现运行时错误。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"从 \'\'{0}\'\' 到 \'\'{1}\'\' 的转换无效。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"XSLTC 不支持外部函数 \'\'{0}\'\'。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"等式表达式中的参数类型未知。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"调用 \'\'{1}\'\' 时的参数类型 \'\'{0}\'\' 无效"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"尝试使用模式 \'\'{1}\'\' 设置数字 \'\'{0}\'\' 的格式。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of(u"无法克隆迭代器 \'\'{0}\'\'。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"不支持轴 \'\'{0}\'\' 的迭代器。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"不支持类型化轴 \'\'{0}\'\' 的迭代器。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"属性 \'\'{0}\'\' 在元素外部。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"名称空间声明 \'\'{0}\'\'=\'\'{1}\'\' 在元素外部。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"没有说明名称空间前缀 \'\'{0}\'\'。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"使用错误类型的源 DOM 创建了 DOMAdapter。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"使用的 SAX 解析器不会处理 DTD 声明事件。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"使用的 SAX 解析器不支持 XML 名称空间。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"无法解析 URI 引用 \'\'{0}\'\'。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of(u"XSL 元素 \'\'{0}\'\' 不受支持"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of(u"XSLTC 扩展 \'\'{0}\'\' 无法识别"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"创建指定 translet \'\'{0}\'\' 时使用的 XSLTC 的版本高于正在使用的 XSLTC 运行时的版本。必须重新编译样式表或使用较新的 XSLTC 版本运行此 translet。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of(u"其值必须为 QName 的属性具有值 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of(u"其值必须为 NCName 的属性具有值 \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"当安全处理功能设置为“真”时, 不允许使用扩展函数 \'\'{0}\'\'。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"当安全处理功能设置为“真”时, 不允许使用扩展元素 \'\'{0}\'\'。"_s)
		})
	});
}

ErrorMessages_zh_CN::ErrorMessages_zh_CN() {
}

$Class* ErrorMessages_zh_CN::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_zh_CN, name, initialize, &_ErrorMessages_zh_CN_ClassInfo_, allocate$ErrorMessages_zh_CN);
	return class$;
}

$Class* ErrorMessages_zh_CN::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
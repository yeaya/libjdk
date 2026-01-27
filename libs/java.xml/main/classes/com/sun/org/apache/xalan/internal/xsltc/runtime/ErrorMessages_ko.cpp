#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_ko.h>

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

$MethodInfo _ErrorMessages_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _ErrorMessages_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_ko",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_ko_MethodInfo_
};

$Object* allocate$ErrorMessages_ko($Class* clazz) {
	return $of($alloc(ErrorMessages_ko));
}

void ErrorMessages_ko::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_ko::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"\'\'{0}\'\'에 런타임 내부 오류가 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"<xsl:copy>를 실행하는 중 런타임 오류가 발생했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"\'\'{0}\'\'에서 \'\'{1}\'\'(으)로의 변환이 부적합합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"XSLTC는 외부 함수 \'\'{0}\'\'을(를) 지원하지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"동등성 표현식에 알 수 없는 인수 유형이 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"\'\'{1}\'\'에 대한 호출에 부적합한 인수 유형 \'\'{0}\'\'이(가) 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"\'\'{1}\'\' 패턴을 사용하여 \'\'{0}\'\' 숫자의 형식을 지정하려고 시도하는 중입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of(u"\'\'{0}\'\' 이터레이터를 복제할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"\'\'{0}\'\' 축에 대한 이터레이터는 지원되지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"입력된 축 \'\'{0}\'\'에 대한 이터레이터는 지원되지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"\'\'{0}\'\' 속성이 요소에 포함되어 있지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"네임스페이스 선언 \'\'{0}\'\'=\'\'{1}\'\'이(가) 요소에 포함되어 있지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"\'\'{0}\'\' 접두어에 대한 네임스페이스가 선언되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"소스 DOM의 잘못된 유형을 사용하여 DOMAdapter가 생성되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"사용 중인 SAX 구문 분석기가 DTD 선언 이벤트를 처리하지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"사용 중인 SAX 구문 분석기가 XML 네임스페이스를 지원하지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"URI 참조 \'\'{0}\'\'을(를) 분석할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of(u"\'\'{0}\'\'은(는) 지원되지 않는 XSL 요소입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of(u"\'\'{0}\'\'은(는) 알 수 없는 XSLTC 확장입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"지정된 translet \'\'{0}\'\'이(가) 사용 중인 XSLTC 런타임 버전보다 최신의 XSLTC 버전을 사용하여 생성되었습니다. 이 translet을 실행하려면 스타일시트를 재컴파일하거나 최신 XSLTC 버전을 사용해야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of(u"값이 QName이어야 하는 속성의 값이 \'\'{0}\'\'입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of(u"값이 NCName이어야 하는 속성의 값이 \'\'{0}\'\'입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"보안 처리 기능이 true로 설정된 경우 확장 함수 \'\'{0}\'\'을(를) 사용할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"보안 처리 기능이 true로 설정된 경우 확장 요소 \'\'{0}\'\'을(를) 사용할 수 없습니다."_s)
		})
	});
}

ErrorMessages_ko::ErrorMessages_ko() {
}

$Class* ErrorMessages_ko::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_ko, name, initialize, &_ErrorMessages_ko_ClassInfo_, allocate$ErrorMessages_ko);
	return class$;
}

$Class* ErrorMessages_ko::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
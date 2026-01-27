#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_ko.h>

#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMsg.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef ACCESSING_XSLT_TARGET_ERR
#undef ARGUMENT_CONVERSION_ERR
#undef ATTRIBSET_UNDEF_ERR
#undef ATTR_VAL_TEMPLATE_ERR
#undef CATALOG_EXCEPTION
#undef CIRCULAR_INCLUDE_ERR
#undef CIRCULAR_VARIABLE_ERR
#undef CLASS_NOT_FOUND_ERR
#undef CMDLINE_OPT_MISSING_ARG_ERR
#undef COMPILER_ERROR_KEY
#undef COMPILER_WARNING_KEY
#undef COMPILE_STDIN_ERR
#undef COMPILE_USAGE_STR
#undef CONSTRUCTOR_NOT_FOUND
#undef COULD_NOT_CREATE_TRANS_FACT
#undef DATA_CONVERSION_ERR
#undef DESERIALIZE_TRANSLET_ERR
#undef DOCUMENT_ARG_ERR
#undef ELEMENT_PARSE_ERR
#undef ERROR_LISTENER_NULL_ERR
#undef ERROR_MSG
#undef ERROR_PLUS_WRAPPED_MSG
#undef ER_RESULT_NULL
#undef FATAL_ERR_MSG
#undef FATAL_ERR_PLUS_WRAPPED_MSG
#undef FILE_ACCESS_ERR
#undef FILE_NOT_FOUND_ERR
#undef FUNCTION_RESOLVE_ERR
#undef ILLEGAL_ARG_ERR
#undef ILLEGAL_ATTRIBUTE_ERR
#undef ILLEGAL_ATTR_NAME_ERR
#undef ILLEGAL_BINARY_OP_ERR
#undef ILLEGAL_CHAR_ERR
#undef ILLEGAL_CHILD_ERR
#undef ILLEGAL_CMDLINE_OPTION_ERR
#undef ILLEGAL_ELEM_NAME_ERR
#undef ILLEGAL_PI_ERR
#undef ILLEGAL_RELAT_OP_ERR
#undef ILLEGAL_TEXT_NODE_ERR
#undef IMPORT_PRECEDE_OTHERS_ERR
#undef INTERNAL_ERR
#undef INVALID_METHOD_IN_OUTPUT
#undef INVALID_NCNAME_ERR
#undef INVALID_QNAME_ERR
#undef INVALID_URI_ERR
#undef JAXP_COMPILE_ERR
#undef JAXP_GET_FEATURE_NULL_NAME
#undef JAXP_INVALID_ATTR_ERR
#undef JAXP_INVALID_ATTR_VALUE_ERR
#undef JAXP_INVALID_SET_PARAM_VALUE
#undef JAXP_NO_HANDLER_ERR
#undef JAXP_NO_RESULT_ERR
#undef JAXP_NO_SOURCE_ERR
#undef JAXP_NO_TRANSLET_ERR
#undef JAXP_SECUREPROCESSING_FEATURE
#undef JAXP_SET_FEATURE_NULL_NAME
#undef JAXP_SET_RESULT_ERR
#undef JAXP_UNKNOWN_PROP_ERR
#undef JAXP_UNKNOWN_SOURCE_ERR
#undef JAXP_UNSUPPORTED_FEATURE
#undef KEY_USE_ATTR_ERR
#undef METHOD_NOT_FOUND_ERR
#undef MISSING_ROOT_ERR
#undef MISSING_WHEN_ERR
#undef MISSING_XSLT_TARGET_ERR
#undef MISSING_XSLT_URI_ERR
#undef MULTIPLE_OTHERWISE_ERR
#undef MULTIPLE_STYLESHEET_ERR
#undef NAMESPACE_UNDEF_ERR
#undef NEED_LITERAL_ERR
#undef NOT_IMPLEMENTED_ERR
#undef NOT_STYLESHEET_ERR
#undef NO_JAVA_FUNCT_THIS_REF
#undef NO_MAIN_TRANSLET_ERR
#undef NO_TRANSLET_CLASS_ERR
#undef OUTLINE_ERR_DELETED_TARGET
#undef OUTLINE_ERR_METHOD_TOO_BIG
#undef OUTLINE_ERR_TRY_CATCH
#undef OUTLINE_ERR_UNBALANCED_MARKERS
#undef OUTPUT_VERSION_ERR
#undef REQUIRED_ATTR_ERR
#undef RESULT_TREE_SORT_ERR
#undef RUNTIME_ERROR_KEY
#undef SAX2DOM_ADAPTER_ERR
#undef SAX_PARSER_CONFIG_ERR
#undef STRAY_ATTRIBUTE_ERR
#undef STRAY_OTHERWISE_ERR
#undef STRAY_SORT_ERR
#undef STRAY_WHEN_ERR
#undef SYMBOLS_REDEF_ERR
#undef SYNTAX_ERR
#undef TEMPLATE_REDEF_ERR
#undef TEMPLATE_UNDEF_ERR
#undef TRANSFORM_USAGE_STR
#undef TRANSFORM_WITH_JAR_STR
#undef TRANSFORM_WITH_TRANSLET_STR
#undef TRANSLET_CLASS_ERR
#undef TRANSLET_NAME_JAVA_CONFLICT
#undef TRANSLET_OBJECT_ERR
#undef TYPE_CHECK_ERR
#undef TYPE_CHECK_UNK_LOC_ERR
#undef UNKNOWN_SIG_TYPE_ERR
#undef UNNAMED_ATTRIBSET_ERR
#undef UNSUPPORTED_ENCODING
#undef UNSUPPORTED_EXT_ERR
#undef UNSUPPORTED_XSL_ERR
#undef VARIABLE_REDEF_ERR
#undef VARIABLE_UNDEF_ERR
#undef WARNING_MSG
#undef WARNING_PLUS_WRAPPED_MSG
#undef WHEN_ELEMENT_ERR
#undef XPATH_PARSER_ERR
#undef XSLTC_SOURCE_ERR
#undef XSL_VERSION_ERR

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ErrorMsg = ::com::sun::org::apache::xalan::internal::xsltc::compiler::util::ErrorMsg;
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
							namespace compiler {
								namespace util {

$MethodInfo _ErrorMessages_ko_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_ko, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_ko, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _ErrorMessages_ko_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_ko",
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
	$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_STYLESHEET_ERR),
			$of(u"동일한 파일에 스타일시트가 두 개 이상 정의되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_REDEF_ERR),
			$of(u"이 스타일시트에는 \'\'{0}\'\' 템플리트가 이미 정의되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TEMPLATE_UNDEF_ERR),
			$of(u"이 스타일시트에는 \'\'{0}\'\' 템플리트가 정의되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_REDEF_ERR),
			$of(u"동일한 범위에서 \'\'{0}\'\' 변수가 여러 개 정의되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::VARIABLE_UNDEF_ERR),
			$of(u"변수 또는 매개변수 \'\'{0}\'\'이(가) 정의되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CLASS_NOT_FOUND_ERR),
			$of(u"\'\'{0}\'\' 클래스를 찾을 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::METHOD_NOT_FOUND_ERR),
			$of(u"외부 메소드 \'\'{0}\'\'을(를) 찾을 수 없습니다. 이 메소드는 public이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ARGUMENT_CONVERSION_ERR),
			$of(u"\'\'{0}\'\' 메소드에 대한 호출에서 인수/반환 유형을 변환할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_NOT_FOUND_ERR),
			$of(u"파일 또는 URI \'\'{0}\'\'을(를) 찾을 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_URI_ERR),
			$of(u"URI \'\'{0}\'\'이(가) 부적합합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CATALOG_EXCEPTION),
			$of(u"JAXP08090001: CatalogResolver가 \"{0}\" 카탈로그에 사용으로 설정되었지만 CatalogException이 반환되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FILE_ACCESS_ERR),
			$of(u"파일 또는 URI \'\'{0}\'\'을(를) 열 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_ROOT_ERR),
			$of(u"<xsl:stylesheet> 또는 <xsl:transform> 요소가 필요합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NAMESPACE_UNDEF_ERR),
			$of(u"네임스페이스 접두어 \'\'{0}\'\'이(가) 선언되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FUNCTION_RESOLVE_ERR),
			$of(u"\'\'{0}\'\' 함수에 대한 호출을 분석할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NEED_LITERAL_ERR),
			$of(u"\'\'{0}\'\'에 대한 인수는 리터럴 문자열이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XPATH_PARSER_ERR),
			$of(u"XPath 표현식 \'\'{0}\'\'의 구문을 분석하는 중 오류가 발생했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::REQUIRED_ATTR_ERR),
			$of(u"필수 속성 \'\'{0}\'\'이(가) 누락되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHAR_ERR),
			$of(u"XPath 표현식에 잘못된 문자 \'\'{0}\'\'이(가) 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_PI_ERR),
			$of(u"\'\'{0}\'\'은(는) 명령 처리에 잘못된 이름입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_ATTRIBUTE_ERR),
			$of(u"\'\'{0}\'\' 속성이 요소에 포함되어 있지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTRIBUTE_ERR),
			$of(u"\'\'{0}\'\'은(는) 잘못된 속성입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_INCLUDE_ERR),
			$of(u"순환 import/include입니다. \'\'{0}\'\' 스타일시트가 이미 로드되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR),
			$of(u"xsl:import 요소 하위는 xsl:include 요소 하위를 포함해 xsl:stylesheet 요소의 모든 다른 요소 하위 앞에 와야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RESULT_TREE_SORT_ERR),
			$of(u"Result-tree 부분을 정렬할 수 없습니다(<xsl:sort> 요소가 무시됨). 결과 트리를 생성할 때는 노드를 정렬해야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYMBOLS_REDEF_ERR),
			$of(u"십진수 형식 \'\'{0}\'\'이(가) 이미 정의되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSL_VERSION_ERR),
			$of(u"XSLTC는 XSL 버전 \'\'{0}\'\'을(를) 지원하지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CIRCULAR_VARIABLE_ERR),
			$of(u"\'\'{0}\'\'에 순환 변수/매개변수 참조가 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_BINARY_OP_ERR),
			$of(u"바이너리 표현식에 대해 알 수 없는 연산자입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ARG_ERR),
			$of(u"함수 호출에 대한 인수가 잘못되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DOCUMENT_ARG_ERR),
			$of(u"document() 함수에 대한 두번째 인수는 node-set여야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_WHEN_ERR),
			$of(u"<xsl:choose>에는 <xsl:when> 요소가 하나 이상 필요합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MULTIPLE_OTHERWISE_ERR),
			$of(u"<xsl:choose>에서는 <xsl:otherwise> 요소가 하나만 허용됩니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_OTHERWISE_ERR),
			$of(u"<xsl:otherwise>는 <xsl:choose>에서만 사용할 수 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_WHEN_ERR),
			$of(u"<xsl:when>은 <xsl:choose>에서만 사용할 수 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WHEN_ELEMENT_ERR),
			$of(u"<xsl:choose>에서는 <xsl:when> 및 <xsl:otherwise> 요소만 허용됩니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNNAMED_ATTRIBSET_ERR),
			$of(u"<xsl:attribute-set>에 \'name\' 속성이 누락되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CHILD_ERR),
			$of(u"하위 요소가 잘못되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ELEM_NAME_ERR),
			$of(u"\'\'{0}\'\' 요소를 호출할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_ATTR_NAME_ERR),
			$of(u"\'\'{0}\'\' 속성을 호출할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_TEXT_NODE_ERR),
			$of(u"텍스트 데이터가 최상위 레벨 <xsl:stylesheet> 요소에 포함되어 있지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX_PARSER_CONFIG_ERR),
			$of(u"JAXP 구문 분석기가 제대로 구성되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INTERNAL_ERR),
			$of(u"복구할 수 없는 XSLTC 내부 오류: \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_XSL_ERR),
			$of(u"\'\'{0}\'\'은(는) 지원되지 않는 XSL 요소입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_EXT_ERR),
			$of(u"\'\'{0}\'\'은(는) 알 수 없는 XSLTC 확장입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_URI_ERR),
			$of(u"입력 문서는 스타일시트가 아닙니다. XSL 네임스페이스가 루트 요소에 선언되지 않았습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::MISSING_XSLT_TARGET_ERR),
			$of(u"스타일시트 대상 \'\'{0}\'\'을(를) 찾을 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ACCESSING_XSLT_TARGET_ERR),
			$of(u"accessExternalStylesheet 속성으로 설정된 제한으로 인해 \'\'{1}\'\' 액세스가 허용되지 않으므로 스타일시트 대상 \'\'{0}\'\'을(를) 읽을 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_IMPLEMENTED_ERR),
			$of(u"구현되지 않음: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NOT_STYLESHEET_ERR),
			$of(u"입력 문서에 XSL 스타일시트가 포함되어 있지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ELEMENT_PARSE_ERR),
			$of(u"\'\'{0}\'\' 요소의 구문을 분석할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::KEY_USE_ATTR_ERR),
			$of(u"<key>의 use 속성은 node, node-set, string 또는 number여야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTPUT_VERSION_ERR),
			$of(u"출력 XML 문서 버전은 1.0이어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_RELAT_OP_ERR),
			$of(u"관계 표현식에 대해 알 수 없는 연산자입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTRIBSET_UNDEF_ERR),
			$of(u"존재하지 않는 속성 집합 \'\'{0}\'\'을(를) 사용하려고 시도하는 중입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ATTR_VAL_TEMPLATE_ERR),
			$of(u"속성값 템플리트 \'\'{0}\'\'의 구문을 분석할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNKNOWN_SIG_TYPE_ERR),
			$of(u"\'\'{0}\'\' 클래스에 대한 서명에 알 수 없는 데이터 유형이 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DATA_CONVERSION_ERR),
			$of(u"데이터 유형 \'\'{0}\'\'을(를) \'\'{1}\'\'(으)로 변환할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_TRANSLET_CLASS_ERR),
			$of(u"이 Templates에는 적합한 translet 클래스 정의가 포함되어 있지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_MAIN_TRANSLET_ERR),
			$of(u"이 Templates에는 이름이 \'\'{0}\'\'인 클래스가 포함되어 있지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_CLASS_ERR),
			$of(u"Translet 클래스 \'\'{0}\'\'을(를) 로드할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_OBJECT_ERR),
			$of(u"Translet 클래스가 로드되었지만 translet 인스턴스를 생성할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_LISTENER_NULL_ERR),
			$of(u"\'\'{0}\'\'에 대한 ErrorListener를 null로 설정하려고 시도하는 중"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR),
			$of(u"XSLTC는 StreamSource, SAXSource 및 DOMSource만 지원합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_SOURCE_ERR),
			$of(u"\'\'{0}\'\'(으)로 전달된 Source 객체에 콘텐츠가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_COMPILE_ERR),
			$of(u"스타일시트를 컴파일할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_ERR),
			$of(u"TransformerFactory에서 \'\'{0}\'\' 속성을 인식하지 못했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR),
			$of(u"\'\'{0}\'\' 속성에 대해 올바르지 않은 값이 지정되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_RESULT_ERR),
			$of(u"setResult()는 startDocument() 앞에 호출되어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_TRANSLET_ERR),
			$of(u"Transformer에 캡슐화된 translet 객체가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_HANDLER_ERR),
			$of(u"변환 결과에 대해 정의된 출력 처리기가 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_NO_RESULT_ERR),
			$of(u"\'\'{0}\'\'(으)로 전달된 Result 객체가 부적합합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNKNOWN_PROP_ERR),
			$of(u"부적합한 Transformer 속성 \'\'{0}\'\'에 액세스하려고 시도하는 중입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SAX2DOM_ADAPTER_ERR),
			$of(u"SAX2DOM 어댑터를 생성할 수 없음: \'\'{0}\'\'."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::XSLTC_SOURCE_ERR),
			$of(u"systemId를 설정하지 않은 상태로 XSLTCSource.build()가 호출되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ER_RESULT_NULL),
			$of(u"결과는 널이 아니어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE),
			$of(u"{0} 매개변수의 값은 적합한 Java 객체여야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_STDIN_ERR),
			$of(u"-i 옵션은 -o 옵션과 함께 사용해야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILE_USAGE_STR),
			$of(u"사용법\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <output>]\n      [-d <directory>] [-j <jarfile>] [-p <package>]\n      [-n] [-x] [-u] [-v] [-h] { <stylesheet> | -i }\n\n옵션\n   -o <output>    생성된 translet에 <output> 이름을\n                  지정합니다. 기본적으로 translet 이름은\n                  <stylesheet> 이름에서 파생됩니다. 여러 스타일시트를\n                  컴파일하는 경우 이 옵션은 무시됩니다.\n   -d <directory> translet에 대한 대상 디렉토리를 지정합니다.\n   -j <jarfile>   translet 클래스를 <jarfile>이라는 이름이 지정된 jar 파일에\n                  패키지화합니다.\n   -p <package>   생성된 모든 translet 클래스에 대해 패키지 이름 접두어를\n                  지정합니다.\n   -n             템플리트 인라인을 사용으로 설정합니다. 일반적으로 기본 동작을\n                  사용하는 것이 좋습니다.\n   -x             추가 디버깅 메시지 출력을 설정합니다.\n   -u             <stylesheet> 인수를 URL로 해석합니다.\n   -i             컴파일러가 stdin에서 스타일시트를 강제로 읽도록 합니다.\n   -v             컴파일러의 버전을 인쇄합니다.\n   -h             이 사용법 지침을 인쇄합니다.\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_USAGE_STR),
			$of(u"사용법 \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <jarfile>]\n      [-x] [-n <iterations>] {-u <document_url> | <document>}\n      <class> [<param1>=<value1> ...]\n\n   translet <class>를 사용하여 <document>로 지정된 XML 문서를 \n   변환합니다. translet <class>는 \n   사용자의 CLASSPATH 또는 선택적으로 지정된 <jarfile>에 있습니다.\n옵션\n   -j <jarfile>    translet을 로드해 올 jarfile을 지정합니다.\n   -x              추가 디버깅 메시지 출력을 설정합니다.\n   -n <iterations> 변환을 <iterations>회 실행하고\n                   프로파일 작성 정보를 표시합니다.\n   -u <document_url> XML 입력 문서를 URL로 지정합니다.\n"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::STRAY_SORT_ERR),
			$of(u"<xsl:sort>는 <xsl:for-each> 또는 <xsl:apply-templates>에서만 사용할 수 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::UNSUPPORTED_ENCODING),
			$of(u"이 JVM에서는 출력 인코딩 \'\'{0}\'\'이(가) 지원되지 않습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::SYNTAX_ERR),
			$of(u"\'\'{0}\'\'에 구문 오류가 있습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CONSTRUCTOR_NOT_FOUND),
			$of(u"외부 constructor \'\'{0}\'\'을(를) 찾을 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::NO_JAVA_FUNCT_THIS_REF),
			$of(u"비static Java 함수 \'\'{0}\'\'에 대한 첫번째 인수는 적합한 객체 참조가 아닙니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_ERR),
			$of(u"\'\'{0}\'\' 표현식의 유형을 확인하는 중 오류가 발생했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TYPE_CHECK_UNK_LOC_ERR),
			$of(u"알 수 없는 위치에서 표현식의 유형을 확인하는 중 오류가 발생했습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR),
			$of(u"명령행 옵션 \'\'{0}\'\'이(가) 부적합합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR),
			$of(u"명령행 옵션 \'\'{0}\'\'에 필수 인수가 누락되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WARNING_PLUS_WRAPPED_MSG),
			$of("WARNING:  \'\'{0}\'\'\n       :{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::WARNING_MSG),
			$of("WARNING:  \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FATAL_ERR_PLUS_WRAPPED_MSG),
			$of("FATAL ERROR:  \'\'{0}\'\'\n           :{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::FATAL_ERR_MSG),
			$of("FATAL ERROR:  \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_PLUS_WRAPPED_MSG),
			$of("ERROR:  \'\'{0}\'\'\n     :{1}"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::ERROR_MSG),
			$of("ERROR:  \'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_TRANSLET_STR),
			$of(u"translet \'\'{0}\'\'을(를) 사용하여 변환하십시오. "_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSFORM_WITH_JAR_STR),
			$of(u"jar 파일 \'\'{1}\'\'의 translet \'\'{0}\'\'을(를) 사용하여 변환하십시오."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COULD_NOT_CREATE_TRANS_FACT),
			$of(u"TransformerFactory 클래스 \'\'{0}\'\'의 인스턴스를 생성할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT),
			$of(u"\'\'{0}\'\' 이름에는 Java 클래스 이름에 허용되지 않는 문자가 포함되어 있어 이 이름을 translet 클래스의 이름으로 사용할 수 없습니다. 대신 \'\'{1}\'\' 이름이 사용되었습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_ERROR_KEY),
			$of(u"컴파일러 오류:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::COMPILER_WARNING_KEY),
			$of(u"컴파일러 경고:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::RUNTIME_ERROR_KEY),
			$of(u"Translet 오류:"_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_QNAME_ERR),
			$of(u"값이 QName 또는 공백으로 구분된 QName 목록이어야 하는 속성의 값이 \'\'{0}\'\'입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_NCNAME_ERR),
			$of(u"값이 NCName이어야 하는 속성의 값이 \'\'{0}\'\'입니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::INVALID_METHOD_IN_OUTPUT),
			$of(u"<xsl:output> 요소에 대한 method 속성의 값이 \'\'{0}\'\'입니다. 값은 \'\'xml\'\', \'\'html\'\', \'\'text\'\' 또는 qname-but-not-ncname 중 하나여야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_GET_FEATURE_NULL_NAME),
			$of(u"기능 이름은 TransformerFactory.getFeature(문자열 이름)에서 널일 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SET_FEATURE_NULL_NAME),
			$of(u"기능 이름은 TransformerFactory.setFeature(문자열 이름, 부울 값)에서 널일 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_UNSUPPORTED_FEATURE),
			$of(u"이 TransformerFactory에서 \'\'{0}\'\' 기능을 설정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::JAXP_SECUREPROCESSING_FEATURE),
			$of(u"FEATURE_SECURE_PROCESSING: 보안 관리자가 있을 경우 기능을 false로 설정할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_TRY_CATCH),
			$of(u"내부 XSLTC 오류: 생성된 바이트 코드가 try-catch-finally 블록을 포함하므로 outlined 처리할 수 없습니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS),
			$of(u"내부 XSLTC 오류: OutlineableChunkStart 및 OutlineableChunkEnd 표시자의 짝이 맞아야 하고 올바르게 중첩되어야 합니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_DELETED_TARGET),
			$of(u"내부 XSLTC 오류: outlined 처리된 바이트 코드 블록에 속한 명령이 여전히 원래 메소드에서 참조됩니다."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG),
			$of(u"내부 XSLTC 오류: translet의 메소드가 Java Virtual Machine의 메소드 길이 제한인 64KB를 초과합니다. 대개 스타일시트의 템플리트가 매우 크기 때문에 발생합니다. 더 작은 템플리트를 사용하도록 스타일시트를 재구성해 보십시오."_s)
		}),
		$$new($ObjectArray, {
			$of($ErrorMsg::DESERIALIZE_TRANSLET_ERR),
			$of(u"Java 보안이 사용으로 설정된 경우 TemplatesImpl 직렬화 해제에 대한 지원이 사용 안함으로 설정됩니다. jdk.xml.enableTemplatesImplDeserialization 시스템 속성을 true로 설정하면 이를 무효화할 수 있습니다."_s)
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

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
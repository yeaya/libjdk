#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_zh_TW.h>
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

void ErrorMessages_zh_TW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_zh_TW::getContents() {
	$useLocalObjectStack();
	$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_STYLESHEET_ERR,
			u"相同檔案中定義了超過一個樣式表。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_REDEF_ERR,
			u"樣板 \'\'{0}\'\' 已經定義在此樣式表中。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_UNDEF_ERR,
			u"樣板 \'\'{0}\'\' 未定義在此樣式表中。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_REDEF_ERR,
			u"變數 \'\'{0}\'\' 在相同範圍中定義多次。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_UNDEF_ERR,
			u"變數或參數 \'\'{0}\'\' 未定義。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CLASS_NOT_FOUND_ERR,
			u"找不到類別 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::METHOD_NOT_FOUND_ERR,
			u"找不到外部方法 \'\'{0}\'\' (必須為公用)。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ARGUMENT_CONVERSION_ERR,
			u"無法轉換呼叫方法 \'\'{0}\'\' 中的引數/傳回類型"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_NOT_FOUND_ERR,
			u"找不到檔案或 URI \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_URI_ERR,
			u"無效的 URI \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CATALOG_EXCEPTION,
			u"JAXP08090001: CatalogResolver 已啟用目錄 \"{0}\"，但傳回 CatalogException。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_ACCESS_ERR,
			u"無法開啟檔案或 URI \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_ROOT_ERR,
			u"預期 <xsl:stylesheet> 或 <xsl:transform> 元素。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NAMESPACE_UNDEF_ERR,
			u"未宣告命名空間前置碼 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FUNCTION_RESOLVE_ERR,
			u"無法解析函數 \'\'{0}\'\' 的呼叫。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NEED_LITERAL_ERR,
			u"\'\'{0}\'\' 的引數必須是文字字串。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XPATH_PARSER_ERR,
			u"剖析 XPath 表示式 \'\'{0}\'\' 時發生錯誤。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::REQUIRED_ATTR_ERR,
			u"遺漏必要的屬性 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHAR_ERR,
			u"XPath 表示式中無效的字元 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_PI_ERR,
			u"處理指示的無效名稱 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_ATTRIBUTE_ERR,
			u"屬性 \'\'{0}\'\' 在元素之外。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTRIBUTE_ERR,
			u"無效的屬性 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_INCLUDE_ERR,
			u"循環匯入/包含。已經載入樣式表 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR,
			u"xsl:import 元素子項必須在 xsl:stylesheet 元素的所有其他元素子項之前，包括任何 xsl:include 元素子項。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RESULT_TREE_SORT_ERR,
			u"無法排序 Result-tree 片段 (忽略 <xsl:sort> 元素)。建立結果樹狀結構時，必須排序節點。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYMBOLS_REDEF_ERR,
			u"已經定義十進位格式 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSL_VERSION_ERR,
			u"XSLTC 不支援 XSL 版本 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_VARIABLE_ERR,
			u"在 \'\'{0}\'\' 中有循環變數/參數參照。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_BINARY_OP_ERR,
			u"二進位表示式不明的運算子。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ARG_ERR,
			u"函數呼叫無效的引數。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DOCUMENT_ARG_ERR,
			u"document() 函數的第二個引數必須是 node-set。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_WHEN_ERR,
			u"在 <xsl:choose> 中至少需要一個 <xsl:when> 元素。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_OTHERWISE_ERR,
			u"在 <xsl:choose> 中只允許一個 <xsl:otherwise> 元素。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_OTHERWISE_ERR,
			u"<xsl:otherwise> 只能在 <xsl:choose> 內使用。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_WHEN_ERR,
			u"<xsl:when> 只能在 <xsl:choose> 內使用。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WHEN_ELEMENT_ERR,
			u"在 <xsl:choose> 中只允許 <xsl:when> 與 <xsl:otherwise> 元素。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNNAMED_ATTRIBSET_ERR,
			u"<xsl:attribute-set> 遺漏 \'name\' 屬性。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHILD_ERR,
			u"無效的子項元素。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ELEM_NAME_ERR,
			u"您無法呼叫元素 \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTR_NAME_ERR,
			u"您無法呼叫屬性 \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_TEXT_NODE_ERR,
			u"最上層 <xsl:stylesheet> 元素之外的文字資料。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX_PARSER_CONFIG_ERR,
			u"未正確設定 JAXP 剖析器"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INTERNAL_ERR,
			u"無法復原的 XSLTC-internal 錯誤: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_XSL_ERR,
			u"不支援的 XSL 元素 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_EXT_ERR,
			u"無法辨識的 XSLTC 擴充套件 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_URI_ERR,
			u"輸入文件不是樣式表 (根元素中未宣告 XSL 命名空間)。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_TARGET_ERR,
			u"找不到樣式表目標 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ACCESSING_XSLT_TARGET_ERR,
			u"無法讀取樣式表目標 \'\'{0}\'\'，因為 accessExternalStylesheet 屬性設定的限制，所以不允許 \'\'{1}\'\' 存取。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_IMPLEMENTED_ERR,
			u"未實行: \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_STYLESHEET_ERR,
			u"輸入文件未包含 XSL 樣式表。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ELEMENT_PARSE_ERR,
			u"無法剖析元素 \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::KEY_USE_ATTR_ERR,
			u"<key> 的使用屬性必須是節點、node-set、字串或數字。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTPUT_VERSION_ERR,
			u"輸出 XML 文件版本應為 1.0"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_RELAT_OP_ERR,
			u"關聯表示式的運算子不明"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTRIBSET_UNDEF_ERR,
			u"嘗試使用不存在的屬性集 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTR_VAL_TEMPLATE_ERR,
			u"無法剖析屬性值樣板 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNKNOWN_SIG_TYPE_ERR,
			u"類別 \'\'{0}\'\' 簽章有不明的 data-type。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DATA_CONVERSION_ERR,
			u"無法轉換 data-type \'\'{0}\'\' 為 \'\'{1}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_TRANSLET_CLASS_ERR,
			u"此樣板未包含有效的 translet 類別定義。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_MAIN_TRANSLET_ERR,
			u"此樣板未包含名稱為 \'\'{0}\'\' 的類別。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_CLASS_ERR,
			u"無法載入 translet 類別 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_OBJECT_ERR,
			u"已載入 translet 類別，但無法建立 translet 執行處理。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_LISTENER_NULL_ERR,
			u"嘗試將 \'\'{0}\'\' 的 ErrorListener 設定為空值"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR,
			u"XSLTC 僅支援 StreamSource、SAXSource 與 DOMSource"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_SOURCE_ERR,
			u"傳送至 \'\'{0}\'\' 的來源物件沒有內容。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_COMPILE_ERR,
			u"無法編譯樣式表"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_ATTR_ERR,
			u"TransformerFactory 無法辨識屬性 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR,
			u"為 \'\'{0}\'\' 屬性指定的值不正確。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SET_RESULT_ERR,
			u"呼叫 startDocument() 之前，必須先呼叫 setResult()。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_TRANSLET_ERR,
			u"轉換器沒有封裝的 translet 物件。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_HANDLER_ERR,
			u"轉換結果沒有定義的輸出處理程式。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_RESULT_ERR,
			u"傳送至 \'\'{0}\'\' 的結果物件無效。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_PROP_ERR,
			u"嘗試存取無效的轉換器屬性 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX2DOM_ADAPTER_ERR,
			u"無法建立 SAX2DOM 轉接器: \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSLTC_SOURCE_ERR,
			u"未設定 systemId 而呼叫 XSLTCSource.build()。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ER_RESULT_NULL,
			u"結果不應為空值"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE,
			u"參數 {0} 的值必須是有效的 Java 物件"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_STDIN_ERR,
			u"-i 選項必須與 -o 選項一起使用。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_USAGE_STR,
			u"概要\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <output>]\n      [-d <directory>] [-j <jarfile>] [-p <package>]\n      [-n] [-x] [-u] [-v] [-h] { <stylesheet> | -i }\n\n選項\n   -o <output>    指派名稱 <output> 至產生的\n                  translet。根據預設，translet 名稱\n                  衍生自 <stylesheet> 名稱。若編譯\n                  多個樣式表，將忽略此選項。\n   -d <directory> 指定 translet 的目的地目錄\n   -j <jarfile>   封裝 translet 類別成為 jar 檔案，\n                  名稱指定為 <jarfile>\n   -p <package>   指定所有產生的 translet 類別的套裝程式\n                  名稱前置碼。\n   -n             啟用樣板內嵌 (預設行為一般而言\n                  較佳)。\n   -x             開啟額外的除錯訊息輸出\n   -u             解譯 <stylesheet> 引數為 URL\n   -i             強制編譯器從 stdin 讀取樣式表\n   -v             列印編譯器版本\n   -h             列印此用法敘述\n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_USAGE_STR,
			u"概要 \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <jarfile>]\n      [-x] [-n <iterations>] {-u <document_url> | <document>}\n      <class> [<param1>=<value1> ...]\n\n   使用 translet <class> 轉換指定為 <document> \n   的 XML 文件。translet <class> 位於\n   使用者的類別路徑，或是在選擇性指定的 <jarfile> 中。\n選項\n   -j <jarfile>    指定載入 translet 的來源 jarfile\n   -x              開啟額外的除錯訊息輸出\n   -n <iterations> 執行轉換 <iterations> 次數與\n                   顯示分析資訊\n   -u <document_url> 指定 XML 輸入文件為 URL\n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_SORT_ERR,
			u"<xsl:sort> 只能在 <xsl:for-each> 或 <xsl:apply-templates> 中使用。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_ENCODING,
			u"此 JVM 不支援輸出編碼 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYNTAX_ERR,
			u"\'\'{0}\'\' 中的語法錯誤。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CONSTRUCTOR_NOT_FOUND,
			u"找不到外部建構子 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_JAVA_FUNCT_THIS_REF,
			u"非靜態 Java 函數 \'\'{0}\'\' 的第一個引數不是有效的物件參照。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_ERR,
			u"檢查表示式 \'\'{0}\'\' 的類型時發生錯誤。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_UNK_LOC_ERR,
			u"檢查位於不明位置表示式的類型時發生錯誤。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR,
			u"命令行選項 \'\'{0}\'\' 無效。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR,
			u"命令行選項 \'\'{0}\'\' 遺漏必要的引數。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WARNING_PLUS_WRAPPED_MSG,
			"WARNING:  \'\'{0}\'\'\n       :{1}"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WARNING_MSG,
			"WARNING:  \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FATAL_ERR_PLUS_WRAPPED_MSG,
			"FATAL ERROR:  \'\'{0}\'\'\n           :{1}"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FATAL_ERR_MSG,
			"FATAL ERROR:  \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_PLUS_WRAPPED_MSG,
			"ERROR:  \'\'{0}\'\'\n     :{1}"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_MSG,
			"ERROR:  \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_WITH_TRANSLET_STR,
			u"使用 translet \'\'{0}\'\' 轉換"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_WITH_JAR_STR,
			u"使用來自 jar 檔案 \'\'{1}\'\' 的 translet \'\'{0}\'\' 轉換"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COULD_NOT_CREATE_TRANS_FACT,
			u"無法建立 TransformerFactory 類別 \'\'{0}\'\' 的執行處理。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT,
			u"名稱 \'\'{0}\'\' 無法作為 translet 類別的名稱，因為它包含 Java 類別名稱不允許的字元。請改用名稱 \'\'{1}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_ERROR_KEY,
			u"編譯器錯誤:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_WARNING_KEY,
			u"編譯器警告:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RUNTIME_ERROR_KEY,
			u"Translet 錯誤:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_QNAME_ERR,
			u"值必須為 QName 或使用空格加以區隔的 QNames 清單的屬性，具有值 \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_NCNAME_ERR,
			u"值必須為 NCName 的屬性，具有值 \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_METHOD_IN_OUTPUT,
			u"<xsl:output> 元素的方法屬性具有值 \'\'{0}\'\'。此值必須是 \'\'xml\'\'、\'\'html\'\'、\'\'text\'\' 或 qname-but-not-ncname 其中之一"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_GET_FEATURE_NULL_NAME,
			u"TransformerFactory.getFeature(字串名稱) 中的功能名稱不可為空值。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SET_FEATURE_NULL_NAME,
			u"TransformerFactory.setFeature(字串名稱, 布林值) 中的功能名稱不可為空值。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNSUPPORTED_FEATURE,
			u"無法在此 TransformerFactory 上設定功能 \'\'{0}\'\'。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SECUREPROCESSING_FEATURE,
			u"FEATURE_SECURE_PROCESSING: 安全管理程式存在時，無法將功能設為偽。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_TRY_CATCH,
			u"內部 XSLTC 錯誤:  產生的位元組碼包含 try-catch-finally 區塊，無法加以 outlined."_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS,
			u"內部 XSLTC 錯誤:  OutlineableChunkStart 和 OutlineableChunkEnd 標記必須成對出現，並使用正確的巢狀結構。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_DELETED_TARGET,
			u"內部 XSLTC 錯誤:  原始方法中仍然參照屬於 outlined 位元組碼區塊一部分的指示。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG,
			u"內部 XSLTC 錯誤:  translet 中的方法超過 Java 虛擬機器對於方法長度 64 KB 的限制。這通常是因為樣式表中有非常大的樣板。請嘗試重新組織您的樣式表以使用較小的樣板。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DESERIALIZE_TRANSLET_ERR,
			u"啟用 Java 安全時，會停用還原序列化 TemplatesImpl 的支援。將 jdk.xml.enableTemplatesImplDeserialization 系統屬性設為真即可覆寫此設定。"_s
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
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_zh_TW",
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

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
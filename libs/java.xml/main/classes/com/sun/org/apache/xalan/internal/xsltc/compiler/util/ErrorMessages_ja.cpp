#include <com/sun/org/apache/xalan/internal/xsltc/compiler/util/ErrorMessages_ja.h>
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

void ErrorMessages_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_ja::getContents() {
	$useLocalObjectStack();
	$init($ErrorMsg);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_STYLESHEET_ERR,
			u"同じファイルに複数のスタイルシートが定義されています。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_REDEF_ERR,
			u"テンプレート\'\'{0}\'\'はこのスタイルシート内ですでに定義されています。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TEMPLATE_UNDEF_ERR,
			u"テンプレート\'\'{0}\'\'はこのスタイルシート内で定義されていません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_REDEF_ERR,
			u"変数\'\'{0}\'\'は同じスコープ内で複数定義されています。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::VARIABLE_UNDEF_ERR,
			u"変数またはパラメータ\'\'{0}\'\'が未定義です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CLASS_NOT_FOUND_ERR,
			u"クラス\'\'{0}\'\'が見つかりません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::METHOD_NOT_FOUND_ERR,
			u"外部メソッド\'\'{0}\'\'が見つかりません(publicである必要があります)。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ARGUMENT_CONVERSION_ERR,
			u"メソッド\'\'{0}\'\'の呼出しの引数タイプまたは戻り型を変換できません"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_NOT_FOUND_ERR,
			u"ファイルまたはURI \'\'{0}\'\'が見つかりません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_URI_ERR,
			u"URI \'\'{0}\'\'が無効です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CATALOG_EXCEPTION,
			u"JAXP08090001: CatalogResolverはカタログ\"{0}\"で有効ですが、CatalogExceptionが返されます。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FILE_ACCESS_ERR,
			u"ファイルまたはURI \'\'{0}\'\'を開くことができません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_ROOT_ERR,
			u"<xsl:stylesheet>または<xsl:transform>の要素がありません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NAMESPACE_UNDEF_ERR,
			u"ネームスペースの接頭辞\'\'{0}\'\'は宣言されていません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::FUNCTION_RESOLVE_ERR,
			u"関数\'\'{0}\'\'の呼出しを解決できません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NEED_LITERAL_ERR,
			u"\'\'{0}\'\'への引数はリテラル文字列である必要があります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XPATH_PARSER_ERR,
			u"XPath式\'\'{0}\'\'の解析中にエラーが発生しました。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::REQUIRED_ATTR_ERR,
			u"必須属性\'\'{0}\'\'がありません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHAR_ERR,
			u"XPath式の文字\'\'{0}\'\'は無効です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_PI_ERR,
			u"処理命令の名前\'\'{0}\'\'は無効です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_ATTRIBUTE_ERR,
			u"属性\'\'{0}\'\'が要素の外側にあります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTRIBUTE_ERR,
			u"不正な属性\'\'{0}\'\'です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_INCLUDE_ERR,
			u"インポートまたはインクルードが循環しています。スタイルシート\'\'{0}\'\'はすでにロードされています。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::IMPORT_PRECEDE_OTHERS_ERR,
			u"xsl:import要素の子は、xsl:stylesheet要素の他のすべての要素の子(すべてのxsl:include要素の子を含む)より前に置く必要があります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RESULT_TREE_SORT_ERR,
			u"結果ツリー・フラグメントはソートできません(<xsl:sort>要素は無視されます)。結果ツリーを作成するときにノードをソートする必要があります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYMBOLS_REDEF_ERR,
			u"10進数フォーマット\'\'{0}\'\'はすでに定義されています。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSL_VERSION_ERR,
			u"XSLバージョン\'\'{0}\'\'はXSLTCによってサポートされていません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CIRCULAR_VARIABLE_ERR,
			u"\'\'{0}\'\'内の変数参照またはパラメータ参照が循環しています。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_BINARY_OP_ERR,
			u"2進数の式に対する不明な演算子です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ARG_ERR,
			u"関数呼出しの引数が不正です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DOCUMENT_ARG_ERR,
			u"document()関数の2番目の引数はノードセットである必要があります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_WHEN_ERR,
			u"<xsl:choose>内には少なくとも1つの<xsl:when>要素が必要です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MULTIPLE_OTHERWISE_ERR,
			u"<xsl:choose>内では1つの<xsl:otherwise>要素のみが許可されています。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_OTHERWISE_ERR,
			u"<xsl:otherwise>は<xsl:choose>内でのみ使用できます。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_WHEN_ERR,
			u"<xsl:when>は<xsl:choose>内でのみ使用できます。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::WHEN_ELEMENT_ERR,
			u"<xsl:choose>内では<xsl:when>と<xsl:otherwise>の要素のみが許可されます。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNNAMED_ATTRIBSET_ERR,
			u"<xsl:attribute-set>に\'name\'属性がありません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CHILD_ERR,
			u"子要素が不正です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ELEM_NAME_ERR,
			u"要素\'\'{0}\'\'を呼び出すことはできません"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_ATTR_NAME_ERR,
			u"属性\'\'{0}\'\'を呼び出すことはできません"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_TEXT_NODE_ERR,
			u"テキスト・データはトップレベルの<xsl:stylesheet>要素の外側にあります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX_PARSER_CONFIG_ERR,
			u"JAXPパーサーが正しく構成されていません"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INTERNAL_ERR,
			u"リカバリ不能なXSLTC内部エラー: \'\'{0}\'\'"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_XSL_ERR,
			u"XSL要素\'\'{0}\'\'はサポートされていません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_EXT_ERR,
			u"XSLTC拡張\'\'{0}\'\'は認識されません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_URI_ERR,
			u"入力ドキュメントはスタイルシートではありません(XSLのネームスペースはルート要素内で宣言されていません)。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::MISSING_XSLT_TARGET_ERR,
			u"スタイルシート・ターゲット\'\'{0}\'\'が見つかりませんでした。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ACCESSING_XSLT_TARGET_ERR,
			u"accessExternalStylesheetプロパティで設定された制限により\'\'{1}\'\'アクセスが許可されていないため、スタイルシート・ターゲット\'\'{0}\'\'を読み取れませんでした。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_IMPLEMENTED_ERR,
			u"\'\'{0}\'\'が実装されていません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NOT_STYLESHEET_ERR,
			u"入力ドキュメントにXSLスタイルシートが含まれていません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ELEMENT_PARSE_ERR,
			u"要素\'\'{0}\'\'を解析できませんでした"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::KEY_USE_ATTR_ERR,
			u"<key>のuse属性は、ノード、ノードセット、文字列または数値である必要があります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTPUT_VERSION_ERR,
			u"出力XMLドキュメントのバージョンは1.0である必要があります"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_RELAT_OP_ERR,
			u"関係式の不明な演算子です"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTRIBSET_UNDEF_ERR,
			u"存在しない属性セット\'\'{0}\'\'を使用しようとしました。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ATTR_VAL_TEMPLATE_ERR,
			u"属性値テンプレート\'\'{0}\'\'を解析できません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNKNOWN_SIG_TYPE_ERR,
			u"クラス\'\'{0}\'\'の署名に不明なデータ型があります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DATA_CONVERSION_ERR,
			u"データ型\'\'{0}\'\'を\'\'{1}\'\'に変換できません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_TRANSLET_CLASS_ERR,
			u"このテンプレートには有効なtransletクラス定義が含まれていません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_MAIN_TRANSLET_ERR,
			u"このテンプレートには名前\'\'{0}\'\'を持つクラスが含まれていません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_CLASS_ERR,
			u"transletクラス\'\'{0}\'\'をロードできませんでした。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_OBJECT_ERR,
			u"Transletクラスがロードされましたが、transletインスタンスを作成できません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ERROR_LISTENER_NULL_ERR,
			u"\'\'{0}\'\'のErrorListenerをnullに設定しようとしました"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_SOURCE_ERR,
			u"StreamSource、SAXSourceおよびDOMSourceのみがXSLTCによってサポートされています"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_SOURCE_ERR,
			u"\'\'{0}\'\'に渡されたソース・オブジェクトにコンテンツがありません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_COMPILE_ERR,
			u"スタイルシートをコンパイルできませんでした"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_ATTR_ERR,
			u"TransformerFactoryは属性\'\'{0}\'\'を認識しません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_ATTR_VALUE_ERR,
			u"\'\'{0}\'\'属性に指定された値が正しくありません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SET_RESULT_ERR,
			u"setResult()はstartDocument()よりも前に呼び出す必要があります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_TRANSLET_ERR,
			u"トランスフォーマにはカプセル化されたtransletオブジェクトがありません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_HANDLER_ERR,
			u"変換結果に対して定義済の出力ハンドラがありません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_NO_RESULT_ERR,
			u"\'\'{0}\'\'に渡された結果オブジェクトは無効です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNKNOWN_PROP_ERR,
			u"無効なトランスフォーマ・プロパティ\'\'{0}\'\'にアクセスしようとしました。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SAX2DOM_ADAPTER_ERR,
			u"SAX2DOMアダプタ\'\'{0}\'\'を作成できませんでした。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::XSLTC_SOURCE_ERR,
			u"systemIdを設定せずにXSLTCSource.build()が呼び出されました。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ER_RESULT_NULL,
			u"結果はnullにできません"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_INVALID_SET_PARAM_VALUE,
			u"パラメータ{0}は有効なJavaオブジェクトである必要があります"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_STDIN_ERR,
			u"-iオプションは-oオプションとともに使用する必要があります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILE_USAGE_STR,
			u"形式\n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Compile [-o <output>]\n      [-d <directory>] [-j <jarfile>] [-p <package>]\n      [-n] [-x] [-u] [-v] [-h] { <stylesheet> | -i }\n\nOPTIONS\n   -o <output>    名前<output>を生成済transletに\n                  割り当てる。デフォルトでは、translet名は\n                  <stylesheet>名に由来します。このオプションは\n                  複数のスタイルシートをコンパイルする場合は無視されます。\n   -d <directory> transletの宛先ディレクトリを指定する\n   -j <jarfile>   <jarfile>で指定される名前のjarファイルにtransletクラスを\n                  パッケージする\n   -p <package>   生成されるすべてのtransletクラスのパッケージ名\n                  接頭辞を指定する。\n   -n             テンプレートのインライン化を有効にする(平均してデフォルト動作の方が\n                  優れています)。\n   -x             追加のデバッグ・メッセージ出力をオンにする\n   -u             <stylesheet>引数をURLとして解釈する\n   -i             スタイルシートをstdinから読み込むことをコンパイラに強制する\n   -v             コンパイラのバージョンを出力する\n   -h             この使用方法の文を出力する\n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_USAGE_STR,
			u"形式 \n   java com.sun.org.apache.xalan.internal.xsltc.cmdline.Transform [-j <jarfile>]\n      [-x] [-n <iterations>] {-u <document_url> | <document>}\n      <class> [<param1>=<value1> ...]\n\n   translet <class>を使用して、<document>で指定される\n   XMLドキュメントを変換する。translet <class>は\n   ユーザーのCLASSPATH内か、オプションで指定された<jarfile>内にあります。\nOPTIONS\n   -j <jarfile>    transletをロードするjarfileを指定する\n   -x              追加のデバッグ・メッセージ出力をオンにする\n   -n <iterations> 変換を<iterations>回実行し、\n                   プロファイリング情報を表示する\n   -u <document_url> XML入力ドキュメントをURLとして指定する\n"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::STRAY_SORT_ERR,
			u"<xsl:sort>は<xsl:for-each>または<xsl:apply-templates>の内部でのみ使用できます。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::UNSUPPORTED_ENCODING,
			u"出力エンコーディング\'\'{0}\'\'はこのJVMではサポートされていません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::SYNTAX_ERR,
			u"\'\'{0}\'\'に構文エラーがあります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CONSTRUCTOR_NOT_FOUND,
			u"外部コンストラクタ\'\'{0}\'\'が見つかりません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::NO_JAVA_FUNCT_THIS_REF,
			u"staticでないJava関数\'\'{0}\'\'の最初の引数は無効なオブジェクト参照です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_ERR,
			u"式\'\'{0}\'\'のタイプの確認中にエラーが発生しました。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TYPE_CHECK_UNK_LOC_ERR,
			u"不明な場所での式のタイプの確認中にエラーが発生しました。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::ILLEGAL_CMDLINE_OPTION_ERR,
			u"コマンド行オプション\'\'{0}\'\'は無効です。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::CMDLINE_OPT_MISSING_ARG_ERR,
			u"コマンド行オプション\'\'{0}\'\'に必須の引数がありません。"_s
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
			u"translet \'\'{0}\'\'を使用して変換します "_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSFORM_WITH_JAR_STR,
			u"translet \'\'{0}\'\'を使用してjarファイル\'\'{1}\'\'から変換します"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COULD_NOT_CREATE_TRANS_FACT,
			u"TransformerFactoryクラス\'\'{0}\'\'のインスタンスを作成できませんでした。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::TRANSLET_NAME_JAVA_CONFLICT,
			u"名前\'\'{0}\'\'にはJavaクラスの名前に許可されていない文字が含まれているため、transletクラスの名前として使用できませんでした。名前\'\'{1}\'\'がかわりに使用されます。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_ERROR_KEY,
			u"コンパイラ・エラー:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::COMPILER_WARNING_KEY,
			u"コンパイラの警告:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::RUNTIME_ERROR_KEY,
			u"Transletエラー:"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_QNAME_ERR,
			u"値が1つのQNameまたはQNameの空白文字区切りリストであることが必要な属性の値が\'\'{0}\'\'でした"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_NCNAME_ERR,
			u"値がNCNameであることが必要な属性の値が\'\'{0}\'\'でした"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::INVALID_METHOD_IN_OUTPUT,
			u"<xsl:output>要素のメソッド属性の値が\'\'{0}\'\'でした。値は\'\'xml\'\'、\'\'html\'\'、\'\'text\'\'またはqname-but-not-ncnameのいずれかである必要があります"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_GET_FEATURE_NULL_NAME,
			u"機能名はTransformerFactory.getFeature(String name)内でnullにできません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SET_FEATURE_NULL_NAME,
			u"機能名はTransformerFactory.setFeature(String name, boolean value)内でnullにできません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_UNSUPPORTED_FEATURE,
			u"機能\'\'{0}\'\'をこのTransformerFactoryに設定できません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::JAXP_SECUREPROCESSING_FEATURE,
			u"FEATURE_SECURE_PROCESSING: セキュリティ・マネージャが存在するとき、機能をfalseに設定できません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_TRY_CATCH,
			u"内部XSLTCエラー: 生成されたバイト・コードは、try-catch-finallyブロックを含んでいるため、アウトライン化できません。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_UNBALANCED_MARKERS,
			u"内部XSLTCエラー: OutlineableChunkStartマーカーとOutlineableChunkEndマーカーは、対になっており、かつ正しくネストされている必要があります。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_DELETED_TARGET,
			u"内部XSLTCエラー: アウトライン化されたバイト・コードのブロックの一部であった命令は、元のメソッドの中でまだ参照されています。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::OUTLINE_ERR_METHOD_TOO_BIG,
			u"内部XSLTCエラー: トランスレット内のメソッドが、Java仮想マシンの制限(1メソッドの長さは最大64キロバイト)を超えています。一般的に、スタイルシート内のテンプレートのサイズが大き過ぎることが原因として考えられます。小さいサイズのテンプレートを使用して、スタイルシートを再構成してください。"_s
		}),
		$$new($ObjectArray, {
			$ErrorMsg::DESERIALIZE_TRANSLET_ERR,
			u"Javaセキュリティが有効化されている場合、TemplatesImplのデシリアライズのサポートは無効化されます。これは、jdk.xml.enableTemplatesImplDeserializationシステム・プロパティをtrueに設定してオーバーライドできます。"_s
		})
	});
}

ErrorMessages_ja::ErrorMessages_ja() {
}

$Class* ErrorMessages_ja::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_ja, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_ja, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.xsltc.compiler.util.ErrorMessages_ja",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ErrorMessages_ja, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ErrorMessages_ja);
	});
	return class$;
}

$Class* ErrorMessages_ja::class$ = nullptr;

								} // util
							} // compiler
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
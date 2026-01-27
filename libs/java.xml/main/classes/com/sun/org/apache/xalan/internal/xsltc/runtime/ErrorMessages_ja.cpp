#include <com/sun/org/apache/xalan/internal/xsltc/runtime/ErrorMessages_ja.h>

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

$MethodInfo _ErrorMessages_ja_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ErrorMessages_ja, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ErrorMessages_ja, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _ErrorMessages_ja_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xalan.internal.xsltc.runtime.ErrorMessages_ja",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_ErrorMessages_ja_MethodInfo_
};

$Object* allocate$ErrorMessages_ja($Class* clazz) {
	return $of($alloc(ErrorMessages_ja));
}

void ErrorMessages_ja::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* ErrorMessages_ja::getContents() {
	$useLocalCurrentObjectStackCache();
	$init($BasisLibrary);
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_INTERNAL_ERR),
			$of(u"\'\'{0}\'\'内のランタイム内部エラーです"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::RUN_TIME_COPY_ERR),
			$of(u"<xsl:copy>の実行中のランタイム・エラーです。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DATA_CONVERSION_ERR),
			$of(u"\'\'{0}\'\'から\'\'{1}\'\'への変換が無効です。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EXTERNAL_FUNC_ERR),
			$of(u"外部関数\'\'{0}\'\'はXSLTCによってサポートされていません。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::EQUALITY_EXPR_ERR),
			$of(u"等価式に不明な引数タイプがあります。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_ARGUMENT_ERR),
			$of(u"\'\'{1}\'\'の呼出しの引数タイプ\'\'{0}\'\'が無効です"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::FORMAT_NUMBER_ERR),
			$of(u"パターン\'\'{1}\'\'を使用して数値\'\'{0}\'\'をフォーマットしようとしました。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::ITERATOR_CLONE_ERR),
			$of(u"イテレータ\'\'{0}\'\'のクローンを作成できません。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::AXIS_SUPPORT_ERR),
			$of(u"軸\'\'{0}\'\'のイテレータはサポートされていません。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::TYPED_AXIS_SUPPORT_ERR),
			$of(u"型指定された軸\'\'{0}\'\'のイテレータはサポートされていません。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_ATTRIBUTE_ERR),
			$of(u"属性\'\'{0}\'\'が要素の外側にあります。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::STRAY_NAMESPACE_ERR),
			$of(u"ネームスペース宣言\'\'{0}\'\'=\'\'{1}\'\'が要素の外側にあります。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACE_PREFIX_ERR),
			$of(u"接頭辞\'\'{0}\'\'のネームスペースが宣言されていません。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::DOM_ADAPTER_INIT_ERR),
			$of(u"DOMAdapterが間違ったタイプのソースDOMを使用して作成されました。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::PARSER_DTD_SUPPORT_ERR),
			$of(u"使用中のSAXパーサーはDTD宣言イベントを処理しません。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::NAMESPACES_SUPPORT_ERR),
			$of(u"使用中のSAXパーサーにはXMLネームスペースのサポートがありません。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::CANT_RESOLVE_RELATIVE_URI_ERR),
			$of(u"URI参照\'\'{0}\'\'を解決できませんでした。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_XSL_ERR),
			$of(u"サポートされていないXSL要素\'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNSUPPORTED_EXT_ERR),
			$of(u"認識されないXSLTC拡張\'\'{0}\'\'"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNKNOWN_TRANSLET_VERSION_ERR),
			$of(u"指定されたtransletの\'\'{0}\'\'は、使用中のXSLTCランタイムのバージョンよりも新しいXSLTCのバージョンを使用して作成されたものです。このtransletを実行するには、スタイルシートを再コンパイルするか、より新しいバージョンのXSLTCを使用する必要があります。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_QNAME_ERR),
			$of(u"値がQNameであることが必要な属性の値が\'\'{0}\'\'でした"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::INVALID_NCNAME_ERR),
			$of(u"値がNCNameであることが必要な属性の値が\'\'{0}\'\'でした"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_FUNCTION_ERR),
			$of(u"セキュア処理機能がtrueに設定されているとき、拡張関数\'\'{0}\'\'の使用は許可されません。"_s)
		}),
		$$new($ObjectArray, {
			$of($BasisLibrary::UNALLOWED_EXTENSION_ELEMENT_ERR),
			$of(u"セキュア処理機能がtrueに設定されているとき、拡張要素\'\'{0}\'\'の使用は許可されません。"_s)
		})
	});
}

ErrorMessages_ja::ErrorMessages_ja() {
}

$Class* ErrorMessages_ja::load$($String* name, bool initialize) {
	$loadClass(ErrorMessages_ja, name, initialize, &_ErrorMessages_ja_ClassInfo_, allocate$ErrorMessages_ja);
	return class$;
}

$Class* ErrorMessages_ja::class$ = nullptr;

							} // runtime
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
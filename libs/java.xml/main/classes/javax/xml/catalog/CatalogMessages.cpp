#include <javax/xml/catalog/CatalogMessages.h>

#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <javax/xml/catalog/CatalogException.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef ERR_CIRCULAR_REFERENCE
#undef ERR_CREATING_URI
#undef ERR_INVALID_ARGUMENT
#undef ERR_INVALID_CATALOG
#undef ERR_INVALID_ENTRY_TYPE
#undef ERR_INVALID_PATH
#undef ERR_NO_CATALOG
#undef ERR_NO_MATCH
#undef ERR_NO_URI_MATCH
#undef ERR_NULL_ARGUMENT
#undef ERR_OTHER
#undef ERR_PARSER_CONF
#undef ERR_PARSING_FAILED
#undef ERR_URI_NOTABSOLUTE
#undef ERR_URI_NOTVALIDURL

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $CatalogException = ::javax::xml::catalog::CatalogException;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _CatalogMessages_FieldInfo_[] = {
	{"ERR_INVALID_CATALOG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_INVALID_CATALOG)},
	{"ERR_INVALID_ENTRY_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_INVALID_ENTRY_TYPE)},
	{"ERR_URI_NOTABSOLUTE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_URI_NOTABSOLUTE)},
	{"ERR_URI_NOTVALIDURL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_URI_NOTVALIDURL)},
	{"ERR_INVALID_ARGUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_INVALID_ARGUMENT)},
	{"ERR_NULL_ARGUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_NULL_ARGUMENT)},
	{"ERR_CIRCULAR_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_CIRCULAR_REFERENCE)},
	{"ERR_INVALID_PATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_INVALID_PATH)},
	{"ERR_PARSER_CONF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_PARSER_CONF)},
	{"ERR_PARSING_FAILED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_PARSING_FAILED)},
	{"ERR_NO_CATALOG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_NO_CATALOG)},
	{"ERR_NO_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_NO_MATCH)},
	{"ERR_NO_URI_MATCH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_NO_URI_MATCH)},
	{"ERR_CREATING_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_CREATING_URI)},
	{"ERR_OTHER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogMessages, ERR_OTHER)},
	{"bundleName", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(CatalogMessages, bundleName)},
	{"resourceBundle", "Ljava/util/ResourceBundle;", nullptr, $STATIC, $staticField(CatalogMessages, resourceBundle)},
	{}
};

$MethodInfo _CatalogMessages_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(CatalogMessages, init$, void)},
	{"formatMessage", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(CatalogMessages, formatMessage, $String*, $String*, $ObjectArray*)},
	{"formatMessage", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/util/Locale;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(CatalogMessages, formatMessage, $String*, $String*, $ObjectArray*, $Locale*)},
	{"reportError", "(Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(CatalogMessages, reportError, void, $String*)},
	{"reportError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(CatalogMessages, reportError, void, $String*, $ObjectArray*)},
	{"reportIAE", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Throwable;)V", nullptr, $STATIC, $staticMethod(CatalogMessages, reportIAE, void, $String*, $ObjectArray*, $Throwable*)},
	{"reportIAEOnNull", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(CatalogMessages, reportIAEOnNull, void, $String*, $String*)},
	{"reportNPEOnNull", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(CatalogMessages, reportNPEOnNull, void, $String*, Object$*)},
	{"reportRunTimeError", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $STATIC, $staticMethod(CatalogMessages, reportRunTimeError, void, $String*, $ObjectArray*)},
	{"reportRunTimeError", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $STATIC, $staticMethod(CatalogMessages, reportRunTimeError, void, $String*, $Throwable*)},
	{"reportRunTimeError", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Throwable;)V", nullptr, $STATIC, $staticMethod(CatalogMessages, reportRunTimeError, void, $String*, $ObjectArray*, $Throwable*)},
	{"sanitize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(CatalogMessages, sanitize, $String*, $String*)},
	{}
};

$ClassInfo _CatalogMessages_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.xml.catalog.CatalogMessages",
	"java.lang.Object",
	nullptr,
	_CatalogMessages_FieldInfo_,
	_CatalogMessages_MethodInfo_
};

$Object* allocate$CatalogMessages($Class* clazz) {
	return $of($alloc(CatalogMessages));
}

$String* CatalogMessages::ERR_INVALID_CATALOG = nullptr;
$String* CatalogMessages::ERR_INVALID_ENTRY_TYPE = nullptr;
$String* CatalogMessages::ERR_URI_NOTABSOLUTE = nullptr;
$String* CatalogMessages::ERR_URI_NOTVALIDURL = nullptr;
$String* CatalogMessages::ERR_INVALID_ARGUMENT = nullptr;
$String* CatalogMessages::ERR_NULL_ARGUMENT = nullptr;
$String* CatalogMessages::ERR_CIRCULAR_REFERENCE = nullptr;
$String* CatalogMessages::ERR_INVALID_PATH = nullptr;
$String* CatalogMessages::ERR_PARSER_CONF = nullptr;
$String* CatalogMessages::ERR_PARSING_FAILED = nullptr;
$String* CatalogMessages::ERR_NO_CATALOG = nullptr;
$String* CatalogMessages::ERR_NO_MATCH = nullptr;
$String* CatalogMessages::ERR_NO_URI_MATCH = nullptr;
$String* CatalogMessages::ERR_CREATING_URI = nullptr;
$String* CatalogMessages::ERR_OTHER = nullptr;
$String* CatalogMessages::bundleName = nullptr;
$ResourceBundle* CatalogMessages::resourceBundle = nullptr;

void CatalogMessages::init$() {
}

void CatalogMessages::reportError($String* key) {
	$init(CatalogMessages);
	reportError(key, nullptr);
}

void CatalogMessages::reportError($String* key, $ObjectArray* arguments) {
	$init(CatalogMessages);
	$throwNew($CatalogException, $(formatMessage(key, arguments)));
}

void CatalogMessages::reportRunTimeError($String* key, $ObjectArray* arguments) {
	$init(CatalogMessages);
	$throwNew($CatalogException, $(formatMessage(key, arguments)));
}

void CatalogMessages::reportRunTimeError($String* key, $Throwable* cause) {
	$init(CatalogMessages);
	$throwNew($CatalogException, $(formatMessage(key, nullptr)), cause);
}

void CatalogMessages::reportRunTimeError($String* key, $ObjectArray* arguments, $Throwable* cause) {
	$init(CatalogMessages);
	$throwNew($CatalogException, $(formatMessage(key, arguments)), cause);
}

void CatalogMessages::reportIAEOnNull($String* name, $String* value) {
	$init(CatalogMessages);
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		$throwNew($IllegalArgumentException, $(formatMessage(CatalogMessages::ERR_INVALID_ARGUMENT, $$new($ObjectArray, {
			($Object*)nullptr,
			$of(name)
		}))));
	}
}

void CatalogMessages::reportNPEOnNull($String* name, Object$* value) {
	$init(CatalogMessages);
	$useLocalCurrentObjectStackCache();
	if (value == nullptr) {
		$throwNew($NullPointerException, $(formatMessage(CatalogMessages::ERR_NULL_ARGUMENT, $$new($ObjectArray, {$of(name)}))));
	}
}

void CatalogMessages::reportIAE($String* key, $ObjectArray* arguments, $Throwable* cause) {
	$init(CatalogMessages);
	$throwNew($IllegalArgumentException, $(formatMessage(key, arguments)), cause);
}

$String* CatalogMessages::formatMessage($String* key, $ObjectArray* arguments) {
	$init(CatalogMessages);
	return formatMessage(key, arguments, $($Locale::getDefault()));
}

$String* CatalogMessages::formatMessage($String* key, $ObjectArray* arguments, $Locale* locale) {
	$init(CatalogMessages);
	return $SecuritySupport::getErrorMessage(locale, CatalogMessages::bundleName, key, arguments);
}

$String* CatalogMessages::sanitize($String* uri) {
	$init(CatalogMessages);
	if (uri == nullptr) {
		return nullptr;
	}
	$var($String, temp, nullptr);
	int32_t p = 0;
	p = $nc(uri)->lastIndexOf("/"_s);
	if (p > 0 && p < uri->length()) {
		return uri->substring(p + 1);
	}
	return uri;
}

void clinit$CatalogMessages($Class* class$) {
	$assignStatic(CatalogMessages::ERR_INVALID_CATALOG, "InvalidCatalog"_s);
	$assignStatic(CatalogMessages::ERR_INVALID_ENTRY_TYPE, "InvalidEntryType"_s);
	$assignStatic(CatalogMessages::ERR_URI_NOTABSOLUTE, "UriNotAbsolute"_s);
	$assignStatic(CatalogMessages::ERR_URI_NOTVALIDURL, "UriNotValidUrl"_s);
	$assignStatic(CatalogMessages::ERR_INVALID_ARGUMENT, "InvalidArgument"_s);
	$assignStatic(CatalogMessages::ERR_NULL_ARGUMENT, "NullArgument"_s);
	$assignStatic(CatalogMessages::ERR_CIRCULAR_REFERENCE, "CircularReference"_s);
	$assignStatic(CatalogMessages::ERR_INVALID_PATH, "InvalidPath"_s);
	$assignStatic(CatalogMessages::ERR_PARSER_CONF, "ParserConf"_s);
	$assignStatic(CatalogMessages::ERR_PARSING_FAILED, "ParsingFailed"_s);
	$assignStatic(CatalogMessages::ERR_NO_CATALOG, "NoCatalogFound"_s);
	$assignStatic(CatalogMessages::ERR_NO_MATCH, "NoMatchFound"_s);
	$assignStatic(CatalogMessages::ERR_NO_URI_MATCH, "NoMatchURIFound"_s);
	$assignStatic(CatalogMessages::ERR_CREATING_URI, "FailedCreatingURI"_s);
	$assignStatic(CatalogMessages::ERR_OTHER, "OtherError"_s);
	$assignStatic(CatalogMessages::bundleName, $str({$(CatalogMessages::class$->getPackageName()), ".CatalogMessages"_s}));
}

CatalogMessages::CatalogMessages() {
}

$Class* CatalogMessages::load$($String* name, bool initialize) {
	$loadClass(CatalogMessages, name, initialize, &_CatalogMessages_ClassInfo_, clinit$CatalogMessages, allocate$CatalogMessages);
	return class$;
}

$Class* CatalogMessages::class$ = nullptr;

		} // catalog
	} // xml
} // javax
#include <com/sun/org/apache/xerces/internal/jaxp/DefaultValidationErrorHandler.h>

#include <com/sun/org/apache/xerces/internal/util/SAXMessageFormatter.h>
#include <java/util/Locale.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

#undef ERROR_COUNT_LIMIT

using $SAXMessageFormatter = ::com::sun::org::apache::xerces::internal::util::SAXMessageFormatter;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $SAXParseException = ::org::xml::sax::SAXParseException;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {

$FieldInfo _DefaultValidationErrorHandler_FieldInfo_[] = {
	{"ERROR_COUNT_LIMIT", "I", nullptr, $PRIVATE | $STATIC, $staticField(DefaultValidationErrorHandler, ERROR_COUNT_LIMIT)},
	{"errorCount", "I", nullptr, $PRIVATE, $field(DefaultValidationErrorHandler, errorCount)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(DefaultValidationErrorHandler, locale)},
	{}
};

$MethodInfo _DefaultValidationErrorHandler_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(DefaultValidationErrorHandler, init$, void, $Locale*)},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(DefaultValidationErrorHandler, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _DefaultValidationErrorHandler_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.DefaultValidationErrorHandler",
	"org.xml.sax.helpers.DefaultHandler",
	nullptr,
	_DefaultValidationErrorHandler_FieldInfo_,
	_DefaultValidationErrorHandler_MethodInfo_
};

$Object* allocate$DefaultValidationErrorHandler($Class* clazz) {
	return $of($alloc(DefaultValidationErrorHandler));
}

int32_t DefaultValidationErrorHandler::ERROR_COUNT_LIMIT = 0;

void DefaultValidationErrorHandler::init$($Locale* locale) {
	$DefaultHandler::init$();
	this->errorCount = 0;
	$set(this, locale, $Locale::getDefault());
	$set(this, locale, locale);
}

void DefaultValidationErrorHandler::error($SAXParseException* e) {
	$useLocalCurrentObjectStackCache();
	if (this->errorCount >= DefaultValidationErrorHandler::ERROR_COUNT_LIMIT) {
		return;
	} else if (this->errorCount == 0) {
		$nc($System::err)->println($($SAXMessageFormatter::formatMessage(this->locale, "errorHandlerNotSet"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->errorCount)))}))));
	}
	$var($String, systemId, $nc(e)->getSystemId());
	if (systemId == nullptr) {
		$assign(systemId, "null"_s);
	}
	$var($String, var$0, $$str({"Error: URI="_s, systemId, " Line="_s, $$str(e->getLineNumber()), ": "_s}));
	$var($String, message, $concat(var$0, $(e->getMessage())));
	$nc($System::err)->println(message);
	++this->errorCount;
}

void clinit$DefaultValidationErrorHandler($Class* class$) {
	DefaultValidationErrorHandler::ERROR_COUNT_LIMIT = 10;
}

DefaultValidationErrorHandler::DefaultValidationErrorHandler() {
}

$Class* DefaultValidationErrorHandler::load$($String* name, bool initialize) {
	$loadClass(DefaultValidationErrorHandler, name, initialize, &_DefaultValidationErrorHandler_ClassInfo_, clinit$DefaultValidationErrorHandler, allocate$DefaultValidationErrorHandler);
	return class$;
}

$Class* DefaultValidationErrorHandler::class$ = nullptr;

						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
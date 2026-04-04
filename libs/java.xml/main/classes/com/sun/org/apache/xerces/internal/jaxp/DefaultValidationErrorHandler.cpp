#include <com/sun/org/apache/xerces/internal/jaxp/DefaultValidationErrorHandler.h>
#include <com/sun/org/apache/xerces/internal/util/SAXMessageFormatter.h>
#include <java/util/Locale.h>
#include <org/xml/sax/SAXParseException.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

#undef ERROR_COUNT_LIMIT

using $SAXMessageFormatter = ::com::sun::org::apache::xerces::internal::util::SAXMessageFormatter;
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

int32_t DefaultValidationErrorHandler::ERROR_COUNT_LIMIT = 0;

void DefaultValidationErrorHandler::init$($Locale* locale) {
	$DefaultHandler::init$();
	this->errorCount = 0;
	$set(this, locale, $Locale::getDefault());
	$set(this, locale, locale);
}

void DefaultValidationErrorHandler::error($SAXParseException* e) {
	$useLocalObjectStack();
	if (this->errorCount >= DefaultValidationErrorHandler::ERROR_COUNT_LIMIT) {
		return;
	} else if (this->errorCount == 0) {
		$nc($System::err)->println($($SAXMessageFormatter::formatMessage(this->locale, "errorHandlerNotSet"_s, $$new($ObjectArray, {$($Integer::valueOf(this->errorCount))}))));
	}
	$var($String, systemId, $nc(e)->getSystemId());
	if (systemId == nullptr) {
		$assign(systemId, "null"_s);
	}
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("Error: URI="_s);
	var$0->append(systemId);
	var$0->append(" Line="_s);
	var$0->append(e->getLineNumber());
	var$0->append(": "_s);
	var$0->append($(e->getMessage()));
	$var($String, message, $str(var$0));
	$nc($System::err)->println(message);
	++this->errorCount;
}

void DefaultValidationErrorHandler::clinit$($Class* clazz) {
	DefaultValidationErrorHandler::ERROR_COUNT_LIMIT = 10;
}

DefaultValidationErrorHandler::DefaultValidationErrorHandler() {
}

$Class* DefaultValidationErrorHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ERROR_COUNT_LIMIT", "I", nullptr, $PRIVATE | $STATIC, $staticField(DefaultValidationErrorHandler, ERROR_COUNT_LIMIT)},
		{"errorCount", "I", nullptr, $PRIVATE, $field(DefaultValidationErrorHandler, errorCount)},
		{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(DefaultValidationErrorHandler, locale)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $method(DefaultValidationErrorHandler, init$, void, $Locale*)},
		{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(DefaultValidationErrorHandler, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.org.apache.xerces.internal.jaxp.DefaultValidationErrorHandler",
		"org.xml.sax.helpers.DefaultHandler",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultValidationErrorHandler, name, initialize, &classInfo$$, DefaultValidationErrorHandler::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(DefaultValidationErrorHandler));
	});
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
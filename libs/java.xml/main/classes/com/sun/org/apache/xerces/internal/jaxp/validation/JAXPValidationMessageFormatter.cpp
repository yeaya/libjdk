#include <com/sun/org/apache/xerces/internal/jaxp/validation/JAXPValidationMessageFormatter.h>

#include <java/lang/StringBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $ResourceBundle = ::java::util::ResourceBundle;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace jaxp {
							namespace validation {

$MethodInfo _JAXPValidationMessageFormatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(JAXPValidationMessageFormatter, init$, void)},
	{"formatMessage", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(JAXPValidationMessageFormatter, formatMessage, $String*, $Locale*, $String*, $ObjectArray*), "java.util.MissingResourceException"},
	{}
};

$ClassInfo _JAXPValidationMessageFormatter_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.jaxp.validation.JAXPValidationMessageFormatter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_JAXPValidationMessageFormatter_MethodInfo_
};

$Object* allocate$JAXPValidationMessageFormatter($Class* clazz) {
	return $of($alloc(JAXPValidationMessageFormatter));
}

void JAXPValidationMessageFormatter::init$() {
}

$String* JAXPValidationMessageFormatter::formatMessage($Locale* locale, $String* key, $ObjectArray* arguments) {
	$useLocalCurrentObjectStackCache();
	$var($ResourceBundle, resourceBundle, nullptr);
	if (locale != nullptr) {
		$assign(resourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.JAXPValidationMessages"_s, locale));
	} else {
		$assign(resourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.JAXPValidationMessages"_s));
	}
	$var($String, msg, nullptr);
	try {
		$assign(msg, $nc(resourceBundle)->getString(key));
		if (arguments != nullptr) {
			try {
				$assign(msg, $MessageFormat::format(msg, arguments));
			} catch ($Exception& e) {
				$assign(msg, resourceBundle->getString("FormatFailed"_s));
				$plusAssign(msg, $$str({" "_s, $(resourceBundle->getString(key))}));
			}
		}
	} catch ($MissingResourceException& e) {
		$assign(msg, $nc(resourceBundle)->getString("BadMessageKey"_s));
		$throwNew($MissingResourceException, key, msg, key);
	}
	if (msg == nullptr) {
		$assign(msg, key);
		if ($nc(arguments)->length > 0) {
			$var($StringBuffer, str, $new($StringBuffer, msg));
			str->append(u'?');
			for (int32_t i = 0; i < arguments->length; ++i) {
				if (i > 0) {
					str->append(u'&');
				}
				str->append($($String::valueOf(arguments->get(i))));
			}
		}
	}
	return msg;
}

JAXPValidationMessageFormatter::JAXPValidationMessageFormatter() {
}

$Class* JAXPValidationMessageFormatter::load$($String* name, bool initialize) {
	$loadClass(JAXPValidationMessageFormatter, name, initialize, &_JAXPValidationMessageFormatter_ClassInfo_, allocate$JAXPValidationMessageFormatter);
	return class$;
}

$Class* JAXPValidationMessageFormatter::class$ = nullptr;

							} // validation
						} // jaxp
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
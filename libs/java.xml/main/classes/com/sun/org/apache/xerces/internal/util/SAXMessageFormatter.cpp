#include <com/sun/org/apache/xerces/internal/util/SAXMessageFormatter.h>

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
						namespace util {

$MethodInfo _SAXMessageFormatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SAXMessageFormatter, init$, void)},
	{"formatMessage", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SAXMessageFormatter, formatMessage, $String*, $Locale*, $String*, $ObjectArray*), "java.util.MissingResourceException"},
	{}
};

$ClassInfo _SAXMessageFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.SAXMessageFormatter",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SAXMessageFormatter_MethodInfo_
};

$Object* allocate$SAXMessageFormatter($Class* clazz) {
	return $of($alloc(SAXMessageFormatter));
}

void SAXMessageFormatter::init$() {
}

$String* SAXMessageFormatter::formatMessage($Locale* locale, $String* key, $ObjectArray* arguments) {
	$useLocalCurrentObjectStackCache();
	$var($ResourceBundle, resourceBundle, nullptr);
	if (locale != nullptr) {
		$assign(resourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.SAXMessages"_s, locale));
	} else {
		$assign(resourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.SAXMessages"_s));
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

SAXMessageFormatter::SAXMessageFormatter() {
}

$Class* SAXMessageFormatter::load$($String* name, bool initialize) {
	$loadClass(SAXMessageFormatter, name, initialize, &_SAXMessageFormatter_ClassInfo_, allocate$SAXMessageFormatter);
	return class$;
}

$Class* SAXMessageFormatter::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
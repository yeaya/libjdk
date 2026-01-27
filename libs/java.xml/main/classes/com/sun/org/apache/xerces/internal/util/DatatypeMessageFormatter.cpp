#include <com/sun/org/apache/xerces/internal/util/DatatypeMessageFormatter.h>

#include <java/lang/StringBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef BASE_NAME

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _DatatypeMessageFormatter_FieldInfo_[] = {
	{"BASE_NAME", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DatatypeMessageFormatter, BASE_NAME)},
	{}
};

$MethodInfo _DatatypeMessageFormatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(DatatypeMessageFormatter, init$, void)},
	{"formatMessage", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DatatypeMessageFormatter, formatMessage, $String*, $Locale*, $String*, $ObjectArray*), "java.util.MissingResourceException"},
	{}
};

$ClassInfo _DatatypeMessageFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.util.DatatypeMessageFormatter",
	"java.lang.Object",
	nullptr,
	_DatatypeMessageFormatter_FieldInfo_,
	_DatatypeMessageFormatter_MethodInfo_
};

$Object* allocate$DatatypeMessageFormatter($Class* clazz) {
	return $of($alloc(DatatypeMessageFormatter));
}

$String* DatatypeMessageFormatter::BASE_NAME = nullptr;

void DatatypeMessageFormatter::init$() {
}

$String* DatatypeMessageFormatter::formatMessage($Locale* locale, $String* key, $ObjectArray* arguments) {
	$init(DatatypeMessageFormatter);
	$useLocalCurrentObjectStackCache();
	$var($ResourceBundle, resourceBundle, nullptr);
	if (locale != nullptr) {
		$assign(resourceBundle, $SecuritySupport::getResourceBundle(DatatypeMessageFormatter::BASE_NAME, locale));
	} else {
		$assign(resourceBundle, $SecuritySupport::getResourceBundle(DatatypeMessageFormatter::BASE_NAME));
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

DatatypeMessageFormatter::DatatypeMessageFormatter() {
}

void clinit$DatatypeMessageFormatter($Class* class$) {
	$assignStatic(DatatypeMessageFormatter::BASE_NAME, "com.sun.org.apache.xerces.internal.impl.msg.DatatypeMessages"_s);
}

$Class* DatatypeMessageFormatter::load$($String* name, bool initialize) {
	$loadClass(DatatypeMessageFormatter, name, initialize, &_DatatypeMessageFormatter_ClassInfo_, clinit$DatatypeMessageFormatter, allocate$DatatypeMessageFormatter);
	return class$;
}

$Class* DatatypeMessageFormatter::class$ = nullptr;

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
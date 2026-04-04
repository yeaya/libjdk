#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeMessageFormatter.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef XINCLUDE_DOMAIN

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $MissingResourceException = ::java::util::MissingResourceException;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {

$String* XIncludeMessageFormatter::XINCLUDE_DOMAIN = nullptr;

void XIncludeMessageFormatter::init$() {
	$set(this, fLocale, nullptr);
	$set(this, fResourceBundle, nullptr);
}

$String* XIncludeMessageFormatter::formatMessage($Locale* locale, $String* key, $ObjectArray* arguments) {
	$useLocalObjectStack();
	if (this->fResourceBundle == nullptr || locale != this->fLocale) {
		if (locale != nullptr) {
			$set(this, fResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XIncludeMessages"_s, locale));
			$set(this, fLocale, locale);
		}
		if (this->fResourceBundle == nullptr) {
			$set(this, fResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XIncludeMessages"_s));
		}
	}
	$var($String, msg, $nc(this->fResourceBundle)->getString(key));
	if (arguments != nullptr) {
		try {
			$assign(msg, $MessageFormat::format(msg, arguments));
		} catch ($Exception& e) {
			$assign(msg, this->fResourceBundle->getString("FormatFailed"_s));
			$plusAssign(msg, $$str({" "_s, $(this->fResourceBundle->getString(key))}));
		}
	}
	if (msg == nullptr) {
		$assign(msg, this->fResourceBundle->getString("BadMessageKey"_s));
		$throwNew($MissingResourceException, msg, "com.sun.org.apache.xerces.internal.impl.msg.XIncludeMessages"_s, key);
	}
	return msg;
}

XIncludeMessageFormatter::XIncludeMessageFormatter() {
}

void XIncludeMessageFormatter::clinit$($Class* clazz) {
	$assignStatic(XIncludeMessageFormatter::XINCLUDE_DOMAIN, "http://www.w3.org/TR/xinclude"_s);
}

$Class* XIncludeMessageFormatter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"XINCLUDE_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XIncludeMessageFormatter, XINCLUDE_DOMAIN)},
		{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(XIncludeMessageFormatter, fLocale)},
		{"fResourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE, $field(XIncludeMessageFormatter, fResourceBundle)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XIncludeMessageFormatter, init$, void)},
		{"formatMessage", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XIncludeMessageFormatter, formatMessage, $String*, $Locale*, $String*, $ObjectArray*), "java.util.MissingResourceException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.xinclude.XIncludeMessageFormatter",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.util.MessageFormatter",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XIncludeMessageFormatter, name, initialize, &classInfo$$, XIncludeMessageFormatter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XIncludeMessageFormatter);
	});
	return class$;
}

$Class* XIncludeMessageFormatter::class$ = nullptr;

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
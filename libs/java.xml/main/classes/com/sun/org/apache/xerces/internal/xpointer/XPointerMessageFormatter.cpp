#include <com/sun/org/apache/xerces/internal/xpointer/XPointerMessageFormatter.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef XPOINTER_DOMAIN

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
						namespace xpointer {

$String* XPointerMessageFormatter::XPOINTER_DOMAIN = nullptr;

void XPointerMessageFormatter::init$() {
	$set(this, fLocale, nullptr);
	$set(this, fResourceBundle, nullptr);
}

$String* XPointerMessageFormatter::formatMessage($Locale* locale, $String* key, $ObjectArray* arguments) {
	$useLocalObjectStack();
	if (this->fResourceBundle == nullptr || locale != this->fLocale) {
		if (locale != nullptr) {
			$set(this, fResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XPointerMessages"_s, locale));
			$set(this, fLocale, locale);
		}
		if (this->fResourceBundle == nullptr) {
			$set(this, fResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XPointerMessages"_s));
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
		$throwNew($MissingResourceException, msg, "com.sun.org.apache.xerces.internal.impl.msg.XPointerMessages"_s, key);
	}
	return msg;
}

XPointerMessageFormatter::XPointerMessageFormatter() {
}

void XPointerMessageFormatter::clinit$($Class* clazz) {
	$assignStatic(XPointerMessageFormatter::XPOINTER_DOMAIN, "http://www.w3.org/TR/XPTR"_s);
}

$Class* XPointerMessageFormatter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"XPOINTER_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPointerMessageFormatter, XPOINTER_DOMAIN)},
		{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(XPointerMessageFormatter, fLocale)},
		{"fResourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE, $field(XPointerMessageFormatter, fResourceBundle)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(XPointerMessageFormatter, init$, void)},
		{"formatMessage", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XPointerMessageFormatter, formatMessage, $String*, $Locale*, $String*, $ObjectArray*), "java.util.MissingResourceException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.org.apache.xerces.internal.xpointer.XPointerMessageFormatter",
		"java.lang.Object",
		"com.sun.org.apache.xerces.internal.util.MessageFormatter",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XPointerMessageFormatter, name, initialize, &classInfo$$, XPointerMessageFormatter::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XPointerMessageFormatter);
	});
	return class$;
}

$Class* XPointerMessageFormatter::class$ = nullptr;

						} // xpointer
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
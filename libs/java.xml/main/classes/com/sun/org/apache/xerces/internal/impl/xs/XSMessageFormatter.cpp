#include <com/sun/org/apache/xerces/internal/impl/xs/XSMessageFormatter.h>

#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef SCHEMA_DOMAIN

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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
						namespace impl {
							namespace xs {

$FieldInfo _XSMessageFormatter_FieldInfo_[] = {
	{"SCHEMA_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XSMessageFormatter, SCHEMA_DOMAIN)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(XSMessageFormatter, fLocale)},
	{"fResourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE, $field(XSMessageFormatter, fResourceBundle)},
	{}
};

$MethodInfo _XSMessageFormatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XSMessageFormatter, init$, void)},
	{"formatMessage", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XSMessageFormatter, formatMessage, $String*, $Locale*, $String*, $ObjectArray*), "java.util.MissingResourceException"},
	{}
};

$ClassInfo _XSMessageFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.xs.XSMessageFormatter",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.util.MessageFormatter",
	_XSMessageFormatter_FieldInfo_,
	_XSMessageFormatter_MethodInfo_
};

$Object* allocate$XSMessageFormatter($Class* clazz) {
	return $of($alloc(XSMessageFormatter));
}

$String* XSMessageFormatter::SCHEMA_DOMAIN = nullptr;

void XSMessageFormatter::init$() {
	$set(this, fLocale, nullptr);
	$set(this, fResourceBundle, nullptr);
}

$String* XSMessageFormatter::formatMessage($Locale* locale, $String* key, $ObjectArray* arguments) {
	$useLocalCurrentObjectStackCache();
	if (this->fResourceBundle == nullptr || locale != this->fLocale) {
		if (locale != nullptr) {
			$set(this, fResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XMLSchemaMessages"_s, locale));
			$set(this, fLocale, locale);
		}
		if (this->fResourceBundle == nullptr) {
			$set(this, fResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XMLSchemaMessages"_s));
		}
	}
	$var($String, msg, $nc(this->fResourceBundle)->getString(key));
	if (arguments != nullptr) {
		try {
			$assign(msg, $MessageFormat::format(msg, arguments));
		} catch ($Exception& e) {
			$assign(msg, $nc(this->fResourceBundle)->getString("FormatFailed"_s));
			$plusAssign(msg, $$str({" "_s, $($nc(this->fResourceBundle)->getString(key))}));
		}
	}
	if (msg == nullptr) {
		$assign(msg, $nc(this->fResourceBundle)->getString("BadMessageKey"_s));
		$throwNew($MissingResourceException, msg, "com.sun.org.apache.xerces.internal.impl.msg.SchemaMessages"_s, key);
	}
	return msg;
}

XSMessageFormatter::XSMessageFormatter() {
}

void clinit$XSMessageFormatter($Class* class$) {
	$assignStatic(XSMessageFormatter::SCHEMA_DOMAIN, "http://www.w3.org/TR/xml-schema-1"_s);
}

$Class* XSMessageFormatter::load$($String* name, bool initialize) {
	$loadClass(XSMessageFormatter, name, initialize, &_XSMessageFormatter_ClassInfo_, clinit$XSMessageFormatter, allocate$XSMessageFormatter);
	return class$;
}

$Class* XSMessageFormatter::class$ = nullptr;

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
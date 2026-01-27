#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>

#include <java/lang/StringBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DOM_DOMAIN
#undef SERIALIZER_DOMAIN
#undef XML_DOMAIN

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
						namespace dom {

$FieldInfo _DOMMessageFormatter_FieldInfo_[] = {
	{"DOM_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMMessageFormatter, DOM_DOMAIN)},
	{"XML_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMMessageFormatter, XML_DOMAIN)},
	{"SERIALIZER_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DOMMessageFormatter, SERIALIZER_DOMAIN)},
	{"domResourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(DOMMessageFormatter, domResourceBundle)},
	{"xmlResourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(DOMMessageFormatter, xmlResourceBundle)},
	{"serResourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(DOMMessageFormatter, serResourceBundle)},
	{"locale", "Ljava/util/Locale;", nullptr, $PRIVATE | $STATIC, $staticField(DOMMessageFormatter, locale)},
	{}
};

$MethodInfo _DOMMessageFormatter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(DOMMessageFormatter, init$, void)},
	{"formatMessage", "(Ljava/lang/String;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMMessageFormatter, formatMessage, $String*, $String*, $String*, $ObjectArray*), "java.util.MissingResourceException"},
	{"getResourceBundle", "(Ljava/lang/String;)Ljava/util/ResourceBundle;", nullptr, $STATIC, $staticMethod(DOMMessageFormatter, getResourceBundle, $ResourceBundle*, $String*)},
	{"init", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMMessageFormatter, init, void)},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DOMMessageFormatter, setLocale, void, $Locale*)},
	{}
};

$ClassInfo _DOMMessageFormatter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DOMMessageFormatter",
	"java.lang.Object",
	nullptr,
	_DOMMessageFormatter_FieldInfo_,
	_DOMMessageFormatter_MethodInfo_
};

$Object* allocate$DOMMessageFormatter($Class* clazz) {
	return $of($alloc(DOMMessageFormatter));
}

$String* DOMMessageFormatter::DOM_DOMAIN = nullptr;
$String* DOMMessageFormatter::XML_DOMAIN = nullptr;
$String* DOMMessageFormatter::SERIALIZER_DOMAIN = nullptr;
$ResourceBundle* DOMMessageFormatter::domResourceBundle = nullptr;
$ResourceBundle* DOMMessageFormatter::xmlResourceBundle = nullptr;
$ResourceBundle* DOMMessageFormatter::serResourceBundle = nullptr;
$Locale* DOMMessageFormatter::locale = nullptr;

void DOMMessageFormatter::init$() {
	$assignStatic(DOMMessageFormatter::locale, $Locale::getDefault());
}

$String* DOMMessageFormatter::formatMessage($String* domain, $String* key, $ObjectArray* arguments) {
	$init(DOMMessageFormatter);
	$useLocalCurrentObjectStackCache();
	$var($ResourceBundle, resourceBundle, getResourceBundle(domain));
	if (resourceBundle == nullptr) {
		init();
		$assign(resourceBundle, getResourceBundle(domain));
		if (resourceBundle == nullptr) {
			$throwNew($MissingResourceException, $$str({"Unknown domain"_s, domain}), nullptr, key);
		}
	}
	$var($String, msg, nullptr);
	try {
		$assign(msg, $str({key, ": "_s, $($nc(resourceBundle)->getString(key))}));
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

$ResourceBundle* DOMMessageFormatter::getResourceBundle($String* domain) {
	$init(DOMMessageFormatter);
	if (domain == DOMMessageFormatter::DOM_DOMAIN || $nc(domain)->equals(DOMMessageFormatter::DOM_DOMAIN)) {
		return DOMMessageFormatter::domResourceBundle;
	} else {
		if (domain == DOMMessageFormatter::XML_DOMAIN || domain->equals(DOMMessageFormatter::XML_DOMAIN)) {
			return DOMMessageFormatter::xmlResourceBundle;
		} else {
			if (domain == DOMMessageFormatter::SERIALIZER_DOMAIN || domain->equals(DOMMessageFormatter::SERIALIZER_DOMAIN)) {
				return DOMMessageFormatter::serResourceBundle;
			}
		}
	}
	return nullptr;
}

void DOMMessageFormatter::init() {
	$init(DOMMessageFormatter);
	if (DOMMessageFormatter::locale != nullptr) {
		$assignStatic(DOMMessageFormatter::domResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.DOMMessages"_s, DOMMessageFormatter::locale));
		$assignStatic(DOMMessageFormatter::serResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XMLSerializerMessages"_s, DOMMessageFormatter::locale));
		$assignStatic(DOMMessageFormatter::xmlResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XMLMessages"_s, DOMMessageFormatter::locale));
	} else {
		$assignStatic(DOMMessageFormatter::domResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.DOMMessages"_s));
		$assignStatic(DOMMessageFormatter::serResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XMLSerializerMessages"_s));
		$assignStatic(DOMMessageFormatter::xmlResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XMLMessages"_s));
	}
}

void DOMMessageFormatter::setLocale($Locale* dlocale) {
	$init(DOMMessageFormatter);
	$assignStatic(DOMMessageFormatter::locale, dlocale);
}

void clinit$DOMMessageFormatter($Class* class$) {
	$assignStatic(DOMMessageFormatter::DOM_DOMAIN, "http://www.w3.org/dom/DOMTR"_s);
	$assignStatic(DOMMessageFormatter::XML_DOMAIN, "http://www.w3.org/TR/1998/REC-xml-19980210"_s);
	$assignStatic(DOMMessageFormatter::SERIALIZER_DOMAIN, "http://apache.org/xml/serializer"_s);
	$assignStatic(DOMMessageFormatter::domResourceBundle, nullptr);
	$assignStatic(DOMMessageFormatter::xmlResourceBundle, nullptr);
	$assignStatic(DOMMessageFormatter::serResourceBundle, nullptr);
	$assignStatic(DOMMessageFormatter::locale, nullptr);
}

DOMMessageFormatter::DOMMessageFormatter() {
}

$Class* DOMMessageFormatter::load$($String* name, bool initialize) {
	$loadClass(DOMMessageFormatter, name, initialize, &_DOMMessageFormatter_ClassInfo_, clinit$DOMMessageFormatter, allocate$DOMMessageFormatter);
	return class$;
}

$Class* DOMMessageFormatter::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter_zh_TW.h>

#include <java/lang/StringBuffer.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/MissingResourceException.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef XMLNS_DOMAIN
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
						namespace impl {
							namespace msg {

$FieldInfo _XMLMessageFormatter_zh_TW_FieldInfo_[] = {
	{"XML_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLMessageFormatter_zh_TW, XML_DOMAIN)},
	{"XMLNS_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLMessageFormatter_zh_TW, XMLNS_DOMAIN)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(XMLMessageFormatter_zh_TW, fLocale)},
	{"fResourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE, $field(XMLMessageFormatter_zh_TW, fResourceBundle)},
	{}
};

$MethodInfo _XMLMessageFormatter_zh_TW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLMessageFormatter_zh_TW, init$, void)},
	{"formatMessage", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLMessageFormatter_zh_TW, formatMessage, $String*, $Locale*, $String*, $ObjectArray*), "java.util.MissingResourceException"},
	{}
};

$ClassInfo _XMLMessageFormatter_zh_TW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.msg.XMLMessageFormatter_zh_TW",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.util.MessageFormatter",
	_XMLMessageFormatter_zh_TW_FieldInfo_,
	_XMLMessageFormatter_zh_TW_MethodInfo_
};

$Object* allocate$XMLMessageFormatter_zh_TW($Class* clazz) {
	return $of($alloc(XMLMessageFormatter_zh_TW));
}

$String* XMLMessageFormatter_zh_TW::XML_DOMAIN = nullptr;
$String* XMLMessageFormatter_zh_TW::XMLNS_DOMAIN = nullptr;

void XMLMessageFormatter_zh_TW::init$() {
	$set(this, fLocale, nullptr);
	$set(this, fResourceBundle, nullptr);
}

$String* XMLMessageFormatter_zh_TW::formatMessage($Locale* locale, $String* key, $ObjectArray* arguments) {
	$useLocalCurrentObjectStackCache();
	if (this->fResourceBundle == nullptr || locale != this->fLocale) {
		if (locale != nullptr) {
			$set(this, fResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XMLMessages"_s, locale));
			$set(this, fLocale, locale);
		}
		if (this->fResourceBundle == nullptr) {
			$set(this, fResourceBundle, $SecuritySupport::getResourceBundle("com.sun.org.apache.xerces.internal.impl.msg.XMLMessages"_s));
		}
	}
	$var($String, msg, nullptr);
	try {
		$assign(msg, $nc(this->fResourceBundle)->getString(key));
		if (arguments != nullptr) {
			try {
				$assign(msg, $MessageFormat::format(msg, arguments));
			} catch ($Exception& e) {
				$assign(msg, $nc(this->fResourceBundle)->getString("FormatFailed"_s));
				$plusAssign(msg, $$str({" "_s, $($nc(this->fResourceBundle)->getString(key))}));
			}
		}
	} catch ($MissingResourceException& e) {
		$assign(msg, $nc(this->fResourceBundle)->getString("BadMessageKey"_s));
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

XMLMessageFormatter_zh_TW::XMLMessageFormatter_zh_TW() {
}

void clinit$XMLMessageFormatter_zh_TW($Class* class$) {
	$assignStatic(XMLMessageFormatter_zh_TW::XML_DOMAIN, "http://www.w3.org/TR/1998/REC-xml-19980210"_s);
	$assignStatic(XMLMessageFormatter_zh_TW::XMLNS_DOMAIN, "http://www.w3.org/TR/1999/REC-xml-names-19990114"_s);
}

$Class* XMLMessageFormatter_zh_TW::load$($String* name, bool initialize) {
	$loadClass(XMLMessageFormatter_zh_TW, name, initialize, &_XMLMessageFormatter_zh_TW_ClassInfo_, clinit$XMLMessageFormatter_zh_TW, allocate$XMLMessageFormatter_zh_TW);
	return class$;
}

$Class* XMLMessageFormatter_zh_TW::class$ = nullptr;

							} // msg
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
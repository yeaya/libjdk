#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter_pt_BR.h>

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

$FieldInfo _XMLMessageFormatter_pt_BR_FieldInfo_[] = {
	{"XML_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLMessageFormatter_pt_BR, XML_DOMAIN)},
	{"XMLNS_DOMAIN", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLMessageFormatter_pt_BR, XMLNS_DOMAIN)},
	{"fLocale", "Ljava/util/Locale;", nullptr, $PRIVATE, $field(XMLMessageFormatter_pt_BR, fLocale)},
	{"fResourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE, $field(XMLMessageFormatter_pt_BR, fResourceBundle)},
	{}
};

$MethodInfo _XMLMessageFormatter_pt_BR_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLMessageFormatter_pt_BR, init$, void)},
	{"formatMessage", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(XMLMessageFormatter_pt_BR, formatMessage, $String*, $Locale*, $String*, $ObjectArray*), "java.util.MissingResourceException"},
	{}
};

$ClassInfo _XMLMessageFormatter_pt_BR_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.msg.XMLMessageFormatter_pt_BR",
	"java.lang.Object",
	"com.sun.org.apache.xerces.internal.util.MessageFormatter",
	_XMLMessageFormatter_pt_BR_FieldInfo_,
	_XMLMessageFormatter_pt_BR_MethodInfo_
};

$Object* allocate$XMLMessageFormatter_pt_BR($Class* clazz) {
	return $of($alloc(XMLMessageFormatter_pt_BR));
}

$String* XMLMessageFormatter_pt_BR::XML_DOMAIN = nullptr;
$String* XMLMessageFormatter_pt_BR::XMLNS_DOMAIN = nullptr;

void XMLMessageFormatter_pt_BR::init$() {
	$set(this, fLocale, nullptr);
	$set(this, fResourceBundle, nullptr);
}

$String* XMLMessageFormatter_pt_BR::formatMessage($Locale* locale, $String* key, $ObjectArray* arguments) {
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

XMLMessageFormatter_pt_BR::XMLMessageFormatter_pt_BR() {
}

void clinit$XMLMessageFormatter_pt_BR($Class* class$) {
	$assignStatic(XMLMessageFormatter_pt_BR::XML_DOMAIN, "http://www.w3.org/TR/1998/REC-xml-19980210"_s);
	$assignStatic(XMLMessageFormatter_pt_BR::XMLNS_DOMAIN, "http://www.w3.org/TR/1999/REC-xml-names-19990114"_s);
}

$Class* XMLMessageFormatter_pt_BR::load$($String* name, bool initialize) {
	$loadClass(XMLMessageFormatter_pt_BR, name, initialize, &_XMLMessageFormatter_pt_BR_ClassInfo_, clinit$XMLMessageFormatter_pt_BR, allocate$XMLMessageFormatter_pt_BR);
	return class$;
}

$Class* XMLMessageFormatter_pt_BR::class$ = nullptr;

							} // msg
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
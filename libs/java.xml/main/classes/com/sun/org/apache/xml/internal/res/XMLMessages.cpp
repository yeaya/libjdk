#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>

#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef BAD_CODE
#undef FORMAT_FAILED
#undef XML_ERROR_RESOURCES

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace res {

$FieldInfo _XMLMessages_FieldInfo_[] = {
	{"fLocale", "Ljava/util/Locale;", nullptr, $PROTECTED, $field(XMLMessages, fLocale)},
	{"XMLBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(XMLMessages, XMLBundle)},
	{"XML_ERROR_RESOURCES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLMessages, XML_ERROR_RESOURCES)},
	{"BAD_CODE", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLMessages, BAD_CODE)},
	{"FORMAT_FAILED", "Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(XMLMessages, FORMAT_FAILED)},
	{}
};

$MethodInfo _XMLMessages_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XMLMessages, init$, void)},
	{"createMsg", "(Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(XMLMessages, createMsg, $String*, $ResourceBundle*, $String*, $ObjectArray*)},
	{"createXMLMessage", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(XMLMessages, createXMLMessage, $String*, $String*, $ObjectArray*)},
	{"getLocale", "()Ljava/util/Locale;", nullptr, $PUBLIC, $virtualMethod(XMLMessages, getLocale, $Locale*)},
	{"setLocale", "(Ljava/util/Locale;)V", nullptr, $PUBLIC, $virtualMethod(XMLMessages, setLocale, void, $Locale*)},
	{}
};

$ClassInfo _XMLMessages_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.res.XMLMessages",
	"java.lang.Object",
	nullptr,
	_XMLMessages_FieldInfo_,
	_XMLMessages_MethodInfo_
};

$Object* allocate$XMLMessages($Class* clazz) {
	return $of($alloc(XMLMessages));
}

$ResourceBundle* XMLMessages::XMLBundle = nullptr;
$String* XMLMessages::XML_ERROR_RESOURCES = nullptr;
$String* XMLMessages::BAD_CODE = nullptr;
$String* XMLMessages::FORMAT_FAILED = nullptr;

void XMLMessages::init$() {
	$set(this, fLocale, $Locale::getDefault());
}

void XMLMessages::setLocale($Locale* locale) {
	$set(this, fLocale, locale);
}

$Locale* XMLMessages::getLocale() {
	return this->fLocale;
}

$String* XMLMessages::createXMLMessage($String* msgKey, $ObjectArray* args) {
	$init(XMLMessages);
	if (XMLMessages::XMLBundle == nullptr) {
		$assignStatic(XMLMessages::XMLBundle, $SecuritySupport::getResourceBundle(XMLMessages::XML_ERROR_RESOURCES));
	}
	if (XMLMessages::XMLBundle != nullptr) {
		return createMsg(XMLMessages::XMLBundle, msgKey, args);
	} else {
		return "Could not load any resource bundles."_s;
	}
}

$String* XMLMessages::createMsg($ResourceBundle* fResourceBundle, $String* msgKey, $ObjectArray* args) {
	$init(XMLMessages);
	$useLocalCurrentObjectStackCache();
	$var($String, fmsg, nullptr);
	bool throwex = false;
	$var($String, msg, nullptr);
	if (msgKey != nullptr) {
		$assign(msg, $nc(fResourceBundle)->getString(msgKey));
	}
	if (msg == nullptr) {
		$assign(msg, $nc(fResourceBundle)->getString(XMLMessages::BAD_CODE));
		throwex = true;
	}
	if (args != nullptr) {
		try {
			int32_t n = args->length;
			for (int32_t i = 0; i < n; ++i) {
				if (nullptr == args->get(i)) {
					args->set(i, ""_s);
				}
			}
			$assign(fmsg, $MessageFormat::format(msg, args));
		} catch ($Exception& e) {
			$assign(fmsg, $nc(fResourceBundle)->getString(XMLMessages::FORMAT_FAILED));
			$plusAssign(fmsg, $$str({" "_s, msg}));
		}
	} else {
		$assign(fmsg, msg);
	}
	if (throwex) {
		$throwNew($RuntimeException, fmsg);
	}
	return fmsg;
}

void clinit$XMLMessages($Class* class$) {
	$assignStatic(XMLMessages::XML_ERROR_RESOURCES, "com.sun.org.apache.xml.internal.res.XMLErrorResources"_s);
	$assignStatic(XMLMessages::BAD_CODE, "BAD_CODE"_s);
	$assignStatic(XMLMessages::FORMAT_FAILED, "FORMAT_FAILED"_s);
	$assignStatic(XMLMessages::XMLBundle, nullptr);
}

XMLMessages::XMLMessages() {
}

$Class* XMLMessages::load$($String* name, bool initialize) {
	$loadClass(XMLMessages, name, initialize, &_XMLMessages_ClassInfo_, clinit$XMLMessages, allocate$XMLMessages);
	return class$;
}

$Class* XMLMessages::class$ = nullptr;

						} // res
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
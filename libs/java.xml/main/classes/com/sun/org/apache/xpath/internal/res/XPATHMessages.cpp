#include <com/sun/org/apache/xpath/internal/res/XPATHMessages.h>

#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/text/MessageFormat.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef BAD_CODE
#undef FORMAT_FAILED
#undef XPATH_ERROR_RESOURCES

using $XMLMessages = ::com::sun::org::apache::xml::internal::res::XMLMessages;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MessageFormat = ::java::text::MessageFormat;
using $ResourceBundle = ::java::util::ResourceBundle;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xpath {
					namespace internal {
						namespace res {

$FieldInfo _XPATHMessages_FieldInfo_[] = {
	{"XPATHBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(XPATHMessages, XPATHBundle)},
	{"XPATH_ERROR_RESOURCES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPATHMessages, XPATH_ERROR_RESOURCES)},
	{}
};

$MethodInfo _XPATHMessages_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(XPATHMessages, init$, void)},
	{"createXPATHMessage", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(XPATHMessages, createXPATHMessage, $String*, $String*, $ObjectArray*)},
	{"createXPATHMsg", "(Ljava/util/ResourceBundle;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticMethod(XPATHMessages, createXPATHMsg, $String*, $ResourceBundle*, $String*, $ObjectArray*)},
	{"createXPATHWarning", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(XPATHMessages, createXPATHWarning, $String*, $String*, $ObjectArray*)},
	{}
};

$ClassInfo _XPATHMessages_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xpath.internal.res.XPATHMessages",
	"com.sun.org.apache.xml.internal.res.XMLMessages",
	nullptr,
	_XPATHMessages_FieldInfo_,
	_XPATHMessages_MethodInfo_
};

$Object* allocate$XPATHMessages($Class* clazz) {
	return $of($alloc(XPATHMessages));
}

$ResourceBundle* XPATHMessages::XPATHBundle = nullptr;
$String* XPATHMessages::XPATH_ERROR_RESOURCES = nullptr;

void XPATHMessages::init$() {
	$XMLMessages::init$();
}

$String* XPATHMessages::createXPATHMessage($String* msgKey, $ObjectArray* args) {
	$init(XPATHMessages);
	if (XPATHMessages::XPATHBundle == nullptr) {
		$assignStatic(XPATHMessages::XPATHBundle, $SecuritySupport::getResourceBundle(XPATHMessages::XPATH_ERROR_RESOURCES));
	}
	if (XPATHMessages::XPATHBundle != nullptr) {
		return createXPATHMsg(XPATHMessages::XPATHBundle, msgKey, args);
	} else {
		return "Could not load any resource bundles."_s;
	}
}

$String* XPATHMessages::createXPATHWarning($String* msgKey, $ObjectArray* args) {
	$init(XPATHMessages);
	if (XPATHMessages::XPATHBundle == nullptr) {
		$assignStatic(XPATHMessages::XPATHBundle, $SecuritySupport::getResourceBundle(XPATHMessages::XPATH_ERROR_RESOURCES));
	}
	if (XPATHMessages::XPATHBundle != nullptr) {
		return createXPATHMsg(XPATHMessages::XPATHBundle, msgKey, args);
	} else {
		return "Could not load any resource bundles."_s;
	}
}

$String* XPATHMessages::createXPATHMsg($ResourceBundle* fResourceBundle, $String* msgKey, $ObjectArray* args) {
	$init(XPATHMessages);
	$useLocalCurrentObjectStackCache();
	$var($String, fmsg, nullptr);
	bool throwex = false;
	$var($String, msg, nullptr);
	if (msgKey != nullptr) {
		$assign(msg, $nc(fResourceBundle)->getString(msgKey));
	}
	if (msg == nullptr) {
		$init($XPATHErrorResources);
		$assign(msg, $nc(fResourceBundle)->getString($XPATHErrorResources::BAD_CODE));
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
			$init($XPATHErrorResources);
			$assign(fmsg, $nc(fResourceBundle)->getString($XPATHErrorResources::FORMAT_FAILED));
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

void clinit$XPATHMessages($Class* class$) {
	$assignStatic(XPATHMessages::XPATH_ERROR_RESOURCES, "com.sun.org.apache.xpath.internal.res.XPATHErrorResources"_s);
	$assignStatic(XPATHMessages::XPATHBundle, nullptr);
}

XPATHMessages::XPATHMessages() {
}

$Class* XPATHMessages::load$($String* name, bool initialize) {
	$loadClass(XPATHMessages, name, initialize, &_XPATHMessages_ClassInfo_, clinit$XPATHMessages, allocate$XPATHMessages);
	return class$;
}

$Class* XPATHMessages::class$ = nullptr;

						} // res
					} // internal
				} // xpath
			} // apache
		} // org
	} // sun
} // com
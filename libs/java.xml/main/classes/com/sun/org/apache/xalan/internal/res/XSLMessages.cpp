#include <com/sun/org/apache/xalan/internal/res/XSLMessages.h>
#include <com/sun/org/apache/xml/internal/res/XMLMessages.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHMessages.h>
#include <java/util/ResourceBundle.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef XSLT_ERROR_RESOURCES

using $XPATHMessages = ::com::sun::org::apache::xpath::internal::res::XPATHMessages;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ResourceBundle = ::java::util::ResourceBundle;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace res {

$ResourceBundle* XSLMessages::XSLTBundle = nullptr;
$String* XSLMessages::XSLT_ERROR_RESOURCES = nullptr;

void XSLMessages::init$() {
	$XPATHMessages::init$();
}

$String* XSLMessages::createMessage($String* msgKey, $ObjectArray* args) {
	$init(XSLMessages);
	if (XSLMessages::XSLTBundle == nullptr) {
		$assignStatic(XSLMessages::XSLTBundle, $SecuritySupport::getResourceBundle(XSLMessages::XSLT_ERROR_RESOURCES));
	}
	if (XSLMessages::XSLTBundle != nullptr) {
		return createMsg(XSLMessages::XSLTBundle, msgKey, args);
	} else {
		return "Could not load any resource bundles."_s;
	}
}

$String* XSLMessages::createWarning($String* msgKey, $ObjectArray* args) {
	$init(XSLMessages);
	if (XSLMessages::XSLTBundle == nullptr) {
		$assignStatic(XSLMessages::XSLTBundle, $SecuritySupport::getResourceBundle(XSLMessages::XSLT_ERROR_RESOURCES));
	}
	if (XSLMessages::XSLTBundle != nullptr) {
		return createMsg(XSLMessages::XSLTBundle, msgKey, args);
	} else {
		return "Could not load any resource bundles."_s;
	}
}

void XSLMessages::clinit$($Class* clazz) {
	$assignStatic(XSLMessages::XSLT_ERROR_RESOURCES, "com.sun.org.apache.xalan.internal.res.XSLTErrorResources"_s);
	$assignStatic(XSLMessages::XSLTBundle, nullptr);
}

XSLMessages::XSLMessages() {
}

$Class* XSLMessages::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"XSLTBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(XSLMessages, XSLTBundle)},
		{"XSLT_ERROR_RESOURCES", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XSLMessages, XSLT_ERROR_RESOURCES)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(XSLMessages, init$, void)},
		{"createMessage", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSLMessages, createMessage, $String*, $String*, $ObjectArray*)},
		{"createWarning", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(XSLMessages, createWarning, $String*, $String*, $ObjectArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xalan.internal.res.XSLMessages",
		"com.sun.org.apache.xpath.internal.res.XPATHMessages",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(XSLMessages, name, initialize, &classInfo$$, XSLMessages::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(XSLMessages);
	});
	return class$;
}

$Class* XSLMessages::class$ = nullptr;

						} // res
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com
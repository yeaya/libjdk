#include <com/sun/org/apache/xml/internal/security/utils/IgnoreAllErrorHandler.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

#undef LOG

using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SAXParseException = ::org::xml::sax::SAXParseException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

class IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0 : public $PrivilegedAction {
	$class(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($String* name) {
		$set(this, name, name);
	}
	virtual $Object* run() override {
		 return $of(IgnoreAllErrorHandler::lambda$getProperty$0(name));
	}
	$String* name = nullptr;
};
$Class* IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0, init$, void, $String*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.org.apache.xml.internal.security.utils.IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0);
	});
	return class$;
}
$Class* IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0::class$ = nullptr;

$Logger* IgnoreAllErrorHandler::LOG = nullptr;
bool IgnoreAllErrorHandler::warnOnExceptions = false;
bool IgnoreAllErrorHandler::throwExceptions = false;

void IgnoreAllErrorHandler::init$() {
}

bool IgnoreAllErrorHandler::getProperty($String* name) {
	$init(IgnoreAllErrorHandler);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	return $$sure($Boolean, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0, name))))->booleanValue();
}

void IgnoreAllErrorHandler::warning($SAXParseException* ex) {
	if (IgnoreAllErrorHandler::warnOnExceptions) {
		$nc(IgnoreAllErrorHandler::LOG)->warn(""_s, ex);
	}
	if (IgnoreAllErrorHandler::throwExceptions) {
		$throw(ex);
	}
}

void IgnoreAllErrorHandler::error($SAXParseException* ex) {
	if (IgnoreAllErrorHandler::warnOnExceptions) {
		$nc(IgnoreAllErrorHandler::LOG)->error(""_s, ex);
	}
	if (IgnoreAllErrorHandler::throwExceptions) {
		$throw(ex);
	}
}

void IgnoreAllErrorHandler::fatalError($SAXParseException* ex) {
	if (IgnoreAllErrorHandler::warnOnExceptions) {
		$nc(IgnoreAllErrorHandler::LOG)->warn(""_s, ex);
	}
	if (IgnoreAllErrorHandler::throwExceptions) {
		$throw(ex);
	}
}

$Boolean* IgnoreAllErrorHandler::lambda$getProperty$0($String* name) {
	$init(IgnoreAllErrorHandler);
	return $Boolean::valueOf($Boolean::getBoolean(name));
}

void IgnoreAllErrorHandler::clinit$($Class* clazz) {
	$assignStatic(IgnoreAllErrorHandler::LOG, $LoggerFactory::getLogger(IgnoreAllErrorHandler::class$));
	IgnoreAllErrorHandler::warnOnExceptions = IgnoreAllErrorHandler::getProperty("com.sun.org.apache.xml.internal.security.test.warn.on.exceptions"_s);
	IgnoreAllErrorHandler::throwExceptions = IgnoreAllErrorHandler::getProperty("com.sun.org.apache.xml.internal.security.test.throw.exceptions"_s);
}

IgnoreAllErrorHandler::IgnoreAllErrorHandler() {
}

$Class* IgnoreAllErrorHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.org.apache.xml.internal.security.utils.IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0")) {
			return IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IgnoreAllErrorHandler, LOG)},
		{"warnOnExceptions", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IgnoreAllErrorHandler, warnOnExceptions)},
		{"throwExceptions", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IgnoreAllErrorHandler, throwExceptions)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(IgnoreAllErrorHandler, init$, void)},
		{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(IgnoreAllErrorHandler, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(IgnoreAllErrorHandler, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{"getProperty", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(IgnoreAllErrorHandler, getProperty, bool, $String*)},
		{"lambda$getProperty$0", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(IgnoreAllErrorHandler, lambda$getProperty$0, $Boolean*, $String*)},
		{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(IgnoreAllErrorHandler, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.security.utils.IgnoreAllErrorHandler",
		"java.lang.Object",
		"org.xml.sax.ErrorHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(IgnoreAllErrorHandler, name, initialize, &classInfo$$, IgnoreAllErrorHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(IgnoreAllErrorHandler);
	});
	return class$;
}

$Class* IgnoreAllErrorHandler::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
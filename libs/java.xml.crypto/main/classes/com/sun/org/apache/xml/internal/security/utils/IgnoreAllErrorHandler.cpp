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
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/SAXParseException.h>
#include <jcpp.h>

#undef LOG

using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $SAXException = ::org::xml::sax::SAXException;
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
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0>());
	}
	$String* name = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0::fieldInfos[2] = {
	{"name", "Ljava/lang/String;", nullptr, $PUBLIC, $field(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0, name)},
	{}
};
$MethodInfo IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0::methodInfos[3] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0, init$, void, $String*)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0, run, $Object*)},
	{}
};
$ClassInfo IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xml.internal.security.utils.IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	fieldInfos,
	methodInfos
};
$Class* IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0::load$($String* name, bool initialize) {
	$loadClass(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0::class$ = nullptr;

$FieldInfo _IgnoreAllErrorHandler_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IgnoreAllErrorHandler, LOG)},
	{"warnOnExceptions", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IgnoreAllErrorHandler, warnOnExceptions)},
	{"throwExceptions", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IgnoreAllErrorHandler, throwExceptions)},
	{}
};

$MethodInfo _IgnoreAllErrorHandler_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(IgnoreAllErrorHandler, init$, void)},
	{"error", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(IgnoreAllErrorHandler, error, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"fatalError", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(IgnoreAllErrorHandler, fatalError, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{"getProperty", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(IgnoreAllErrorHandler, getProperty, bool, $String*)},
	{"lambda$getProperty$0", "(Ljava/lang/String;)Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(IgnoreAllErrorHandler, lambda$getProperty$0, $Boolean*, $String*)},
	{"warning", "(Lorg/xml/sax/SAXParseException;)V", nullptr, $PUBLIC, $virtualMethod(IgnoreAllErrorHandler, warning, void, $SAXParseException*), "org.xml.sax.SAXException"},
	{}
};

$ClassInfo _IgnoreAllErrorHandler_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.IgnoreAllErrorHandler",
	"java.lang.Object",
	"org.xml.sax.ErrorHandler",
	_IgnoreAllErrorHandler_FieldInfo_,
	_IgnoreAllErrorHandler_MethodInfo_
};

$Object* allocate$IgnoreAllErrorHandler($Class* clazz) {
	return $of($alloc(IgnoreAllErrorHandler));
}

$Logger* IgnoreAllErrorHandler::LOG = nullptr;
bool IgnoreAllErrorHandler::warnOnExceptions = false;
bool IgnoreAllErrorHandler::throwExceptions = false;

void IgnoreAllErrorHandler::init$() {
}

bool IgnoreAllErrorHandler::getProperty($String* name) {
	$init(IgnoreAllErrorHandler);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	return $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0, name)))))))->booleanValue();
}

void IgnoreAllErrorHandler::warning($SAXParseException* ex) {
	if (IgnoreAllErrorHandler::warnOnExceptions) {
		$nc(IgnoreAllErrorHandler::LOG)->warn(""_s, static_cast<$Throwable*>(ex));
	}
	if (IgnoreAllErrorHandler::throwExceptions) {
		$throw(ex);
	}
}

void IgnoreAllErrorHandler::error($SAXParseException* ex) {
	if (IgnoreAllErrorHandler::warnOnExceptions) {
		$nc(IgnoreAllErrorHandler::LOG)->error(""_s, static_cast<$Throwable*>(ex));
	}
	if (IgnoreAllErrorHandler::throwExceptions) {
		$throw(ex);
	}
}

void IgnoreAllErrorHandler::fatalError($SAXParseException* ex) {
	if (IgnoreAllErrorHandler::warnOnExceptions) {
		$nc(IgnoreAllErrorHandler::LOG)->warn(""_s, static_cast<$Throwable*>(ex));
	}
	if (IgnoreAllErrorHandler::throwExceptions) {
		$throw(ex);
	}
}

$Boolean* IgnoreAllErrorHandler::lambda$getProperty$0($String* name) {
	$init(IgnoreAllErrorHandler);
	return $Boolean::valueOf($Boolean::getBoolean(name));
}

void clinit$IgnoreAllErrorHandler($Class* class$) {
	$assignStatic(IgnoreAllErrorHandler::LOG, $LoggerFactory::getLogger(IgnoreAllErrorHandler::class$));
	IgnoreAllErrorHandler::warnOnExceptions = IgnoreAllErrorHandler::getProperty("com.sun.org.apache.xml.internal.security.test.warn.on.exceptions"_s);
	IgnoreAllErrorHandler::throwExceptions = IgnoreAllErrorHandler::getProperty("com.sun.org.apache.xml.internal.security.test.throw.exceptions"_s);
}

IgnoreAllErrorHandler::IgnoreAllErrorHandler() {
}

$Class* IgnoreAllErrorHandler::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0::classInfo$.name)) {
			return IgnoreAllErrorHandler$$Lambda$lambda$getProperty$0::load$(name, initialize);
		}
	}
	$loadClass(IgnoreAllErrorHandler, name, initialize, &_IgnoreAllErrorHandler_ClassInfo_, clinit$IgnoreAllErrorHandler, allocate$IgnoreAllErrorHandler);
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
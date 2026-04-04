#include <java/util/logging/Logger$SystemLoggerHelper.h>
#include <java/security/AccessController.h>
#include <java/util/logging/Logger$SystemLoggerHelper$1.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Logger$SystemLoggerHelper$1 = ::java::util::logging::Logger$SystemLoggerHelper$1;

namespace java {
	namespace util {
		namespace logging {

bool Logger$SystemLoggerHelper::disableCallerCheck = false;

void Logger$SystemLoggerHelper::init$() {
}

bool Logger$SystemLoggerHelper::getBooleanProperty($String* key) {
	$init(Logger$SystemLoggerHelper);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, s, $cast($String, $AccessController::doPrivileged($$new($Logger$SystemLoggerHelper$1, key))));
	return $Boolean::parseBoolean(s);
}

void Logger$SystemLoggerHelper::clinit$($Class* clazz) {
	Logger$SystemLoggerHelper::disableCallerCheck = Logger$SystemLoggerHelper::getBooleanProperty("sun.util.logging.disableCallerCheck"_s);
}

Logger$SystemLoggerHelper::Logger$SystemLoggerHelper() {
}

$Class* Logger$SystemLoggerHelper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"disableCallerCheck", "Z", nullptr, $STATIC, $staticField(Logger$SystemLoggerHelper, disableCallerCheck)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Logger$SystemLoggerHelper, init$, void)},
		{"getBooleanProperty", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(Logger$SystemLoggerHelper, getBooleanProperty, bool, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.Logger$SystemLoggerHelper", "java.util.logging.Logger", "SystemLoggerHelper", $PRIVATE | $STATIC},
		{"java.util.logging.Logger$SystemLoggerHelper$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.Logger$SystemLoggerHelper",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.Logger"
	};
	$loadClass(Logger$SystemLoggerHelper, name, initialize, &classInfo$$, Logger$SystemLoggerHelper::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Logger$SystemLoggerHelper);
	});
	return class$;
}

$Class* Logger$SystemLoggerHelper::class$ = nullptr;

		} // logging
	} // util
} // java
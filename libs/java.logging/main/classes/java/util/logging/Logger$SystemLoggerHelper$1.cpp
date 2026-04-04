#include <java/util/logging/Logger$SystemLoggerHelper$1.h>
#include <java/util/logging/Logger$SystemLoggerHelper.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace util {
		namespace logging {

void Logger$SystemLoggerHelper$1::init$($String* val$key) {
	$set(this, val$key, val$key);
}

$Object* Logger$SystemLoggerHelper$1::run() {
	return $of($System::getProperty(this->val$key));
}

Logger$SystemLoggerHelper$1::Logger$SystemLoggerHelper$1() {
}

$Class* Logger$SystemLoggerHelper$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$key", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(Logger$SystemLoggerHelper$1, val$key)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(Logger$SystemLoggerHelper$1, init$, void, $String*)},
		{"run", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Logger$SystemLoggerHelper$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.Logger$SystemLoggerHelper",
		"getBooleanProperty",
		"(Ljava/lang/String;)Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.Logger$SystemLoggerHelper", "java.util.logging.Logger", "SystemLoggerHelper", $PRIVATE | $STATIC},
		{"java.util.logging.Logger$SystemLoggerHelper$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.Logger$SystemLoggerHelper$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.Logger"
	};
	$loadClass(Logger$SystemLoggerHelper$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Logger$SystemLoggerHelper$1);
	});
	return class$;
}

$Class* Logger$SystemLoggerHelper$1::class$ = nullptr;

		} // logging
	} // util
} // java
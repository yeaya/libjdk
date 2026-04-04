#include <java/util/logging/LogManager$3.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LogManager = ::java::util::logging::LogManager;
using $Logger = ::java::util::logging::Logger;

namespace java {
	namespace util {
		namespace logging {

void LogManager$3::init$($LogManager* this$0, $Logger* val$l, $Logger* val$sysLogger) {
	$set(this, this$0, this$0);
	$set(this, val$l, val$l);
	$set(this, val$sysLogger, val$sysLogger);
}

$Object* LogManager$3::run() {
	$nc(this->val$l)->mergeWithSystemLogger(this->val$sysLogger);
	return nullptr;
}

LogManager$3::LogManager$3() {
}

$Class* LogManager$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/logging/LogManager;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$3, this$0)},
		{"val$sysLogger", "Ljava/util/logging/Logger;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$3, val$sysLogger)},
		{"val$l", "Ljava/util/logging/Logger;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$3, val$l)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/LogManager;Ljava/util/logging/Logger;Ljava/util/logging/Logger;)V", "()V", 0, $method(LogManager$3, init$, void, $LogManager*, $Logger*, $Logger*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(LogManager$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.LogManager",
		"demandSystemLogger",
		"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Module;)Ljava/util/logging/Logger;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.LogManager$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.LogManager"
	};
	$loadClass(LogManager$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$3);
	});
	return class$;
}

$Class* LogManager$3::class$ = nullptr;

		} // logging
	} // util
} // java
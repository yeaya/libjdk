#include <java/util/logging/LogManager$LoggerContext$1.h>
#include <java/util/logging/LogManager$LoggerContext.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LogManager = ::java::util::logging::LogManager;
using $LogManager$LoggerContext = ::java::util::logging::LogManager$LoggerContext;
using $Logger = ::java::util::logging::Logger;

namespace java {
	namespace util {
		namespace logging {

void LogManager$LoggerContext$1::init$($LogManager$LoggerContext* this$1, $Logger* val$logger, $LogManager* val$owner, $String* val$name) {
	$set(this, this$1, this$1);
	$set(this, val$logger, val$logger);
	$set(this, val$owner, val$owner);
	$set(this, val$name, val$name);
}

$Object* LogManager$LoggerContext$1::run() {
	if (this->val$logger != $nc(this->val$owner)->rootLogger) {
		bool useParent = this->val$owner->getBooleanProperty($$str({this->val$name, ".useParentHandlers"_s}), true);
		if (!useParent) {
			$nc(this->val$logger)->setUseParentHandlers(false);
		}
	}
	return nullptr;
}

LogManager$LoggerContext$1::LogManager$LoggerContext$1() {
}

$Class* LogManager$LoggerContext$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljava/util/logging/LogManager$LoggerContext;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$LoggerContext$1, this$1)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$LoggerContext$1, val$name)},
		{"val$owner", "Ljava/util/logging/LogManager;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$LoggerContext$1, val$owner)},
		{"val$logger", "Ljava/util/logging/Logger;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$LoggerContext$1, val$logger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/LogManager$LoggerContext;Ljava/util/logging/Logger;Ljava/util/logging/LogManager;Ljava/lang/String;)V", "()V", 0, $method(LogManager$LoggerContext$1, init$, void, $LogManager$LoggerContext*, $Logger*, $LogManager*, $String*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(LogManager$LoggerContext$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.LogManager$LoggerContext",
		"processParentHandlers",
		"(Ljava/util/logging/Logger;Ljava/lang/String;Ljava/util/function/Predicate;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$LoggerContext", "java.util.logging.LogManager", "LoggerContext", 0},
		{"java.util.logging.LogManager$LoggerContext$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.LogManager$LoggerContext$1",
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
	$loadClass(LogManager$LoggerContext$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$LoggerContext$1);
	});
	return class$;
}

$Class* LogManager$LoggerContext$1::class$ = nullptr;

		} // logging
	} // util
} // java
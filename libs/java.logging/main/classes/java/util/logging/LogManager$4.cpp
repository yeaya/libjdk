#include <java/util/logging/LogManager$4.h>
#include <java/util/List.h>
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

void LogManager$4::init$($LogManager* this$0, $Logger* val$logger, $String* val$name, $String* val$handlersPropertyName) {
	$set(this, this$0, this$0);
	$set(this, val$logger, val$logger);
	$set(this, val$name, val$name);
	$set(this, val$handlersPropertyName, val$handlersPropertyName);
}

$Object* LogManager$4::run() {
	this->this$0->setLoggerHandlers(this->val$logger, this->val$name, this->val$handlersPropertyName, $(this->this$0->createLoggerHandlers(this->val$name, this->val$handlersPropertyName)));
	return nullptr;
}

LogManager$4::LogManager$4() {
}

$Class* LogManager$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/logging/LogManager;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$4, this$0)},
		{"val$handlersPropertyName", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$4, val$handlersPropertyName)},
		{"val$name", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$4, val$name)},
		{"val$logger", "Ljava/util/logging/Logger;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$4, val$logger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/LogManager;Ljava/util/logging/Logger;Ljava/lang/String;Ljava/lang/String;)V", "()V", 0, $method(LogManager$4, init$, void, $LogManager*, $Logger*, $String*, $String*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(LogManager$4, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.LogManager",
		"loadLoggerHandlers",
		"(Ljava/util/logging/Logger;Ljava/lang/String;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.LogManager$4",
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
	$loadClass(LogManager$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$4);
	});
	return class$;
}

$Class* LogManager$4::class$ = nullptr;

		} // logging
	} // util
} // java
#include <java/util/logging/LogManager$RootLogger.h>
#include <java/lang/Module.h>
#include <java/util/logging/Handler.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/LogRecord.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

using $HandlerArray = $Array<::java::util::logging::Handler>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Module = ::java::lang::Module;
using $Handler = ::java::util::logging::Handler;
using $LogManager = ::java::util::logging::LogManager;
using $LogRecord = ::java::util::logging::LogRecord;
using $Logger = ::java::util::logging::Logger;

namespace java {
	namespace util {
		namespace logging {

void LogManager$RootLogger::init$($LogManager* this$0) {
	$set(this, this$0, this$0);
	$Logger::init$(""_s, nullptr, nullptr, this$0, true);
}

void LogManager$RootLogger::log($LogRecord* record) {
	this->this$0->initializeGlobalHandlers();
	$Logger::log(record);
}

void LogManager$RootLogger::addHandler($Handler* h) {
	this->this$0->initializeGlobalHandlers();
	$Logger::addHandler(h);
}

void LogManager$RootLogger::removeHandler($Handler* h) {
	this->this$0->initializeGlobalHandlers();
	$Logger::removeHandler(h);
}

$HandlerArray* LogManager$RootLogger::accessCheckedHandlers() {
	this->this$0->initializeGlobalHandlers();
	return $Logger::accessCheckedHandlers();
}

LogManager$RootLogger::LogManager$RootLogger() {
}

$Class* LogManager$RootLogger::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/logging/LogManager;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$RootLogger, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/LogManager;)V", nullptr, $PRIVATE, $method(LogManager$RootLogger, init$, void, $LogManager*)},
		{"accessCheckedHandlers", "()[Ljava/util/logging/Handler;", nullptr, 0, $virtualMethod(LogManager$RootLogger, accessCheckedHandlers, $HandlerArray*)},
		{"addHandler", "(Ljava/util/logging/Handler;)V", nullptr, $PUBLIC, $virtualMethod(LogManager$RootLogger, addHandler, void, $Handler*)},
		{"log", "(Ljava/util/logging/LogRecord;)V", nullptr, $PUBLIC, $virtualMethod(LogManager$RootLogger, log, void, $LogRecord*)},
		{"removeHandler", "(Ljava/util/logging/Handler;)V", nullptr, $PUBLIC, $virtualMethod(LogManager$RootLogger, removeHandler, void, $Handler*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$RootLogger", "java.util.logging.LogManager", "RootLogger", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.logging.LogManager$RootLogger",
		"java.util.logging.Logger",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.LogManager"
	};
	$loadClass(LogManager$RootLogger, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$RootLogger);
	});
	return class$;
}

$Class* LogManager$RootLogger::class$ = nullptr;

		} // logging
	} // util
} // java
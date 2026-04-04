#include <java/util/logging/LogManager$VisitedLoggers.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

#undef NEVER
#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $Logger = ::java::util::logging::Logger;

namespace java {
	namespace util {
		namespace logging {

LogManager$VisitedLoggers* LogManager$VisitedLoggers::NEVER = nullptr;

void LogManager$VisitedLoggers::init$($IdentityHashMap* visited) {
	$set(this, visited, visited);
}

void LogManager$VisitedLoggers::init$() {
	LogManager$VisitedLoggers::init$($$new($IdentityHashMap));
}

bool LogManager$VisitedLoggers::test($Logger* logger) {
	return this->visited != nullptr && this->visited->put(logger, $Boolean::TRUE) != nullptr;
}

void LogManager$VisitedLoggers::clear() {
	if (this->visited != nullptr) {
		this->visited->clear();
	}
}

bool LogManager$VisitedLoggers::test(Object$* logger) {
	return this->test($cast($Logger, logger));
}

void LogManager$VisitedLoggers::clinit$($Class* clazz) {
	$assignStatic(LogManager$VisitedLoggers::NEVER, $new(LogManager$VisitedLoggers, nullptr));
}

LogManager$VisitedLoggers::LogManager$VisitedLoggers() {
}

$Class* LogManager$VisitedLoggers::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"visited", "Ljava/util/IdentityHashMap;", "Ljava/util/IdentityHashMap<Ljava/util/logging/Logger;Ljava/lang/Boolean;>;", $FINAL, $field(LogManager$VisitedLoggers, visited)},
		{"NEVER", "Ljava/util/logging/LogManager$VisitedLoggers;", nullptr, $STATIC | $FINAL, $staticField(LogManager$VisitedLoggers, NEVER)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/IdentityHashMap;)V", "(Ljava/util/IdentityHashMap<Ljava/util/logging/Logger;Ljava/lang/Boolean;>;)V", $PRIVATE, $method(LogManager$VisitedLoggers, init$, void, $IdentityHashMap*)},
		{"<init>", "()V", nullptr, 0, $method(LogManager$VisitedLoggers, init$, void)},
		{"clear", "()V", nullptr, $PUBLIC, $method(LogManager$VisitedLoggers, clear, void)},
		{"test", "(Ljava/util/logging/Logger;)Z", nullptr, $PUBLIC, $method(LogManager$VisitedLoggers, test, bool, $Logger*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LogManager$VisitedLoggers, test, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$VisitedLoggers", "java.util.logging.LogManager", "VisitedLoggers", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.logging.LogManager$VisitedLoggers",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Predicate<Ljava/util/logging/Logger;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.LogManager"
	};
	$loadClass(LogManager$VisitedLoggers, name, initialize, &classInfo$$, LogManager$VisitedLoggers::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$VisitedLoggers);
	});
	return class$;
}

$Class* LogManager$VisitedLoggers::class$ = nullptr;

		} // logging
	} // util
} // java
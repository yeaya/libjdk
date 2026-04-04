#include <java/util/logging/LogManager$Cleaner.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/util/concurrent/locks/ReentrantLock.h>
#include <java/util/logging/LogManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $LogManager = ::java::util::logging::LogManager;

namespace java {
	namespace util {
		namespace logging {

void LogManager$Cleaner::init$($LogManager* this$0) {
	$set(this, this$0, this$0);
	$Thread::init$(nullptr, nullptr, "Logging-Cleaner"_s, 0, false);
	this->setContextClassLoader(nullptr);
}

void LogManager$Cleaner::run() {
	$init($LogManager);
	$var($LogManager, mgr, $LogManager::manager);
	$nc(this->this$0->configurationLock)->lock();
	this->this$0->globalHandlersState = 4;
	this->this$0->configurationLock->unlock();
	this->this$0->reset();
}

LogManager$Cleaner::LogManager$Cleaner() {
}

$Class* LogManager$Cleaner::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/logging/LogManager;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$Cleaner, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/LogManager;)V", nullptr, $PRIVATE, $method(LogManager$Cleaner, init$, void, $LogManager*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LogManager$Cleaner, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$Cleaner", "java.util.logging.LogManager", "Cleaner", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.LogManager$Cleaner",
		"java.lang.Thread",
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
	$loadClass(LogManager$Cleaner, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$Cleaner);
	});
	return class$;
}

$Class* LogManager$Cleaner::class$ = nullptr;

		} // logging
	} // util
} // java
#include <java/util/logging/LogManager$2.h>
#include <java/lang/AssertionError.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/LogManager$RootLogger.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LogManager = ::java::util::logging::LogManager;
using $LogManager$RootLogger = ::java::util::logging::LogManager$RootLogger;
using $Logger = ::java::util::logging::Logger;

namespace java {
	namespace util {
		namespace logging {

bool LogManager$2::$assertionsDisabled = false;

void LogManager$2::init$($LogManager* this$0, $LogManager* val$owner) {
	$set(this, this$0, this$0);
	$set(this, val$owner, val$owner);
}

$Object* LogManager$2::run() {
	$useLocalObjectStack();
	if (!LogManager$2::$assertionsDisabled && !(this->this$0->rootLogger == nullptr)) {
		$throwNew($AssertionError);
	}
	if (!LogManager$2::$assertionsDisabled && !(this->this$0->initializedCalled && !this->this$0->initializationDone)) {
		$throwNew($AssertionError);
	}
	$var($Logger, root, $set($nc(this->val$owner), rootLogger, $new($LogManager$RootLogger, $nc(this->val$owner))));
	this->val$owner->readPrimordialConfiguration();
	this->val$owner->addLogger(root);
	if (!$nc(root)->isLevelInitialized()) {
		root->setLevel($LogManager::defaultLevel);
	}
	$var($Logger, global, $Logger::global);
	this->val$owner->addLogger(global);
	return nullptr;
}

void LogManager$2::clinit$($Class* clazz) {
	$load($LogManager);
	LogManager$2::$assertionsDisabled = !$LogManager::class$->desiredAssertionStatus();
}

LogManager$2::LogManager$2() {
}

$Class* LogManager$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/util/logging/LogManager;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$2, this$0)},
		{"val$owner", "Ljava/util/logging/LogManager;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$2, val$owner)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(LogManager$2, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/LogManager;Ljava/util/logging/LogManager;)V", "()V", 0, $method(LogManager$2, init$, void, $LogManager*, $LogManager*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LogManager$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.LogManager",
		"ensureLogManagerInitialized",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.LogManager$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.LogManager"
	};
	$loadClass(LogManager$2, name, initialize, &classInfo$$, LogManager$2::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$2);
	});
	return class$;
}

$Class* LogManager$2::class$ = nullptr;

		} // logging
	} // util
} // java
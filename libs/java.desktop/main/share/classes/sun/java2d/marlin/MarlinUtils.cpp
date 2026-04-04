#include <sun/java2d/marlin/MarlinUtils.h>
#include <java/lang/ThreadGroup.h>
#include <sun/java2d/marlin/MarlinConst.h>
#include <sun/util/logging/PlatformLogger.h>
#include <jcpp.h>

#undef ENABLE_LOGS
#undef LOG
#undef USE_LOGGER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MarlinConst = ::sun::java2d::marlin::MarlinConst;
using $PlatformLogger = ::sun::util::logging::PlatformLogger;

namespace sun {
	namespace java2d {
		namespace marlin {

$PlatformLogger* MarlinUtils::LOG = nullptr;

void MarlinUtils::init$() {
}

void MarlinUtils::logInfo($String* msg) {
	$init(MarlinUtils);
	$init($MarlinConst);
	if ($MarlinConst::USE_LOGGER) {
		$nc(MarlinUtils::LOG)->info(msg);
	} else if ($MarlinConst::ENABLE_LOGS) {
		$nc($System::out)->print("INFO: "_s);
		$System::out->println(msg);
	}
}

void MarlinUtils::logException($String* msg, $Throwable* th) {
	$init(MarlinUtils);
	$init($MarlinConst);
	if ($MarlinConst::USE_LOGGER) {
		$nc(MarlinUtils::LOG)->warning(msg, th);
	} else if ($MarlinConst::ENABLE_LOGS) {
		$nc($System::out)->print("WARNING: "_s);
		$System::out->println(msg);
		$nc(th)->printStackTrace($System::err);
	}
}

$ThreadGroup* MarlinUtils::getRootThreadGroup() {
	$init(MarlinUtils);
	$useLocalObjectStack();
	$var($ThreadGroup, currentTG, $($Thread::currentThread())->getThreadGroup());
	$var($ThreadGroup, parentTG, $nc(currentTG)->getParent());
	while (parentTG != nullptr) {
		$assign(currentTG, parentTG);
		$assign(parentTG, currentTG->getParent());
	}
	return currentTG;
}

void MarlinUtils::clinit$($Class* clazz) {
	{
		$init($MarlinConst);
		if ($MarlinConst::USE_LOGGER) {
			$assignStatic(MarlinUtils::LOG, $PlatformLogger::getLogger("sun.java2d.marlin"_s));
		} else {
			$assignStatic(MarlinUtils::LOG, nullptr);
		}
	}
}

MarlinUtils::MarlinUtils() {
}

$Class* MarlinUtils::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"LOG", "Lsun/util/logging/PlatformLogger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MarlinUtils, LOG)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(MarlinUtils, init$, void)},
		{"getRootThreadGroup", "()Ljava/lang/ThreadGroup;", nullptr, $PUBLIC | $STATIC, $staticMethod(MarlinUtils, getRootThreadGroup, $ThreadGroup*)},
		{"logException", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MarlinUtils, logException, void, $String*, $Throwable*)},
		{"logInfo", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(MarlinUtils, logInfo, void, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"sun.java2d.marlin.MarlinUtils",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MarlinUtils, name, initialize, &classInfo$$, MarlinUtils::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MarlinUtils);
	});
	return class$;
}

$Class* MarlinUtils::class$ = nullptr;

		} // marlin
	} // java2d
} // sun
#include <java/util/logging/LogRecord$CallerFinder.h>
#include <java/io/Serializable.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/logging/LogRecord.h>
#include <java/util/stream/Stream.h>
#include <jdk/internal/logger/SurrogateLogger.h>
#include <jcpp.h>

#undef RETAIN_CLASS_REFERENCE
#undef WALKER

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $Stream = ::java::util::stream::Stream;
using $SurrogateLogger = ::jdk::internal::logger::SurrogateLogger;

namespace java {
	namespace util {
		namespace logging {

class LogRecord$CallerFinder$$Lambda$lambda$get$1 : public $Function {
	$class(LogRecord$CallerFinder$$Lambda$lambda$get$1, $NO_CLASS_INIT, $Function)
public:
	void init$(LogRecord$CallerFinder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* apply(Object$* s) override {
		 return $nc(inst$)->lambda$get$1($cast($Stream, s));
	}
	LogRecord$CallerFinder* inst$ = nullptr;
};
$Class* LogRecord$CallerFinder$$Lambda$lambda$get$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LogRecord$CallerFinder$$Lambda$lambda$get$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/LogRecord$CallerFinder;)V", nullptr, $PUBLIC, $method(LogRecord$CallerFinder$$Lambda$lambda$get$1, init$, void, LogRecord$CallerFinder*)},
		{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LogRecord$CallerFinder$$Lambda$lambda$get$1, apply, $Object*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.logging.LogRecord$CallerFinder$$Lambda$lambda$get$1",
		"java.lang.Object",
		"java.util.function.Function",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LogRecord$CallerFinder$$Lambda$lambda$get$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LogRecord$CallerFinder$$Lambda$lambda$get$1);
	});
	return class$;
}
$Class* LogRecord$CallerFinder$$Lambda$lambda$get$1::class$ = nullptr;

class LogRecord$CallerFinder$$Lambda$lambda$static$0$1 : public $PrivilegedAction {
	$class(LogRecord$CallerFinder$$Lambda$lambda$static$0$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return LogRecord$CallerFinder::lambda$static$0();
	}
};
$Class* LogRecord$CallerFinder$$Lambda$lambda$static$0$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LogRecord$CallerFinder$$Lambda$lambda$static$0$1, init$, void)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LogRecord$CallerFinder$$Lambda$lambda$static$0$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"java.util.logging.LogRecord$CallerFinder$$Lambda$lambda$static$0$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$
	};
	$loadClass(LogRecord$CallerFinder$$Lambda$lambda$static$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LogRecord$CallerFinder$$Lambda$lambda$static$0$1);
	});
	return class$;
}
$Class* LogRecord$CallerFinder$$Lambda$lambda$static$0$1::class$ = nullptr;

$StackWalker* LogRecord$CallerFinder::WALKER = nullptr;

void LogRecord$CallerFinder::init$() {
	this->lookingForLogger = true;
}

$Optional* LogRecord$CallerFinder::get() {
	$beforeCallerSensitive();
	return $cast($Optional, $nc(LogRecord$CallerFinder::WALKER)->walk($$new(LogRecord$CallerFinder$$Lambda$lambda$get$1, this)));
}

bool LogRecord$CallerFinder::test($StackWalker$StackFrame* t) {
	$var($String, cname, $nc(t)->getClassName());
	if (this->lookingForLogger) {
		this->lookingForLogger = !isLoggerImplFrame(cname);
		return false;
	}
	return !$SurrogateLogger::isFilteredFrame(t);
}

bool LogRecord$CallerFinder::isLoggerImplFrame($String* cname) {
	bool var$0 = $nc(cname)->equals("java.util.logging.Logger"_s);
	return (var$0 || cname->startsWith("sun.util.logging.PlatformLogger"_s));
}

bool LogRecord$CallerFinder::test(Object$* t) {
	return this->test($cast($StackWalker$StackFrame, t));
}

$Optional* LogRecord$CallerFinder::lambda$get$1($Stream* s) {
	return $$nc($nc(s)->filter(this))->findFirst();
}

$StackWalker* LogRecord$CallerFinder::lambda$static$0() {
	$init(LogRecord$CallerFinder);
	$init($StackWalker$Option);
	return $StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE);
}

void LogRecord$CallerFinder::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	{
		$var($PrivilegedAction, action, $new(LogRecord$CallerFinder$$Lambda$lambda$static$0$1));
		$assignStatic(LogRecord$CallerFinder::WALKER, $cast($StackWalker, $AccessController::doPrivileged(action)));
	}
}

LogRecord$CallerFinder::LogRecord$CallerFinder() {
}

$Class* LogRecord$CallerFinder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("java.util.logging.LogRecord$CallerFinder$$Lambda$lambda$get$1")) {
			return LogRecord$CallerFinder$$Lambda$lambda$get$1::load$(name, initialize);
		}
		if (name->equals("java.util.logging.LogRecord$CallerFinder$$Lambda$lambda$static$0$1")) {
			return LogRecord$CallerFinder$$Lambda$lambda$static$0$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"WALKER", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LogRecord$CallerFinder, WALKER)},
		{"lookingForLogger", "Z", nullptr, $PRIVATE, $field(LogRecord$CallerFinder, lookingForLogger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LogRecord$CallerFinder, init$, void)},
		{"get", "()Ljava/util/Optional;", "()Ljava/util/Optional<Ljava/lang/StackWalker$StackFrame;>;", 0, $method(LogRecord$CallerFinder, get, $Optional*)},
		{"isLoggerImplFrame", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(LogRecord$CallerFinder, isLoggerImplFrame, bool, $String*)},
		{"lambda$get$1", "(Ljava/util/stream/Stream;)Ljava/util/Optional;", nullptr, $PRIVATE | $SYNTHETIC, $method(LogRecord$CallerFinder, lambda$get$1, $Optional*, $Stream*)},
		{"lambda$static$0", "()Ljava/lang/StackWalker;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LogRecord$CallerFinder, lambda$static$0, $StackWalker*)},
		{"test", "(Ljava/lang/StackWalker$StackFrame;)Z", nullptr, $PUBLIC, $method(LogRecord$CallerFinder, test, bool, $StackWalker$StackFrame*)},
		{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(LogRecord$CallerFinder, test, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogRecord$CallerFinder", "java.util.logging.LogRecord", "CallerFinder", $STATIC | $FINAL},
		{"java.lang.StackWalker$StackFrame", "java.lang.StackWalker", "StackFrame", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.logging.LogRecord$CallerFinder",
		"java.lang.Object",
		"java.util.function.Predicate",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/function/Predicate<Ljava/lang/StackWalker$StackFrame;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.LogRecord"
	};
	$loadClass(LogRecord$CallerFinder, name, initialize, &classInfo$$, LogRecord$CallerFinder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LogRecord$CallerFinder);
	});
	return class$;
}

$Class* LogRecord$CallerFinder::class$ = nullptr;

		} // logging
	} // util
} // java
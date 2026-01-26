#include <com/sun/org/slf4j/internal/Logger.h>

#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
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
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef FINE
#undef RETAIN_CLASS_REFERENCE
#undef SEVERE
#undef WALKER
#undef WARNING

using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {

class Logger$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(Logger$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Logger::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Logger$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Logger$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Logger$$Lambda$lambda$static$0, init$, void)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Logger$$Lambda$lambda$static$0, run, $Object*)},
	{}
};
$ClassInfo Logger$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.slf4j.internal.Logger$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Logger$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(Logger$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Logger$$Lambda$lambda$static$0::class$ = nullptr;

class Logger$$Lambda$lambda$log0$1$1 : public $Function {
	$class(Logger$$Lambda$lambda$log0$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* f) override {
		 return $of(Logger::lambda$log0$1($cast($Stream, f)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Logger$$Lambda$lambda$log0$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Logger$$Lambda$lambda$log0$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Logger$$Lambda$lambda$log0$1$1, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Logger$$Lambda$lambda$log0$1$1, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Logger$$Lambda$lambda$log0$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.slf4j.internal.Logger$$Lambda$lambda$log0$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Logger$$Lambda$lambda$log0$1$1::load$($String* name, bool initialize) {
	$loadClass(Logger$$Lambda$lambda$log0$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Logger$$Lambda$lambda$log0$1$1::class$ = nullptr;

$FieldInfo _Logger_FieldInfo_[] = {
	{"WALKER", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Logger, WALKER)},
	{"impl", "Ljava/util/logging/Logger;", nullptr, $PRIVATE | $FINAL, $field(Logger, impl)},
	{}
};

$MethodInfo _Logger_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(Logger, init$, void, $String*)},
	{"addIndex", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Logger, addIndex, $String*, $String*)},
	{"debug", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Logger, debug, void, $String*)},
	{"debug", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Logger, debug, void, $String*, $Throwable*)},
	{"debug", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(Logger, debug, void, $String*, $ObjectArray*)},
	{"error", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Logger, error, void, $String*)},
	{"error", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Logger, error, void, $String*, $Throwable*)},
	{"error", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(Logger, error, void, $String*, $ObjectArray*)},
	{"isDebugEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(Logger, isDebugEnabled, bool)},
	{"isTraceEnabled", "()Z", nullptr, $PUBLIC, $virtualMethod(Logger, isTraceEnabled, bool)},
	{"lambda$log0$1", "(Ljava/util/stream/Stream;)Ljava/util/Optional;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Logger, lambda$log0$1, $Optional*, $Stream*)},
	{"lambda$static$0", "()Ljava/lang/StackWalker;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Logger, lambda$static$0, $StackWalker*)},
	{"log0", "(Ljava/util/logging/Level;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(Logger, log0, void, $Level*, $String*)},
	{"log0", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(Logger, log0, void, $Level*, $String*, $Throwable*)},
	{"log0", "(Ljava/util/logging/Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $TRANSIENT, $method(Logger, log0, void, $Level*, $String*, $ObjectArray*)},
	{"trace", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Logger, trace, void, $String*)},
	{"warn", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Logger, warn, void, $String*)},
	{"warn", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Logger, warn, void, $String*, $Throwable*)},
	{"warn", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $virtualMethod(Logger, warn, void, $String*, $ObjectArray*)},
	{}
};

$ClassInfo _Logger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.slf4j.internal.Logger",
	"java.lang.Object",
	nullptr,
	_Logger_FieldInfo_,
	_Logger_MethodInfo_
};

$Object* allocate$Logger($Class* clazz) {
	return $of($alloc(Logger));
}

$StackWalker* Logger::WALKER = nullptr;

void Logger::init$($String* name) {
	$beforeCallerSensitive();
	$set(this, impl, $Logger::getLogger(name));
}

bool Logger::isDebugEnabled() {
	$init($Level);
	return $nc(this->impl)->isLoggable($Level::FINE);
}

bool Logger::isTraceEnabled() {
	$init($Level);
	return $nc(this->impl)->isLoggable($Level::FINE);
}

void Logger::debug($String* s) {
	$init($Level);
	log0($Level::FINE, s);
}

void Logger::debug($String* s, $Throwable* e) {
	$init($Level);
	log0($Level::FINE, s, e);
}

void Logger::debug($String* s, $ObjectArray* o) {
	$init($Level);
	log0($Level::FINE, s, o);
}

void Logger::trace($String* s) {
	$init($Level);
	log0($Level::FINE, s);
}

void Logger::error($String* s) {
	$init($Level);
	log0($Level::SEVERE, s);
}

void Logger::error($String* s, $Throwable* e) {
	$init($Level);
	log0($Level::SEVERE, s, e);
}

void Logger::error($String* s, $ObjectArray* o) {
	$init($Level);
	log0($Level::SEVERE, s, o);
}

void Logger::warn($String* s) {
	$init($Level);
	log0($Level::WARNING, s);
}

void Logger::warn($String* s, $Throwable* e) {
	$init($Level);
	log0($Level::WARNING, s, e);
}

void Logger::warn($String* s, $ObjectArray* o) {
	$init($Level);
	log0($Level::WARNING, s, o);
}

void Logger::log0($Level* level, $String* s) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(this->impl)->isLoggable(level)) {
		$var($StackWalker$StackFrame, sf, $cast($StackWalker$StackFrame, $nc(($cast($Optional, $($nc(Logger::WALKER)->walk(static_cast<$Function*>($$new(Logger$$Lambda$lambda$log0$1$1)))))))->get()));
		$init($Level);
		$var($Level, var$0, $Level::FINE);
		$var($String, var$1, $nc(sf)->getClassName());
		$nc(this->impl)->logp(var$0, var$1, $(sf->getMethodName()), s);
	}
}

void Logger::log0($Level* level, $String* s, $Throwable* e) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(this->impl)->isLoggable(level)) {
		$var($StackWalker$StackFrame, sf, $cast($StackWalker$StackFrame, $nc(($cast($Optional, $($nc(Logger::WALKER)->walk(static_cast<$Function*>($$new(Logger$$Lambda$lambda$log0$1$1)))))))->get()));
		$init($Level);
		$var($Level, var$0, $Level::FINE);
		$var($String, var$1, $nc(sf)->getClassName());
		$nc(this->impl)->logp(var$0, var$1, $(sf->getMethodName()), s, e);
	}
}

void Logger::log0($Level* level, $String* s, $ObjectArray* o) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	if ($nc(this->impl)->isLoggable(level)) {
		$var($StackWalker$StackFrame, sf, $cast($StackWalker$StackFrame, $nc(($cast($Optional, $($nc(Logger::WALKER)->walk(static_cast<$Function*>($$new(Logger$$Lambda$lambda$log0$1$1)))))))->get()));
		$init($Level);
		$var($Level, var$0, $Level::FINE);
		$var($String, var$1, $nc(sf)->getClassName());
		$var($String, var$2, sf->getMethodName());
		$nc(this->impl)->logp(var$0, var$1, var$2, $(addIndex(s)), o);
	}
}

$String* Logger::addIndex($String* s) {
	$init(Logger);
	int32_t start = 0;
	int32_t index = 0;
	$var($StringBuilder, sb, $new($StringBuilder));
	while (true) {
		int32_t pos = $nc(s)->indexOf("{}"_s, start);
		if (pos < 0) {
			break;
		}
		sb->append(static_cast<$CharSequence*>(s), start, pos + 1)->append(index++);
		start = pos + 1;
	}
	if (index == 0) {
		return s;
	} else {
		sb->append(static_cast<$CharSequence*>(s), start, $nc(s)->length());
		return sb->toString();
	}
}

$Optional* Logger::lambda$log0$1($Stream* f) {
	$init(Logger);
	return $nc($($nc(f)->skip(2)))->findFirst();
}

$StackWalker* Logger::lambda$static$0() {
	$init(Logger);
	$init($StackWalker$Option);
	return $StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE);
}

void clinit$Logger($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(Logger::WALKER, $cast($StackWalker, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Logger$$Lambda$lambda$static$0)))));
}

Logger::Logger() {
}

$Class* Logger::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Logger$$Lambda$lambda$static$0::classInfo$.name)) {
			return Logger$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals(Logger$$Lambda$lambda$log0$1$1::classInfo$.name)) {
			return Logger$$Lambda$lambda$log0$1$1::load$(name, initialize);
		}
	}
	$loadClass(Logger, name, initialize, &_Logger_ClassInfo_, clinit$Logger, allocate$Logger);
	return class$;
}

$Class* Logger::class$ = nullptr;

				} // internal
			} // slf4j
		} // org
	} // sun
} // com
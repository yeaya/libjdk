#include <sun/rmi/runtime/Log.h>

#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/rmi/server/LogStream.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Optional.h>
#include <java/util/Set.h>
#include <java/util/function/Function.h>
#include <java/util/logging/Level.h>
#include <java/util/stream/Stream.h>
#include <sun/rmi/runtime/Log$LogFactory.h>
#include <sun/rmi/runtime/Log$LogStreamLogFactory.h>
#include <sun/rmi/runtime/Log$LoggerLogFactory.h>
#include <jcpp.h>

#undef BRIEF
#undef FINE
#undef FINER
#undef FINEST
#undef OFF
#undef SILENT
#undef VERBOSE
#undef WALKER

using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $LogStream = ::java::rmi::server::LogStream;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Optional = ::java::util::Optional;
using $Set = ::java::util::Set;
using $Function = ::java::util::function::Function;
using $Level = ::java::util::logging::Level;
using $Stream = ::java::util::stream::Stream;
using $Log$LogFactory = ::sun::rmi::runtime::Log$LogFactory;
using $Log$LogStreamLogFactory = ::sun::rmi::runtime::Log$LogStreamLogFactory;
using $Log$LoggerLogFactory = ::sun::rmi::runtime::Log$LoggerLogFactory;

namespace sun {
	namespace rmi {
		namespace runtime {

class Log$$Lambda$lambda$getSource$1 : public $Function {
	$class(Log$$Lambda$lambda$getSource$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* s) override {
		 return $of(Log::lambda$getSource$1($cast($Stream, s)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Log$$Lambda$lambda$getSource$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Log$$Lambda$lambda$getSource$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Log$$Lambda$lambda$getSource$1, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Log$$Lambda$lambda$getSource$1, apply, $Object*, Object$*)},
	{}
};
$ClassInfo Log$$Lambda$lambda$getSource$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.rmi.runtime.Log$$Lambda$lambda$getSource$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Log$$Lambda$lambda$getSource$1::load$($String* name, bool initialize) {
	$loadClass(Log$$Lambda$lambda$getSource$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Log$$Lambda$lambda$getSource$1::class$ = nullptr;

class Log$$Lambda$lambda$static$0$1 : public $PrivilegedAction {
	$class(Log$$Lambda$lambda$static$0$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Log::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Log$$Lambda$lambda$static$0$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Log$$Lambda$lambda$static$0$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Log$$Lambda$lambda$static$0$1, init$, void)},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Log$$Lambda$lambda$static$0$1, run, $Object*)},
	{}
};
$ClassInfo Log$$Lambda$lambda$static$0$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"sun.rmi.runtime.Log$$Lambda$lambda$static$0$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Log$$Lambda$lambda$static$0$1::load$($String* name, bool initialize) {
	$loadClass(Log$$Lambda$lambda$static$0$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Log$$Lambda$lambda$static$0$1::class$ = nullptr;

$FieldInfo _Log_FieldInfo_[] = {
	{"BRIEF", "Ljava/util/logging/Level;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Log, BRIEF)},
	{"VERBOSE", "Ljava/util/logging/Level;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Log, VERBOSE)},
	{"WALKER", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Log, WALKER)},
	{"logFactory", "Lsun/rmi/runtime/Log$LogFactory;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Log, logFactory)},
	{}
};

$MethodInfo _Log_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Log, init$, void)},
	{"getLog", "(Ljava/lang/String;Ljava/lang/String;I)Lsun/rmi/runtime/Log;", nullptr, $PUBLIC | $STATIC, $staticMethod(Log, getLog, Log*, $String*, $String*, int32_t)},
	{"getLog", "(Ljava/lang/String;Ljava/lang/String;Z)Lsun/rmi/runtime/Log;", nullptr, $PUBLIC | $STATIC, $staticMethod(Log, getLog, Log*, $String*, $String*, bool)},
	{"getPrintStream", "()Ljava/io/PrintStream;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Log, getPrintStream, $PrintStream*)},
	{"getSource", "()Ljava/lang/StackWalker$StackFrame;", nullptr, $PRIVATE | $STATIC, $staticMethod(Log, getSource, $StackWalker$StackFrame*)},
	{"isLoggable", "(Ljava/util/logging/Level;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Log, isLoggable, bool, $Level*)},
	{"lambda$getSource$1", "(Ljava/util/stream/Stream;)Ljava/lang/StackWalker$StackFrame;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Log, lambda$getSource$1, $StackWalker$StackFrame*, $Stream*)},
	{"lambda$static$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Log, lambda$static$0, $Boolean*)},
	{"log", "(Ljava/util/logging/Level;Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Log, log, void, $Level*, $String*)},
	{"log", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Log, log, void, $Level*, $String*, $Throwable*)},
	{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Log, setOutputStream, void, $OutputStream*)},
	{}
};

$InnerClassInfo _Log_InnerClassesInfo_[] = {
	{"sun.rmi.runtime.Log$LogStreamLog", "sun.rmi.runtime.Log", "LogStreamLog", $PRIVATE | $STATIC},
	{"sun.rmi.runtime.Log$LogStreamLogFactory", "sun.rmi.runtime.Log", "LogStreamLogFactory", $PRIVATE | $STATIC},
	{"sun.rmi.runtime.Log$LoggerPrintStream", "sun.rmi.runtime.Log", "LoggerPrintStream", $PRIVATE | $STATIC},
	{"sun.rmi.runtime.Log$InternalStreamHandler", "sun.rmi.runtime.Log", "InternalStreamHandler", $PRIVATE | $STATIC},
	{"sun.rmi.runtime.Log$LoggerLog", "sun.rmi.runtime.Log", "LoggerLog", $PRIVATE | $STATIC},
	{"sun.rmi.runtime.Log$LoggerLogFactory", "sun.rmi.runtime.Log", "LoggerLogFactory", $PRIVATE | $STATIC},
	{"sun.rmi.runtime.Log$LogFactory", "sun.rmi.runtime.Log", "LogFactory", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _Log_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"sun.rmi.runtime.Log",
	"java.lang.Object",
	nullptr,
	_Log_FieldInfo_,
	_Log_MethodInfo_,
	nullptr,
	nullptr,
	_Log_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.rmi.runtime.Log$LogStreamLog,sun.rmi.runtime.Log$LogStreamLogFactory,sun.rmi.runtime.Log$LoggerPrintStream,sun.rmi.runtime.Log$InternalStreamHandler,sun.rmi.runtime.Log$LoggerLog,sun.rmi.runtime.Log$LoggerLog$2,sun.rmi.runtime.Log$LoggerLog$1,sun.rmi.runtime.Log$LoggerLogFactory,sun.rmi.runtime.Log$LogFactory"
};

$Object* allocate$Log($Class* clazz) {
	return $of($alloc(Log));
}

$Level* Log::BRIEF = nullptr;
$Level* Log::VERBOSE = nullptr;
$StackWalker* Log::WALKER = nullptr;
$Log$LogFactory* Log::logFactory = nullptr;

void Log::init$() {
}

Log* Log::getLog($String* loggerName, $String* oldLogName, int32_t override$) {
	$init(Log);
	$var($Level, level, nullptr);
	if (override$ < 0) {
		$assign(level, nullptr);
	} else if (override$ == $LogStream::SILENT) {
		$init($Level);
		$assign(level, $Level::OFF);
	} else if ((override$ > $LogStream::SILENT) && (override$ <= $LogStream::BRIEF)) {
		$assign(level, Log::BRIEF);
	} else if ((override$ > $LogStream::BRIEF) && (override$ <= $LogStream::VERBOSE)) {
		$assign(level, Log::VERBOSE);
	} else {
		$init($Level);
		$assign(level, $Level::FINEST);
	}
	return $nc(Log::logFactory)->createLog(loggerName, oldLogName, level);
}

Log* Log::getLog($String* loggerName, $String* oldLogName, bool override$) {
	$init(Log);
	$var($Level, level, override$ ? Log::VERBOSE : ($Level*)nullptr);
	return $nc(Log::logFactory)->createLog(loggerName, oldLogName, level);
}

$StackWalker$StackFrame* Log::getSource() {
	$init(Log);
	$beforeCallerSensitive();
	return $cast($StackWalker$StackFrame, $nc(Log::WALKER)->walk(static_cast<$Function*>($$new(Log$$Lambda$lambda$getSource$1))));
}

$StackWalker$StackFrame* Log::lambda$getSource$1($Stream* s) {
	$init(Log);
	$useLocalCurrentObjectStackCache();
	return $cast($StackWalker$StackFrame, $nc($($nc($($nc(s)->skip(3)))->findFirst()))->get());
}

$Boolean* Log::lambda$static$0() {
	$init(Log);
	return $Boolean::valueOf($Boolean::getBoolean("sun.rmi.log.useOld"_s));
}

void clinit$Log($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$init($Level);
	$assignStatic(Log::BRIEF, $Level::FINE);
	$assignStatic(Log::VERBOSE, $Level::FINER);
	$assignStatic(Log::WALKER, $StackWalker::getInstance($($Set::of()), 4));
	{
		bool useOld = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Log$$Lambda$lambda$static$0$1)))))))->booleanValue();
		$assignStatic(Log::logFactory, useOld ? static_cast<$Log$LogFactory*>($new($Log$LogStreamLogFactory)) : static_cast<$Log$LogFactory*>($new($Log$LoggerLogFactory)));
	}
}

Log::Log() {
}

$Class* Log::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Log$$Lambda$lambda$getSource$1::classInfo$.name)) {
			return Log$$Lambda$lambda$getSource$1::load$(name, initialize);
		}
		if (name->equals(Log$$Lambda$lambda$static$0$1::classInfo$.name)) {
			return Log$$Lambda$lambda$static$0$1::load$(name, initialize);
		}
	}
	$loadClass(Log, name, initialize, &_Log_ClassInfo_, clinit$Log, allocate$Log);
	return class$;
}

$Class* Log::class$ = nullptr;

		} // runtime
	} // rmi
} // sun
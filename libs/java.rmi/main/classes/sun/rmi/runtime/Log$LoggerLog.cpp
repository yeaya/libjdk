#include <sun/rmi/runtime/Log$LoggerLog.h>
#include <java/io/OutputStream.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/security/AccessController.h>
#include <java/util/logging/Handler.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <sun/rmi/runtime/Log$InternalStreamHandler.h>
#include <sun/rmi/runtime/Log$LoggerLog$1.h>
#include <sun/rmi/runtime/Log$LoggerLog$2.h>
#include <sun/rmi/runtime/Log$LoggerPrintStream.h>
#include <sun/rmi/runtime/Log.h>
#include <jcpp.h>

#undef VERBOSE

using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $AccessController = ::java::security::AccessController;
using $Handler = ::java::util::logging::Handler;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $Log = ::sun::rmi::runtime::Log;
using $Log$InternalStreamHandler = ::sun::rmi::runtime::Log$InternalStreamHandler;
using $Log$LoggerLog$1 = ::sun::rmi::runtime::Log$LoggerLog$1;
using $Log$LoggerLog$2 = ::sun::rmi::runtime::Log$LoggerLog$2;
using $Log$LoggerPrintStream = ::sun::rmi::runtime::Log$LoggerPrintStream;

namespace sun {
	namespace rmi {
		namespace runtime {

$Handler* Log$LoggerLog::alternateConsole = nullptr;

void Log$LoggerLog::init$($Logger* logger, $Level* level) {
	$beforeCallerSensitive();
	$Log::init$();
	$set(this, copyHandler, nullptr);
	$set(this, logger, logger);
	if (level != nullptr) {
		$AccessController::doPrivileged($$new($Log$LoggerLog$2, this, logger, level));
	}
}

bool Log$LoggerLog::isLoggable($Level* level) {
	return $nc(this->logger)->isLoggable(level);
}

void Log$LoggerLog::log($Level* level, $String* message) {
	$useLocalObjectStack();
	if (isLoggable(level)) {
		$var($StackWalker$StackFrame, sourceFrame, $Log::getSource());
		$var($String, var$0, $nc(sourceFrame)->getClassName());
		$var($String, var$1, sourceFrame->getMethodName());
		$nc(this->logger)->logp(level, var$0, var$1, $$str({$($($Thread::currentThread())->getName()), ": "_s, message}));
	}
}

void Log$LoggerLog::log($Level* level, $String* message, $Throwable* thrown) {
	$useLocalObjectStack();
	if (isLoggable(level)) {
		$var($StackWalker$StackFrame, sourceFrame, $Log::getSource());
		$var($String, var$0, $nc(sourceFrame)->getClassName());
		$var($String, var$1, sourceFrame->getMethodName());
		$nc(this->logger)->logp(level, var$0, var$1, $$str({$($($Thread::currentThread())->getName()), ": "_s, message}), thrown);
	}
}

$String* Log$LoggerLog::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append($($nc(this->logger)->toString()));
	var$0->append(", level: "_s);
	var$0->append($(this->logger->getLevel()));
	var$0->append(", name: "_s);
	var$0->append($(this->logger->getName()));
	return $str(var$0);
}

void Log$LoggerLog::setOutputStream($OutputStream* out) {
	$synchronized(this) {
		if (out != nullptr) {
			$init($Log);
			if (!$nc(this->logger)->isLoggable($Log::VERBOSE)) {
				this->logger->setLevel($Log::VERBOSE);
			}
			$set(this, copyHandler, $new($Log$InternalStreamHandler, out));
			this->copyHandler->setLevel($Log::VERBOSE);
			this->logger->addHandler(this->copyHandler);
		} else {
			if (this->copyHandler != nullptr) {
				$nc(this->logger)->removeHandler(this->copyHandler);
			}
			$set(this, copyHandler, nullptr);
		}
	}
}

$PrintStream* Log$LoggerLog::getPrintStream() {
	$synchronized(this) {
		if (this->loggerSandwich == nullptr) {
			$set(this, loggerSandwich, $new($Log$LoggerPrintStream, this->logger));
		}
		return this->loggerSandwich;
	}
}

void Log$LoggerLog::clinit$($Class* clazz) {
	$beforeCallerSensitive();
	$assignStatic(Log$LoggerLog::alternateConsole, $cast($Handler, $AccessController::doPrivileged($$new($Log$LoggerLog$1))));
}

Log$LoggerLog::Log$LoggerLog() {
}

$Class* Log$LoggerLog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"alternateConsole", "Ljava/util/logging/Handler;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Log$LoggerLog, alternateConsole)},
		{"copyHandler", "Lsun/rmi/runtime/Log$InternalStreamHandler;", nullptr, $PRIVATE, $field(Log$LoggerLog, copyHandler)},
		{"logger", "Ljava/util/logging/Logger;", nullptr, $PRIVATE | $FINAL, $field(Log$LoggerLog, logger)},
		{"loggerSandwich", "Lsun/rmi/runtime/Log$LoggerPrintStream;", nullptr, $PRIVATE, $field(Log$LoggerLog, loggerSandwich)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/Logger;Ljava/util/logging/Level;)V", nullptr, $PRIVATE, $method(Log$LoggerLog, init$, void, $Logger*, $Level*)},
		{"getPrintStream", "()Ljava/io/PrintStream;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Log$LoggerLog, getPrintStream, $PrintStream*)},
		{"isLoggable", "(Ljava/util/logging/Level;)Z", nullptr, $PUBLIC, $virtualMethod(Log$LoggerLog, isLoggable, bool, $Level*)},
		{"log", "(Ljava/util/logging/Level;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Log$LoggerLog, log, void, $Level*, $String*)},
		{"log", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Log$LoggerLog, log, void, $Level*, $String*, $Throwable*)},
		{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Log$LoggerLog, setOutputStream, void, $OutputStream*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(Log$LoggerLog, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.Log$LoggerLog", "sun.rmi.runtime.Log", "LoggerLog", $PRIVATE | $STATIC},
		{"sun.rmi.runtime.Log$LoggerLog$2", nullptr, nullptr, 0},
		{"sun.rmi.runtime.Log$LoggerLog$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.runtime.Log$LoggerLog",
		"sun.rmi.runtime.Log",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.runtime.Log"
	};
	$loadClass(Log$LoggerLog, name, initialize, &classInfo$$, Log$LoggerLog::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Log$LoggerLog);
	});
	return class$;
}

$Class* Log$LoggerLog::class$ = nullptr;

		} // runtime
	} // rmi
} // sun
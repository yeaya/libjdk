#include <sun/rmi/runtime/Log$LogStreamLog.h>
#include <java/io/OutputStream.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/rmi/server/LogStream.h>
#include <java/util/logging/Level.h>
#include <sun/rmi/runtime/Log.h>
#include <jcpp.h>

#undef OFF
#undef VERBOSE

using $OutputStream = ::java::io::OutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $LogStream = ::java::rmi::server::LogStream;
using $Level = ::java::util::logging::Level;
using $Log = ::sun::rmi::runtime::Log;

namespace sun {
	namespace rmi {
		namespace runtime {

void Log$LogStreamLog::init$($LogStream* stream, $Level* level) {
	$Log::init$();
	$init($Level);
	this->levelValue = $nc($Level::OFF)->intValue();
	if ((stream != nullptr) && (level != nullptr)) {
		this->levelValue = level->intValue();
	}
	$set(this, stream, stream);
}

bool Log$LogStreamLog::isLoggable($Level* level) {
	$synchronized(this) {
		return ($nc(level)->intValue() >= this->levelValue);
	}
}

void Log$LogStreamLog::log($Level* messageLevel, $String* message) {
	$useLocalObjectStack();
	if (isLoggable(messageLevel)) {
		$var($StackWalker$StackFrame, sourceFrame, $Log::getSource());
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append($(unqualifiedName($($nc(sourceFrame)->getClassName()))));
		var$0->append("."_s);
		var$0->append($(sourceFrame->getMethodName()));
		var$0->append(": "_s);
		var$0->append(message);
		$nc(this->stream)->println($$str(var$0));
	}
}

void Log$LogStreamLog::log($Level* level, $String* message, $Throwable* thrown) {
	$useLocalObjectStack();
	if (isLoggable(level)) {
		$synchronized(this->stream) {
			$var($StackWalker$StackFrame, sourceFrame, $Log::getSource());
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append($(unqualifiedName($($nc(sourceFrame)->getClassName()))));
			var$0->append("."_s);
			var$0->append($(sourceFrame->getMethodName()));
			var$0->append(": "_s);
			var$0->append(message);
			this->stream->println($$str(var$0));
			$nc(thrown)->printStackTrace(this->stream);
		}
	}
}

$PrintStream* Log$LogStreamLog::getPrintStream() {
	return this->stream;
}

void Log$LogStreamLog::setOutputStream($OutputStream* out) {
	$synchronized(this) {
		if (out != nullptr) {
			$init($Log);
			if ($nc($Log::VERBOSE)->intValue() < this->levelValue) {
				this->levelValue = $Log::VERBOSE->intValue();
			}
			$nc(this->stream)->setOutputStream(out);
		} else {
			$init($Level);
			this->levelValue = $nc($Level::OFF)->intValue();
		}
	}
}

$String* Log$LogStreamLog::unqualifiedName($String* name$renamed) {
	$init(Log$LogStreamLog);
	$var($String, name, name$renamed);
	int32_t lastDot = $nc(name)->lastIndexOf(u'.');
	if (lastDot >= 0) {
		$assign(name, name->substring(lastDot + 1));
	}
	$assign(name, name->replace(u'$', u'.'));
	return name;
}

Log$LogStreamLog::Log$LogStreamLog() {
}

$Class* Log$LogStreamLog::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"stream", "Ljava/rmi/server/LogStream;", nullptr, $PRIVATE | $FINAL, $field(Log$LogStreamLog, stream)},
		{"levelValue", "I", nullptr, $PRIVATE, $field(Log$LogStreamLog, levelValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/rmi/server/LogStream;Ljava/util/logging/Level;)V", nullptr, $PRIVATE, $method(Log$LogStreamLog, init$, void, $LogStream*, $Level*)},
		{"getPrintStream", "()Ljava/io/PrintStream;", nullptr, $PUBLIC, $virtualMethod(Log$LogStreamLog, getPrintStream, $PrintStream*)},
		{"isLoggable", "(Ljava/util/logging/Level;)Z", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Log$LogStreamLog, isLoggable, bool, $Level*)},
		{"log", "(Ljava/util/logging/Level;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(Log$LogStreamLog, log, void, $Level*, $String*)},
		{"log", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(Log$LogStreamLog, log, void, $Level*, $String*, $Throwable*)},
		{"setOutputStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Log$LogStreamLog, setOutputStream, void, $OutputStream*)},
		{"unqualifiedName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(Log$LogStreamLog, unqualifiedName, $String*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.Log$LogStreamLog", "sun.rmi.runtime.Log", "LogStreamLog", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.runtime.Log$LogStreamLog",
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
	$loadClass(Log$LogStreamLog, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Log$LogStreamLog);
	});
	return class$;
}

$Class* Log$LogStreamLog::class$ = nullptr;

		} // runtime
	} // rmi
} // sun
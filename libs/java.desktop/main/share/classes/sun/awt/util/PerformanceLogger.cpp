#include <sun/awt/util/PerformanceLogger.h>
#include <java/io/OutputStream.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/security/AccessController.h>
#include <java/util/Vector.h>
#include <sun/awt/util/PerformanceLogger$1.h>
#include <sun/awt/util/PerformanceLogger$TimeData.h>
#include <sun/security/action/GetPropertyAction.h>
#include <jcpp.h>

#undef LAST_RESERVED
#undef START_INDEX

using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $Vector = ::java::util::Vector;
using $PerformanceLogger$1 = ::sun::awt::util::PerformanceLogger$1;
using $PerformanceLogger$TimeData = ::sun::awt::util::PerformanceLogger$TimeData;
using $GetPropertyAction = ::sun::security::action::GetPropertyAction;

namespace sun {
	namespace awt {
		namespace util {

bool PerformanceLogger::perfLoggingOn = false;
bool PerformanceLogger::useNanoTime = false;
$Vector* PerformanceLogger::times = nullptr;
$String* PerformanceLogger::logFileName = nullptr;
$Writer* PerformanceLogger::logWriter = nullptr;
int64_t PerformanceLogger::baseTime = 0;

void PerformanceLogger::init$() {
}

bool PerformanceLogger::loggingEnabled() {
	$init(PerformanceLogger);
	return PerformanceLogger::perfLoggingOn;
}

int64_t PerformanceLogger::getCurrentTime() {
	$init(PerformanceLogger);
	if (PerformanceLogger::useNanoTime) {
		return $System::nanoTime();
	} else {
		return $System::currentTimeMillis();
	}
}

void PerformanceLogger::setStartTime($String* message) {
	$init(PerformanceLogger);
	if (loggingEnabled()) {
		int64_t nowTime = getCurrentTime();
		setStartTime(message, nowTime);
	}
}

void PerformanceLogger::setBaseTime(int64_t time) {
	$init(PerformanceLogger);
	if (loggingEnabled()) {
		PerformanceLogger::baseTime = time;
	}
}

void PerformanceLogger::setStartTime($String* message, int64_t time) {
	$init(PerformanceLogger);
	if (loggingEnabled()) {
		$nc(PerformanceLogger::times)->set(PerformanceLogger::START_INDEX, $$new($PerformanceLogger$TimeData, message, time));
	}
}

int64_t PerformanceLogger::getStartTime() {
	$init(PerformanceLogger);
	if (loggingEnabled()) {
		return $$sure($PerformanceLogger$TimeData, $nc(PerformanceLogger::times)->get(PerformanceLogger::START_INDEX))->getTime();
	} else {
		return 0;
	}
}

int32_t PerformanceLogger::setTime($String* message) {
	$init(PerformanceLogger);
	if (loggingEnabled()) {
		int64_t nowTime = getCurrentTime();
		return setTime(message, nowTime);
	} else {
		return 0;
	}
}

int32_t PerformanceLogger::setTime($String* message, int64_t time) {
	$init(PerformanceLogger);
	if (loggingEnabled()) {
		$synchronized(PerformanceLogger::times) {
			PerformanceLogger::times->add($$new($PerformanceLogger$TimeData, message, time));
			return (PerformanceLogger::times->size() - 1);
		}
	} else {
		return 0;
	}
}

int64_t PerformanceLogger::getTimeAtIndex(int32_t index) {
	$init(PerformanceLogger);
	if (loggingEnabled()) {
		return $$sure($PerformanceLogger$TimeData, $nc(PerformanceLogger::times)->get(index))->getTime();
	} else {
		return 0;
	}
}

$String* PerformanceLogger::getMessageAtIndex(int32_t index) {
	$init(PerformanceLogger);
	if (loggingEnabled()) {
		return $$sure($PerformanceLogger$TimeData, $nc(PerformanceLogger::times)->get(index))->getMessage();
	} else {
		return nullptr;
	}
}

void PerformanceLogger::outputLog($Writer* writer) {
	$init(PerformanceLogger);
	$useLocalObjectStack();
	if (loggingEnabled()) {
		try {
			$synchronized(PerformanceLogger::times) {
				for (int32_t i = 0; i < $nc(PerformanceLogger::times)->size(); ++i) {
					$var($PerformanceLogger$TimeData, td, $cast($PerformanceLogger$TimeData, PerformanceLogger::times->get(i)));
					if (td != nullptr) {
						$var($StringBuilder, var$0, $new($StringBuilder));
						var$0->append(i);
						var$0->append(" "_s);
						var$0->append($(td->getMessage()));
						var$0->append(": "_s);
						var$0->append(td->getTime());
						var$0->append(PerformanceLogger::baseTime);
						var$0->append("\n"_s);
						$nc(writer)->write($$str(var$0));
					}
				}
			}
			$nc(writer)->flush();
		} catch ($Exception& e) {
			$nc($System::out)->println($$str({e, ": Writing performance log to "_s, writer}));
		}
	}
}

void PerformanceLogger::outputLog() {
	$init(PerformanceLogger);
	outputLog(PerformanceLogger::logWriter);
}

void PerformanceLogger::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	PerformanceLogger::perfLoggingOn = false;
	PerformanceLogger::useNanoTime = false;
	$assignStatic(PerformanceLogger::logFileName, nullptr);
	$assignStatic(PerformanceLogger::logWriter, nullptr);
	{
		$var($String, perfLoggingProp, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "sun.perflog"_s))));
		if (perfLoggingProp != nullptr) {
			PerformanceLogger::perfLoggingOn = true;
			$var($String, perfNanoProp, $cast($String, $AccessController::doPrivileged($$new($GetPropertyAction, "sun.perflog.nano"_s))));
			if (perfNanoProp != nullptr) {
				PerformanceLogger::useNanoTime = true;
			}
			if (perfLoggingProp->regionMatches(true, 0, "file:"_s, 0, 5)) {
				$assignStatic(PerformanceLogger::logFileName, perfLoggingProp->substring(5));
			}
			if (PerformanceLogger::logFileName != nullptr) {
				if (PerformanceLogger::logWriter == nullptr) {
					$AccessController::doPrivileged($$new($PerformanceLogger$1));
				}
			}
			if (PerformanceLogger::logWriter == nullptr) {
				$assignStatic(PerformanceLogger::logWriter, $new($OutputStreamWriter, $System::out));
			}
		}
		$assignStatic(PerformanceLogger::times, $new($Vector, 10));
		for (int32_t i = 0; i <= PerformanceLogger::LAST_RESERVED; ++i) {
			PerformanceLogger::times->add($$new($PerformanceLogger$TimeData, $$str({"Time "_s, $$str(i), " not set"_s}), 0));
		}
	}
}

PerformanceLogger::PerformanceLogger() {
}

$Class* PerformanceLogger::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"START_INDEX", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerformanceLogger, START_INDEX)},
		{"LAST_RESERVED", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PerformanceLogger, LAST_RESERVED)},
		{"perfLoggingOn", "Z", nullptr, $PRIVATE | $STATIC, $staticField(PerformanceLogger, perfLoggingOn)},
		{"useNanoTime", "Z", nullptr, $PRIVATE | $STATIC, $staticField(PerformanceLogger, useNanoTime)},
		{"times", "Ljava/util/Vector;", "Ljava/util/Vector<Lsun/awt/util/PerformanceLogger$TimeData;>;", $PRIVATE | $STATIC, $staticField(PerformanceLogger, times)},
		{"logFileName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(PerformanceLogger, logFileName)},
		{"logWriter", "Ljava/io/Writer;", nullptr, $PRIVATE | $STATIC, $staticField(PerformanceLogger, logWriter)},
		{"baseTime", "J", nullptr, $PRIVATE | $STATIC, $staticField(PerformanceLogger, baseTime)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PerformanceLogger, init$, void)},
		{"getCurrentTime", "()J", nullptr, $PRIVATE | $STATIC, $staticMethod(PerformanceLogger, getCurrentTime, int64_t)},
		{"getMessageAtIndex", "(I)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(PerformanceLogger, getMessageAtIndex, $String*, int32_t)},
		{"getStartTime", "()J", nullptr, $PUBLIC | $STATIC, $staticMethod(PerformanceLogger, getStartTime, int64_t)},
		{"getTimeAtIndex", "(I)J", nullptr, $PUBLIC | $STATIC, $staticMethod(PerformanceLogger, getTimeAtIndex, int64_t, int32_t)},
		{"loggingEnabled", "()Z", nullptr, $PUBLIC | $STATIC, $staticMethod(PerformanceLogger, loggingEnabled, bool)},
		{"outputLog", "(Ljava/io/Writer;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PerformanceLogger, outputLog, void, $Writer*)},
		{"outputLog", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(PerformanceLogger, outputLog, void)},
		{"setBaseTime", "(J)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PerformanceLogger, setBaseTime, void, int64_t)},
		{"setStartTime", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PerformanceLogger, setStartTime, void, $String*)},
		{"setStartTime", "(Ljava/lang/String;J)V", nullptr, $PUBLIC | $STATIC, $staticMethod(PerformanceLogger, setStartTime, void, $String*, int64_t)},
		{"setTime", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $staticMethod(PerformanceLogger, setTime, int32_t, $String*)},
		{"setTime", "(Ljava/lang/String;J)I", nullptr, $PUBLIC | $STATIC, $staticMethod(PerformanceLogger, setTime, int32_t, $String*, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.util.PerformanceLogger$TimeData", "sun.awt.util.PerformanceLogger", "TimeData", $STATIC},
		{"sun.awt.util.PerformanceLogger$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.awt.util.PerformanceLogger",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"sun.awt.util.PerformanceLogger$TimeData,sun.awt.util.PerformanceLogger$1"
	};
	$loadClass(PerformanceLogger, name, initialize, &classInfo$$, PerformanceLogger::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PerformanceLogger);
	});
	return class$;
}

$Class* PerformanceLogger::class$ = nullptr;

		} // util
	} // awt
} // sun
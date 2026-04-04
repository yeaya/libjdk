#include <sun/rmi/runtime/Log$InternalStreamHandler.h>
#include <java/io/OutputStream.h>
#include <java/util/logging/LogRecord.h>
#include <java/util/logging/SimpleFormatter.h>
#include <java/util/logging/StreamHandler.h>
#include <sun/rmi/runtime/Log.h>
#include <jcpp.h>

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LogRecord = ::java::util::logging::LogRecord;
using $SimpleFormatter = ::java::util::logging::SimpleFormatter;
using $StreamHandler = ::java::util::logging::StreamHandler;

namespace sun {
	namespace rmi {
		namespace runtime {

void Log$InternalStreamHandler::init$($OutputStream* out) {
	$StreamHandler::init$(out, $$new($SimpleFormatter));
}

void Log$InternalStreamHandler::publish($LogRecord* record) {
	$StreamHandler::publish(record);
	flush();
}

void Log$InternalStreamHandler::close() {
	flush();
}

Log$InternalStreamHandler::Log$InternalStreamHandler() {
}

$Class* Log$InternalStreamHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/OutputStream;)V", nullptr, 0, $method(Log$InternalStreamHandler, init$, void, $OutputStream*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(Log$InternalStreamHandler, close, void)},
		{"publish", "(Ljava/util/logging/LogRecord;)V", nullptr, $PUBLIC, $virtualMethod(Log$InternalStreamHandler, publish, void, $LogRecord*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.Log$InternalStreamHandler", "sun.rmi.runtime.Log", "InternalStreamHandler", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.runtime.Log$InternalStreamHandler",
		"java.util.logging.StreamHandler",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.runtime.Log"
	};
	$loadClass(Log$InternalStreamHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Log$InternalStreamHandler);
	});
	return class$;
}

$Class* Log$InternalStreamHandler::class$ = nullptr;

		} // runtime
	} // rmi
} // sun
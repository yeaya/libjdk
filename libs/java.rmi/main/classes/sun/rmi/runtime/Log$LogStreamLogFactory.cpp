#include <sun/rmi/runtime/Log$LogStreamLogFactory.h>
#include <java/rmi/server/LogStream.h>
#include <java/util/logging/Level.h>
#include <sun/rmi/runtime/Log$LogStreamLog.h>
#include <sun/rmi/runtime/Log.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LogStream = ::java::rmi::server::LogStream;
using $Level = ::java::util::logging::Level;
using $Log = ::sun::rmi::runtime::Log;
using $Log$LogStreamLog = ::sun::rmi::runtime::Log$LogStreamLog;

namespace sun {
	namespace rmi {
		namespace runtime {

void Log$LogStreamLogFactory::init$() {
}

$Log* Log$LogStreamLogFactory::createLog($String* loggerName, $String* oldLogName, $Level* level) {
	$var($LogStream, stream, nullptr);
	if (oldLogName != nullptr) {
		$assign(stream, $LogStream::log(oldLogName));
	}
	return $new($Log$LogStreamLog, stream, level);
}

Log$LogStreamLogFactory::Log$LogStreamLogFactory() {
}

$Class* Log$LogStreamLogFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Log$LogStreamLogFactory, init$, void)},
		{"createLog", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/logging/Level;)Lsun/rmi/runtime/Log;", nullptr, $PUBLIC, $virtualMethod(Log$LogStreamLogFactory, createLog, $Log*, $String*, $String*, $Level*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.Log$LogStreamLogFactory", "sun.rmi.runtime.Log", "LogStreamLogFactory", $PRIVATE | $STATIC},
		{"sun.rmi.runtime.Log$LogFactory", "sun.rmi.runtime.Log", "LogFactory", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.runtime.Log$LogStreamLogFactory",
		"java.lang.Object",
		"sun.rmi.runtime.Log$LogFactory",
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
	$loadClass(Log$LogStreamLogFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Log$LogStreamLogFactory);
	});
	return class$;
}

$Class* Log$LogStreamLogFactory::class$ = nullptr;

		} // runtime
	} // rmi
} // sun
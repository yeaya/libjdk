#include <sun/rmi/runtime/Log$LogFactory.h>
#include <java/util/logging/Level.h>
#include <sun/rmi/runtime/Log.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Level = ::java::util::logging::Level;
using $Log = ::sun::rmi::runtime::Log;

namespace sun {
	namespace rmi {
		namespace runtime {

$Class* Log$LogFactory::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createLog", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/logging/Level;)Lsun/rmi/runtime/Log;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Log$LogFactory, createLog, $Log*, $String*, $String*, $Level*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.Log$LogFactory", "sun.rmi.runtime.Log", "LogFactory", $PRIVATE | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.rmi.runtime.Log$LogFactory",
		nullptr,
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
	$loadClass(Log$LogFactory, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Log$LogFactory);
	});
	return class$;
}

$Class* Log$LogFactory::class$ = nullptr;

		} // runtime
	} // rmi
} // sun
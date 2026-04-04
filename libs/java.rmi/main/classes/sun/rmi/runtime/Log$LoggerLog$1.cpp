#include <sun/rmi/runtime/Log$LoggerLog$1.h>
#include <java/io/OutputStream.h>
#include <java/util/logging/Handler.h>
#include <java/util/logging/Level.h>
#include <sun/rmi/runtime/Log$InternalStreamHandler.h>
#include <jcpp.h>

#undef ALL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Level = ::java::util::logging::Level;
using $Log$InternalStreamHandler = ::sun::rmi::runtime::Log$InternalStreamHandler;

namespace sun {
	namespace rmi {
		namespace runtime {

void Log$LoggerLog$1::init$() {
}

$Object* Log$LoggerLog$1::run() {
	$var($Log$InternalStreamHandler, alternate, $new($Log$InternalStreamHandler, $System::err));
	$init($Level);
	alternate->setLevel($Level::ALL);
	return alternate;
}

Log$LoggerLog$1::Log$LoggerLog$1() {
}

$Class* Log$LoggerLog$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Log$LoggerLog$1, init$, void)},
		{"run", "()Ljava/util/logging/Handler;", nullptr, $PUBLIC, $virtualMethod(Log$LoggerLog$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.runtime.Log$LoggerLog",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.Log$LoggerLog", "sun.rmi.runtime.Log", "LoggerLog", $PRIVATE | $STATIC},
		{"sun.rmi.runtime.Log$LoggerLog$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.runtime.Log$LoggerLog$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/logging/Handler;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.runtime.Log"
	};
	$loadClass(Log$LoggerLog$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Log$LoggerLog$1);
	});
	return class$;
}

$Class* Log$LoggerLog$1::class$ = nullptr;

		} // runtime
	} // rmi
} // sun
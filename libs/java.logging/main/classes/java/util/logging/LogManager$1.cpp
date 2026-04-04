#include <java/util/logging/LogManager$1.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/util/logging/LogManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LogManager = ::java::util::logging::LogManager;

namespace java {
	namespace util {
		namespace logging {

void LogManager$1::init$() {
}

$Object* LogManager$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($LogManager, mgr, nullptr);
	$var($String, cname, nullptr);
	try {
		$assign(cname, $System::getProperty("java.util.logging.manager"_s));
		if (cname != nullptr) {
			try {
				$var($Object, tmp, $nc($$nc($ClassLoader::getSystemClassLoader())->loadClass(cname))->newInstance());
				$assign(mgr, $cast($LogManager, tmp));
			} catch ($ClassNotFoundException& ex) {
				$var($Object, tmp, $nc($$nc($($Thread::currentThread())->getContextClassLoader())->loadClass(cname))->newInstance());
				$assign(mgr, $cast($LogManager, tmp));
			}
		}
	} catch ($Exception& ex) {
		$nc($System::err)->println($$str({"Could not load Logmanager \""_s, cname, "\""_s}));
		ex->printStackTrace();
	}
	if (mgr == nullptr) {
		$assign(mgr, $new($LogManager));
	}
	return mgr;
}

LogManager$1::LogManager$1() {
}

$Class* LogManager$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(LogManager$1, init$, void)},
		{"run", "()Ljava/util/logging/LogManager;", nullptr, $PUBLIC, $virtualMethod(LogManager$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.LogManager",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.LogManager$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/util/logging/LogManager;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.LogManager"
	};
	$loadClass(LogManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$1);
	});
	return class$;
}

$Class* LogManager$1::class$ = nullptr;

		} // logging
	} // util
} // java
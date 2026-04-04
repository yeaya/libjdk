#include <sun/awt/util/PerformanceLogger$1.h>
#include <java/io/File.h>
#include <java/io/FileWriter.h>
#include <java/io/Writer.h>
#include <sun/awt/util/PerformanceLogger.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $FileWriter = ::java::io::FileWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PerformanceLogger = ::sun::awt::util::PerformanceLogger;

namespace sun {
	namespace awt {
		namespace util {

void PerformanceLogger$1::init$() {
}

$Object* PerformanceLogger$1::run() {
	$useLocalObjectStack();
	try {
		$init($PerformanceLogger);
		$var($File, logFile, $new($File, $PerformanceLogger::logFileName));
		logFile->createNewFile();
		$assignStatic($PerformanceLogger::logWriter, $new($FileWriter, logFile));
	} catch ($Exception& e) {
		$init($PerformanceLogger);
		$nc($System::out)->println($$str({e, ": Creating logfile "_s, $PerformanceLogger::logFileName, ".  Log to console"_s}));
	}
	return nullptr;
}

PerformanceLogger$1::PerformanceLogger$1() {
}

$Class* PerformanceLogger$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(PerformanceLogger$1, init$, void)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(PerformanceLogger$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.awt.util.PerformanceLogger",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.util.PerformanceLogger$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.util.PerformanceLogger$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		nullptr,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.util.PerformanceLogger"
	};
	$loadClass(PerformanceLogger$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PerformanceLogger$1);
	});
	return class$;
}

$Class* PerformanceLogger$1::class$ = nullptr;

		} // util
	} // awt
} // sun
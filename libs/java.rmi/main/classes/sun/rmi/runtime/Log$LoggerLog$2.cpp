#include <sun/rmi/runtime/Log$LoggerLog$2.h>
#include <java/util/logging/Handler.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <sun/rmi/runtime/Log$LoggerLog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $Log$LoggerLog = ::sun::rmi::runtime::Log$LoggerLog;

namespace sun {
	namespace rmi {
		namespace runtime {

void Log$LoggerLog$2::init$($Log$LoggerLog* this$0, $Logger* val$logger, $Level* val$level) {
	$set(this, this$0, this$0);
	$set(this, val$logger, val$logger);
	$set(this, val$level, val$level);
}

$Object* Log$LoggerLog$2::run() {
	if (!$nc(this->val$logger)->isLoggable(this->val$level)) {
		this->val$logger->setLevel(this->val$level);
	}
	$init($Log$LoggerLog);
	this->val$logger->addHandler($Log$LoggerLog::alternateConsole);
	return nullptr;
}

Log$LoggerLog$2::Log$LoggerLog$2() {
}

$Class* Log$LoggerLog$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/rmi/runtime/Log$LoggerLog;", nullptr, $FINAL | $SYNTHETIC, $field(Log$LoggerLog$2, this$0)},
		{"val$level", "Ljava/util/logging/Level;", nullptr, $FINAL | $SYNTHETIC, $field(Log$LoggerLog$2, val$level)},
		{"val$logger", "Ljava/util/logging/Logger;", nullptr, $FINAL | $SYNTHETIC, $field(Log$LoggerLog$2, val$logger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/rmi/runtime/Log$LoggerLog;Ljava/util/logging/Logger;Ljava/util/logging/Level;)V", "()V", 0, $method(Log$LoggerLog$2, init$, void, $Log$LoggerLog*, $Logger*, $Level*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(Log$LoggerLog$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.rmi.runtime.Log$LoggerLog",
		"<init>",
		"(Ljava/util/logging/Logger;Ljava/util/logging/Level;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.rmi.runtime.Log$LoggerLog", "sun.rmi.runtime.Log", "LoggerLog", $PRIVATE | $STATIC},
		{"sun.rmi.runtime.Log$LoggerLog$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.rmi.runtime.Log$LoggerLog$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.rmi.runtime.Log"
	};
	$loadClass(Log$LoggerLog$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Log$LoggerLog$2);
	});
	return class$;
}

$Class* Log$LoggerLog$2::class$ = nullptr;

		} // runtime
	} // rmi
} // sun
#include <java/util/logging/LogManager$5.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;

namespace java {
	namespace util {
		namespace logging {

void LogManager$5::init$($Logger* val$logger, $Level* val$level) {
	$set(this, val$logger, val$logger);
	$set(this, val$level, val$level);
}

$Object* LogManager$5::run() {
	$nc(this->val$logger)->setLevel(this->val$level);
	return nullptr;
}

LogManager$5::LogManager$5() {
}

$Class* LogManager$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$level", "Ljava/util/logging/Level;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$5, val$level)},
		{"val$logger", "Ljava/util/logging/Logger;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$5, val$logger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/Logger;Ljava/util/logging/Level;)V", "()V", 0, $method(LogManager$5, init$, void, $Logger*, $Level*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LogManager$5, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.LogManager",
		"doSetLevel",
		"(Ljava/util/logging/Logger;Ljava/util/logging/Level;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.LogManager$5",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.LogManager"
	};
	$loadClass(LogManager$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$5);
	});
	return class$;
}

$Class* LogManager$5::class$ = nullptr;

		} // logging
	} // util
} // java
#include <java/util/logging/LogManager$6.h>
#include <java/util/logging/LogManager.h>
#include <java/util/logging/Logger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Logger = ::java::util::logging::Logger;

namespace java {
	namespace util {
		namespace logging {

void LogManager$6::init$($Logger* val$logger, $Logger* val$parent) {
	$set(this, val$logger, val$logger);
	$set(this, val$parent, val$parent);
}

$Object* LogManager$6::run() {
	$nc(this->val$logger)->setParent(this->val$parent);
	return nullptr;
}

LogManager$6::LogManager$6() {
}

$Class* LogManager$6::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$parent", "Ljava/util/logging/Logger;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$6, val$parent)},
		{"val$logger", "Ljava/util/logging/Logger;", nullptr, $FINAL | $SYNTHETIC, $field(LogManager$6, val$logger)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/logging/Logger;Ljava/util/logging/Logger;)V", "()V", 0, $method(LogManager$6, init$, void, $Logger*, $Logger*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(LogManager$6, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.util.logging.LogManager",
		"doSetParent",
		"(Ljava/util/logging/Logger;Ljava/util/logging/Logger;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.LogManager$6", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.util.logging.LogManager$6",
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
	$loadClass(LogManager$6, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LogManager$6);
	});
	return class$;
}

$Class* LogManager$6::class$ = nullptr;

		} // logging
	} // util
} // java
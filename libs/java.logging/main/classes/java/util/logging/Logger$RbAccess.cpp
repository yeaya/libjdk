#include <java/util/logging/Logger$RbAccess.h>
#include <java/util/logging/Logger.h>
#include <jdk/internal/access/JavaUtilResourceBundleAccess.h>
#include <jdk/internal/access/SharedSecrets.h>
#include <jcpp.h>

#undef RB_ACCESS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JavaUtilResourceBundleAccess = ::jdk::internal::access::JavaUtilResourceBundleAccess;
using $SharedSecrets = ::jdk::internal::access::SharedSecrets;

namespace java {
	namespace util {
		namespace logging {

$JavaUtilResourceBundleAccess* Logger$RbAccess::RB_ACCESS = nullptr;

void Logger$RbAccess::init$() {
}

void Logger$RbAccess::clinit$($Class* clazz) {
	$assignStatic(Logger$RbAccess::RB_ACCESS, $SharedSecrets::getJavaUtilResourceBundleAccess());
}

Logger$RbAccess::Logger$RbAccess() {
}

$Class* Logger$RbAccess::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RB_ACCESS", "Ljdk/internal/access/JavaUtilResourceBundleAccess;", nullptr, $STATIC | $FINAL, $staticField(Logger$RbAccess, RB_ACCESS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Logger$RbAccess, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.Logger$RbAccess", "java.util.logging.Logger", "RbAccess", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.logging.Logger$RbAccess",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.util.logging.Logger"
	};
	$loadClass(Logger$RbAccess, name, initialize, &classInfo$$, Logger$RbAccess::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Logger$RbAccess);
	});
	return class$;
}

$Class* Logger$RbAccess::class$ = nullptr;

		} // logging
	} // util
} // java
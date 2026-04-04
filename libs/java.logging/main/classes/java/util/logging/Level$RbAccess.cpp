#include <java/util/logging/Level$RbAccess.h>
#include <java/util/logging/Level.h>
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

$JavaUtilResourceBundleAccess* Level$RbAccess::RB_ACCESS = nullptr;

void Level$RbAccess::init$() {
}

void Level$RbAccess::clinit$($Class* clazz) {
	$assignStatic(Level$RbAccess::RB_ACCESS, $SharedSecrets::getJavaUtilResourceBundleAccess());
}

Level$RbAccess::Level$RbAccess() {
}

$Class* Level$RbAccess::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"RB_ACCESS", "Ljdk/internal/access/JavaUtilResourceBundleAccess;", nullptr, $STATIC | $FINAL, $staticField(Level$RbAccess, RB_ACCESS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Level$RbAccess, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.util.logging.Level$RbAccess", "java.util.logging.Level", "RbAccess", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"java.util.logging.Level$RbAccess",
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
		"java.util.logging.Level"
	};
	$loadClass(Level$RbAccess, name, initialize, &classInfo$$, Level$RbAccess::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Level$RbAccess);
	});
	return class$;
}

$Class* Level$RbAccess::class$ = nullptr;

		} // logging
	} // util
} // java
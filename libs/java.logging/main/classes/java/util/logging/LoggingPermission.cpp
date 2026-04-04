#include <java/util/logging/LoggingPermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace util {
		namespace logging {

void LoggingPermission::init$($String* name, $String* actions) {
	$useLocalObjectStack();
	$BasicPermission::init$(name);
	if (!$nc(name)->equals("control"_s)) {
		$throwNew($IllegalArgumentException, $$str({"name: "_s, name}));
	}
	if (actions != nullptr && actions->length() > 0) {
		$throwNew($IllegalArgumentException, $$str({"actions: "_s, actions}));
	}
}

LoggingPermission::LoggingPermission() {
}

$Class* LoggingPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(LoggingPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(LoggingPermission, init$, void, $String*, $String*), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.util.logging.LoggingPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LoggingPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(LoggingPermission));
	});
	return class$;
}

$Class* LoggingPermission::class$ = nullptr;

		} // logging
	} // util
} // java
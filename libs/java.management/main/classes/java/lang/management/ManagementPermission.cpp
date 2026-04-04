#include <java/lang/management/ManagementPermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace lang {
		namespace management {

void ManagementPermission::init$($String* name) {
	$BasicPermission::init$(name);
	bool var$0 = !$nc(name)->equals("control"_s);
	if (var$0 && !name->equals("monitor"_s)) {
		$throwNew($IllegalArgumentException, $$str({"name: "_s, name}));
	}
}

void ManagementPermission::init$($String* name, $String* actions) {
	$useLocalObjectStack();
	$BasicPermission::init$(name);
	bool var$0 = !$nc(name)->equals("control"_s);
	if (var$0 && !name->equals("monitor"_s)) {
		$throwNew($IllegalArgumentException, $$str({"name: "_s, name}));
	}
	if (actions != nullptr && actions->length() > 0) {
		$throwNew($IllegalArgumentException, $$str({"actions: "_s, actions}));
	}
}

ManagementPermission::ManagementPermission() {
}

$Class* ManagementPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ManagementPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ManagementPermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ManagementPermission, init$, void, $String*, $String*), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.lang.management.ManagementPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ManagementPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(ManagementPermission));
	});
	return class$;
}

$Class* ManagementPermission::class$ = nullptr;

		} // management
	} // lang
} // java
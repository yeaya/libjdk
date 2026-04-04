#include <java/sql/SQLPermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace sql {

void SQLPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void SQLPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

SQLPermission::SQLPermission() {
}

$Class* SQLPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(SQLPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLPermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SQLPermission, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.sql.SQLPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SQLPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SQLPermission));
	});
	return class$;
}

$Class* SQLPermission::class$ = nullptr;

	} // sql
} // java
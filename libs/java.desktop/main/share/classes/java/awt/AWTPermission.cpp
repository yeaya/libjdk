#include <java/awt/AWTPermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace java {
	namespace awt {

void AWTPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void AWTPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

AWTPermission::AWTPermission() {
}

$Class* AWTPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AWTPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AWTPermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(AWTPermission, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"java.awt.AWTPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(AWTPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AWTPermission));
	});
	return class$;
}

$Class* AWTPermission::class$ = nullptr;

	} // awt
} // java
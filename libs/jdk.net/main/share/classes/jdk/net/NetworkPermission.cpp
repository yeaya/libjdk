#include <jdk/net/NetworkPermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace jdk {
	namespace net {

void NetworkPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void NetworkPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
}

NetworkPermission::NetworkPermission() {
}

$Class* NetworkPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NetworkPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NetworkPermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(NetworkPermission, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.net.NetworkPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NetworkPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(NetworkPermission));
	});
	return class$;
}

$Class* NetworkPermission::class$ = nullptr;

	} // net
} // jdk
#include <javax/management/remote/SubjectDelegationPermission.h>
#include <java/security/BasicPermission.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicPermission = ::java::security::BasicPermission;

namespace javax {
	namespace management {
		namespace remote {

void SubjectDelegationPermission::init$($String* name) {
	$BasicPermission::init$(name);
}

void SubjectDelegationPermission::init$($String* name, $String* actions) {
	$BasicPermission::init$(name, actions);
	if (actions != nullptr) {
		$throwNew($IllegalArgumentException, "Non-null actions"_s);
	}
}

SubjectDelegationPermission::SubjectDelegationPermission() {
}

$Class* SubjectDelegationPermission::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(SubjectDelegationPermission, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SubjectDelegationPermission, init$, void, $String*)},
		{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(SubjectDelegationPermission, init$, void, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.management.remote.SubjectDelegationPermission",
		"java.security.BasicPermission",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SubjectDelegationPermission, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SubjectDelegationPermission));
	});
	return class$;
}

$Class* SubjectDelegationPermission::class$ = nullptr;

		} // remote
	} // management
} // javax
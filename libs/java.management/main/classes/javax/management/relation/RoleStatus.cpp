#include <javax/management/relation/RoleStatus.h>
#include <jcpp.h>

#undef LESS_THAN_MIN_ROLE_DEGREE
#undef MORE_THAN_MAX_ROLE_DEGREE
#undef NO_ROLE_WITH_NAME
#undef REF_MBEAN_NOT_REGISTERED
#undef REF_MBEAN_OF_INCORRECT_CLASS
#undef ROLE_NOT_READABLE
#undef ROLE_NOT_WRITABLE

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;

namespace javax {
	namespace management {
		namespace relation {

void RoleStatus::init$() {
}

bool RoleStatus::isRoleStatus(int32_t status) {
	if (status != RoleStatus::NO_ROLE_WITH_NAME && status != RoleStatus::ROLE_NOT_READABLE && status != RoleStatus::ROLE_NOT_WRITABLE && status != RoleStatus::LESS_THAN_MIN_ROLE_DEGREE && status != RoleStatus::MORE_THAN_MAX_ROLE_DEGREE && status != RoleStatus::REF_MBEAN_OF_INCORRECT_CLASS && status != RoleStatus::REF_MBEAN_NOT_REGISTERED) {
		return false;
	}
	return true;
}

RoleStatus::RoleStatus() {
}

$Class* RoleStatus::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"NO_ROLE_WITH_NAME", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, NO_ROLE_WITH_NAME)},
		{"ROLE_NOT_READABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, ROLE_NOT_READABLE)},
		{"ROLE_NOT_WRITABLE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, ROLE_NOT_WRITABLE)},
		{"LESS_THAN_MIN_ROLE_DEGREE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, LESS_THAN_MIN_ROLE_DEGREE)},
		{"MORE_THAN_MAX_ROLE_DEGREE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, MORE_THAN_MAX_ROLE_DEGREE)},
		{"REF_MBEAN_OF_INCORRECT_CLASS", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, REF_MBEAN_OF_INCORRECT_CLASS)},
		{"REF_MBEAN_NOT_REGISTERED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(RoleStatus, REF_MBEAN_NOT_REGISTERED)},
		{}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"since", 's', "16"},
		{"forRemoval", 'Z', "true"},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC | $DEPRECATED, $method(RoleStatus, init$, void), nullptr, nullptr, init$methodAnnotations$$},
		{"isRoleStatus", "(I)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(RoleStatus, isRoleStatus, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.relation.RoleStatus",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RoleStatus, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RoleStatus);
	});
	return class$;
}

$Class* RoleStatus::class$ = nullptr;

		} // relation
	} // management
} // javax
#include <javax/management/relation/RelationType.h>
#include <java/util/List.h>
#include <javax/management/relation/RoleInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $RoleInfo = ::javax::management::relation::RoleInfo;

namespace javax {
	namespace management {
		namespace relation {

$Class* RelationType::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getRelationTypeName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RelationType, getRelationTypeName, $String*)},
		{"getRoleInfo", "(Ljava/lang/String;)Ljavax/management/relation/RoleInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RelationType, getRoleInfo, $RoleInfo*, $String*), "java.lang.IllegalArgumentException,javax.management.relation.RoleInfoNotFoundException"},
		{"getRoleInfos", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/management/relation/RoleInfo;>;", $PUBLIC | $ABSTRACT, $virtualMethod(RelationType, getRoleInfos, $List*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.relation.RelationType",
		nullptr,
		"java.io.Serializable",
		nullptr,
		methodInfos$$
	};
	$loadClass(RelationType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RelationType);
	});
	return class$;
}

$Class* RelationType::class$ = nullptr;

		} // relation
	} // management
} // javax
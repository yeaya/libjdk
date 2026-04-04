#include <javax/management/relation/RelationSupportMBean.h>
#include <jcpp.h>

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace relation {

$Class* RelationSupportMBean::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"isInRelationService", "()Ljava/lang/Boolean;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RelationSupportMBean, isInRelationService, $Boolean*)},
		{"setRelationServiceManagementFlag", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(RelationSupportMBean, setRelationServiceManagementFlag, void, $Boolean*), "java.lang.IllegalArgumentException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.relation.RelationSupportMBean",
		nullptr,
		"javax.management.relation.Relation",
		nullptr,
		methodInfos$$
	};
	$loadClass(RelationSupportMBean, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RelationSupportMBean);
	});
	return class$;
}

$Class* RelationSupportMBean::class$ = nullptr;

		} // relation
	} // management
} // javax
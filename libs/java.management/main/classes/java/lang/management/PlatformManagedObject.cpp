#include <java/lang/management/PlatformManagedObject.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName = ::javax::management::ObjectName;

namespace java {
	namespace lang {
		namespace management {

$Class* PlatformManagedObject::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getObjectName", "()Ljavax/management/ObjectName;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(PlatformManagedObject, getObjectName, $ObjectName*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.lang.management.PlatformManagedObject",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(PlatformManagedObject, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PlatformManagedObject);
	});
	return class$;
}

$Class* PlatformManagedObject::class$ = nullptr;

		} // management
	} // lang
} // java
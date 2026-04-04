#include <javax/management/openmbean/OpenMBeanAttributeInfo.h>
#include <javax/management/openmbean/OpenMBeanParameterInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenMBeanParameterInfo = ::javax::management::openmbean::OpenMBeanParameterInfo;

namespace javax {
	namespace management {
		namespace openmbean {

bool OpenMBeanAttributeInfo::equals(Object$* obj) {
	 return this->$OpenMBeanParameterInfo::equals(obj);
}

int32_t OpenMBeanAttributeInfo::hashCode() {
	 return this->$OpenMBeanParameterInfo::hashCode();
}

$String* OpenMBeanAttributeInfo::toString() {
	 return this->$OpenMBeanParameterInfo::toString();
}

$Class* OpenMBeanAttributeInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"isIs", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanAttributeInfo, isIs, bool)},
		{"isReadable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanAttributeInfo, isReadable, bool)},
		{"isWritable", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanAttributeInfo, isWritable, bool)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.openmbean.OpenMBeanAttributeInfo",
		nullptr,
		"javax.management.openmbean.OpenMBeanParameterInfo",
		nullptr,
		methodInfos$$
	};
	$loadClass(OpenMBeanAttributeInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenMBeanAttributeInfo);
	});
	return class$;
}

$Class* OpenMBeanAttributeInfo::class$ = nullptr;

		} // openmbean
	} // management
} // javax
#include <javax/management/openmbean/OpenMBeanConstructorInfo.h>
#include <javax/management/MBeanParameterInfo.h>
#include <jcpp.h>

using $MBeanParameterInfoArray = $Array<::javax::management::MBeanParameterInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace openmbean {

bool OpenMBeanConstructorInfo::equals(Object$* obj) {
	return this->$Object::equals(obj);
}

int32_t OpenMBeanConstructorInfo::hashCode() {
	return this->$Object::hashCode();
}

$String* OpenMBeanConstructorInfo::toString() {
	return this->$Object::toString();
}

$Class* OpenMBeanConstructorInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanConstructorInfo, getDescription, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanConstructorInfo, getName, $String*)},
		{"getSignature", "()[Ljavax/management/MBeanParameterInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanConstructorInfo, getSignature, $MBeanParameterInfoArray*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.openmbean.OpenMBeanConstructorInfo",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OpenMBeanConstructorInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenMBeanConstructorInfo);
	});
	return class$;
}

$Class* OpenMBeanConstructorInfo::class$ = nullptr;

		} // openmbean
	} // management
} // javax
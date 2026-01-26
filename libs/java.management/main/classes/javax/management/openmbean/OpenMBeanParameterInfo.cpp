#include <javax/management/openmbean/OpenMBeanParameterInfo.h>

#include <java/lang/Comparable.h>
#include <java/util/Set.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Comparable = ::java::lang::Comparable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Set = ::java::util::Set;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace javax {
	namespace management {
		namespace openmbean {

$MethodInfo _OpenMBeanParameterInfo_MethodInfo_[] = {
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, getDefaultValue, $Object*)},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, getDescription, $String*)},
	{"getLegalValues", "()Ljava/util/Set;", "()Ljava/util/Set<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, getLegalValues, $Set*)},
	{"getMaxValue", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, getMaxValue, $Comparable*)},
	{"getMinValue", "()Ljava/lang/Comparable;", "()Ljava/lang/Comparable<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, getMinValue, $Comparable*)},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, getName, $String*)},
	{"getOpenType", "()Ljavax/management/openmbean/OpenType;", "()Ljavax/management/openmbean/OpenType<*>;", $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, getOpenType, $OpenType*)},
	{"hasDefaultValue", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, hasDefaultValue, bool)},
	{"hasLegalValues", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, hasLegalValues, bool)},
	{"hasMaxValue", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, hasMaxValue, bool)},
	{"hasMinValue", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, hasMinValue, bool)},
	{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
	{"isValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanParameterInfo, isValue, bool, Object$*)},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _OpenMBeanParameterInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.openmbean.OpenMBeanParameterInfo",
	nullptr,
	nullptr,
	nullptr,
	_OpenMBeanParameterInfo_MethodInfo_
};

$Object* allocate$OpenMBeanParameterInfo($Class* clazz) {
	return $of($alloc(OpenMBeanParameterInfo));
}

bool OpenMBeanParameterInfo::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t OpenMBeanParameterInfo::hashCode() {
	 return this->$Object::hashCode();
}

$String* OpenMBeanParameterInfo::toString() {
	 return this->$Object::toString();
}

$Class* OpenMBeanParameterInfo::load$($String* name, bool initialize) {
	$loadClass(OpenMBeanParameterInfo, name, initialize, &_OpenMBeanParameterInfo_ClassInfo_, allocate$OpenMBeanParameterInfo);
	return class$;
}

$Class* OpenMBeanParameterInfo::class$ = nullptr;

		} // openmbean
	} // management
} // javax
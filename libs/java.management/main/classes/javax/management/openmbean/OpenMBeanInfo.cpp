#include <javax/management/openmbean/OpenMBeanInfo.h>
#include <javax/management/MBeanAttributeInfo.h>
#include <javax/management/MBeanConstructorInfo.h>
#include <javax/management/MBeanNotificationInfo.h>
#include <javax/management/MBeanOperationInfo.h>
#include <jcpp.h>

using $MBeanAttributeInfoArray = $Array<::javax::management::MBeanAttributeInfo>;
using $MBeanConstructorInfoArray = $Array<::javax::management::MBeanConstructorInfo>;
using $MBeanNotificationInfoArray = $Array<::javax::management::MBeanNotificationInfo>;
using $MBeanOperationInfoArray = $Array<::javax::management::MBeanOperationInfo>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {
		namespace openmbean {

bool OpenMBeanInfo::equals(Object$* obj) {
	 return this->$Object::equals(obj);
}

int32_t OpenMBeanInfo::hashCode() {
	 return this->$Object::hashCode();
}

$String* OpenMBeanInfo::toString() {
	 return this->$Object::toString();
}

$Class* OpenMBeanInfo::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
		{"getAttributes", "()[Ljavax/management/MBeanAttributeInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanInfo, getAttributes, $MBeanAttributeInfoArray*)},
		{"getClassName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanInfo, getClassName, $String*)},
		{"getConstructors", "()[Ljavax/management/MBeanConstructorInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanInfo, getConstructors, $MBeanConstructorInfoArray*)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanInfo, getDescription, $String*)},
		{"getNotifications", "()[Ljavax/management/MBeanNotificationInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanInfo, getNotifications, $MBeanNotificationInfoArray*)},
		{"getOperations", "()[Ljavax/management/MBeanOperationInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(OpenMBeanInfo, getOperations, $MBeanOperationInfoArray*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $ABSTRACT},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.management.openmbean.OpenMBeanInfo",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(OpenMBeanInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OpenMBeanInfo);
	});
	return class$;
}

$Class* OpenMBeanInfo::class$ = nullptr;

		} // openmbean
	} // management
} // javax
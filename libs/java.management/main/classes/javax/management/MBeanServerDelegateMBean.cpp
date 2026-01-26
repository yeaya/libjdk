#include <javax/management/MBeanServerDelegateMBean.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace management {

$MethodInfo _MBeanServerDelegateMBean_MethodInfo_[] = {
	{"getImplementationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerDelegateMBean, getImplementationName, $String*)},
	{"getImplementationVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerDelegateMBean, getImplementationVendor, $String*)},
	{"getImplementationVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerDelegateMBean, getImplementationVersion, $String*)},
	{"getMBeanServerId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerDelegateMBean, getMBeanServerId, $String*)},
	{"getSpecificationName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerDelegateMBean, getSpecificationName, $String*)},
	{"getSpecificationVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerDelegateMBean, getSpecificationVendor, $String*)},
	{"getSpecificationVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MBeanServerDelegateMBean, getSpecificationVersion, $String*)},
	{}
};

$ClassInfo _MBeanServerDelegateMBean_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.management.MBeanServerDelegateMBean",
	nullptr,
	nullptr,
	nullptr,
	_MBeanServerDelegateMBean_MethodInfo_
};

$Object* allocate$MBeanServerDelegateMBean($Class* clazz) {
	return $of($alloc(MBeanServerDelegateMBean));
}

$Class* MBeanServerDelegateMBean::load$($String* name, bool initialize) {
	$loadClass(MBeanServerDelegateMBean, name, initialize, &_MBeanServerDelegateMBean_ClassInfo_, allocate$MBeanServerDelegateMBean);
	return class$;
}

$Class* MBeanServerDelegateMBean::class$ = nullptr;

	} // management
} // javax
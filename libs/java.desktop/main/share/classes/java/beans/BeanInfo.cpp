#include <java/beans/BeanInfo.h>
#include <java/awt/Image.h>
#include <java/beans/BeanDescriptor.h>
#include <java/beans/EventSetDescriptor.h>
#include <java/beans/MethodDescriptor.h>
#include <java/beans/PropertyDescriptor.h>
#include <jcpp.h>

using $BeanInfoArray = $Array<::java::beans::BeanInfo>;
using $EventSetDescriptorArray = $Array<::java::beans::EventSetDescriptor>;
using $MethodDescriptorArray = $Array<::java::beans::MethodDescriptor>;
using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $Image = ::java::awt::Image;
using $BeanDescriptor = ::java::beans::BeanDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace beans {

$Class* BeanInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ICON_COLOR_16x16", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BeanInfo, ICON_COLOR_16x16)},
		{"ICON_COLOR_32x32", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BeanInfo, ICON_COLOR_32x32)},
		{"ICON_MONO_16x16", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BeanInfo, ICON_MONO_16x16)},
		{"ICON_MONO_32x32", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(BeanInfo, ICON_MONO_32x32)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"getAdditionalBeanInfo", "()[Ljava/beans/BeanInfo;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanInfo, getAdditionalBeanInfo, $BeanInfoArray*)},
		{"getBeanDescriptor", "()Ljava/beans/BeanDescriptor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanInfo, getBeanDescriptor, $BeanDescriptor*)},
		{"getDefaultEventIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanInfo, getDefaultEventIndex, int32_t)},
		{"getDefaultPropertyIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanInfo, getDefaultPropertyIndex, int32_t)},
		{"getEventSetDescriptors", "()[Ljava/beans/EventSetDescriptor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanInfo, getEventSetDescriptors, $EventSetDescriptorArray*)},
		{"getIcon", "(I)Ljava/awt/Image;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanInfo, getIcon, $Image*, int32_t)},
		{"getMethodDescriptors", "()[Ljava/beans/MethodDescriptor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanInfo, getMethodDescriptors, $MethodDescriptorArray*)},
		{"getPropertyDescriptors", "()[Ljava/beans/PropertyDescriptor;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BeanInfo, getPropertyDescriptors, $PropertyDescriptorArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.beans.BeanInfo",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BeanInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BeanInfo);
	});
	return class$;
}

$Class* BeanInfo::class$ = nullptr;

	} // beans
} // java
#include <com/sun/beans/infos/ComponentBeanInfo.h>
#include <java/awt/Component.h>
#include <java/beans/IntrospectionException.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/beans/SimpleBeanInfo.h>
#include <java/lang/Error.h>
#include <jcpp.h>

using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $Component = ::java::awt::Component;
using $IntrospectionException = ::java::beans::IntrospectionException;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $SimpleBeanInfo = ::java::beans::SimpleBeanInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace beans {
			namespace infos {

$Class* ComponentBeanInfo::beanClass = nullptr;

void ComponentBeanInfo::init$() {
	$SimpleBeanInfo::init$();
}

$PropertyDescriptorArray* ComponentBeanInfo::getPropertyDescriptors() {
	$useLocalObjectStack();
	try {
		$var($PropertyDescriptor, name, $new($PropertyDescriptor, "name"_s, ComponentBeanInfo::beanClass));
		$var($PropertyDescriptor, background, $new($PropertyDescriptor, "background"_s, ComponentBeanInfo::beanClass));
		$var($PropertyDescriptor, foreground, $new($PropertyDescriptor, "foreground"_s, ComponentBeanInfo::beanClass));
		$var($PropertyDescriptor, font, $new($PropertyDescriptor, "font"_s, ComponentBeanInfo::beanClass));
		$var($PropertyDescriptor, enabled, $new($PropertyDescriptor, "enabled"_s, ComponentBeanInfo::beanClass));
		$var($PropertyDescriptor, visible, $new($PropertyDescriptor, "visible"_s, ComponentBeanInfo::beanClass));
		$var($PropertyDescriptor, focusable, $new($PropertyDescriptor, "focusable"_s, ComponentBeanInfo::beanClass));
		enabled->setExpert(true);
		visible->setHidden(true);
		background->setBound(true);
		foreground->setBound(true);
		font->setBound(true);
		focusable->setBound(true);
		$var($PropertyDescriptorArray, rv, $new($PropertyDescriptorArray, {
			name,
			background,
			foreground,
			font,
			enabled,
			visible,
			focusable
		}));
		return rv;
	} catch ($IntrospectionException& e) {
		$throwNew($Error, $(e->toString()));
	}
	$shouldNotReachHere();
}

void ComponentBeanInfo::clinit$($Class* clazz) {
	$load($Component);
	$assignStatic(ComponentBeanInfo::beanClass, $Component::class$);
}

ComponentBeanInfo::ComponentBeanInfo() {
}

$Class* ComponentBeanInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"beanClass", "Ljava/lang/Class;", "Ljava/lang/Class<Ljava/awt/Component;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ComponentBeanInfo, beanClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ComponentBeanInfo, init$, void)},
		{"getPropertyDescriptors", "()[Ljava/beans/PropertyDescriptor;", nullptr, $PUBLIC, $virtualMethod(ComponentBeanInfo, getPropertyDescriptors, $PropertyDescriptorArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.beans.infos.ComponentBeanInfo",
		"java.beans.SimpleBeanInfo",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ComponentBeanInfo, name, initialize, &classInfo$$, ComponentBeanInfo::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ComponentBeanInfo);
	});
	return class$;
}

$Class* ComponentBeanInfo::class$ = nullptr;

			} // infos
		} // beans
	} // sun
} // com
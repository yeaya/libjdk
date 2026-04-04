#include <java/beans/Introspector$1.h>
#include <java/beans/BeanInfo.h>
#include <java/beans/ConstructorProperties.h>
#include <java/beans/Introspector.h>
#include <java/beans/PropertyDescriptor.h>
#include <java/lang/annotation/Annotation.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PropertyDescriptorArray = $Array<::java::beans::PropertyDescriptor>;
using $BeanInfo = ::java::beans::BeanInfo;
using $ConstructorProperties = ::java::beans::ConstructorProperties;
using $Introspector = ::java::beans::Introspector;
using $PropertyDescriptor = ::java::beans::PropertyDescriptor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;

namespace java {
	namespace beans {

void Introspector$1::init$() {
}

$Method* Introspector$1::getReadMethod($Class* clazz, $String* property) {
	$useLocalObjectStack();
	$var($BeanInfo, bi, $Introspector::getBeanInfo(clazz));
	$var($PropertyDescriptorArray, pds, $nc(bi)->getPropertyDescriptors());
	{
		$var($PropertyDescriptorArray, arr$, pds);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($PropertyDescriptor, pd, arr$->get(i$));
			if ($$nc($nc(pd)->getName())->equals(property)) {
				return pd->getReadMethod();
			}
		}
	}
	return nullptr;
}

$StringArray* Introspector$1::getConstructorPropertiesValue($Constructor* ctr) {
	$useLocalObjectStack();
	$load($ConstructorProperties);
	$var($ConstructorProperties, cp, $cast($ConstructorProperties, $nc(ctr)->getAnnotation($ConstructorProperties::class$)));
	$var($StringArray, ret, cp != nullptr ? cp->value() : ($StringArray*)nullptr);
	return ret;
}

Introspector$1::Introspector$1() {
}

$Class* Introspector$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Introspector$1, init$, void)},
		{"getConstructorPropertiesValue", "(Ljava/lang/reflect/Constructor;)[Ljava/lang/String;", "(Ljava/lang/reflect/Constructor<*>;)[Ljava/lang/String;", $PUBLIC, $virtualMethod(Introspector$1, getConstructorPropertiesValue, $StringArray*, $Constructor*)},
		{"getReadMethod", "(Ljava/lang/Class;Ljava/lang/String;)Ljava/lang/reflect/Method;", "(Ljava/lang/Class<*>;Ljava/lang/String;)Ljava/lang/reflect/Method;", $PUBLIC, $virtualMethod(Introspector$1, getReadMethod, $Method*, $Class*, $String*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.beans.Introspector",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.Introspector$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.Introspector$1",
		"java.lang.Object",
		"jdk.internal.access.JavaBeansAccess",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.Introspector"
	};
	$loadClass(Introspector$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Introspector$1);
	});
	return class$;
}

$Class* Introspector$1::class$ = nullptr;

	} // beans
} // java
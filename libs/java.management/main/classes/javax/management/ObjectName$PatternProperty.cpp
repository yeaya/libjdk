#include <javax/management/ObjectName$PatternProperty.h>
#include <javax/management/ObjectName$Property.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ObjectName$Property = ::javax::management::ObjectName$Property;

namespace javax {
	namespace management {

void ObjectName$PatternProperty::init$(int32_t key_index, int32_t key_length, int32_t value_length) {
	$ObjectName$Property::init$(key_index, key_length, value_length);
}

ObjectName$PatternProperty::ObjectName$PatternProperty() {
}

$Class* ObjectName$PatternProperty::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(III)V", nullptr, 0, $method(ObjectName$PatternProperty, init$, void, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.management.ObjectName$PatternProperty", "javax.management.ObjectName", "PatternProperty", $PRIVATE | $STATIC},
		{"javax.management.ObjectName$Property", "javax.management.ObjectName", "Property", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.management.ObjectName$PatternProperty",
		"javax.management.ObjectName$Property",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.management.ObjectName"
	};
	$loadClass(ObjectName$PatternProperty, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ObjectName$PatternProperty);
	});
	return class$;
}

$Class* ObjectName$PatternProperty::class$ = nullptr;

	} // management
} // javax
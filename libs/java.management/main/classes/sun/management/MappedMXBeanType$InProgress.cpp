#include <sun/management/MappedMXBeanType$InProgress.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace sun {
	namespace management {

$String* MappedMXBeanType$InProgress::description = nullptr;

void MappedMXBeanType$InProgress::init$() {
	$OpenType::init$("java.lang.String"_s, "java.lang.String"_s, MappedMXBeanType$InProgress::description);
}

$String* MappedMXBeanType$InProgress::toString() {
	return MappedMXBeanType$InProgress::description;
}

int32_t MappedMXBeanType$InProgress::hashCode() {
	return 0;
}

bool MappedMXBeanType$InProgress::equals(Object$* o) {
	return false;
}

bool MappedMXBeanType$InProgress::isValue(Object$* o) {
	return false;
}

MappedMXBeanType$InProgress::MappedMXBeanType$InProgress() {
}

void MappedMXBeanType$InProgress::clinit$($Class* clazz) {
	$assignStatic(MappedMXBeanType$InProgress::description, "Marker to detect recursive type use -- internal use only!"_s);
}

$Class* MappedMXBeanType$InProgress::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"description", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MappedMXBeanType$InProgress, description)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MappedMXBeanType$InProgress, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MappedMXBeanType$InProgress, init$, void), "javax.management.openmbean.OpenDataException"},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$InProgress, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$InProgress, hashCode, int32_t)},
		{"isValue", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$InProgress, isValue, bool, Object$*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$InProgress, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.MappedMXBeanType$InProgress", "sun.management.MappedMXBeanType", "InProgress", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.MappedMXBeanType$InProgress",
		"javax.management.openmbean.OpenType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljavax/management/openmbean/OpenType<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.MappedMXBeanType"
	};
	$loadClass(MappedMXBeanType$InProgress, name, initialize, &classInfo$$, MappedMXBeanType$InProgress::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MappedMXBeanType$InProgress);
	});
	return class$;
}

$Class* MappedMXBeanType$InProgress::class$ = nullptr;

	} // management
} // sun
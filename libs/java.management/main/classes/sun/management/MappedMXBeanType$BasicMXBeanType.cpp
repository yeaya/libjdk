#include <sun/management/MappedMXBeanType$BasicMXBeanType.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/OpenType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $OpenType = ::javax::management::openmbean::OpenType;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

void MappedMXBeanType$BasicMXBeanType::init$($Class* c, $OpenType* openType) {
	$MappedMXBeanType::init$();
	$set(this, basicType, c);
	$set(this, openType, openType);
	$set(this, mappedTypeClass, c);
	this->isBasicType$ = true;
}

$Type* MappedMXBeanType$BasicMXBeanType::getJavaType() {
	return this->basicType;
}

$String* MappedMXBeanType$BasicMXBeanType::getName() {
	return $nc(this->basicType)->getName();
}

$Object* MappedMXBeanType$BasicMXBeanType::toOpenTypeData(Object$* data) {
	return $of(data);
}

$Object* MappedMXBeanType$BasicMXBeanType::toJavaTypeData(Object$* data) {
	return $of(data);
}

MappedMXBeanType$BasicMXBeanType::MappedMXBeanType$BasicMXBeanType() {
}

$Class* MappedMXBeanType$BasicMXBeanType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"basicType", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $FINAL, $field(MappedMXBeanType$BasicMXBeanType, basicType)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;Ljavax/management/openmbean/OpenType;)V", "(Ljava/lang/Class<*>;Ljavax/management/openmbean/OpenType<*>;)V", 0, $method(MappedMXBeanType$BasicMXBeanType, init$, void, $Class*, $OpenType*)},
		{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0, $virtualMethod(MappedMXBeanType$BasicMXBeanType, getJavaType, $Type*)},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MappedMXBeanType$BasicMXBeanType, getName, $String*)},
		{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$BasicMXBeanType, toJavaTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
		{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$BasicMXBeanType, toOpenTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.MappedMXBeanType$BasicMXBeanType", "sun.management.MappedMXBeanType", "BasicMXBeanType", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.MappedMXBeanType$BasicMXBeanType",
		"sun.management.MappedMXBeanType",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.management.MappedMXBeanType"
	};
	$loadClass(MappedMXBeanType$BasicMXBeanType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MappedMXBeanType$BasicMXBeanType);
	});
	return class$;
}

$Class* MappedMXBeanType$BasicMXBeanType::class$ = nullptr;

	} // management
} // sun
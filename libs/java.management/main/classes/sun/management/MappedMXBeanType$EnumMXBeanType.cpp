#include <sun/management/MappedMXBeanType$EnumMXBeanType.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/Enum.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/SimpleType.h>
#include <sun/management/MappedMXBeanType.h>
#include <jcpp.h>

#undef STRING

using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Type = ::java::lang::reflect::Type;
using $SimpleType = ::javax::management::openmbean::SimpleType;
using $MappedMXBeanType = ::sun::management::MappedMXBeanType;

namespace sun {
	namespace management {

void MappedMXBeanType$EnumMXBeanType::init$($Class* c) {
	$MappedMXBeanType::init$();
	$set(this, enumClass, c);
	$init($SimpleType);
	$set(this, openType, $SimpleType::STRING);
	$set(this, mappedTypeClass, $String::class$);
}

$Type* MappedMXBeanType$EnumMXBeanType::getJavaType() {
	return this->enumClass;
}

$String* MappedMXBeanType$EnumMXBeanType::getName() {
	return $nc(this->enumClass)->getName();
}

$Object* MappedMXBeanType$EnumMXBeanType::toOpenTypeData(Object$* data) {
	return $of($nc($cast($Enum, data))->name());
}

$Object* MappedMXBeanType$EnumMXBeanType::toJavaTypeData(Object$* data) {
	$useLocalObjectStack();
	try {
		return $of($Enum::valueOf(this->enumClass, $cast($String, data)));
	} catch ($IllegalArgumentException& e) {
		$var($InvalidObjectException, ioe, $new($InvalidObjectException, $$str({"Enum constant named "_s, $cast($String, data), " is missing"_s})));
		ioe->initCause(e);
		$throw(ioe);
	}
	$shouldNotReachHere();
}

MappedMXBeanType$EnumMXBeanType::MappedMXBeanType$EnumMXBeanType() {
}

$Class* MappedMXBeanType$EnumMXBeanType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"enumClass", "Ljava/lang/Class;", nullptr, $FINAL, $field(MappedMXBeanType$EnumMXBeanType, enumClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", 0, $method(MappedMXBeanType$EnumMXBeanType, init$, void, $Class*)},
		{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, 0, $virtualMethod(MappedMXBeanType$EnumMXBeanType, getJavaType, $Type*)},
		{"getName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MappedMXBeanType$EnumMXBeanType, getName, $String*)},
		{"toJavaTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$EnumMXBeanType, toJavaTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException,java.io.InvalidObjectException"},
		{"toOpenTypeData", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MappedMXBeanType$EnumMXBeanType, toOpenTypeData, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.management.MappedMXBeanType$EnumMXBeanType", "sun.management.MappedMXBeanType", "EnumMXBeanType", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.management.MappedMXBeanType$EnumMXBeanType",
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
	$loadClass(MappedMXBeanType$EnumMXBeanType, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MappedMXBeanType$EnumMXBeanType);
	});
	return class$;
}

$Class* MappedMXBeanType$EnumMXBeanType::class$ = nullptr;

	} // management
} // sun
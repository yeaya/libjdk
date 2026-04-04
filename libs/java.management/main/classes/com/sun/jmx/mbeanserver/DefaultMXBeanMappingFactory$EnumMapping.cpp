#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$EnumMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/Enum.h>
#include <javax/management/openmbean/SimpleType.h>
#include <jcpp.h>

#undef STRING

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$NonNullMXBeanMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SimpleType = ::javax::management::openmbean::SimpleType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void DefaultMXBeanMappingFactory$EnumMapping::init$($Class* enumClass) {
	$init($SimpleType);
	$DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$(enumClass, $SimpleType::STRING);
	$set(this, enumClass, enumClass);
}

$Object* DefaultMXBeanMappingFactory$EnumMapping::toNonNullOpenValue(Object$* value) {
	return $of($nc($cast($Enum, value))->name());
}

$Object* DefaultMXBeanMappingFactory$EnumMapping::fromNonNullOpenValue(Object$* value) {
	$useLocalObjectStack();
	try {
		return $of($Enum::valueOf(this->enumClass, $cast($String, value)));
	} catch ($Exception& e) {
		$throw($($DefaultMXBeanMappingFactory::invalidObjectException($$str({"Cannot convert to enum: "_s, value}), e)));
	}
	$shouldNotReachHere();
}

DefaultMXBeanMappingFactory$EnumMapping::DefaultMXBeanMappingFactory$EnumMapping() {
}

$Class* DefaultMXBeanMappingFactory$EnumMapping::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"enumClass", "Ljava/lang/Class;", "Ljava/lang/Class<TT;>;", $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$EnumMapping, enumClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<TT;>;)V", 0, $method(DefaultMXBeanMappingFactory$EnumMapping, init$, void, $Class*)},
		{"fromNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Enum;", "(Ljava/lang/Object;)TT;", $FINAL, $virtualMethod(DefaultMXBeanMappingFactory$EnumMapping, fromNonNullOpenValue, $Object*, Object$*), "java.io.InvalidObjectException"},
		{"toNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, $virtualMethod(DefaultMXBeanMappingFactory$EnumMapping, toNonNullOpenValue, $Object*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$EnumMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "EnumMapping", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$EnumMapping",
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Enum<TT;>;>Lcom/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
	};
	$loadClass(DefaultMXBeanMappingFactory$EnumMapping, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMXBeanMappingFactory$EnumMapping);
	});
	return class$;
}

$Class* DefaultMXBeanMappingFactory$EnumMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
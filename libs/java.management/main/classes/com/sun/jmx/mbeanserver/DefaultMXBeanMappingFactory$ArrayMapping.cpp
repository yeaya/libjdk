#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$ArrayMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$NonNullMXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/lang/reflect/Array.h>
#include <java/lang/reflect/GenericArrayType.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/ArrayType.h>
#include <jcpp.h>

using $DefaultMXBeanMappingFactory$NonNullMXBeanMapping = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$NonNullMXBeanMapping;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $1Array = ::java::lang::reflect::Array;
using $GenericArrayType = ::java::lang::reflect::GenericArrayType;
using $Type = ::java::lang::reflect::Type;
using $ArrayType = ::javax::management::openmbean::ArrayType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void DefaultMXBeanMappingFactory$ArrayMapping::init$($Type* targetType, $ArrayType* openArrayType, $Class* openArrayClass, $MXBeanMapping* elementMapping) {
	$DefaultMXBeanMappingFactory$NonNullMXBeanMapping::init$(targetType, openArrayType);
	$set(this, elementMapping, elementMapping);
}

$Object* DefaultMXBeanMappingFactory$ArrayMapping::toNonNullOpenValue(Object$* value) {
	$useLocalObjectStack();
	$var($ObjectArray, valueArray, $cast($ObjectArray, value));
	int32_t len = $nc(valueArray)->length;
	$var($ObjectArray, openArray, $cast($ObjectArray, $1Array::newInstance($nc(getOpenClass())->getComponentType(), len)));
	for (int32_t i = 0; i < len; ++i) {
		openArray->set(i, $($nc(this->elementMapping)->toOpenValue(valueArray->get(i))));
	}
	return openArray;
}

$Object* DefaultMXBeanMappingFactory$ArrayMapping::fromNonNullOpenValue(Object$* openValue) {
	$useLocalObjectStack();
	$var($ObjectArray, openArray, $cast($ObjectArray, openValue));
	$var($Type, javaType, getJavaType());
	$var($ObjectArray, valueArray, nullptr);
	$var($Type, componentType, nullptr);
	if ($instanceOf($GenericArrayType, javaType)) {
		$assign(componentType, $cast($GenericArrayType, javaType)->getGenericComponentType());
	} else if ($instanceOf($Class, javaType) && $cast($Class, javaType)->isArray()) {
		$assign(componentType, $cast($Class, javaType)->getComponentType());
	} else {
		$throwNew($IllegalArgumentException, $$str({"Not an array: "_s, javaType}));
	}
	$assign(valueArray, $cast($ObjectArray, $1Array::newInstance($cast($Class, componentType), $nc(openArray)->length)));
	for (int32_t i = 0; i < openArray->length; ++i) {
		valueArray->set(i, $($nc(this->elementMapping)->fromOpenValue(openArray->get(i))));
	}
	return valueArray;
}

void DefaultMXBeanMappingFactory$ArrayMapping::checkReconstructible() {
	$nc(this->elementMapping)->checkReconstructible();
}

DefaultMXBeanMappingFactory$ArrayMapping::DefaultMXBeanMappingFactory$ArrayMapping() {
}

$Class* DefaultMXBeanMappingFactory$ArrayMapping::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"elementMapping", "Lcom/sun/jmx/mbeanserver/MXBeanMapping;", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$ArrayMapping, elementMapping)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/ArrayType;Ljava/lang/Class;Lcom/sun/jmx/mbeanserver/MXBeanMapping;)V", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/ArrayType<*>;Ljava/lang/Class<*>;Lcom/sun/jmx/mbeanserver/MXBeanMapping;)V", 0, $method(DefaultMXBeanMappingFactory$ArrayMapping, init$, void, $Type*, $ArrayType*, $Class*, $MXBeanMapping*)},
		{"checkReconstructible", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultMXBeanMappingFactory$ArrayMapping, checkReconstructible, void), "java.io.InvalidObjectException"},
		{"fromNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, $virtualMethod(DefaultMXBeanMappingFactory$ArrayMapping, fromNonNullOpenValue, $Object*, Object$*), "java.io.InvalidObjectException"},
		{"toNonNullOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $FINAL, $virtualMethod(DefaultMXBeanMappingFactory$ArrayMapping, toNonNullOpenValue, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$ArrayMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "ArrayMapping", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "NonNullMXBeanMapping", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$ArrayMapping",
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$NonNullMXBeanMapping",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
	};
	$loadClass(DefaultMXBeanMappingFactory$ArrayMapping, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMXBeanMappingFactory$ArrayMapping);
	});
	return class$;
}

$Class* DefaultMXBeanMappingFactory$ArrayMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
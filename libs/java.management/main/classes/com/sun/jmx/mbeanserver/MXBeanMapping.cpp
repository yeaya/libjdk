#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/OpenType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Type = ::java::lang::reflect::Type;
using $OpenType = ::javax::management::openmbean::OpenType;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void MXBeanMapping::init$($Type* javaType, $OpenType* openType) {
	if (javaType == nullptr || openType == nullptr) {
		$throwNew($NullPointerException, "Null argument"_s);
	}
	$set(this, javaType, javaType);
	$set(this, openType, openType);
	$set(this, openClass, makeOpenClass(javaType, openType));
}

$Type* MXBeanMapping::getJavaType() {
	return this->javaType;
}

$OpenType* MXBeanMapping::getOpenType() {
	return this->openType;
}

$Class* MXBeanMapping::getOpenClass() {
	return this->openClass;
}

$Class* MXBeanMapping::makeOpenClass($Type* javaType, $OpenType* openType) {
	$useLocalObjectStack();
	$load(MXBeanMapping);
	$beforeCallerSensitive();
	if ($instanceOf($Class, javaType) && $cast($Class, javaType)->isPrimitive()) {
		return $cast($Class, javaType);
	}
	try {
		$var($String, className, $nc(openType)->getClassName());
		return $Class::forName(className, false, $(MXBeanMapping::class$->getClassLoader()));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	}
	$shouldNotReachHere();
}

void MXBeanMapping::checkReconstructible() {
}

MXBeanMapping::MXBeanMapping() {
}

$Class* MXBeanMapping::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"javaType", "Ljava/lang/reflect/Type;", nullptr, $PRIVATE | $FINAL, $field(MXBeanMapping, javaType)},
		{"openType", "Ljavax/management/openmbean/OpenType;", "Ljavax/management/openmbean/OpenType<*>;", $PRIVATE | $FINAL, $field(MXBeanMapping, openType)},
		{"openClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(MXBeanMapping, openClass)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType;)V", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType<*>;)V", $PROTECTED, $method(MXBeanMapping, init$, void, $Type*, $OpenType*)},
		{"checkReconstructible", "()V", nullptr, $PUBLIC, $virtualMethod(MXBeanMapping, checkReconstructible, void), "java.io.InvalidObjectException"},
		{"fromOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MXBeanMapping, fromOpenValue, $Object*, Object$*), "java.io.InvalidObjectException"},
		{"getJavaType", "()Ljava/lang/reflect/Type;", nullptr, $PUBLIC | $FINAL, $method(MXBeanMapping, getJavaType, $Type*)},
		{"getOpenClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", $PUBLIC | $FINAL, $method(MXBeanMapping, getOpenClass, $Class*)},
		{"getOpenType", "()Ljavax/management/openmbean/OpenType;", "()Ljavax/management/openmbean/OpenType<*>;", $PUBLIC | $FINAL, $method(MXBeanMapping, getOpenType, $OpenType*)},
		{"makeOpenClass", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType;)Ljava/lang/Class;", "(Ljava/lang/reflect/Type;Ljavax/management/openmbean/OpenType<*>;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $staticMethod(MXBeanMapping, makeOpenClass, $Class*, $Type*, $OpenType*)},
		{"toOpenValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MXBeanMapping, toOpenValue, $Object*, Object$*), "javax.management.openmbean.OpenDataException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.sun.jmx.mbeanserver.MXBeanMapping",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MXBeanMapping, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MXBeanMapping);
	});
	return class$;
}

$Class* MXBeanMapping::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
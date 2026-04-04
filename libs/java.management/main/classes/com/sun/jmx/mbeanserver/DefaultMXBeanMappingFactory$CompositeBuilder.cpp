#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/lang/reflect/Method.h>
#include <javax/management/openmbean/CompositeData.h>
#include <jcpp.h>

using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CompositeData = ::javax::management::openmbean::CompositeData;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void DefaultMXBeanMappingFactory$CompositeBuilder::init$($Class* targetClass, $StringArray* itemNames) {
	$set(this, targetClass, targetClass);
	$set(this, itemNames, itemNames);
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilder::getTargetClass() {
	return this->targetClass;
}

$StringArray* DefaultMXBeanMappingFactory$CompositeBuilder::getItemNames() {
	return this->itemNames;
}

$Throwable* DefaultMXBeanMappingFactory$CompositeBuilder::possibleCause() {
	return nullptr;
}

DefaultMXBeanMappingFactory$CompositeBuilder::DefaultMXBeanMappingFactory$CompositeBuilder() {
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"targetClass", "Ljava/lang/Class;", "Ljava/lang/Class<*>;", $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$CompositeBuilder, targetClass)},
		{"itemNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DefaultMXBeanMappingFactory$CompositeBuilder, itemNames)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;[Ljava/lang/String;)V", "(Ljava/lang/Class<*>;[Ljava/lang/String;)V", 0, $method(DefaultMXBeanMappingFactory$CompositeBuilder, init$, void, $Class*, $StringArray*)},
		{"applicable", "([Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, $ABSTRACT, $virtualMethod(DefaultMXBeanMappingFactory$CompositeBuilder, applicable, $String*, $MethodArray*), "java.io.InvalidObjectException"},
		{"fromCompositeData", "(Ljavax/management/openmbean/CompositeData;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)Ljava/lang/Object;", nullptr, $ABSTRACT, $virtualMethod(DefaultMXBeanMappingFactory$CompositeBuilder, fromCompositeData, $Object*, $CompositeData*, $StringArray*, $MXBeanMappingArray*), "java.io.InvalidObjectException"},
		{"getItemNames", "()[Ljava/lang/String;", nullptr, 0, $virtualMethod(DefaultMXBeanMappingFactory$CompositeBuilder, getItemNames, $StringArray*)},
		{"getTargetClass", "()Ljava/lang/Class;", "()Ljava/lang/Class<*>;", 0, $virtualMethod(DefaultMXBeanMappingFactory$CompositeBuilder, getTargetClass, $Class*)},
		{"possibleCause", "()Ljava/lang/Throwable;", nullptr, 0, $virtualMethod(DefaultMXBeanMappingFactory$CompositeBuilder, possibleCause, $Throwable*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilder", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder",
		"java.lang.Object",
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
	$loadClass(DefaultMXBeanMappingFactory$CompositeBuilder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMXBeanMappingFactory$CompositeBuilder);
	});
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilder::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
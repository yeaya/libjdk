#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaFrom.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <java/io/InvalidObjectException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <javax/management/openmbean/CompositeData.h>
#include <sun/reflect/misc/MethodUtil.h>
#include <jcpp.h>

using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $DefaultMXBeanMappingFactory$CompositeBuilder = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder;
using $MXBeanIntrospector = ::com::sun::jmx::mbeanserver::MXBeanIntrospector;
using $InvalidObjectException = ::java::io::InvalidObjectException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $MethodUtil = ::sun::reflect::misc::MethodUtil;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::init$($Class* targetClass, $StringArray* itemNames) {
	$DefaultMXBeanMappingFactory$CompositeBuilder::init$(targetClass, itemNames);
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::applicable($MethodArray* getters) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* targetClass = getTargetClass();
	try {
		$load($CompositeData);
		$var($Method, fromMethod, $nc(targetClass)->getMethod("from"_s, $$new($ClassArray, {$CompositeData::class$})));
		if (!$Modifier::isStatic($nc(fromMethod)->getModifiers())) {
			$var($String, msg, "Method from(CompositeData) is not static"_s);
			$throwNew($InvalidObjectException, msg);
		}
		if (fromMethod->getReturnType() != getTargetClass()) {
			$var($StringBuilder, var$0, $new($StringBuilder));
			var$0->append("Method from(CompositeData) returns "_s);
			var$0->append($($MXBeanIntrospector::typeName(fromMethod->getReturnType())));
			var$0->append(" not "_s);
			var$0->append($($MXBeanIntrospector::typeName(targetClass)));
			$var($String, msg, $str(var$0));
			$throwNew($InvalidObjectException, msg);
		}
		$set(this, fromMethod, fromMethod);
		return nullptr;
	} catch ($InvalidObjectException& e) {
		$throw(e);
	} catch ($Exception& e) {
		return "no method from(CompositeData)"_s;
	}
	$shouldNotReachHere();
}

$Object* DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::fromCompositeData($CompositeData* cd, $StringArray* itemNames, $MXBeanMappingArray* converters) {
	$useLocalObjectStack();
	try {
		return $MethodUtil::invoke(this->fromMethod, nullptr, $$new($ObjectArray, {cd}));
	} catch ($Exception& e) {
		$var($String, msg, "Failed to invoke from(CompositeData)"_s);
		$throw($($DefaultMXBeanMappingFactory::invalidObjectException(msg, e)));
	}
	$shouldNotReachHere();
}

DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::DefaultMXBeanMappingFactory$CompositeBuilderViaFrom() {
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"fromMethod", "Ljava/lang/reflect/Method;", nullptr, $PRIVATE, $field(DefaultMXBeanMappingFactory$CompositeBuilderViaFrom, fromMethod)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;[Ljava/lang/String;)V", "(Ljava/lang/Class<*>;[Ljava/lang/String;)V", 0, $method(DefaultMXBeanMappingFactory$CompositeBuilderViaFrom, init$, void, $Class*, $StringArray*)},
		{"applicable", "([Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, 0, $virtualMethod(DefaultMXBeanMappingFactory$CompositeBuilderViaFrom, applicable, $String*, $MethodArray*), "java.io.InvalidObjectException"},
		{"fromCompositeData", "(Ljavax/management/openmbean/CompositeData;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)Ljava/lang/Object;", nullptr, $FINAL, $virtualMethod(DefaultMXBeanMappingFactory$CompositeBuilderViaFrom, fromCompositeData, $Object*, $CompositeData*, $StringArray*, $MXBeanMappingArray*), "java.io.InvalidObjectException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaFrom", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaFrom", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilder", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaFrom",
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder",
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
	$loadClass(DefaultMXBeanMappingFactory$CompositeBuilderViaFrom, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMXBeanMappingFactory$CompositeBuilderViaFrom);
	});
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaFrom::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
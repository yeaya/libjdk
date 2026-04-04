#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilderViaProxy.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory$CompositeBuilder.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <java/lang/reflect/Proxy.h>
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/management/openmbean/CompositeData.h>
#include <javax/management/openmbean/CompositeDataInvocationHandler.h>
#include <jcpp.h>

using $MXBeanMappingArray = $Array<::com::sun::jmx::mbeanserver::MXBeanMapping>;
using $MethodArray = $Array<::java::lang::reflect::Method>;
using $DefaultMXBeanMappingFactory$CompositeBuilder = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory$CompositeBuilder;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $Proxy = ::java::lang::reflect::Proxy;
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $CompositeData = ::javax::management::openmbean::CompositeData;
using $CompositeDataInvocationHandler = ::javax::management::openmbean::CompositeDataInvocationHandler;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::init$($Class* targetClass, $StringArray* itemNames) {
	$DefaultMXBeanMappingFactory$CompositeBuilder::init$(targetClass, itemNames);
}

$String* DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::applicable($MethodArray* getters) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* targetClass = getTargetClass();
	if (!$nc(targetClass)->isInterface()) {
		return "not an interface"_s;
	}
	$var($Set, methods, $Util::newSet($($Arrays::asList($(targetClass->getMethods())))));
	$nc(methods)->removeAll($($Arrays::asList(getters)));
	$var($String, bad, nullptr);
	{
		$var($Iterator, i$, methods->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Method, m, $cast($Method, i$->next()));
			{
				$var($String, mname, $nc(m)->getName());
				$var($ClassArray, mparams, m->getParameterTypes());
				try {
					$var($Method, om, $Object::class$->getMethod(mname, mparams));
					if (!$Modifier::isPublic($nc(om)->getModifiers())) {
						$assign(bad, mname);
					}
				} catch ($NoSuchMethodException& e) {
					$assign(bad, mname);
				}
			}
		}
	}
	if (bad != nullptr) {
		return $str({"contains methods other than getters ("_s, bad, ")"_s});
	}
	return nullptr;
}

$Object* DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::fromCompositeData($CompositeData* cd, $StringArray* itemNames, $MXBeanMappingArray* converters) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$Class* targetClass = getTargetClass();
	$var($ClassLoader, var$0, $nc(targetClass)->getClassLoader());
	$var($ClassArray, var$1, $new($ClassArray, {targetClass}));
	return $Proxy::newProxyInstance(var$0, var$1, $$new($CompositeDataInvocationHandler, cd));
}

DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::DefaultMXBeanMappingFactory$CompositeBuilderViaProxy() {
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;[Ljava/lang/String;)V", "(Ljava/lang/Class<*>;[Ljava/lang/String;)V", 0, $method(DefaultMXBeanMappingFactory$CompositeBuilderViaProxy, init$, void, $Class*, $StringArray*)},
		{"applicable", "([Ljava/lang/reflect/Method;)Ljava/lang/String;", nullptr, 0, $virtualMethod(DefaultMXBeanMappingFactory$CompositeBuilderViaProxy, applicable, $String*, $MethodArray*)},
		{"fromCompositeData", "(Ljavax/management/openmbean/CompositeData;[Ljava/lang/String;[Lcom/sun/jmx/mbeanserver/MXBeanMapping;)Ljava/lang/Object;", nullptr, $FINAL, $virtualMethod(DefaultMXBeanMappingFactory$CompositeBuilderViaProxy, fromCompositeData, $Object*, $CompositeData*, $StringArray*, $MXBeanMappingArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaProxy", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilderViaProxy", $PRIVATE | $STATIC | $FINAL},
		{"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder", "com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory", "CompositeBuilder", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilderViaProxy",
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory$CompositeBuilder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.DefaultMXBeanMappingFactory"
	};
	$loadClass(DefaultMXBeanMappingFactory$CompositeBuilderViaProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultMXBeanMappingFactory$CompositeBuilderViaProxy);
	});
	return class$;
}

$Class* DefaultMXBeanMappingFactory$CompositeBuilderViaProxy::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
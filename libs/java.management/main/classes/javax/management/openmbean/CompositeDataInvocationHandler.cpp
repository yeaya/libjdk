#include <javax/management/openmbean/CompositeDataInvocationHandler.h>
#include <com/sun/jmx/mbeanserver/DefaultMXBeanMappingFactory.h>
#include <com/sun/jmx/mbeanserver/MXBeanLookup.h>
#include <com/sun/jmx/mbeanserver/MXBeanMapping.h>
#include <com/sun/jmx/mbeanserver/MXBeanMappingFactory.h>
#include <java/lang/AssertionError.h>
#include <java/lang/reflect/InvocationHandler.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Proxy.h>
#include <java/lang/reflect/Type.h>
#include <javax/management/openmbean/CompositeData.h>
#include <jcpp.h>

#undef DEFAULT

using $DefaultMXBeanMappingFactory = ::com::sun::jmx::mbeanserver::DefaultMXBeanMappingFactory;
using $MXBeanLookup = ::com::sun::jmx::mbeanserver::MXBeanLookup;
using $MXBeanMapping = ::com::sun::jmx::mbeanserver::MXBeanMapping;
using $MXBeanMappingFactory = ::com::sun::jmx::mbeanserver::MXBeanMappingFactory;
using $AssertionError = ::java::lang::AssertionError;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvocationHandler = ::java::lang::reflect::InvocationHandler;
using $Method = ::java::lang::reflect::Method;
using $Proxy = ::java::lang::reflect::Proxy;
using $CompositeData = ::javax::management::openmbean::CompositeData;

namespace javax {
	namespace management {
		namespace openmbean {

bool CompositeDataInvocationHandler::$assertionsDisabled = false;

void CompositeDataInvocationHandler::init$($CompositeData* compositeData) {
	CompositeDataInvocationHandler::init$(compositeData, nullptr);
}

void CompositeDataInvocationHandler::init$($CompositeData* compositeData, $MXBeanLookup* lookup) {
	if (compositeData == nullptr) {
		$throwNew($IllegalArgumentException, "compositeData"_s);
	}
	$set(this, compositeData, compositeData);
	$set(this, lookup, lookup);
}

$CompositeData* CompositeDataInvocationHandler::getCompositeData() {
	if (!CompositeDataInvocationHandler::$assertionsDisabled && !(this->compositeData != nullptr)) {
		$throwNew($AssertionError);
	}
	return this->compositeData;
}

$Object* CompositeDataInvocationHandler::invoke(Object$* proxy, $Method* method, $ObjectArray* args) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($String, methodName, $nc(method)->getName());
	if (method->getDeclaringClass() == $Object::class$) {
		if ($nc(methodName)->equals("toString"_s) && args == nullptr) {
			return $of($str({"Proxy["_s, this->compositeData, "]"_s}));
		} else if (methodName->equals("hashCode"_s) && args == nullptr) {
			return $of($Integer::valueOf($nc(this->compositeData)->hashCode() + 0x43444948));
		} else {
			bool var$0 = methodName->equals("equals"_s) && $nc(args)->length == 1;
			if (var$0 && $nc($(method->getParameterTypes()))->get(0) == $Object::class$) {
				return $of($Boolean::valueOf(equals(proxy, args->get(0))));
			} else {
				return method->invoke(this, args);
			}
		}
	}
	$var($String, propertyName, $DefaultMXBeanMappingFactory::propertyName(method));
	if (propertyName == nullptr) {
		$throwNew($IllegalArgumentException, $$str({"Method is not getter: "_s, $(method->getName())}));
	}
	$var($Object, openValue, nullptr);
	if ($nc(this->compositeData)->containsKey(propertyName)) {
		$assign(openValue, this->compositeData->get(propertyName));
	} else {
		$var($String, decap, $DefaultMXBeanMappingFactory::decapitalize(propertyName));
		if (this->compositeData->containsKey(decap)) {
			$assign(openValue, this->compositeData->get(decap));
		} else {
			$var($String, msg, $str({"No CompositeData item "_s, propertyName, ($nc(decap)->equals(propertyName) ? ""_s : $$str({" or "_s, decap})), " to match "_s, methodName}));
			$throwNew($IllegalArgumentException, msg);
		}
	}
	$init($MXBeanMappingFactory);
	$var($MXBeanMapping, mapping, $nc($MXBeanMappingFactory::DEFAULT)->mappingForType($(method->getGenericReturnType()), $MXBeanMappingFactory::DEFAULT));
	return $nc(mapping)->fromOpenValue(openValue);
}

bool CompositeDataInvocationHandler::equals(Object$* proxy, Object$* other) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if (other == nullptr) {
		return false;
	}
	$Class* proxyClass = $nc($of(proxy))->getClass();
	$Class* otherClass = $nc($of(other))->getClass();
	if (proxyClass != otherClass) {
		return false;
	}
	$var($InvocationHandler, otherih, $Proxy::getInvocationHandler(other));
	if (!($instanceOf(CompositeDataInvocationHandler, otherih))) {
		return false;
	}
	$var(CompositeDataInvocationHandler, othercdih, $cast(CompositeDataInvocationHandler, otherih));
	return $nc(this->compositeData)->equals($nc(othercdih)->compositeData);
}

void CompositeDataInvocationHandler::clinit$($Class* clazz) {
	CompositeDataInvocationHandler::$assertionsDisabled = !CompositeDataInvocationHandler::class$->desiredAssertionStatus();
}

CompositeDataInvocationHandler::CompositeDataInvocationHandler() {
}

$Class* CompositeDataInvocationHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(CompositeDataInvocationHandler, $assertionsDisabled)},
		{"compositeData", "Ljavax/management/openmbean/CompositeData;", nullptr, $PRIVATE | $FINAL, $field(CompositeDataInvocationHandler, compositeData)},
		{"lookup", "Lcom/sun/jmx/mbeanserver/MXBeanLookup;", nullptr, $PRIVATE | $FINAL, $field(CompositeDataInvocationHandler, lookup)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/management/openmbean/CompositeData;)V", nullptr, $PUBLIC, $method(CompositeDataInvocationHandler, init$, void, $CompositeData*)},
		{"<init>", "(Ljavax/management/openmbean/CompositeData;Lcom/sun/jmx/mbeanserver/MXBeanLookup;)V", nullptr, 0, $method(CompositeDataInvocationHandler, init$, void, $CompositeData*, $MXBeanLookup*)},
		{"equals", "(Ljava/lang/Object;Ljava/lang/Object;)Z", nullptr, $PRIVATE, $method(CompositeDataInvocationHandler, equals, bool, Object$*, Object$*)},
		{"getCompositeData", "()Ljavax/management/openmbean/CompositeData;", nullptr, $PUBLIC, $virtualMethod(CompositeDataInvocationHandler, getCompositeData, $CompositeData*)},
		{"invoke", "(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(CompositeDataInvocationHandler, invoke, $Object*, Object$*, $Method*, $ObjectArray*), "java.lang.Throwable"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.management.openmbean.CompositeDataInvocationHandler",
		"java.lang.Object",
		"java.lang.reflect.InvocationHandler",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(CompositeDataInvocationHandler, name, initialize, &classInfo$$, CompositeDataInvocationHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(CompositeDataInvocationHandler);
	});
	return class$;
}

$Class* CompositeDataInvocationHandler::class$ = nullptr;

		} // openmbean
	} // management
} // javax
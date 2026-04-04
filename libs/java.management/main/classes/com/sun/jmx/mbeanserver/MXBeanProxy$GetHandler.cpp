#include <com/sun/jmx/mbeanserver/MXBeanProxy$GetHandler.h>
#include <com/sun/jmx/mbeanserver/ConvertingMethod.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy$Handler.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy.h>
#include <java/lang/AssertionError.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ConvertingMethod = ::com::sun::jmx::mbeanserver::ConvertingMethod;
using $MXBeanProxy = ::com::sun::jmx::mbeanserver::MXBeanProxy;
using $MXBeanProxy$Handler = ::com::sun::jmx::mbeanserver::MXBeanProxy$Handler;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

bool MXBeanProxy$GetHandler::$assertionsDisabled = false;

void MXBeanProxy$GetHandler::init$($String* attributeName, $ConvertingMethod* cm) {
	$MXBeanProxy$Handler::init$(attributeName, cm);
}

$Object* MXBeanProxy$GetHandler::invoke($MBeanServerConnection* mbsc, $ObjectName* name, $ObjectArray* args) {
	if (!MXBeanProxy$GetHandler::$assertionsDisabled && !(args == nullptr || args->length == 0)) {
		$throwNew($AssertionError);
	}
	return $nc(mbsc)->getAttribute(name, $(getName()));
}

void MXBeanProxy$GetHandler::clinit$($Class* clazz) {
	$load($MXBeanProxy);
	MXBeanProxy$GetHandler::$assertionsDisabled = !$MXBeanProxy::class$->desiredAssertionStatus();
}

MXBeanProxy$GetHandler::MXBeanProxy$GetHandler() {
}

$Class* MXBeanProxy$GetHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MXBeanProxy$GetHandler, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lcom/sun/jmx/mbeanserver/ConvertingMethod;)V", nullptr, 0, $method(MXBeanProxy$GetHandler, init$, void, $String*, $ConvertingMethod*)},
		{"invoke", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(MXBeanProxy$GetHandler, invoke, $Object*, $MBeanServerConnection*, $ObjectName*, $ObjectArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.MXBeanProxy$GetHandler", "com.sun.jmx.mbeanserver.MXBeanProxy", "GetHandler", $PRIVATE | $STATIC},
		{"com.sun.jmx.mbeanserver.MXBeanProxy$Handler", "com.sun.jmx.mbeanserver.MXBeanProxy", "Handler", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.MXBeanProxy$GetHandler",
		"com.sun.jmx.mbeanserver.MXBeanProxy$Handler",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.MXBeanProxy"
	};
	$loadClass(MXBeanProxy$GetHandler, name, initialize, &classInfo$$, MXBeanProxy$GetHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MXBeanProxy$GetHandler);
	});
	return class$;
}

$Class* MXBeanProxy$GetHandler::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
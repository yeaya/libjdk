#include <com/sun/jmx/mbeanserver/MXBeanProxy$SetHandler.h>
#include <com/sun/jmx/mbeanserver/ConvertingMethod.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy$Handler.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy.h>
#include <java/lang/AssertionError.h>
#include <javax/management/Attribute.h>
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
using $Attribute = ::javax::management::Attribute;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

bool MXBeanProxy$SetHandler::$assertionsDisabled = false;

void MXBeanProxy$SetHandler::init$($String* attributeName, $ConvertingMethod* cm) {
	$MXBeanProxy$Handler::init$(attributeName, cm);
}

$Object* MXBeanProxy$SetHandler::invoke($MBeanServerConnection* mbsc, $ObjectName* name, $ObjectArray* args) {
	$useLocalObjectStack();
	if (!MXBeanProxy$SetHandler::$assertionsDisabled && !($nc(args)->length == 1)) {
		$throwNew($AssertionError);
	}
	$var($Attribute, attr, $new($Attribute, $(getName()), $nc(args)->get(0)));
	$nc(mbsc)->setAttribute(name, attr);
	return nullptr;
}

void MXBeanProxy$SetHandler::clinit$($Class* clazz) {
	$load($MXBeanProxy);
	MXBeanProxy$SetHandler::$assertionsDisabled = !$MXBeanProxy::class$->desiredAssertionStatus();
}

MXBeanProxy$SetHandler::MXBeanProxy$SetHandler() {
}

$Class* MXBeanProxy$SetHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(MXBeanProxy$SetHandler, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;Lcom/sun/jmx/mbeanserver/ConvertingMethod;)V", nullptr, 0, $method(MXBeanProxy$SetHandler, init$, void, $String*, $ConvertingMethod*)},
		{"invoke", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, 0, $virtualMethod(MXBeanProxy$SetHandler, invoke, $Object*, $MBeanServerConnection*, $ObjectName*, $ObjectArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.MXBeanProxy$SetHandler", "com.sun.jmx.mbeanserver.MXBeanProxy", "SetHandler", $PRIVATE | $STATIC},
		{"com.sun.jmx.mbeanserver.MXBeanProxy$Handler", "com.sun.jmx.mbeanserver.MXBeanProxy", "Handler", $PRIVATE | $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.MXBeanProxy$SetHandler",
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
	$loadClass(MXBeanProxy$SetHandler, name, initialize, &classInfo$$, MXBeanProxy$SetHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(MXBeanProxy$SetHandler);
	});
	return class$;
}

$Class* MXBeanProxy$SetHandler::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
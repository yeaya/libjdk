#include <com/sun/jmx/mbeanserver/MXBeanProxy.h>
#include <com/sun/jmx/mbeanserver/ConvertingMethod.h>
#include <com/sun/jmx/mbeanserver/MBeanAnalyzer.h>
#include <com/sun/jmx/mbeanserver/MXBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/MXBeanLookup.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy$Handler.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy$Visitor.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <javax/management/MBeanServerConnection.h>
#include <javax/management/NotCompliantMBeanException.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ConvertingMethod = ::com::sun::jmx::mbeanserver::ConvertingMethod;
using $MBeanAnalyzer = ::com::sun::jmx::mbeanserver::MBeanAnalyzer;
using $MXBeanIntrospector = ::com::sun::jmx::mbeanserver::MXBeanIntrospector;
using $MXBeanLookup = ::com::sun::jmx::mbeanserver::MXBeanLookup;
using $MXBeanProxy$Handler = ::com::sun::jmx::mbeanserver::MXBeanProxy$Handler;
using $MXBeanProxy$Visitor = ::com::sun::jmx::mbeanserver::MXBeanProxy$Visitor;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $MBeanServerConnection = ::javax::management::MBeanServerConnection;
using $NotCompliantMBeanException = ::javax::management::NotCompliantMBeanException;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void MXBeanProxy::init$($Class* mxbeanInterface) {
	$useLocalObjectStack();
	$set(this, handlerMap, $Util::newMap());
	if (mxbeanInterface == nullptr) {
		$throwNew($IllegalArgumentException, "Null parameter"_s);
	}
	$var($MBeanAnalyzer, analyzer, nullptr);
	try {
		$assign(analyzer, $$nc($MXBeanIntrospector::getInstance())->getAnalyzer(mxbeanInterface));
	} catch ($NotCompliantMBeanException& e) {
		$throwNew($IllegalArgumentException, e);
	}
	$nc(analyzer)->visit($$new($MXBeanProxy$Visitor, this));
}

$Object* MXBeanProxy::invoke($MBeanServerConnection* mbsc, $ObjectName* name, $Method* method, $ObjectArray* args) {
	$useLocalObjectStack();
	$var($MXBeanProxy$Handler, handler, $cast($MXBeanProxy$Handler, $nc(this->handlerMap)->get(method)));
	$var($ConvertingMethod, cm, $nc(handler)->getConvertingMethod());
	$var($MXBeanLookup, lookup, $MXBeanLookup::lookupFor(mbsc));
	$var($MXBeanLookup, oldLookup, $MXBeanLookup::getLookup());
	$var($Throwable, var$0, nullptr);
	$var($Object, var$2, nullptr);
	bool return$1 = false;
	try {
		$MXBeanLookup::setLookup(lookup);
		$var($ObjectArray, openArgs, $nc(cm)->toOpenParameters(lookup, args));
		$var($Object, result, handler->invoke(mbsc, name, openArgs));
		$assign(var$2, cm->fromOpenReturnValue(lookup, result));
		return$1 = true;
		goto $finally;
	} catch ($Throwable& var$3) {
		$assign(var$0, var$3);
	} $finally: {
		$MXBeanLookup::setLookup(oldLookup);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
	if (return$1) {
		return var$2;
	}
	$shouldNotReachHere();
}

MXBeanProxy::MXBeanProxy() {
}

$Class* MXBeanProxy::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"handlerMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/reflect/Method;Lcom/sun/jmx/mbeanserver/MXBeanProxy$Handler;>;", $PRIVATE | $FINAL, $field(MXBeanProxy, handlerMap)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Class;)V", "(Ljava/lang/Class<*>;)V", $PUBLIC, $method(MXBeanProxy, init$, void, $Class*)},
		{"invoke", "(Ljavax/management/MBeanServerConnection;Ljavax/management/ObjectName;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MXBeanProxy, invoke, $Object*, $MBeanServerConnection*, $ObjectName*, $Method*, $ObjectArray*), "java.lang.Throwable"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.MXBeanProxy$InvokeHandler", "com.sun.jmx.mbeanserver.MXBeanProxy", "InvokeHandler", $PRIVATE | $STATIC},
		{"com.sun.jmx.mbeanserver.MXBeanProxy$SetHandler", "com.sun.jmx.mbeanserver.MXBeanProxy", "SetHandler", $PRIVATE | $STATIC},
		{"com.sun.jmx.mbeanserver.MXBeanProxy$GetHandler", "com.sun.jmx.mbeanserver.MXBeanProxy", "GetHandler", $PRIVATE | $STATIC},
		{"com.sun.jmx.mbeanserver.MXBeanProxy$Handler", "com.sun.jmx.mbeanserver.MXBeanProxy", "Handler", $PRIVATE | $STATIC | $ABSTRACT},
		{"com.sun.jmx.mbeanserver.MXBeanProxy$Visitor", "com.sun.jmx.mbeanserver.MXBeanProxy", "Visitor", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.jmx.mbeanserver.MXBeanProxy",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.MXBeanProxy$InvokeHandler,com.sun.jmx.mbeanserver.MXBeanProxy$SetHandler,com.sun.jmx.mbeanserver.MXBeanProxy$GetHandler,com.sun.jmx.mbeanserver.MXBeanProxy$Handler,com.sun.jmx.mbeanserver.MXBeanProxy$Visitor"
	};
	$loadClass(MXBeanProxy, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MXBeanProxy);
	});
	return class$;
}

$Class* MXBeanProxy::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
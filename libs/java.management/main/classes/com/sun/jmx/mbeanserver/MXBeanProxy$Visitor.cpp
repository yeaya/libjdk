#include <com/sun/jmx/mbeanserver/MXBeanProxy$Visitor.h>
#include <com/sun/jmx/mbeanserver/ConvertingMethod.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy$GetHandler.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy$InvokeHandler.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy$SetHandler.h>
#include <com/sun/jmx/mbeanserver/MXBeanProxy.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ConvertingMethod = ::com::sun::jmx::mbeanserver::ConvertingMethod;
using $MXBeanProxy = ::com::sun::jmx::mbeanserver::MXBeanProxy;
using $MXBeanProxy$GetHandler = ::com::sun::jmx::mbeanserver::MXBeanProxy$GetHandler;
using $MXBeanProxy$InvokeHandler = ::com::sun::jmx::mbeanserver::MXBeanProxy$InvokeHandler;
using $MXBeanProxy$SetHandler = ::com::sun::jmx::mbeanserver::MXBeanProxy$SetHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

void MXBeanProxy$Visitor::init$($MXBeanProxy* this$0) {
	$set(this, this$0, this$0);
}

void MXBeanProxy$Visitor::visitAttribute($String* attributeName, $ConvertingMethod* getter, $ConvertingMethod* setter) {
	$useLocalObjectStack();
	if (getter != nullptr) {
		getter->checkCallToOpen();
		$var($Method, getterMethod, getter->getMethod());
		$nc(this->this$0->handlerMap)->put(getterMethod, $$new($MXBeanProxy$GetHandler, attributeName, getter));
	}
	if (setter != nullptr) {
		$var($Method, setterMethod, setter->getMethod());
		$nc(this->this$0->handlerMap)->put(setterMethod, $$new($MXBeanProxy$SetHandler, attributeName, setter));
	}
}

void MXBeanProxy$Visitor::visitOperation($String* operationName, $ConvertingMethod* operation) {
	$useLocalObjectStack();
	$nc(operation)->checkCallToOpen();
	$var($Method, operationMethod, operation->getMethod());
	$var($StringArray, sig, operation->getOpenSignature());
	$nc(this->this$0->handlerMap)->put(operationMethod, $$new($MXBeanProxy$InvokeHandler, operationName, sig, operation));
}

void MXBeanProxy$Visitor::visitOperation($String* operationName, Object$* operation) {
	this->visitOperation(operationName, $cast($ConvertingMethod, operation));
}

void MXBeanProxy$Visitor::visitAttribute($String* attributeName, Object$* getter, Object$* setter) {
	this->visitAttribute(attributeName, $cast($ConvertingMethod, getter), $cast($ConvertingMethod, setter));
}

MXBeanProxy$Visitor::MXBeanProxy$Visitor() {
}

$Class* MXBeanProxy$Visitor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/mbeanserver/MXBeanProxy;", nullptr, $FINAL | $SYNTHETIC, $field(MXBeanProxy$Visitor, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/mbeanserver/MXBeanProxy;)V", nullptr, $PRIVATE, $method(MXBeanProxy$Visitor, init$, void, $MXBeanProxy*)},
		{"visitAttribute", "(Ljava/lang/String;Lcom/sun/jmx/mbeanserver/ConvertingMethod;Lcom/sun/jmx/mbeanserver/ConvertingMethod;)V", nullptr, $PUBLIC, $virtualMethod(MXBeanProxy$Visitor, visitAttribute, void, $String*, $ConvertingMethod*, $ConvertingMethod*)},
		{"visitAttribute", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MXBeanProxy$Visitor, visitAttribute, void, $String*, Object$*, Object$*)},
		{"visitOperation", "(Ljava/lang/String;Lcom/sun/jmx/mbeanserver/ConvertingMethod;)V", nullptr, $PUBLIC, $virtualMethod(MXBeanProxy$Visitor, visitOperation, void, $String*, $ConvertingMethod*)},
		{"visitOperation", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, $virtualMethod(MXBeanProxy$Visitor, visitOperation, void, $String*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.MXBeanProxy$Visitor", "com.sun.jmx.mbeanserver.MXBeanProxy", "Visitor", $PRIVATE},
		{"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "MBeanVisitor", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.MXBeanProxy$Visitor",
		"java.lang.Object",
		"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Lcom/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor<Lcom/sun/jmx/mbeanserver/ConvertingMethod;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.MXBeanProxy"
	};
	$loadClass(MXBeanProxy$Visitor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MXBeanProxy$Visitor);
	});
	return class$;
}

$Class* MXBeanProxy$Visitor::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
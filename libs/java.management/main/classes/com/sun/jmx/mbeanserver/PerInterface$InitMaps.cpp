#include <com/sun/jmx/mbeanserver/PerInterface$InitMaps.h>
#include <com/sun/jmx/mbeanserver/MBeanIntrospector.h>
#include <com/sun/jmx/mbeanserver/PerInterface$MethodAndSig.h>
#include <com/sun/jmx/mbeanserver/PerInterface.h>
#include <com/sun/jmx/mbeanserver/Util.h>
#include <java/lang/AssertionError.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $PerInterface = ::com::sun::jmx::mbeanserver::PerInterface;
using $PerInterface$MethodAndSig = ::com::sun::jmx::mbeanserver::PerInterface$MethodAndSig;
using $Util = ::com::sun::jmx::mbeanserver::Util;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace jmx {
			namespace mbeanserver {

bool PerInterface$InitMaps::$assertionsDisabled = false;

void PerInterface$InitMaps::init$($PerInterface* this$0) {
	$set(this, this$0, this$0);
}

void PerInterface$InitMaps::visitAttribute($String* attributeName, Object$* getter, Object$* setter) {
	$useLocalObjectStack();
	if (getter != nullptr) {
		$nc(this->this$0->introspector)->checkMethod(getter);
		$var($Object, old, $nc(this->this$0->getters)->put(attributeName, getter));
		if (!PerInterface$InitMaps::$assertionsDisabled && !(old == nullptr)) {
			$throwNew($AssertionError);
		}
	}
	if (setter != nullptr) {
		$nc(this->this$0->introspector)->checkMethod(setter);
		$var($Object, old, $nc(this->this$0->setters)->put(attributeName, setter));
		if (!PerInterface$InitMaps::$assertionsDisabled && !(old == nullptr)) {
			$throwNew($AssertionError);
		}
	}
}

void PerInterface$InitMaps::visitOperation($String* operationName, Object$* operation) {
	$useLocalObjectStack();
	$nc(this->this$0->introspector)->checkMethod(operation);
	$var($StringArray, sig, this->this$0->introspector->getSignature(operation));
	$var($PerInterface$MethodAndSig, mas, $new($PerInterface$MethodAndSig, this->this$0));
	$set(mas, method, operation);
	$set(mas, signature, sig);
	$var($List, list, $cast($List, $nc(this->this$0->ops)->get(operationName)));
	if (list == nullptr) {
		$assign(list, $Collections::singletonList(mas));
	} else {
		if (list->size() == 1) {
			$assign(list, $Util::newList(list));
		}
		$nc(list)->add(mas);
	}
	this->this$0->ops->put(operationName, list);
}

void PerInterface$InitMaps::clinit$($Class* clazz) {
	$load($PerInterface);
	PerInterface$InitMaps::$assertionsDisabled = !$PerInterface::class$->desiredAssertionStatus();
}

PerInterface$InitMaps::PerInterface$InitMaps() {
}

$Class* PerInterface$InitMaps::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/mbeanserver/PerInterface;", nullptr, $FINAL | $SYNTHETIC, $field(PerInterface$InitMaps, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(PerInterface$InitMaps, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/mbeanserver/PerInterface;)V", nullptr, $PRIVATE, $method(PerInterface$InitMaps, init$, void, $PerInterface*)},
		{"visitAttribute", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;TM;)V", $PUBLIC, $virtualMethod(PerInterface$InitMaps, visitAttribute, void, $String*, Object$*, Object$*)},
		{"visitOperation", "(Ljava/lang/String;Ljava/lang/Object;)V", "(Ljava/lang/String;TM;)V", $PUBLIC, $virtualMethod(PerInterface$InitMaps, visitOperation, void, $String*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.mbeanserver.PerInterface$InitMaps", "com.sun.jmx.mbeanserver.PerInterface", "InitMaps", $PRIVATE},
		{"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor", "com.sun.jmx.mbeanserver.MBeanAnalyzer", "MBeanVisitor", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.mbeanserver.PerInterface$InitMaps",
		"java.lang.Object",
		"com.sun.jmx.mbeanserver.MBeanAnalyzer$MBeanVisitor",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Lcom/sun/jmx/mbeanserver/MBeanAnalyzer$MBeanVisitor<TM;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.mbeanserver.PerInterface"
	};
	$loadClass(PerInterface$InitMaps, name, initialize, &classInfo$$, PerInterface$InitMaps::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PerInterface$InitMaps);
	});
	return class$;
}

$Class* PerInterface$InitMaps::class$ = nullptr;

			} // mbeanserver
		} // jmx
	} // sun
} // com
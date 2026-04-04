#include <java/beans/EventHandler$1.h>
#include <java/beans/EventHandler.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $EventHandler = ::java::beans::EventHandler;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;

namespace java {
	namespace beans {

void EventHandler$1::init$($EventHandler* this$0, Object$* val$proxy, $Method* val$method, $ObjectArray* val$arguments) {
	$set(this, this$0, this$0);
	$set(this, val$proxy, val$proxy);
	$set(this, val$method, val$method);
	$set(this, val$arguments, val$arguments);
}

$Object* EventHandler$1::run() {
	return this->this$0->invokeInternal(this->val$proxy, this->val$method, this->val$arguments);
}

EventHandler$1::EventHandler$1() {
}

$Class* EventHandler$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/beans/EventHandler;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$1, this$0)},
		{"val$arguments", "[Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$1, val$arguments)},
		{"val$method", "Ljava/lang/reflect/Method;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$1, val$method)},
		{"val$proxy", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(EventHandler$1, val$proxy)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/beans/EventHandler;Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)V", "()V", 0, $method(EventHandler$1, init$, void, $EventHandler*, Object$*, $Method*, $ObjectArray*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(EventHandler$1, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.beans.EventHandler",
		"invoke",
		"(Ljava/lang/Object;Ljava/lang/reflect/Method;[Ljava/lang/Object;)Ljava/lang/Object;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.beans.EventHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.beans.EventHandler$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Object;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.beans.EventHandler"
	};
	$loadClass(EventHandler$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventHandler$1);
	});
	return class$;
}

$Class* EventHandler$1::class$ = nullptr;

	} // beans
} // java
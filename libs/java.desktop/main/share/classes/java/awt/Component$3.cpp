#include <java/awt/Component$3.h>
#include <java/awt/Component.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Component$3::init$($Component* this$0, $Class* val$clazz) {
	$set(this, this$0, this$0);
	$set(this, val$clazz, val$clazz);
}

$Object* Component$3::run() {
	return $of($Boolean::valueOf($Component::isCoalesceEventsOverriden(this->val$clazz)));
}

Component$3::Component$3() {
}

$Class* Component$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$3, this$0)},
		{"val$clazz", "Ljava/lang/Class;", nullptr, $FINAL | $SYNTHETIC, $field(Component$3, val$clazz)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;Ljava/lang/Class;)V", "()V", 0, $method(Component$3, init$, void, $Component*, $Class*)},
		{"run", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(Component$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Component",
		"checkCoalescing",
		"()Z"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Component$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Component$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Boolean;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Component"
	};
	$loadClass(Component$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Component$3);
	});
	return class$;
}

$Class* Component$3::class$ = nullptr;

	} // awt
} // java
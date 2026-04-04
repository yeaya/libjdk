#include <java/awt/Component$2.h>
#include <java/awt/Component.h>
#include <java/awt/MouseInfo.h>
#include <java/awt/PointerInfo.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $MouseInfo = ::java::awt::MouseInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Component$2::init$($Component* this$0) {
	$set(this, this$0, this$0);
}

$Object* Component$2::run() {
	return $MouseInfo::getPointerInfo();
}

Component$2::Component$2() {
}

$Class* Component$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(Component$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;)V", nullptr, 0, $method(Component$2, init$, void, $Component*)},
		{"run", "()Ljava/awt/PointerInfo;", nullptr, $PUBLIC, $virtualMethod(Component$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Component",
		"getMousePosition",
		"()Ljava/awt/Point;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Component$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Component$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/awt/PointerInfo;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.Component"
	};
	$loadClass(Component$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Component$2);
	});
	return class$;
}

$Class* Component$2::class$ = nullptr;

	} // awt
} // java
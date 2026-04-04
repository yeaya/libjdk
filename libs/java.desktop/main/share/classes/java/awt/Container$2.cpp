#include <java/awt/Container$2.h>
#include <java/awt/Container.h>
#include <java/awt/MouseInfo.h>
#include <java/awt/PointerInfo.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $MouseInfo = ::java::awt::MouseInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void Container$2::init$($Container* this$0) {
	$set(this, this$0, this$0);
}

$Object* Container$2::run() {
	return $MouseInfo::getPointerInfo();
}

Container$2::Container$2() {
}

$Class* Container$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/Container;", nullptr, $FINAL | $SYNTHETIC, $field(Container$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Container;)V", nullptr, 0, $method(Container$2, init$, void, $Container*)},
		{"run", "()Ljava/awt/PointerInfo;", nullptr, $PUBLIC, $virtualMethod(Container$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.Container",
		"getMousePosition",
		"(Z)Ljava/awt/Point;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Container$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.Container$2",
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
		"java.awt.Container"
	};
	$loadClass(Container$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Container$2);
	});
	return class$;
}

$Class* Container$2::class$ = nullptr;

	} // awt
} // java
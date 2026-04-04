#include <java/awt/KeyboardFocusManager$2.h>
#include <java/awt/KeyboardFocusManager.h>
#include <jcpp.h>

using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void KeyboardFocusManager$2::init$($KeyboardFocusManager* this$0) {
	$set(this, this$0, this$0);
}

$Object* KeyboardFocusManager$2::run() {
	this->this$0->clearGlobalFocusOwner();
	return nullptr;
}

KeyboardFocusManager$2::KeyboardFocusManager$2() {
}

$Class* KeyboardFocusManager$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/KeyboardFocusManager;", nullptr, $FINAL | $SYNTHETIC, $field(KeyboardFocusManager$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/KeyboardFocusManager;)V", nullptr, 0, $method(KeyboardFocusManager$2, init$, void, $KeyboardFocusManager*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$2, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.KeyboardFocusManager",
		"clearGlobalFocusOwnerPriv",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.KeyboardFocusManager$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.KeyboardFocusManager$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.KeyboardFocusManager"
	};
	$loadClass(KeyboardFocusManager$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyboardFocusManager$2);
	});
	return class$;
}

$Class* KeyboardFocusManager$2::class$ = nullptr;

	} // awt
} // java
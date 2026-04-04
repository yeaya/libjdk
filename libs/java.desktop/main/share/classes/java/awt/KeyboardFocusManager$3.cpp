#include <java/awt/KeyboardFocusManager$3.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

void KeyboardFocusManager$3::init$($KeyboardFocusManager* this$0, $Container* val$newFocusCycleRoot) {
	$set(this, this$0, this$0);
	$set(this, val$newFocusCycleRoot, val$newFocusCycleRoot);
}

$Object* KeyboardFocusManager$3::run() {
	this->this$0->setGlobalCurrentFocusCycleRoot(this->val$newFocusCycleRoot);
	return nullptr;
}

KeyboardFocusManager$3::KeyboardFocusManager$3() {
}

$Class* KeyboardFocusManager$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljava/awt/KeyboardFocusManager;", nullptr, $FINAL | $SYNTHETIC, $field(KeyboardFocusManager$3, this$0)},
		{"val$newFocusCycleRoot", "Ljava/awt/Container;", nullptr, $FINAL | $SYNTHETIC, $field(KeyboardFocusManager$3, val$newFocusCycleRoot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/KeyboardFocusManager;Ljava/awt/Container;)V", "()V", 0, $method(KeyboardFocusManager$3, init$, void, $KeyboardFocusManager*, $Container*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(KeyboardFocusManager$3, run, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.KeyboardFocusManager",
		"setGlobalCurrentFocusCycleRootPriv",
		"(Ljava/awt/Container;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.KeyboardFocusManager$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.KeyboardFocusManager$3",
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
	$loadClass(KeyboardFocusManager$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(KeyboardFocusManager$3);
	});
	return class$;
}

$Class* KeyboardFocusManager$3::class$ = nullptr;

	} // awt
} // java
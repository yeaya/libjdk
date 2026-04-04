#include <FocusTraversal$3.h>
#include <FocusTraversal.h>
#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Window.h>
#include <javax/swing/FocusManager.h>
#include <javax/swing/JFrame.h>
#include <jcpp.h>

using $FocusTraversal = ::FocusTraversal;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $FocusManager = ::javax::swing::FocusManager;

void FocusTraversal$3::init$($Component* val$queriedFocusOwner, $String* val$direction) {
	$set(this, val$queriedFocusOwner, val$queriedFocusOwner);
	$set(this, val$direction, val$direction);
}

void FocusTraversal$3::run() {
	$useLocalObjectStack();
	$var($Component, actualFocusOwner, $$nc($FocusManager::getCurrentManager())->getFocusOwner());
	if (actualFocusOwner != this->val$queriedFocusOwner) {
		$init($FocusTraversal);
		$nc($FocusTraversal::frame)->dispose();
		$throwNew($RuntimeException, $$str({"Focus component is wrong after "_s, this->val$direction, " direction "_s}));
	}
}

FocusTraversal$3::FocusTraversal$3() {
}

$Class* FocusTraversal$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$direction", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(FocusTraversal$3, val$direction)},
		{"val$queriedFocusOwner", "Ljava/awt/Component;", nullptr, $FINAL | $SYNTHETIC, $field(FocusTraversal$3, val$queriedFocusOwner)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Component;Ljava/lang/String;)V", "()V", 0, $method(FocusTraversal$3, init$, void, $Component*, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FocusTraversal$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"FocusTraversal",
		"isFocusOwner",
		"(Ljava/awt/Component;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FocusTraversal$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"FocusTraversal$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"FocusTraversal"
	};
	$loadClass(FocusTraversal$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FocusTraversal$3);
	});
	return class$;
}

$Class* FocusTraversal$3::class$ = nullptr;
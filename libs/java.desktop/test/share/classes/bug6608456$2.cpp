#include <bug6608456$2.h>
#include <bug6608456.h>
#include <java/awt/Component.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

void bug6608456$2::init$($JComponent* val$component) {
	$set(this, val$component, val$component);
}

$Object* bug6608456$2::call() {
	$nc(this->val$component)->repaint();
	return nullptr;
}

bug6608456$2::bug6608456$2() {
}

$Class* bug6608456$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$component", "Ljavax/swing/JComponent;", nullptr, $FINAL | $SYNTHETIC, $field(bug6608456$2, val$component)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent;)V", "()V", 0, $method(bug6608456$2, init$, void, $JComponent*)},
		{"call", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(bug6608456$2, call, $Object*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6608456",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6608456$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6608456$2",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/util/concurrent/Callable<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6608456"
	};
	$loadClass(bug6608456$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6608456$2);
	});
	return class$;
}

$Class* bug6608456$2::class$ = nullptr;
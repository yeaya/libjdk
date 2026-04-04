#include <bug6994419$1.h>
#include <bug6994419$1$1.h>
#include <bug6994419.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JLayer.h>
#include <jcpp.h>

using $bug6994419$1$1 = ::bug6994419$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JButton = ::javax::swing::JButton;
using $JLayer = ::javax::swing::JLayer;

void bug6994419$1::init$() {
}

void bug6994419$1::run() {
	$useLocalObjectStack();
	$var($JLayer, l, $new($JLayer, $$new($JButton)));
	l->removeAll();
	l->addPropertyChangeListener($$new($bug6994419$1$1, this));
	l->removeAll();
}

bug6994419$1::bug6994419$1() {
}

$Class* bug6994419$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6994419$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6994419$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6994419",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6994419$1", nullptr, nullptr, 0},
		{"bug6994419$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6994419$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6994419"
	};
	$loadClass(bug6994419$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6994419$1);
	});
	return class$;
}

$Class* bug6994419$1::class$ = nullptr;
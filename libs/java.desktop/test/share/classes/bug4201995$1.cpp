#include <bug4201995$1.h>
#include <bug4201995.h>
#include <java/lang/CharSequence.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JSplitPane = ::javax::swing::JSplitPane;
using $UIManager = ::javax::swing::UIManager;

void bug4201995$1::init$() {
}

void bug4201995$1::run() {
	$useLocalObjectStack();
	bool var$0 = "Nimbus"_s->equals($($$nc($UIManager::getLookAndFeel())->getName()));
	bool expectedOpaqueValue = !(var$0 || $$nc($$nc($UIManager::getLookAndFeel())->getName())->contains("GTK"_s));
	$var($JSplitPane, sp, $new($JSplitPane));
	$nc($System::out)->println($$str({"sp.isOpaque "_s, $$str(sp->isOpaque())}));
	if (sp->isOpaque() != expectedOpaqueValue) {
		$throwNew($RuntimeException, "JSplitPane has incorrect default opaque value"_s);
	}
}

bug4201995$1::bug4201995$1() {
}

$Class* bug4201995$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4201995$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4201995$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4201995",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4201995$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4201995$1",
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
		"bug4201995"
	};
	$loadClass(bug4201995$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4201995$1);
	});
	return class$;
}

$Class* bug4201995$1::class$ = nullptr;
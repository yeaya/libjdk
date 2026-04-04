#include <bug7049024$2.h>
#include <bug7049024.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JTextField.h>
#include <jcpp.h>

using $bug7049024 = ::bug7049024;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug7049024$2::init$() {
}

void bug7049024$2::run() {
	$init($bug7049024);
	$nc($bug7049024::textField)->requestFocusInWindow();
}

bug7049024$2::bug7049024$2() {
}

$Class* bug7049024$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7049024$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7049024$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7049024",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7049024$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7049024$2",
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
		"bug7049024"
	};
	$loadClass(bug7049024$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7049024$2);
	});
	return class$;
}

$Class* bug7049024$2::class$ = nullptr;
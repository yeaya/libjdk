#include <bug7049024$3.h>
#include <bug7049024.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/DefaultCaret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug7049024 = ::bug7049024;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

void bug7049024$3::init$() {
}

void bug7049024$3::run() {
	$init($bug7049024);
	$assignStatic($bug7049024::caret, $cast($DefaultCaret, $nc($bug7049024::textField)->getCaret()));
	$nc($bug7049024::caret)->setDot(2);
	$nc($bug7049024::caret)->moveDot(4);
}

bug7049024$3::bug7049024$3() {
}

$Class* bug7049024$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7049024$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7049024$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7049024",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7049024$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7049024$3",
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
	$loadClass(bug7049024$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7049024$3);
	});
	return class$;
}

$Class* bug7049024$3::class$ = nullptr;
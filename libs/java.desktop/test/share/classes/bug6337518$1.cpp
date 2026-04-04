#include <bug6337518$1.h>
#include <bug6337518.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <jcpp.h>

using $bug6337518 = ::bug6337518;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;

void bug6337518$1::init$() {
}

void bug6337518$1::run() {
	$useLocalObjectStack();
	$var($JComboBox, comboBox, $new($JComboBox));
	comboBox->setUI($$new($bug6337518));
}

bug6337518$1::bug6337518$1() {
}

$Class* bug6337518$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6337518$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6337518$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6337518",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6337518$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6337518$1",
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
		"bug6337518"
	};
	$loadClass(bug6337518$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6337518$1);
	});
	return class$;
}

$Class* bug6337518$1::class$ = nullptr;
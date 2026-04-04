#include <bug6406264$3.h>
#include <bug6406264.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $bug6406264 = ::bug6406264;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;

void bug6406264$3::init$() {
}

void bug6406264$3::run() {
	$init($bug6406264);
	if ($$sure($ComboBoxUI, $nc($bug6406264::comboBox)->getUI())->isPopupVisible($bug6406264::comboBox) == false) {
		$throwNew($RuntimeException, "A focusable popup is not visible in JComboBox!"_s);
	}
}

bug6406264$3::bug6406264$3() {
}

$Class* bug6406264$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6406264$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6406264$3, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6406264",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6406264$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6406264$3",
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
		"bug6406264"
	};
	$loadClass(bug6406264$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6406264$3);
	});
	return class$;
}

$Class* bug6406264$3::class$ = nullptr;
#include <bug6924059$1$1.h>
#include <bug6924059$1.h>
#include <bug6924059.h>
#include <javax/swing/plaf/synth/SynthScrollBarUI.h>
#include <jcpp.h>

using $bug6924059 = ::bug6924059;
using $bug6924059$1 = ::bug6924059$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthScrollBarUI = ::javax::swing::plaf::synth::SynthScrollBarUI;

void bug6924059$1$1::init$($bug6924059$1* this$0) {
	$set(this, this$0, this$0);
	$SynthScrollBarUI::init$();
}

void bug6924059$1$1::configureScrollBarColors() {
	$SynthScrollBarUI::configureScrollBarColors();
	$init($bug6924059);
	$bug6924059::isMethodCalled = true;
}

bug6924059$1$1::bug6924059$1$1() {
}

$Class* bug6924059$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6924059$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug6924059$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6924059$1;)V", nullptr, 0, $method(bug6924059$1$1, init$, void, $bug6924059$1*)},
		{"configureScrollBarColors", "()V", nullptr, $PROTECTED, $virtualMethod(bug6924059$1$1, configureScrollBarColors, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6924059$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6924059$1", nullptr, nullptr, 0},
		{"bug6924059$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6924059$1$1",
		"javax.swing.plaf.synth.SynthScrollBarUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6924059"
	};
	$loadClass(bug6924059$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6924059$1$1));
	});
	return class$;
}

$Class* bug6924059$1$1::class$ = nullptr;
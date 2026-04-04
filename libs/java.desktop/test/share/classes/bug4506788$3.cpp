#include <bug4506788$3.h>
#include <bug4506788.h>
#include <javax/swing/event/CaretEvent.h>
#include <jcpp.h>

using $bug4506788 = ::bug4506788;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CaretEvent = ::javax::swing::event::CaretEvent;

void bug4506788$3::init$($bug4506788* this$0) {
	$set(this, this$0, this$0);
}

void bug4506788$3::caretUpdate($CaretEvent* e) {
	this->this$0->passed = ($nc(e)->getDot() == 3);
}

bug4506788$3::bug4506788$3() {
}

$Class* bug4506788$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4506788;", nullptr, $FINAL | $SYNTHETIC, $field(bug4506788$3, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4506788;)V", nullptr, 0, $method(bug4506788$3, init$, void, $bug4506788*)},
		{"caretUpdate", "(Ljavax/swing/event/CaretEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4506788$3, caretUpdate, void, $CaretEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4506788",
		"createAndShowGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4506788$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4506788$3",
		"java.lang.Object",
		"javax.swing.event.CaretListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4506788"
	};
	$loadClass(bug4506788$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4506788$3);
	});
	return class$;
}

$Class* bug4506788$3::class$ = nullptr;
#include <bug6520101$1.h>
#include <bug6520101.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $bug6520101 = ::bug6520101;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void bug6520101$1::init$($bug6520101* this$0) {
	$set(this, this$0, this$0);
}

void bug6520101$1::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->chooser)->cancelSelection();
}

bug6520101$1::bug6520101$1() {
}

$Class* bug6520101$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6520101;", nullptr, $FINAL | $SYNTHETIC, $field(bug6520101$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6520101;)V", nullptr, 0, $method(bug6520101$1, init$, void, $bug6520101*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6520101$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6520101",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6520101$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6520101$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6520101"
	};
	$loadClass(bug6520101$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6520101$1);
	});
	return class$;
}

$Class* bug6520101$1::class$ = nullptr;
#include <bug6348946$Editor$1.h>
#include <bug6348946$Editor.h>
#include <bug6348946.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/event/ChangeEvent.h>
#include <jcpp.h>

using $bug6348946 = ::bug6348946;
using $bug6348946$Editor = ::bug6348946$Editor;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeEvent = ::javax::swing::event::ChangeEvent;

void bug6348946$Editor$1::init$($bug6348946$Editor* this$0) {
	$set(this, this$0, this$0);
}

void bug6348946$Editor$1::stateChanged($ChangeEvent* e) {
	if (!$nc(this->this$0->slider)->getValueIsAdjusting()) {
		$init($bug6348946);
		$bug6348946::passed = $nc(this->this$0->slider)->getValue() <= 5;
	}
}

bug6348946$Editor$1::bug6348946$Editor$1() {
}

$Class* bug6348946$Editor$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug6348946$Editor;", nullptr, $FINAL | $SYNTHETIC, $field(bug6348946$Editor$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug6348946$Editor;)V", nullptr, 0, $method(bug6348946$Editor$1, init$, void, $bug6348946$Editor*)},
		{"stateChanged", "(Ljavax/swing/event/ChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6348946$Editor$1, stateChanged, void, $ChangeEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6348946$Editor",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6348946$Editor", "bug6348946", "Editor", $PRIVATE | $STATIC},
		{"bug6348946$Editor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6348946$Editor$1",
		"java.lang.Object",
		"javax.swing.event.ChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6348946"
	};
	$loadClass(bug6348946$Editor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6348946$Editor$1);
	});
	return class$;
}

$Class* bug6348946$Editor$1::class$ = nullptr;
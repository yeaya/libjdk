#include <bug4743225$1.h>
#include <bug4743225.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/event/PopupMenuEvent.h>
#include <jcpp.h>

using $bug4743225 = ::bug4743225;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PopupMenuEvent = ::javax::swing::event::PopupMenuEvent;

void bug4743225$1::init$($bug4743225* this$0) {
	$set(this, this$0, this$0);
}

void bug4743225$1::popupMenuWillBecomeVisible($PopupMenuEvent* e) {
	$init($bug4743225);
	$nc($bug4743225::cb)->addItem("Test"_s);
}

void bug4743225$1::popupMenuWillBecomeInvisible($PopupMenuEvent* e) {
}

void bug4743225$1::popupMenuCanceled($PopupMenuEvent* e) {
}

bug4743225$1::bug4743225$1() {
}

$Class* bug4743225$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4743225;", nullptr, $FINAL | $SYNTHETIC, $field(bug4743225$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4743225;)V", nullptr, 0, $method(bug4743225$1, init$, void, $bug4743225*)},
		{"popupMenuCanceled", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4743225$1, popupMenuCanceled, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeInvisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4743225$1, popupMenuWillBecomeInvisible, void, $PopupMenuEvent*)},
		{"popupMenuWillBecomeVisible", "(Ljavax/swing/event/PopupMenuEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4743225$1, popupMenuWillBecomeVisible, void, $PopupMenuEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4743225",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4743225$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4743225$1",
		"java.lang.Object",
		"javax.swing.event.PopupMenuListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4743225"
	};
	$loadClass(bug4743225$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4743225$1);
	});
	return class$;
}

$Class* bug4743225$1::class$ = nullptr;
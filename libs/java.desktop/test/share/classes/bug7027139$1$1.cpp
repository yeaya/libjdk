#include <bug7027139$1$1.h>
#include <bug7027139$1.h>
#include <javax/swing/event/ListSelectionEvent.h>
#include <jcpp.h>

using $bug7027139$1 = ::bug7027139$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ListSelectionEvent = ::javax::swing::event::ListSelectionEvent;

void bug7027139$1$1::init$($bug7027139$1* this$0) {
	$set(this, this$0, this$0);
}

void bug7027139$1$1::valueChanged($ListSelectionEvent* e) {
	if ($nc(e)->getValueIsAdjusting()) {
		return;
	}
	if (e->getFirstIndex() < 0) {
		$throwNew($RuntimeException, "Test bug7027139 failed"_s);
	}
}

bug7027139$1$1::bug7027139$1$1() {
}

$Class* bug7027139$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug7027139$1;", nullptr, $FINAL | $SYNTHETIC, $field(bug7027139$1$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug7027139$1;)V", nullptr, 0, $method(bug7027139$1$1, init$, void, $bug7027139$1*)},
		{"valueChanged", "(Ljavax/swing/event/ListSelectionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug7027139$1$1, valueChanged, void, $ListSelectionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7027139$1",
		"run",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7027139$1", nullptr, nullptr, 0},
		{"bug7027139$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7027139$1$1",
		"java.lang.Object",
		"javax.swing.event.ListSelectionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7027139"
	};
	$loadClass(bug7027139$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7027139$1$1);
	});
	return class$;
}

$Class* bug7027139$1$1::class$ = nullptr;
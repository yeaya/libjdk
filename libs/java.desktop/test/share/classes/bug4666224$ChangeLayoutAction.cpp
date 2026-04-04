#include <bug4666224$ChangeLayoutAction.h>
#include <bug4666224.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

#undef SCROLL_TAB_LAYOUT
#undef WRAP_TAB_LAYOUT

using $bug4666224 = ::bug4666224;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JTabbedPane = ::javax::swing::JTabbedPane;

void bug4666224$ChangeLayoutAction::init$($bug4666224* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->a = true;
}

void bug4666224$ChangeLayoutAction::actionPerformed($ActionEvent* e) {
	if (this->a) {
		$nc(this->this$0->tabPane)->setTabLayoutPolicy($JTabbedPane::WRAP_TAB_LAYOUT);
		this->a = false;
	} else {
		$nc(this->this$0->tabPane)->setTabLayoutPolicy($JTabbedPane::SCROLL_TAB_LAYOUT);
		this->a = true;
	}
}

bug4666224$ChangeLayoutAction::bug4666224$ChangeLayoutAction() {
}

$Class* bug4666224$ChangeLayoutAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4666224;", nullptr, $FINAL | $SYNTHETIC, $field(bug4666224$ChangeLayoutAction, this$0)},
		{"a", "Z", nullptr, $PRIVATE, $field(bug4666224$ChangeLayoutAction, a)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4666224;)V", nullptr, $PRIVATE, $method(bug4666224$ChangeLayoutAction, init$, void, $bug4666224*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4666224$ChangeLayoutAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4666224$ChangeLayoutAction", "bug4666224", "ChangeLayoutAction", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4666224$ChangeLayoutAction",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4666224"
	};
	$loadClass(bug4666224$ChangeLayoutAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4666224$ChangeLayoutAction));
	});
	return class$;
}

$Class* bug4666224$ChangeLayoutAction::class$ = nullptr;
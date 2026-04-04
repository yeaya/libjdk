#include <bug4666224$RotateAction.h>
#include <bug4666224.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JTabbedPane.h>
#include <jcpp.h>

using $bug4666224 = ::bug4666224;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;

void bug4666224$RotateAction::init$($bug4666224* this$0, int32_t placement) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
	this->placement = placement;
}

void bug4666224$RotateAction::actionPerformed($ActionEvent* e) {
	$nc(this->this$0->tabPane)->setTabPlacement(this->placement);
}

bug4666224$RotateAction::bug4666224$RotateAction() {
}

$Class* bug4666224$RotateAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4666224;", nullptr, $FINAL | $SYNTHETIC, $field(bug4666224$RotateAction, this$0)},
		{"placement", "I", nullptr, $PRIVATE, $field(bug4666224$RotateAction, placement)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4666224;I)V", nullptr, $PUBLIC, $method(bug4666224$RotateAction, init$, void, $bug4666224*, int32_t)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4666224$RotateAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4666224$RotateAction", "bug4666224", "RotateAction", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4666224$RotateAction",
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
	$loadClass(bug4666224$RotateAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4666224$RotateAction));
	});
	return class$;
}

$Class* bug4666224$RotateAction::class$ = nullptr;
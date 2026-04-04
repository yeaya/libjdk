#include <bug4666224$DumpAction.h>
#include <bug4666224.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JTabbedPane.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TabbedPaneUI.h>
#include <jcpp.h>

using $bug4666224 = ::bug4666224;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $TabbedPaneUI = ::javax::swing::plaf::TabbedPaneUI;

void bug4666224$DumpAction::init$($bug4666224* this$0) {
	$set(this, this$0, this$0);
	$AbstractAction::init$();
}

void bug4666224$DumpAction::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < $nc(this->this$0->tabPane)->getTabCount(); ++i) {
		$nc($System::out)->println($$str({"Tab: "_s, $$str(i), " "_s, $($$sure($TabbedPaneUI, this->this$0->tabPane->getUI())->getTabBounds(this->this$0->tabPane, i))}));
	}
}

bug4666224$DumpAction::bug4666224$DumpAction() {
}

$Class* bug4666224$DumpAction::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug4666224;", nullptr, $FINAL | $SYNTHETIC, $field(bug4666224$DumpAction, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4666224;)V", nullptr, $PRIVATE, $method(bug4666224$DumpAction, init$, void, $bug4666224*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug4666224$DumpAction, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4666224$DumpAction", "bug4666224", "DumpAction", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4666224$DumpAction",
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
	$loadClass(bug4666224$DumpAction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4666224$DumpAction));
	});
	return class$;
}

$Class* bug4666224$DumpAction::class$ = nullptr;
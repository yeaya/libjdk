#include <ActionListenerExceptionTest$4.h>
#include <ActionListenerExceptionTest.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <javax/accessibility/Accessible.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $ActionListenerExceptionTest = ::ActionListenerExceptionTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JPopupMenu = ::javax::swing::JPopupMenu;
using $JScrollPane = ::javax::swing::JScrollPane;
using $ComboBoxUI = ::javax::swing::plaf::ComboBoxUI;

void ActionListenerExceptionTest$4::init$($ActionListenerExceptionTest* this$0) {
	$set(this, this$0, this$0);
}

void ActionListenerExceptionTest$4::run() {
	$useLocalObjectStack();
	$var($Object, comp, $$sure($ComboBoxUI, $nc(this->this$0->combo)->getUI())->getAccessibleChild(this->this$0->combo, 0));
	int32_t i = 0;
	$var($JComponent, scrollPane, nullptr);
	do {
		$assign(scrollPane, $cast($JComponent, $nc($cast($JPopupMenu, comp))->getComponent(i++)));
	} while (!($instanceOf($JScrollPane, scrollPane)));
	this->this$0->menuItemHeight = $nc($($nc(scrollPane)->getSize()))->height / 3;
	this->this$0->yPos = $nc($(scrollPane->getLocationOnScreen()))->y + this->this$0->menuItemHeight / 2;
}

ActionListenerExceptionTest$4::ActionListenerExceptionTest$4() {
}

$Class* ActionListenerExceptionTest$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LActionListenerExceptionTest;", nullptr, $FINAL | $SYNTHETIC, $field(ActionListenerExceptionTest$4, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LActionListenerExceptionTest;)V", nullptr, 0, $method(ActionListenerExceptionTest$4, init$, void, $ActionListenerExceptionTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ActionListenerExceptionTest$4, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"ActionListenerExceptionTest",
		"test",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ActionListenerExceptionTest$4", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"ActionListenerExceptionTest$4",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"ActionListenerExceptionTest"
	};
	$loadClass(ActionListenerExceptionTest$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ActionListenerExceptionTest$4);
	});
	return class$;
}

$Class* ActionListenerExceptionTest$4::class$ = nullptr;
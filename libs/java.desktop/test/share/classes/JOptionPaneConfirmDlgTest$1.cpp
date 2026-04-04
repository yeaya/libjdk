#include <JOptionPaneConfirmDlgTest$1.h>
#include <JOptionPaneConfirmDlgTest.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

using $JOptionPaneConfirmDlgTest = ::JOptionPaneConfirmDlgTest;
using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;

void JOptionPaneConfirmDlgTest$1::init$($JOptionPaneConfirmDlgTest* this$0) {
	$set(this, this$0, this$0);
}

void JOptionPaneConfirmDlgTest$1::actionPerformed($ActionEvent* e) {
	$JOptionPane::showInternalConfirmDialog(nullptr, "Test?"_s);
}

JOptionPaneConfirmDlgTest$1::JOptionPaneConfirmDlgTest$1() {
}

$Class* JOptionPaneConfirmDlgTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LJOptionPaneConfirmDlgTest;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPaneConfirmDlgTest$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJOptionPaneConfirmDlgTest;)V", nullptr, 0, $method(JOptionPaneConfirmDlgTest$1, init$, void, $JOptionPaneConfirmDlgTest*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPaneConfirmDlgTest$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JOptionPaneConfirmDlgTest",
		"createGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JOptionPaneConfirmDlgTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JOptionPaneConfirmDlgTest$1",
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
		"JOptionPaneConfirmDlgTest"
	};
	$loadClass(JOptionPaneConfirmDlgTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JOptionPaneConfirmDlgTest$1);
	});
	return class$;
}

$Class* JOptionPaneConfirmDlgTest$1::class$ = nullptr;
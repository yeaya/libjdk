#include <JOptionPaneConfirmDlgTest$2.h>
#include <JOptionPaneConfirmDlgTest.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JOptionPane.h>
#include <jcpp.h>

using $JOptionPaneConfirmDlgTest = ::JOptionPaneConfirmDlgTest;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JOptionPane = ::javax::swing::JOptionPane;

void JOptionPaneConfirmDlgTest$2::init$($JOptionPaneConfirmDlgTest* this$0) {
	$set(this, this$0, this$0);
}

void JOptionPaneConfirmDlgTest$2::actionPerformed($ActionEvent* e) {
	$JOptionPane::showInternalConfirmDialog($$new($JInternalFrame), "Test?"_s);
}

JOptionPaneConfirmDlgTest$2::JOptionPaneConfirmDlgTest$2() {
}

$Class* JOptionPaneConfirmDlgTest$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LJOptionPaneConfirmDlgTest;", nullptr, $FINAL | $SYNTHETIC, $field(JOptionPaneConfirmDlgTest$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LJOptionPaneConfirmDlgTest;)V", nullptr, 0, $method(JOptionPaneConfirmDlgTest$2, init$, void, $JOptionPaneConfirmDlgTest*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(JOptionPaneConfirmDlgTest$2, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"JOptionPaneConfirmDlgTest",
		"createGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JOptionPaneConfirmDlgTest$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"JOptionPaneConfirmDlgTest$2",
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
	$loadClass(JOptionPaneConfirmDlgTest$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JOptionPaneConfirmDlgTest$2);
	});
	return class$;
}

$Class* JOptionPaneConfirmDlgTest$2::class$ = nullptr;
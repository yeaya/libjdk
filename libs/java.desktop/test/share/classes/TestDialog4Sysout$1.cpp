#include <TestDialog4Sysout$1.h>
#include <JFileChooserCombolistSelection.h>
#include <TestDialog4Sysout.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $JFileChooserCombolistSelection = ::JFileChooserCombolistSelection;
using $TestDialog4Sysout = ::TestDialog4Sysout;
using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;

void TestDialog4Sysout$1::init$($TestDialog4Sysout* this$0) {
	$set(this, this$0, this$0);
}

void TestDialog4Sysout$1::actionPerformed($ActionEvent* ae) {
	$init($JFileChooserCombolistSelection);
	$assignStatic($JFileChooserCombolistSelection::fileChooser, $new($JFileChooser));
	$JFileChooserCombolistSelection::fileChooser->showOpenDialog(nullptr);
	$nc(this->this$0->passB)->setEnabled(true);
	$nc(this->this$0->failB)->setEnabled(true);
}

TestDialog4Sysout$1::TestDialog4Sysout$1() {
}

$Class* TestDialog4Sysout$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestDialog4Sysout;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4Sysout$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestDialog4Sysout;)V", nullptr, 0, $method(TestDialog4Sysout$1, init$, void, $TestDialog4Sysout*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestDialog4Sysout$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestDialog4Sysout",
		"<init>",
		"(Ljavax/swing/JFrame;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestDialog4Sysout$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestDialog4Sysout$1",
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
		"TestDialog4Sysout"
	};
	$loadClass(TestDialog4Sysout$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestDialog4Sysout$1);
	});
	return class$;
}

$Class* TestDialog4Sysout$1::class$ = nullptr;
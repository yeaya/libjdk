#include <TestDialog4FileChooserTest$1.h>
#include <FileChooserTest.h>
#include <TestDialog4FileChooserTest.h>
#include <java/awt/Component.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFileChooser.h>
#include <jcpp.h>

using $FileChooserTest = ::FileChooserTest;
using $TestDialog4FileChooserTest = ::TestDialog4FileChooserTest;
using $Component = ::java::awt::Component;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;

void TestDialog4FileChooserTest$1::init$($TestDialog4FileChooserTest* this$0) {
	$set(this, this$0, this$0);
}

void TestDialog4FileChooserTest$1::actionPerformed($ActionEvent* ae) {
	$init($FileChooserTest);
	$assignStatic($FileChooserTest::fileChooser, $new($JFileChooser));
	$FileChooserTest::fileChooser->showOpenDialog(nullptr);
	$nc(this->this$0->passB)->setEnabled(true);
	$nc(this->this$0->failB)->setEnabled(true);
}

TestDialog4FileChooserTest$1::TestDialog4FileChooserTest$1() {
}

$Class* TestDialog4FileChooserTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "LTestDialog4FileChooserTest;", nullptr, $FINAL | $SYNTHETIC, $field(TestDialog4FileChooserTest$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LTestDialog4FileChooserTest;)V", nullptr, 0, $method(TestDialog4FileChooserTest$1, init$, void, $TestDialog4FileChooserTest*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestDialog4FileChooserTest$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestDialog4FileChooserTest",
		"<init>",
		"(Ljavax/swing/JFrame;Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestDialog4FileChooserTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestDialog4FileChooserTest$1",
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
		"TestDialog4FileChooserTest"
	};
	$loadClass(TestDialog4FileChooserTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestDialog4FileChooserTest$1);
	});
	return class$;
}

$Class* TestDialog4FileChooserTest$1::class$ = nullptr;
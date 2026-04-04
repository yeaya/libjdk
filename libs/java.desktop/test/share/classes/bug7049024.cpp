#include <bug7049024.h>
#include <bug7049024$1.h>
#include <bug7049024$2.h>
#include <bug7049024$3.h>
#include <bug7049024$4.h>
#include <bug7049024$5.h>
#include <bug7049024$6.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <java/awt/Toolkit.h>
#include <java/awt/datatransfer/Clipboard.h>
#include <java/awt/datatransfer/DataFlavor.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/DefaultCaret.h>
#include <jcpp.h>

using $bug7049024$1 = ::bug7049024$1;
using $bug7049024$2 = ::bug7049024$2;
using $bug7049024$3 = ::bug7049024$3;
using $bug7049024$4 = ::bug7049024$4;
using $bug7049024$5 = ::bug7049024$5;
using $bug7049024$6 = ::bug7049024$6;
using $Robot = ::java::awt::Robot;
using $Clipboard = ::java::awt::datatransfer::Clipboard;
using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultCaret = ::javax::swing::text::DefaultCaret;

$Clipboard* bug7049024::clipboard = nullptr;
$JTextField* bug7049024::textField = nullptr;
$JButton* bug7049024::button = nullptr;
$JFrame* bug7049024::frame = nullptr;
$DefaultCaret* bug7049024::caret = nullptr;

void bug7049024::init$() {
}

void bug7049024::main($StringArray* args) {
	$init(bug7049024);
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($bug7049024$1));
	robot->waitForIdle();
	$assignStatic(bug7049024::clipboard, $$nc($nc(bug7049024::textField)->getToolkit())->getSystemSelection());
	if (nullptr == bug7049024::clipboard) {
		return;
	}
	$SwingUtilities::invokeAndWait($$new($bug7049024$2));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7049024$3));
	robot->waitForIdle();
	$init($DataFlavor);
	$var($String, oldSelection, $cast($String, $nc(bug7049024::clipboard)->getData($DataFlavor::stringFlavor)));
	$nc($System::out)->println($$str({"oldSelection is "_s, oldSelection}));
	$SwingUtilities::invokeAndWait($$new($bug7049024$4));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7049024$5));
	robot->waitForIdle();
	$var($String, newSelection, $cast($String, $nc(bug7049024::clipboard)->getData($DataFlavor::stringFlavor)));
	$System::out->println($$str({"newSelection is "_s, newSelection}));
	bool passed = $nc(newSelection)->equals(oldSelection);
	$SwingUtilities::invokeAndWait($$new($bug7049024$6));
	if (!passed) {
		$throwNew($RuntimeException, "The test for bug 7049024 failed"_s);
	}
}

void bug7049024::clinit$($Class* clazz) {
	$assignStatic(bug7049024::clipboard, nullptr);
	$assignStatic(bug7049024::textField, nullptr);
	$assignStatic(bug7049024::button, nullptr);
	$assignStatic(bug7049024::frame, nullptr);
	$assignStatic(bug7049024::caret, nullptr);
}

bug7049024::bug7049024() {
}

$Class* bug7049024::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"clipboard", "Ljava/awt/datatransfer/Clipboard;", nullptr, $PUBLIC | $STATIC, $staticField(bug7049024, clipboard)},
		{"textField", "Ljavax/swing/JTextField;", nullptr, $PUBLIC | $STATIC, $staticField(bug7049024, textField)},
		{"button", "Ljavax/swing/JButton;", nullptr, $PUBLIC | $STATIC, $staticField(bug7049024, button)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PUBLIC | $STATIC, $staticField(bug7049024, frame)},
		{"caret", "Ljavax/swing/text/DefaultCaret;", nullptr, $PUBLIC | $STATIC, $staticField(bug7049024, caret)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7049024, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7049024, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7049024$6", nullptr, nullptr, 0},
		{"bug7049024$5", nullptr, nullptr, 0},
		{"bug7049024$4", nullptr, nullptr, 0},
		{"bug7049024$3", nullptr, nullptr, 0},
		{"bug7049024$2", nullptr, nullptr, 0},
		{"bug7049024$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7049024",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7049024$6,bug7049024$5,bug7049024$4,bug7049024$3,bug7049024$2,bug7049024$1"
	};
	$loadClass(bug7049024, name, initialize, &classInfo$$, bug7049024::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug7049024);
	});
	return class$;
}

$Class* bug7049024::class$ = nullptr;
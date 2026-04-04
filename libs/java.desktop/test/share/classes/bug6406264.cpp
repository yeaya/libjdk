#include <bug6406264.h>
#include <bug6406264$1.h>
#include <bug6406264$2.h>
#include <bug6406264$3.h>
#include <bug6406264$CustomComboBoxUI.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComboBoxUI.h>
#include <jcpp.h>

using $bug6406264$1 = ::bug6406264$1;
using $bug6406264$2 = ::bug6406264$2;
using $bug6406264$3 = ::bug6406264$3;
using $bug6406264$CustomComboBoxUI = ::bug6406264$CustomComboBoxUI;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$JFrame* bug6406264::frame = nullptr;
bug6406264* bug6406264::comboBox = nullptr;

void bug6406264::main($StringArray* args) {
	$init(bug6406264);
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($bug6406264$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6406264$2));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6406264$3));
	$nc(bug6406264::frame)->dispose();
}

void bug6406264::init$($ObjectArray* items) {
	$JComboBox::init$(items);
}

void bug6406264::updateUI() {
	setUI($$new($bug6406264$CustomComboBoxUI, this));
}

bug6406264::bug6406264() {
}

$Class* bug6406264::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug6406264, frame)},
		{"comboBox", "Lbug6406264;", nullptr, $STATIC, $staticField(bug6406264, comboBox)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT, $method(bug6406264, init$, void, $ObjectArray*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6406264, main, void, $StringArray*), "java.lang.Exception"},
		{"updateUI", "()V", nullptr, $PUBLIC, $virtualMethod(bug6406264, updateUI, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6406264$FocusablePopup", "bug6406264", "FocusablePopup", $PRIVATE},
		{"bug6406264$CustomComboBoxUI", "bug6406264", "CustomComboBoxUI", $PRIVATE},
		{"bug6406264$3", nullptr, nullptr, 0},
		{"bug6406264$2", nullptr, nullptr, 0},
		{"bug6406264$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6406264",
		"javax.swing.JComboBox",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6406264$FocusablePopup,bug6406264$CustomComboBoxUI,bug6406264$3,bug6406264$2,bug6406264$1"
	};
	$loadClass(bug6406264, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6406264));
	});
	return class$;
}

$Class* bug6406264::class$ = nullptr;
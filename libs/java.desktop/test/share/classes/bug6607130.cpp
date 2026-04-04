#include <bug6607130.h>
#include <bug6607130$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/InterruptedException.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTable.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableColumnModel.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_DOWN
#undef VK_ENTER
#undef VK_F2
#undef VK_TAB

using $bug6607130$1 = ::bug6607130$1;
using $Component = ::java::awt::Component;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

void bug6607130::main($StringArray* args) {
	$useLocalObjectStack();
	$var(bug6607130, test, $new(bug6607130));
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($bug6607130$1, test));
		test->test();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (test->frame != nullptr) {
			test->frame->dispose();
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug6607130::init$() {
	$set(this, robot, $new($Robot));
}

void bug6607130::setupUI() {
	$useLocalObjectStack();
	$set(this, frame, $new($JFrame));
	this->frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($DefaultTableModel, model, $new($DefaultTableModel, 1, 1));
	$var($JTable, table, $new($JTable, model));
	$set(this, cb, $new($JComboBox, $$new($StringArray, {
		"one"_s,
		"two"_s,
		"three"_s
	})));
	$$nc($$nc(table->getColumnModel())->getColumn(0))->setCellEditor($$new($DefaultCellEditor, this->cb));
	$nc(this->frame)->add(table);
	$nc(this->frame)->pack();
	$nc(this->frame)->setLocationRelativeTo(nullptr);
	$nc(this->frame)->setVisible(true);
}

void bug6607130::test() {
	$nc(this->robot)->waitForIdle();
	test1();
	$nc(this->robot)->waitForIdle();
	checkResult("First test"_s);
	test2();
	$nc(this->robot)->waitForIdle();
	checkResult("Second test"_s);
}

void bug6607130::test1() {
	hitKey($KeyEvent::VK_TAB);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_F2);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_DOWN);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_DOWN);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_ENTER);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_F2);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_DOWN);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_ENTER);
	$nc(this->robot)->waitForIdle();
}

void bug6607130::test2() {
	hitKey($KeyEvent::VK_F2);
	$nc(this->robot)->waitForIdle();
	hitKey($KeyEvent::VK_ENTER);
	$nc(this->robot)->waitForIdle();
}

void bug6607130::checkResult($String* testName) {
	$useLocalObjectStack();
	if (!$nc(this->cb)->isShowing()) {
		$nc($System::out)->println($$str({testName, " passed"_s}));
	} else {
		$nc($System::out)->println($$str({testName, " failed"_s}));
		$throwNew($RuntimeException, "JComboBox is showing after item selection."_s);
	}
}

void bug6607130::hitKey(int32_t keycode) {
	$nc(this->robot)->keyPress(keycode);
	$nc(this->robot)->keyRelease(keycode);
	delay();
}

void bug6607130::delay() {
	try {
		$Thread::sleep(1000);
	} catch ($InterruptedException& ie) {
		ie->printStackTrace();
	}
}

bug6607130::bug6607130() {
}

$Class* bug6607130::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug6607130, frame)},
		{"cb", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE, $field(bug6607130, cb)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE, $field(bug6607130, robot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6607130, init$, void), "java.awt.AWTException"},
		{"checkResult", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(bug6607130, checkResult, void, $String*)},
		{"delay", "()V", nullptr, $PRIVATE, $method(bug6607130, delay, void)},
		{"hitKey", "(I)V", nullptr, $PUBLIC, $virtualMethod(bug6607130, hitKey, void, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6607130, main, void, $StringArray*), "java.lang.Exception"},
		{"setupUI", "()V", nullptr, $PRIVATE, $method(bug6607130, setupUI, void)},
		{"test", "()V", nullptr, $PRIVATE, $method(bug6607130, test, void), "java.lang.Exception"},
		{"test1", "()V", nullptr, $PRIVATE, $method(bug6607130, test1, void), "java.lang.Exception"},
		{"test2", "()V", nullptr, $PRIVATE, $method(bug6607130, test2, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6607130$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6607130",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6607130$1"
	};
	$loadClass(bug6607130, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6607130);
	});
	return class$;
}

$Class* bug6607130::class$ = nullptr;
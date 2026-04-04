#include <bug4275046.h>
#include <bug4275046$1.h>
#include <bug4275046$2.h>
#include <bug4275046$3.h>
#include <bug4275046$4.h>
#include <bug4275046$5.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
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

#undef BUTTON1_DOWN_MASK
#undef EXIT_ON_CLOSE
#undef EXPECTED_VALUE
#undef VK_D
#undef VK_E
#undef VK_I
#undef VK_T

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $bug4275046$1 = ::bug4275046$1;
using $bug4275046$2 = ::bug4275046$2;
using $bug4275046$3 = ::bug4275046$3;
using $bug4275046$4 = ::bug4275046$4;
using $bug4275046$5 = ::bug4275046$5;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;

$StringArray* bug4275046::colNames = nullptr;
$ObjectArray2* bug4275046::data = nullptr;
$String* bug4275046::EXPECTED_VALUE = nullptr;

void bug4275046::main($StringArray* args) {
	$init(bug4275046);
	$var(bug4275046, test, $new(bug4275046));
	test->test();
}

void bug4275046::init$() {
	$set(this, robot, $new($Robot));
	this->robot->setAutoDelay(100);
}

void bug4275046::createGUI() {
	$useLocalObjectStack();
	$set(this, frame, $new($JFrame, "bug4275046"_s));
	this->frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JComboBox, cb, $new($JComboBox, $$new($ObjectArray, {
		"blue"_s,
		"yellow"_s,
		"green"_s,
		"red"_s
	})));
	cb->setEditable(true);
	$var($DefaultCellEditor, comboEditor, $new($DefaultCellEditor, cb));
	comboEditor->setClickCountToStart(1);
	$var($DefaultTableModel, model, $new($DefaultTableModel, bug4275046::data, bug4275046::colNames));
	$set(this, table, $new($JTable, model));
	$$nc($$nc(this->table->getColumnModel())->getColumn(1))->setCellEditor(comboEditor);
	$nc(this->frame)->add(this->table);
	$nc(this->frame)->pack();
	$nc(this->frame)->setSize(550, 400);
	$nc(this->frame)->setVisible(true);
}

void bug4275046::test() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($bug4275046$1, this));
		runTest();
		checkResult();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new($bug4275046$2, this));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug4275046::runTest() {
	$useLocalObjectStack();
	this->robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug4275046$3, this));
	this->robot->mouseMove($nc(this->tableLoc)->x + $nc(this->cellRect)->x + $nc(this->cellRect)->width / 2, $nc(this->tableLoc)->y + $nc(this->cellRect)->y + $nc(this->cellRect)->height / 2);
	this->robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	this->robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	this->robot->waitForIdle();
	this->robot->keyPress($KeyEvent::VK_E);
	this->robot->keyRelease($KeyEvent::VK_E);
	this->robot->keyPress($KeyEvent::VK_D);
	this->robot->keyRelease($KeyEvent::VK_D);
	this->robot->keyPress($KeyEvent::VK_I);
	this->robot->keyRelease($KeyEvent::VK_I);
	this->robot->keyPress($KeyEvent::VK_T);
	this->robot->keyRelease($KeyEvent::VK_T);
	this->robot->keyPress($KeyEvent::VK_E);
	this->robot->keyRelease($KeyEvent::VK_E);
	this->robot->keyPress($KeyEvent::VK_D);
	this->robot->keyRelease($KeyEvent::VK_D);
	this->robot->delay(100);
	$SwingUtilities::invokeAndWait($$new($bug4275046$4, this));
	this->robot->mouseMove($nc(this->tableLoc)->x + $nc(this->cellRect)->x + $nc(this->cellRect)->width / 2, $nc(this->tableLoc)->y + $nc(this->cellRect)->y + $nc(this->cellRect)->height / 2);
	this->robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	this->robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	this->robot->delay(100);
}

void bug4275046::checkResult() {
	$useLocalObjectStack();
	this->robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug4275046$5, this));
	if (!this->testResult) {
		$throwNew($RuntimeException, $$str({"Expected value in the cell: \'"_s, bug4275046::EXPECTED_VALUE, "\' but found \'"_s, this->editedValue, "\'."_s}));
	}
}

void bug4275046::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(bug4275046::EXPECTED_VALUE, "rededited"_s);
	$assignStatic(bug4275046::colNames, $new($StringArray, {
		"ID"_s,
		"Color"_s,
		"Stuff"_s
	}));
	$assignStatic(bug4275046::data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$($Integer::valueOf(1)),
			"red"_s,
			"abc"_s
		}),
		$$new($ObjectArray, {
			$($Integer::valueOf(2)),
			"red"_s,
			"def"_s
		}),
		$$new($ObjectArray, {
			$($Integer::valueOf(3)),
			"red"_s,
			"ghijk"_s
		})
	}));
}

bug4275046::bug4275046() {
}

$Class* bug4275046::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"colNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4275046, colNames)},
		{"data", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4275046, data)},
		{"EXPECTED_VALUE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4275046, EXPECTED_VALUE)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(bug4275046, frame)},
		{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE, $field(bug4275046, table)},
		{"tableLoc", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(bug4275046, tableLoc)},
		{"cellRect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $VOLATILE, $field(bug4275046, cellRect)},
		{"editedValue", "Ljava/lang/Object;", nullptr, $PRIVATE | $VOLATILE, $field(bug4275046, editedValue)},
		{"testResult", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug4275046, testResult)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $FINAL, $field(bug4275046, robot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4275046, init$, void), "java.awt.AWTException"},
		{"checkResult", "()V", nullptr, $PRIVATE, $method(bug4275046, checkResult, void), "java.lang.Exception"},
		{"createGUI", "()V", nullptr, $PRIVATE, $method(bug4275046, createGUI, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4275046, main, void, $StringArray*), "java.lang.Exception"},
		{"runTest", "()V", nullptr, $PRIVATE, $method(bug4275046, runTest, void), "java.lang.Exception"},
		{"test", "()V", nullptr, $PRIVATE, $method(bug4275046, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4275046$5", nullptr, nullptr, 0},
		{"bug4275046$4", nullptr, nullptr, 0},
		{"bug4275046$3", nullptr, nullptr, 0},
		{"bug4275046$2", nullptr, nullptr, 0},
		{"bug4275046$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4275046",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4275046$5,bug4275046$4,bug4275046$3,bug4275046$2,bug4275046$1"
	};
	$loadClass(bug4275046, name, initialize, &classInfo$$, bug4275046::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug4275046);
	});
	return class$;
}

$Class* bug4275046::class$ = nullptr;
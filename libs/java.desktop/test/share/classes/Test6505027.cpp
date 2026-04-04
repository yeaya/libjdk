#include <Test6505027.h>
#include <SwingTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Error.h>
#include <javax/swing/DefaultCellEditor.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/table/DefaultTableModel.h>
#include <javax/swing/table/TableColumn.h>
#include <javax/swing/table/TableModel.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef CENTER
#undef COLUMNS
#undef HEIGHT
#undef INTERNAL
#undef ITEMS
#undef KEY
#undef NORTH
#undef OFFSET
#undef TERMINATE
#undef TRUE
#undef WIDTH

using $SwingTest = ::SwingTest;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultCellEditor = ::javax::swing::DefaultCellEditor;
using $JComboBox = ::javax::swing::JComboBox;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultTableModel = ::javax::swing::table::DefaultTableModel;
using $TableColumn = ::javax::swing::table::TableColumn;

$StringArray* Test6505027::COLUMNS = nullptr;
$StringArray* Test6505027::ITEMS = nullptr;
$String* Test6505027::KEY = nullptr;

void Test6505027::main($StringArray* args) {
	$init(Test6505027);
	$SwingTest::start(Test6505027::class$);
}

void Test6505027::init$($JFrame* main) {
	$useLocalObjectStack();
	$set(this, table, $new($JTable, $$new($DefaultTableModel, Test6505027::COLUMNS, 2)));
	$var($Container, container, main);
	{
		$var($JInternalFrame, frame, $new($JInternalFrame));
		frame->setBounds(Test6505027::OFFSET, Test6505027::OFFSET, Test6505027::WIDTH, Test6505027::HEIGHT);
		frame->setVisible(true);
		$var($JDesktopPane, desktop, $new($JDesktopPane));
		desktop->add(frame, $$new($Integer, 1));
		$nc(container)->add(desktop);
		$assign(container, frame);
	}
	{
		$nc(this->table)->putClientProperty(Test6505027::KEY, $Boolean::TRUE);
	}
	$var($TableColumn, column, this->table->getColumn(Test6505027::COLUMNS->get(1)));
	$nc(column)->setCellEditor($$new($DefaultCellEditor, $$new($JComboBox, Test6505027::ITEMS)));
	$init($BorderLayout);
	container->add($BorderLayout::NORTH, $$new($JTextField));
	container->add($BorderLayout::CENTER, $$new($JScrollPane, this->table));
}

void Test6505027::press() {
	$useLocalObjectStack();
	$var($Point, point, $$nc($nc(this->table)->getCellRect(1, 1, false))->getLocation());
	$SwingUtilities::convertPointToScreen(point, this->table);
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	robot->mouseMove($nc(point)->x + 1, $nc(point)->y + 1);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
}

void Test6505027::validate() {
	$init(Test6505027);
	$useLocalObjectStack();
	$var($Component, component, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner());
	$load($JComboBox);
	if (!$nc($of(component))->getClass()->equals($JComboBox::class$)) {
		$throwNew($Error, $$str({"unexpected focus owner: "_s, component}));
	}
}

void Test6505027::clinit$($Class* clazz) {
	$assignStatic(Test6505027::KEY, "terminateEditOnFocusLost"_s);
	$assignStatic(Test6505027::COLUMNS, $new($StringArray, {
		"Size"_s,
		"Shape"_s
	}));
	$assignStatic(Test6505027::ITEMS, $new($StringArray, {
		"a"_s,
		"b"_s,
		"c"_s,
		"d"_s
	}));
}

Test6505027::Test6505027() {
}

$Class* Test6505027::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"INTERNAL", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6505027, INTERNAL)},
		{"TERMINATE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6505027, TERMINATE)},
		{"WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6505027, WIDTH)},
		{"HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6505027, HEIGHT)},
		{"OFFSET", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6505027, OFFSET)},
		{"COLUMNS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6505027, COLUMNS)},
		{"ITEMS", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6505027, ITEMS)},
		{"KEY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6505027, KEY)},
		{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $FINAL, $field(Test6505027, table)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(Test6505027, init$, void, $JFrame*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6505027, main, void, $StringArray*), "java.lang.Throwable"},
		{"press", "()V", nullptr, $PUBLIC, $virtualMethod(Test6505027, press, void), "java.awt.AWTException"},
		{"validate", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6505027, validate, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6505027",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test6505027, name, initialize, &classInfo$$, Test6505027::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Test6505027);
	});
	return class$;
}

$Class* Test6505027::class$ = nullptr;
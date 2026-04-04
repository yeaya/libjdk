#include <bug8032874.h>
#include <bug8032874$1.h>
#include <bug8032874$2.h>
#include <bug8032874$3.h>
#include <bug8032874$4.h>
#include <bug8032874$TestTableModel.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTable.h>
#include <javax/swing/RowSorter.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/WindowConstants.h>
#include <javax/swing/table/TableModel.h>
#include <javax/swing/table/TableRowSorter.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef ROW_COUNT
#undef Y_AXIS

using $bug8032874$1 = ::bug8032874$1;
using $bug8032874$2 = ::bug8032874$2;
using $bug8032874$3 = ::bug8032874$3;
using $bug8032874$4 = ::bug8032874$4;
using $bug8032874$TestTableModel = ::bug8032874$TestTableModel;
using $Dimension = ::java::awt::Dimension;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTable = ::javax::swing::JTable;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $WindowConstants = ::javax::swing::WindowConstants;
using $TableRowSorter = ::javax::swing::table::TableRowSorter;

$JTable* bug8032874::table = nullptr;
$bug8032874$TestTableModel* bug8032874::tableModel = nullptr;

void bug8032874::init$() {
}

void bug8032874::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	$SwingUtilities::invokeAndWait($$new($bug8032874$1));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug8032874$2));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug8032874$3));
}

void bug8032874::createAndShowUI() {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$var($JFrame, frame, $new($JFrame, "bug8032874"_s));
	frame->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel));
	panel->setLayout($$new($BoxLayout, panel, $BoxLayout::Y_AXIS));
	$init(bug8032874);
	$assignStatic(bug8032874::tableModel, $new($bug8032874$TestTableModel));
	$assignStatic(bug8032874::table, $new($JTable, bug8032874::tableModel));
	bug8032874::table->setSurrendersFocusOnKeystroke(true);
	$var($TableRowSorter, rowSorter, $new($TableRowSorter, bug8032874::tableModel));
	rowSorter->setRowFilter($$new($bug8032874$4));
	$nc(bug8032874::table)->setRowSorter(rowSorter);
	$var($JScrollPane, jScrollPane, $new($JScrollPane, bug8032874::table));
	panel->add(jScrollPane);
	frame->setContentPane(panel);
	frame->setSize($$new($Dimension, 800, 600));
	frame->setVisible(true);
}

bug8032874::bug8032874() {
}

$Class* bug8032874::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ROW_COUNT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug8032874, ROW_COUNT)},
		{"table", "Ljavax/swing/JTable;", nullptr, $PRIVATE | $STATIC, $staticField(bug8032874, table)},
		{"tableModel", "Lbug8032874$TestTableModel;", nullptr, $PRIVATE | $STATIC, $staticField(bug8032874, tableModel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8032874, init$, void)},
		{"createAndShowUI", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8032874, createAndShowUI, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8032874, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8032874$TestTableModel", "bug8032874", "TestTableModel", $PRIVATE | $STATIC},
		{"bug8032874$4", nullptr, nullptr, 0},
		{"bug8032874$3", nullptr, nullptr, 0},
		{"bug8032874$2", nullptr, nullptr, 0},
		{"bug8032874$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8032874",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8032874$TestTableModel,bug8032874$4,bug8032874$3,bug8032874$2,bug8032874$1"
	};
	$loadClass(bug8032874, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8032874);
	});
	return class$;
}

$Class* bug8032874::class$ = nullptr;
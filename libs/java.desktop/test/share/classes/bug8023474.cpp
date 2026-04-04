#include <bug8023474.h>
#include <bug8023474$1.h>
#include <bug8023474$2.h>
#include <bug8023474$CheckboxCellRenderer.h>
#include <bug8023474$Editor.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/TreeCellEditor.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef EXIT_ON_CLOSE

using $PointArray = $Array<::java::awt::Point>;
using $bug8023474$1 = ::bug8023474$1;
using $bug8023474$2 = ::bug8023474$2;
using $bug8023474$CheckboxCellRenderer = ::bug8023474$CheckboxCellRenderer;
using $bug8023474$Editor = ::bug8023474$Editor;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;

$JTree* bug8023474::tree = nullptr;

void bug8023474::init$() {
}

void bug8023474::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(50);
	$SwingUtilities::invokeAndWait($$new($bug8023474$1));
	robot->waitForIdle();
	$var($Point, point, getRowPointToClick(1));
	robot->mouseMove($nc(point)->x, $nc(point)->y);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	robot->waitForIdle();
	$init(bug8023474);
	$var($Boolean, result, $cast($Boolean, $$nc($nc(bug8023474::tree)->getCellEditor())->getCellEditorValue()));
	if (!$nc(result)->booleanValue()) {
		$throwNew($RuntimeException, "Test Failed!"_s);
	}
}

void bug8023474::createAndShowGUI() {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$var($DefaultMutableTreeNode, root, $new($DefaultMutableTreeNode, "root"_s));
	$var($DefaultMutableTreeNode, item, $new($DefaultMutableTreeNode, "item"_s));
	$var($DefaultMutableTreeNode, subItem, $new($DefaultMutableTreeNode, "subItem"_s));
	root->add(item);
	item->add(subItem);
	$var($DefaultTreeModel, model, $new($DefaultTreeModel, root));
	$init(bug8023474);
	$assignStatic(bug8023474::tree, $new($JTree, model));
	bug8023474::tree->setCellEditor($$new($bug8023474$Editor));
	$nc(bug8023474::tree)->setEditable(true);
	$nc(bug8023474::tree)->setRowHeight(30);
	$nc(bug8023474::tree)->setCellRenderer($$new($bug8023474$CheckboxCellRenderer));
	$var($JFrame, frame, $new($JFrame, "bug8023474"_s));
	frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	frame->add($$new($JScrollPane, bug8023474::tree));
	frame->setSize(400, 300);
	frame->setVisible(true);
}

$Point* bug8023474::getRowPointToClick(int32_t row) {
	$useLocalObjectStack();
	$var($PointArray, result, $new($PointArray, 1));
	$SwingUtilities::invokeAndWait($$new($bug8023474$2, row, result));
	return result->get(0);
}

bug8023474::bug8023474() {
}

$Class* bug8023474::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tree", "Ljavax/swing/JTree;", nullptr, $PRIVATE | $STATIC, $staticField(bug8023474, tree)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8023474, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8023474, createAndShowGUI, void)},
		{"getRowPointToClick", "(I)Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8023474, getRowPointToClick, $Point*, int32_t), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8023474, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8023474$CheckboxCellRenderer", "bug8023474", "CheckboxCellRenderer", $PRIVATE | $STATIC},
		{"bug8023474$Editor", "bug8023474", "Editor", $PRIVATE | $STATIC},
		{"bug8023474$2", nullptr, nullptr, 0},
		{"bug8023474$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8023474",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8023474$CheckboxCellRenderer,bug8023474$Editor,bug8023474$2,bug8023474$1"
	};
	$loadClass(bug8023474, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8023474);
	});
	return class$;
}

$Class* bug8023474::class$ = nullptr;
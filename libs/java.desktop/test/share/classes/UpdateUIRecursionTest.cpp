#include <UpdateUIRecursionTest.h>
#include <UpdateUIRecursionTest$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

#undef CENTER
#undef EXIT_ON_CLOSE

using $UpdateUIRecursionTest$1 = ::UpdateUIRecursionTest$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTree = ::javax::swing::JTree;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

$String* UpdateUIRecursionTest::toString() {
	return this->$JFrame::toString();
}

int32_t UpdateUIRecursionTest::hashCode() {
	return this->$JFrame::hashCode();
}

bool UpdateUIRecursionTest::equals(Object$* arg0) {
	return this->$JFrame::equals(arg0);
}

$Object* UpdateUIRecursionTest::clone() {
	return this->$JFrame::clone();
}

void UpdateUIRecursionTest::finalize() {
	this->$JFrame::finalize();
}

void UpdateUIRecursionTest::init$() {
	$useLocalObjectStack();
	$JFrame::init$("UpdateUIRecursionTest"_s);
	setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	setSize(400, 400);
	$var($StringArray, listData, $new($StringArray, {
		"First"_s,
		"Second"_s,
		"Third"_s,
		"Fourth"_s,
		"Fifth"_s,
		"Sixth"_s
	}));
	$set(this, tree, $new($JTree, listData));
	$set(this, renderer, $new($DefaultTreeCellRenderer));
	$init($BorderLayout);
	$$nc(getContentPane())->add($$new($JScrollPane, this->tree), $BorderLayout::CENTER);
	$nc(this->tree)->setCellRenderer(this);
	setVisible(true);
}

void UpdateUIRecursionTest::main($StringArray* args) {
	$init(UpdateUIRecursionTest);
	$SwingUtilities::invokeAndWait($$new($UpdateUIRecursionTest$1));
}

void UpdateUIRecursionTest::test() {
	$nc(this->tree)->updateUI();
}

void UpdateUIRecursionTest::disposeUI() {
	setVisible(false);
	dispose();
}

$Component* UpdateUIRecursionTest::getTreeCellRendererComponent($JTree* tree, Object$* value, bool selected, bool expanded, bool leaf, int32_t row, bool hasFocus) {
	return $nc(this->renderer)->getTreeCellRendererComponent(tree, value, leaf, expanded, leaf, row, hasFocus);
}

UpdateUIRecursionTest::UpdateUIRecursionTest() {
}

$Class* UpdateUIRecursionTest::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"tree", "Ljavax/swing/JTree;", nullptr, 0, $field(UpdateUIRecursionTest, tree)},
		{"renderer", "Ljavax/swing/tree/DefaultTreeCellRenderer;", nullptr, 0, $field(UpdateUIRecursionTest, renderer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(UpdateUIRecursionTest, init$, void)},
		{"disposeUI", "()V", nullptr, $PUBLIC, $virtualMethod(UpdateUIRecursionTest, disposeUI, void)},
		{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(UpdateUIRecursionTest, getTreeCellRendererComponent, $Component*, $JTree*, Object$*, bool, bool, bool, int32_t, bool)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(UpdateUIRecursionTest, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, $PUBLIC, $virtualMethod(UpdateUIRecursionTest, test, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"UpdateUIRecursionTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"UpdateUIRecursionTest",
		"javax.swing.JFrame",
		"javax.swing.tree.TreeCellRenderer",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"UpdateUIRecursionTest$1"
	};
	$loadClass(UpdateUIRecursionTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(UpdateUIRecursionTest));
	});
	return class$;
}

$Class* UpdateUIRecursionTest::class$ = nullptr;
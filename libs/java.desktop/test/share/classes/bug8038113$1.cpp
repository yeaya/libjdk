#include <bug8038113$1.h>
#include <bug8038113$1$1.h>
#include <bug8038113.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/TreeUI.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <jcpp.h>

#undef CENTER

using $bug8038113 = ::bug8038113;
using $bug8038113$1$1 = ::bug8038113$1$1;
using $BorderLayout = ::java::awt::BorderLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JPanel = ::javax::swing::JPanel;
using $JTree = ::javax::swing::JTree;
using $TreeUI = ::javax::swing::plaf::TreeUI;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;

void bug8038113$1::init$($bug8038113* this$0) {
	$set(this, this$0, this$0);
}

void bug8038113$1::run() {
	$useLocalObjectStack();
	$var($JTree, tree, $new($JTree));
	$var($BasicTreeUI, treeUI, $cast($BasicTreeUI, $cast($TreeUI, tree->getUI())));
	$var($JPanel, panel, $new($bug8038113$1$1, this, treeUI));
	$$nc(this->this$0->getContentPane())->setLayout($$new($BorderLayout));
	$$nc(this->this$0->getContentPane())->add(panel, $BorderLayout::CENTER);
}

bug8038113$1::bug8038113$1() {
}

$Class* bug8038113$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug8038113;", nullptr, $FINAL | $SYNTHETIC, $field(bug8038113$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug8038113;)V", nullptr, 0, $method(bug8038113$1, init$, void, $bug8038113*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug8038113$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug8038113",
		"init",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8038113$1", nullptr, nullptr, 0},
		{"bug8038113$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8038113$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8038113"
	};
	$loadClass(bug8038113$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8038113$1);
	});
	return class$;
}

$Class* bug8038113$1::class$ = nullptr;
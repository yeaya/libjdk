#include <bug6505523$3.h>
#include <bug6505523.h>
#include <javax/swing/event/TreeExpansionEvent.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <javax/swing/tree/DefaultTreeModel.h>
#include <javax/swing/tree/TreeNode.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeExpansionEvent = ::javax::swing::event::TreeExpansionEvent;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;
using $DefaultTreeModel = ::javax::swing::tree::DefaultTreeModel;
using $TreeNode = ::javax::swing::tree::TreeNode;

void bug6505523$3::init$($DefaultMutableTreeNode* val$problematic, $DefaultTreeModel* val$model) {
	$set(this, val$problematic, val$problematic);
	$set(this, val$model, val$model);
}

void bug6505523$3::treeExpanded($TreeExpansionEvent* event) {
	$var($TreeNode, parent, $nc(this->val$problematic)->getParent());
	if ($instanceOf($DefaultMutableTreeNode, parent)) {
		$nc(this->val$model)->removeNodeFromParent(this->val$problematic);
	}
}

void bug6505523$3::treeCollapsed($TreeExpansionEvent* event) {
}

bug6505523$3::bug6505523$3() {
}

$Class* bug6505523$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$model", "Ljavax/swing/tree/DefaultTreeModel;", nullptr, $FINAL | $SYNTHETIC, $field(bug6505523$3, val$model)},
		{"val$problematic", "Ljavax/swing/tree/DefaultMutableTreeNode;", nullptr, $FINAL | $SYNTHETIC, $field(bug6505523$3, val$problematic)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/tree/DefaultMutableTreeNode;Ljavax/swing/tree/DefaultTreeModel;)V", "()V", 0, $method(bug6505523$3, init$, void, $DefaultMutableTreeNode*, $DefaultTreeModel*)},
		{"treeCollapsed", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6505523$3, treeCollapsed, void, $TreeExpansionEvent*)},
		{"treeExpanded", "(Ljavax/swing/event/TreeExpansionEvent;)V", nullptr, $PUBLIC, $virtualMethod(bug6505523$3, treeExpanded, void, $TreeExpansionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6505523",
		"createAndShowGUI",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6505523$3", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6505523$3",
		"java.lang.Object",
		"javax.swing.event.TreeExpansionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6505523"
	};
	$loadClass(bug6505523$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6505523$3);
	});
	return class$;
}

$Class* bug6505523$3::class$ = nullptr;
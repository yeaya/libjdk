#include <bug8003830$NullReturningTreeUI.h>
#include <bug8003830.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/basic/BasicTreeUI.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $BasicTreeUI = ::javax::swing::plaf::basic::BasicTreeUI;
using $TreePath = ::javax::swing::tree::TreePath;

void bug8003830$NullReturningTreeUI::init$() {
	$BasicTreeUI::init$();
}

$Rectangle* bug8003830$NullReturningTreeUI::getPathBounds($JTree* tree, $TreePath* path) {
	return nullptr;
}

bug8003830$NullReturningTreeUI::bug8003830$NullReturningTreeUI() {
}

$Class* bug8003830$NullReturningTreeUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(bug8003830$NullReturningTreeUI, init$, void)},
		{"getPathBounds", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)Ljava/awt/Rectangle;", nullptr, $PUBLIC, $virtualMethod(bug8003830$NullReturningTreeUI, getPathBounds, $Rectangle*, $JTree*, $TreePath*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8003830$NullReturningTreeUI", "bug8003830", "NullReturningTreeUI", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"bug8003830$NullReturningTreeUI",
		"javax.swing.plaf.basic.BasicTreeUI",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8003830"
	};
	$loadClass(bug8003830$NullReturningTreeUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug8003830$NullReturningTreeUI);
	});
	return class$;
}

$Class* bug8003830$NullReturningTreeUI::class$ = nullptr;
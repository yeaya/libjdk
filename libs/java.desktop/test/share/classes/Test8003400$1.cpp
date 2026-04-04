#include <Test8003400$1.h>
#include <Test8003400.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultMutableTreeNode.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE
#undef OBJECTS

using $Test8003400 = ::Test8003400;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $JTree = ::javax::swing::JTree;
using $DefaultMutableTreeNode = ::javax::swing::tree::DefaultMutableTreeNode;

void Test8003400$1::init$() {
}

void Test8003400$1::run() {
	$useLocalObjectStack();
	$var($DefaultMutableTreeNode, root, $new($DefaultMutableTreeNode));
	$init($Test8003400);
	$assignStatic($Test8003400::tree, $new($JTree, root));
	$Test8003400::tree->setLargeModel(true);
	$nc($Test8003400::tree)->setRowHeight(16);
	$assignStatic($Test8003400::frame, $new($JFrame, "Test JTree with a large model"_s));
	$Test8003400::frame->add($assignStatic($Test8003400::pane, $new($JScrollPane, $Test8003400::tree)));
	$nc($Test8003400::frame)->setSize(200, 100);
	$nc($Test8003400::frame)->setAlwaysOnTop(true);
	$nc($Test8003400::frame)->setLocationRelativeTo(nullptr);
	$nc($Test8003400::frame)->setDefaultCloseOperation($JFrame::DISPOSE_ON_CLOSE);
	$nc($Test8003400::frame)->setVisible(true);
	{
		$var($Iterator, i$, $nc($Test8003400::OBJECTS)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, object, $cast($String, i$->next()));
			{
				root->add($$new($DefaultMutableTreeNode, object));
			}
		}
	}
	$nc($Test8003400::tree)->expandRow(0);
}

Test8003400$1::Test8003400$1() {
}

$Class* Test8003400$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test8003400$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test8003400$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test8003400",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test8003400$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test8003400$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test8003400"
	};
	$loadClass(Test8003400$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8003400$1);
	});
	return class$;
}

$Class* Test8003400$1::class$ = nullptr;
#include <HeadlessJTree$1.h>
#include <HeadlessJTree.h>
#include <java/awt/Component.h>
#include <javax/swing/JTree.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

void HeadlessJTree$1::init$() {
	$DefaultTreeCellRenderer::init$();
}

$Component* HeadlessJTree$1::getTreeCellRendererComponent($JTree* tree, Object$* value, bool selected, bool expanded, bool leaf, int32_t row, bool hasFocus) {
	return $DefaultTreeCellRenderer::getTreeCellRendererComponent(tree, value, selected, expanded, leaf, row, hasFocus);
}

HeadlessJTree$1::HeadlessJTree$1() {
}

$Class* HeadlessJTree$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(HeadlessJTree$1, init$, void)},
		{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(HeadlessJTree$1, getTreeCellRendererComponent, $Component*, $JTree*, Object$*, bool, bool, bool, int32_t, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"HeadlessJTree",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"HeadlessJTree$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"HeadlessJTree$1",
		"javax.swing.tree.DefaultTreeCellRenderer",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"HeadlessJTree"
	};
	$loadClass(HeadlessJTree$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(HeadlessJTree$1));
	});
	return class$;
}

$Class* HeadlessJTree$1::class$ = nullptr;
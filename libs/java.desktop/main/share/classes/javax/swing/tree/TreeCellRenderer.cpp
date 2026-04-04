#include <javax/swing/tree/TreeCellRenderer.h>
#include <java/awt/Component.h>
#include <javax/swing/JTree.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;

namespace javax {
	namespace swing {
		namespace tree {

$Class* TreeCellRenderer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeCellRenderer, getTreeCellRendererComponent, $Component*, $JTree*, Object$*, bool, bool, bool, int32_t, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.tree.TreeCellRenderer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TreeCellRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeCellRenderer);
	});
	return class$;
}

$Class* TreeCellRenderer::class$ = nullptr;

		} // tree
	} // swing
} // javax
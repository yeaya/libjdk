#include <javax/swing/tree/TreeCellEditor.h>
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

$Class* TreeCellEditor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTreeCellEditorComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZI)Ljava/awt/Component;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeCellEditor, getTreeCellEditorComponent, $Component*, $JTree*, Object$*, bool, bool, bool, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.tree.TreeCellEditor",
		nullptr,
		"javax.swing.CellEditor",
		nullptr,
		methodInfos$$
	};
	$loadClass(TreeCellEditor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TreeCellEditor);
	});
	return class$;
}

$Class* TreeCellEditor::class$ = nullptr;

		} // tree
	} // swing
} // javax
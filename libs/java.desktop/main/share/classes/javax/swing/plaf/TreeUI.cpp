#include <javax/swing/plaf/TreeUI.h>

#include <java/awt/Rectangle.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JTree = ::javax::swing::JTree;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace plaf {

$MethodInfo _TreeUI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(TreeUI, init$, void)},
	{"cancelEditing", "(Ljavax/swing/JTree;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeUI, cancelEditing, void, $JTree*)},
	{"getClosestPathForLocation", "(Ljavax/swing/JTree;II)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeUI, getClosestPathForLocation, $TreePath*, $JTree*, int32_t, int32_t)},
	{"getEditingPath", "(Ljavax/swing/JTree;)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeUI, getEditingPath, $TreePath*, $JTree*)},
	{"getPathBounds", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)Ljava/awt/Rectangle;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeUI, getPathBounds, $Rectangle*, $JTree*, $TreePath*)},
	{"getPathForRow", "(Ljavax/swing/JTree;I)Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeUI, getPathForRow, $TreePath*, $JTree*, int32_t)},
	{"getRowCount", "(Ljavax/swing/JTree;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeUI, getRowCount, int32_t, $JTree*)},
	{"getRowForPath", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeUI, getRowForPath, int32_t, $JTree*, $TreePath*)},
	{"isEditing", "(Ljavax/swing/JTree;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeUI, isEditing, bool, $JTree*)},
	{"startEditingAtPath", "(Ljavax/swing/JTree;Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeUI, startEditingAtPath, void, $JTree*, $TreePath*)},
	{"stopEditing", "(Ljavax/swing/JTree;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeUI, stopEditing, bool, $JTree*)},
	{}
};

$ClassInfo _TreeUI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.swing.plaf.TreeUI",
	"javax.swing.plaf.ComponentUI",
	nullptr,
	nullptr,
	_TreeUI_MethodInfo_
};

$Object* allocate$TreeUI($Class* clazz) {
	return $of($alloc(TreeUI));
}

void TreeUI::init$() {
	$ComponentUI::init$();
}

TreeUI::TreeUI() {
}

$Class* TreeUI::load$($String* name, bool initialize) {
	$loadClass(TreeUI, name, initialize, &_TreeUI_ClassInfo_, allocate$TreeUI);
	return class$;
}

$Class* TreeUI::class$ = nullptr;

		} // plaf
	} // swing
} // javax
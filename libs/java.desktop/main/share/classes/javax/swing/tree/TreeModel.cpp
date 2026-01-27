#include <javax/swing/tree/TreeModel.h>

#include <javax/swing/event/TreeModelListener.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeModelListener = ::javax::swing::event::TreeModelListener;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace tree {

$MethodInfo _TreeModel_MethodInfo_[] = {
	{"addTreeModelListener", "(Ljavax/swing/event/TreeModelListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModel, addTreeModelListener, void, $TreeModelListener*)},
	{"getChild", "(Ljava/lang/Object;I)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModel, getChild, $Object*, Object$*, int32_t)},
	{"getChildCount", "(Ljava/lang/Object;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModel, getChildCount, int32_t, Object$*)},
	{"getIndexOfChild", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModel, getIndexOfChild, int32_t, Object$*, Object$*)},
	{"getRoot", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModel, getRoot, $Object*)},
	{"isLeaf", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModel, isLeaf, bool, Object$*)},
	{"removeTreeModelListener", "(Ljavax/swing/event/TreeModelListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModel, removeTreeModelListener, void, $TreeModelListener*)},
	{"valueForPathChanged", "(Ljavax/swing/tree/TreePath;Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeModel, valueForPathChanged, void, $TreePath*, Object$*)},
	{}
};

$ClassInfo _TreeModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.tree.TreeModel",
	nullptr,
	nullptr,
	nullptr,
	_TreeModel_MethodInfo_
};

$Object* allocate$TreeModel($Class* clazz) {
	return $of($alloc(TreeModel));
}

$Class* TreeModel::load$($String* name, bool initialize) {
	$loadClass(TreeModel, name, initialize, &_TreeModel_ClassInfo_, allocate$TreeModel);
	return class$;
}

$Class* TreeModel::class$ = nullptr;

		} // tree
	} // swing
} // javax
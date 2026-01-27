#include <javax/swing/tree/TreeSelectionModel.h>

#include <java/beans/PropertyChangeListener.h>
#include <javax/swing/event/TreeSelectionListener.h>
#include <javax/swing/tree/RowMapper.h>
#include <javax/swing/tree/TreePath.h>
#include <jcpp.h>

#undef CONTIGUOUS_TREE_SELECTION
#undef DISCONTIGUOUS_TREE_SELECTION
#undef SINGLE_TREE_SELECTION

using $TreePathArray = $Array<::javax::swing::tree::TreePath>;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TreeSelectionListener = ::javax::swing::event::TreeSelectionListener;
using $RowMapper = ::javax::swing::tree::RowMapper;
using $TreePath = ::javax::swing::tree::TreePath;

namespace javax {
	namespace swing {
		namespace tree {

$FieldInfo _TreeSelectionModel_FieldInfo_[] = {
	{"SINGLE_TREE_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeSelectionModel, SINGLE_TREE_SELECTION)},
	{"CONTIGUOUS_TREE_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeSelectionModel, CONTIGUOUS_TREE_SELECTION)},
	{"DISCONTIGUOUS_TREE_SELECTION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(TreeSelectionModel, DISCONTIGUOUS_TREE_SELECTION)},
	{}
};

$MethodInfo _TreeSelectionModel_MethodInfo_[] = {
	{"addPropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, addPropertyChangeListener, void, $PropertyChangeListener*)},
	{"addSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, addSelectionPath, void, $TreePath*)},
	{"addSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, addSelectionPaths, void, $TreePathArray*)},
	{"addTreeSelectionListener", "(Ljavax/swing/event/TreeSelectionListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, addTreeSelectionListener, void, $TreeSelectionListener*)},
	{"clearSelection", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, clearSelection, void)},
	{"getLeadSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, getLeadSelectionPath, $TreePath*)},
	{"getLeadSelectionRow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, getLeadSelectionRow, int32_t)},
	{"getMaxSelectionRow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, getMaxSelectionRow, int32_t)},
	{"getMinSelectionRow", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, getMinSelectionRow, int32_t)},
	{"getRowMapper", "()Ljavax/swing/tree/RowMapper;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, getRowMapper, $RowMapper*)},
	{"getSelectionCount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, getSelectionCount, int32_t)},
	{"getSelectionMode", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, getSelectionMode, int32_t)},
	{"getSelectionPath", "()Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, getSelectionPath, $TreePath*)},
	{"getSelectionPaths", "()[Ljavax/swing/tree/TreePath;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, getSelectionPaths, $TreePathArray*)},
	{"getSelectionRows", "()[I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, getSelectionRows, $ints*)},
	{"isPathSelected", "(Ljavax/swing/tree/TreePath;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, isPathSelected, bool, $TreePath*)},
	{"isRowSelected", "(I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, isRowSelected, bool, int32_t)},
	{"isSelectionEmpty", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, isSelectionEmpty, bool)},
	{"removePropertyChangeListener", "(Ljava/beans/PropertyChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, removePropertyChangeListener, void, $PropertyChangeListener*)},
	{"removeSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, removeSelectionPath, void, $TreePath*)},
	{"removeSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, removeSelectionPaths, void, $TreePathArray*)},
	{"removeTreeSelectionListener", "(Ljavax/swing/event/TreeSelectionListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, removeTreeSelectionListener, void, $TreeSelectionListener*)},
	{"resetRowSelection", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, resetRowSelection, void)},
	{"setRowMapper", "(Ljavax/swing/tree/RowMapper;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, setRowMapper, void, $RowMapper*)},
	{"setSelectionMode", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, setSelectionMode, void, int32_t)},
	{"setSelectionPath", "(Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, setSelectionPath, void, $TreePath*)},
	{"setSelectionPaths", "([Ljavax/swing/tree/TreePath;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TreeSelectionModel, setSelectionPaths, void, $TreePathArray*)},
	{}
};

$ClassInfo _TreeSelectionModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.tree.TreeSelectionModel",
	nullptr,
	nullptr,
	_TreeSelectionModel_FieldInfo_,
	_TreeSelectionModel_MethodInfo_
};

$Object* allocate$TreeSelectionModel($Class* clazz) {
	return $of($alloc(TreeSelectionModel));
}

$Class* TreeSelectionModel::load$($String* name, bool initialize) {
	$loadClass(TreeSelectionModel, name, initialize, &_TreeSelectionModel_ClassInfo_, allocate$TreeSelectionModel);
	return class$;
}

$Class* TreeSelectionModel::class$ = nullptr;

		} // tree
	} // swing
} // javax
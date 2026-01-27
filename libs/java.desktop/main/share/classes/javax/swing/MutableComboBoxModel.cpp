#include <javax/swing/MutableComboBoxModel.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$MethodInfo _MutableComboBoxModel_MethodInfo_[] = {
	{"addElement", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, $virtualMethod(MutableComboBoxModel, addElement, void, Object$*)},
	{"insertElementAt", "(Ljava/lang/Object;I)V", "(TE;I)V", $PUBLIC | $ABSTRACT, $virtualMethod(MutableComboBoxModel, insertElementAt, void, Object$*, int32_t)},
	{"removeElement", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableComboBoxModel, removeElement, void, Object$*)},
	{"removeElementAt", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableComboBoxModel, removeElementAt, void, int32_t)},
	{}
};

$ClassInfo _MutableComboBoxModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.MutableComboBoxModel",
	nullptr,
	"javax.swing.ComboBoxModel",
	nullptr,
	_MutableComboBoxModel_MethodInfo_,
	"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/swing/ComboBoxModel<TE;>;"
};

$Object* allocate$MutableComboBoxModel($Class* clazz) {
	return $of($alloc(MutableComboBoxModel));
}

$Class* MutableComboBoxModel::load$($String* name, bool initialize) {
	$loadClass(MutableComboBoxModel, name, initialize, &_MutableComboBoxModel_ClassInfo_, allocate$MutableComboBoxModel);
	return class$;
}

$Class* MutableComboBoxModel::class$ = nullptr;

	} // swing
} // javax
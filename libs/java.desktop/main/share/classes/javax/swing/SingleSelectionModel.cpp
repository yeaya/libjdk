#include <javax/swing/SingleSelectionModel.h>

#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$MethodInfo _SingleSelectionModel_MethodInfo_[] = {
	{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, addChangeListener, void, $ChangeListener*)},
	{"clearSelection", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, clearSelection, void)},
	{"getSelectedIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, getSelectedIndex, int32_t)},
	{"isSelected", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, isSelected, bool)},
	{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, removeChangeListener, void, $ChangeListener*)},
	{"setSelectedIndex", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, setSelectedIndex, void, int32_t)},
	{}
};

$ClassInfo _SingleSelectionModel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.swing.SingleSelectionModel",
	nullptr,
	nullptr,
	nullptr,
	_SingleSelectionModel_MethodInfo_
};

$Object* allocate$SingleSelectionModel($Class* clazz) {
	return $of($alloc(SingleSelectionModel));
}

$Class* SingleSelectionModel::load$($String* name, bool initialize) {
	$loadClass(SingleSelectionModel, name, initialize, &_SingleSelectionModel_ClassInfo_, allocate$SingleSelectionModel);
	return class$;
}

$Class* SingleSelectionModel::class$ = nullptr;

	} // swing
} // javax
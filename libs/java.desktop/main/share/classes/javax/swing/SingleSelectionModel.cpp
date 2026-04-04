#include <javax/swing/SingleSelectionModel.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$Class* SingleSelectionModel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, addChangeListener, void, $ChangeListener*)},
		{"clearSelection", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, clearSelection, void)},
		{"getSelectedIndex", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, getSelectedIndex, int32_t)},
		{"isSelected", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, isSelected, bool)},
		{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, removeChangeListener, void, $ChangeListener*)},
		{"setSelectedIndex", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SingleSelectionModel, setSelectedIndex, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.SingleSelectionModel",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SingleSelectionModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SingleSelectionModel);
	});
	return class$;
}

$Class* SingleSelectionModel::class$ = nullptr;

	} // swing
} // javax
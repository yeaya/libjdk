#include <javax/swing/MutableComboBoxModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$Class* MutableComboBoxModel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addElement", "(Ljava/lang/Object;)V", "(TE;)V", $PUBLIC | $ABSTRACT, $virtualMethod(MutableComboBoxModel, addElement, void, Object$*)},
		{"insertElementAt", "(Ljava/lang/Object;I)V", "(TE;I)V", $PUBLIC | $ABSTRACT, $virtualMethod(MutableComboBoxModel, insertElementAt, void, Object$*, int32_t)},
		{"removeElement", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableComboBoxModel, removeElement, void, Object$*)},
		{"removeElementAt", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MutableComboBoxModel, removeElementAt, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.MutableComboBoxModel",
		nullptr,
		"javax.swing.ComboBoxModel",
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/swing/ComboBoxModel<TE;>;"
	};
	$loadClass(MutableComboBoxModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MutableComboBoxModel);
	});
	return class$;
}

$Class* MutableComboBoxModel::class$ = nullptr;

	} // swing
} // javax
#include <javax/swing/ComboBoxModel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace swing {

$Class* ComboBoxModel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getSelectedItem", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxModel, getSelectedItem, $Object*)},
		{"setSelectedItem", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ComboBoxModel, setSelectedItem, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.ComboBoxModel",
		nullptr,
		"javax.swing.ListModel",
		nullptr,
		methodInfos$$,
		"<E:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/swing/ListModel<TE;>;"
	};
	$loadClass(ComboBoxModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ComboBoxModel);
	});
	return class$;
}

$Class* ComboBoxModel::class$ = nullptr;

	} // swing
} // javax
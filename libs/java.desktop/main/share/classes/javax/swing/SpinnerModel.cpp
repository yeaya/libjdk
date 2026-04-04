#include <javax/swing/SpinnerModel.h>
#include <javax/swing/event/ChangeListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ChangeListener = ::javax::swing::event::ChangeListener;

namespace javax {
	namespace swing {

$Class* SpinnerModel::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpinnerModel, addChangeListener, void, $ChangeListener*)},
		{"getNextValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpinnerModel, getNextValue, $Object*)},
		{"getPreviousValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpinnerModel, getPreviousValue, $Object*)},
		{"getValue", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpinnerModel, getValue, $Object*)},
		{"removeChangeListener", "(Ljavax/swing/event/ChangeListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpinnerModel, removeChangeListener, void, $ChangeListener*)},
		{"setValue", "(Ljava/lang/Object;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SpinnerModel, setValue, void, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.SpinnerModel",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SpinnerModel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SpinnerModel);
	});
	return class$;
}

$Class* SpinnerModel::class$ = nullptr;

	} // swing
} // javax
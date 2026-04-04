#include <java/awt/Adjustable.h>
#include <java/awt/event/AdjustmentListener.h>
#include <jcpp.h>

#undef HORIZONTAL
#undef NO_ORIENTATION
#undef VERTICAL

using $AdjustmentListener = ::java::awt::event::AdjustmentListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* Adjustable::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"HORIZONTAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Adjustable, HORIZONTAL)},
		{"VERTICAL", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Adjustable, VERTICAL)},
		{"NO_ORIENTATION", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Adjustable, NO_ORIENTATION)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"addAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, addAdjustmentListener, void, $AdjustmentListener*)},
		{"getBlockIncrement", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, getBlockIncrement, int32_t)},
		{"getMaximum", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, getMaximum, int32_t)},
		{"getMinimum", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, getMinimum, int32_t)},
		{"getOrientation", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, getOrientation, int32_t)},
		{"getUnitIncrement", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, getUnitIncrement, int32_t)},
		{"getValue", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, getValue, int32_t)},
		{"getVisibleAmount", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, getVisibleAmount, int32_t)},
		{"removeAdjustmentListener", "(Ljava/awt/event/AdjustmentListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, removeAdjustmentListener, void, $AdjustmentListener*)},
		{"setBlockIncrement", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, setBlockIncrement, void, int32_t)},
		{"setMaximum", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, setMaximum, void, int32_t)},
		{"setMinimum", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, setMinimum, void, int32_t)},
		{"setUnitIncrement", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, setUnitIncrement, void, int32_t)},
		{"setValue", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, setValue, void, int32_t)},
		{"setVisibleAmount", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Adjustable, setVisibleAmount, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.Adjustable",
		nullptr,
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Adjustable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Adjustable);
	});
	return class$;
}

$Class* Adjustable::class$ = nullptr;

	} // awt
} // java
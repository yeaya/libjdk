#include <javax/swing/plaf/synth/SynthConstants.h>
#include <jcpp.h>

#undef DEFAULT
#undef DISABLED
#undef ENABLED
#undef FOCUSED
#undef MOUSE_OVER
#undef PRESSED
#undef SELECTED

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$Class* SynthConstants::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ENABLED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, ENABLED)},
		{"MOUSE_OVER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, MOUSE_OVER)},
		{"PRESSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, PRESSED)},
		{"DISABLED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, DISABLED)},
		{"FOCUSED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, FOCUSED)},
		{"SELECTED", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, SELECTED)},
		{"DEFAULT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SynthConstants, DEFAULT)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.plaf.synth.SynthConstants",
		nullptr,
		nullptr,
		fieldInfos$$
	};
	$loadClass(SynthConstants, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthConstants);
	});
	return class$;
}

$Class* SynthConstants::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef DISPOSE_ON_CLOSE
#undef DO_NOTHING_ON_CLOSE
#undef EXIT_ON_CLOSE
#undef HIDE_ON_CLOSE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;

namespace javax {
	namespace swing {

$Class* WindowConstants::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DO_NOTHING_ON_CLOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowConstants, DO_NOTHING_ON_CLOSE)},
		{"HIDE_ON_CLOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowConstants, HIDE_ON_CLOSE)},
		{"DISPOSE_ON_CLOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowConstants, DISPOSE_ON_CLOSE)},
		{"EXIT_ON_CLOSE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WindowConstants, EXIT_ON_CLOSE)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.WindowConstants",
		nullptr,
		nullptr,
		fieldInfos$$
	};
	$loadClass(WindowConstants, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowConstants);
	});
	return class$;
}

$Class* WindowConstants::class$ = nullptr;

	} // swing
} // javax
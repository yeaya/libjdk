#include <javax/swing/SwingHeavyWeight.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace swing {

$Class* SwingHeavyWeight::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"javax.swing.SwingHeavyWeight"
	};
	$loadClass(SwingHeavyWeight, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingHeavyWeight);
	});
	return class$;
}

$Class* SwingHeavyWeight::class$ = nullptr;

	} // swing
} // javax
#include <sun/swing/InteropProvider.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace swing {

$Class* InteropProvider::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.InteropProvider"
	};
	$loadClass(InteropProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InteropProvider);
	});
	return class$;
}

$Class* InteropProvider::class$ = nullptr;

	} // swing
} // sun
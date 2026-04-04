#include <sun/java2d/Surface.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace java2d {

$Class* Surface::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.Surface"
	};
	$loadClass(Surface, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Surface);
	});
	return class$;
}

$Class* Surface::class$ = nullptr;

	} // java2d
} // sun
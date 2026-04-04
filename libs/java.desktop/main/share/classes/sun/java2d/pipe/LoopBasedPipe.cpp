#include <sun/java2d/pipe/LoopBasedPipe.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace java2d {
		namespace pipe {

$Class* LoopBasedPipe::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.pipe.LoopBasedPipe"
	};
	$loadClass(LoopBasedPipe, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LoopBasedPipe);
	});
	return class$;
}

$Class* LoopBasedPipe::class$ = nullptr;

		} // pipe
	} // java2d
} // sun
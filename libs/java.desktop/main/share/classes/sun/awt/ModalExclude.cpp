#include <sun/awt/ModalExclude.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace sun {
	namespace awt {

$Class* ModalExclude::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.awt.ModalExclude"
	};
	$loadClass(ModalExclude, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModalExclude);
	});
	return class$;
}

$Class* ModalExclude::class$ = nullptr;

	} // awt
} // sun
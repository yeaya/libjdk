#include <java/rmi/Remote.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace java {
	namespace rmi {

$Class* Remote::load$($String* name, bool initialize) {
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.rmi.Remote"
	};
	$loadClass(Remote, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Remote);
	});
	return class$;
}

$Class* Remote::class$ = nullptr;

	} // rmi
} // java
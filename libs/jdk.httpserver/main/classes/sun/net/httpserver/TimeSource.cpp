#include <sun/net/httpserver/TimeSource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace httpserver {

$Class* TimeSource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getTime", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(TimeSource, getTime, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"sun.net.httpserver.TimeSource",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(TimeSource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TimeSource);
	});
	return class$;
}

$Class* TimeSource::class$ = nullptr;

		} // httpserver
	} // net
} // sun
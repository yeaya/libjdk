#include <sun/net/httpserver/TimeSource.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace net {
		namespace httpserver {

$MethodInfo _TimeSource_MethodInfo_[] = {
	{"getTime", "()J", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _TimeSource_ClassInfo_ = {
	$INTERFACE | $ABSTRACT,
	"sun.net.httpserver.TimeSource",
	nullptr,
	nullptr,
	nullptr,
	_TimeSource_MethodInfo_
};

$Object* allocate$TimeSource($Class* clazz) {
	return $of($alloc(TimeSource));
}

$Class* TimeSource::load$($String* name, bool initialize) {
	$loadClass(TimeSource, name, initialize, &_TimeSource_ClassInfo_, allocate$TimeSource);
	return class$;
}

$Class* TimeSource::class$ = nullptr;

		} // httpserver
	} // net
} // sun
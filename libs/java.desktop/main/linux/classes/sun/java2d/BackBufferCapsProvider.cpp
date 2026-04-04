#include <sun/java2d/BackBufferCapsProvider.h>
#include <java/awt/BufferCapabilities.h>
#include <jcpp.h>

using $BufferCapabilities = ::java::awt::BufferCapabilities;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace java2d {

$Class* BackBufferCapsProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getBackBufferCaps", "()Ljava/awt/BufferCapabilities;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BackBufferCapsProvider, getBackBufferCaps, $BufferCapabilities*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.BackBufferCapsProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BackBufferCapsProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BackBufferCapsProvider);
	});
	return class$;
}

$Class* BackBufferCapsProvider::class$ = nullptr;

	} // java2d
} // sun
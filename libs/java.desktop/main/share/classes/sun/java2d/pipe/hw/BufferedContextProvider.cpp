#include <sun/java2d/pipe/hw/BufferedContextProvider.h>
#include <sun/java2d/pipe/BufferedContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BufferedContext = ::sun::java2d::pipe::BufferedContext;

namespace sun {
	namespace java2d {
		namespace pipe {
			namespace hw {

$Class* BufferedContextProvider::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getContext", "()Lsun/java2d/pipe/BufferedContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(BufferedContextProvider, getContext, $BufferedContext*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.java2d.pipe.hw.BufferedContextProvider",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(BufferedContextProvider, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BufferedContextProvider);
	});
	return class$;
}

$Class* BufferedContextProvider::class$ = nullptr;

			} // hw
		} // pipe
	} // java2d
} // sun
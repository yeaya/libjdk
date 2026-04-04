#include <com/apple/eawt/_OpenAppHandler.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace eawt {

$Class* _OpenAppHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"handleOpenApp", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(_OpenAppHandler, handleOpenApp, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.apple.eawt._OpenAppHandler",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(_OpenAppHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(_OpenAppHandler);
	});
	return class$;
}

$Class* _OpenAppHandler::class$ = nullptr;

		} // eawt
	} // apple
} // com
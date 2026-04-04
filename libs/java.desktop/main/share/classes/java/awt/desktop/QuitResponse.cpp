#include <java/awt/desktop/QuitResponse.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace desktop {

$Class* QuitResponse::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"cancelQuit", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuitResponse, cancelQuit, void)},
		{"performQuit", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(QuitResponse, performQuit, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.desktop.QuitResponse",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(QuitResponse, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(QuitResponse);
	});
	return class$;
}

$Class* QuitResponse::class$ = nullptr;

		} // desktop
	} // awt
} // java
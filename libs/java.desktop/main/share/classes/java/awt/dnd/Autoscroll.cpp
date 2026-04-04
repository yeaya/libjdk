#include <java/awt/dnd/Autoscroll.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <jcpp.h>

using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {
		namespace dnd {

$Class* Autoscroll::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"autoscroll", "(Ljava/awt/Point;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Autoscroll, autoscroll, void, $Point*)},
		{"getAutoscrollInsets", "()Ljava/awt/Insets;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Autoscroll, getAutoscrollInsets, $Insets*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.dnd.Autoscroll",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Autoscroll, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Autoscroll);
	});
	return class$;
}

$Class* Autoscroll::class$ = nullptr;

		} // dnd
	} // awt
} // java
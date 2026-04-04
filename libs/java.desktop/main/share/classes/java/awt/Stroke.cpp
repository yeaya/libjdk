#include <java/awt/Stroke.h>
#include <java/awt/Shape.h>
#include <jcpp.h>

using $Shape = ::java::awt::Shape;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace java {
	namespace awt {

$Class* Stroke::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"createStrokedShape", "(Ljava/awt/Shape;)Ljava/awt/Shape;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Stroke, createStrokedShape, $Shape*, $Shape*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"java.awt.Stroke",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Stroke, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Stroke);
	});
	return class$;
}

$Class* Stroke::class$ = nullptr;

	} // awt
} // java
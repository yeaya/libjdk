#include <javax/sound/sampled/Port.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;

namespace javax {
	namespace sound {
		namespace sampled {

$Class* Port::load$($String* name, bool initialize) {
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.sampled.Port$Info", "javax.sound.sampled.Port", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.sampled.Port",
		nullptr,
		"javax.sound.sampled.Line",
		nullptr,
		nullptr,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.sound.sampled.Port$Info"
	};
	$loadClass(Port, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Port);
	});
	return class$;
}

$Class* Port::class$ = nullptr;

		} // sampled
	} // sound
} // javax
#include <javax/sound/sampled/LineListener.h>
#include <javax/sound/sampled/LineEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LineEvent = ::javax::sound::sampled::LineEvent;

namespace javax {
	namespace sound {
		namespace sampled {

$Class* LineListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"update", "(Ljavax/sound/sampled/LineEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LineListener, update, void, $LineEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.sampled.LineListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(LineListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LineListener);
	});
	return class$;
}

$Class* LineListener::class$ = nullptr;

		} // sampled
	} // sound
} // javax
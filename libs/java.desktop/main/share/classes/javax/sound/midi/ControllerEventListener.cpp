#include <javax/sound/midi/ControllerEventListener.h>
#include <javax/sound/midi/ShortMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ShortMessage = ::javax::sound::midi::ShortMessage;

namespace javax {
	namespace sound {
		namespace midi {

$Class* ControllerEventListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"controlChange", "(Ljavax/sound/midi/ShortMessage;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ControllerEventListener, controlChange, void, $ShortMessage*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.midi.ControllerEventListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(ControllerEventListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ControllerEventListener);
	});
	return class$;
}

$Class* ControllerEventListener::class$ = nullptr;

		} // midi
	} // sound
} // javax
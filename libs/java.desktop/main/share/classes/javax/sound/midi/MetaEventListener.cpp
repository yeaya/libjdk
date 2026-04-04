#include <javax/sound/midi/MetaEventListener.h>
#include <javax/sound/midi/MetaMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MetaMessage = ::javax::sound::midi::MetaMessage;

namespace javax {
	namespace sound {
		namespace midi {

$Class* MetaEventListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"meta", "(Ljavax/sound/midi/MetaMessage;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MetaEventListener, meta, void, $MetaMessage*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.midi.MetaEventListener",
		nullptr,
		"java.util.EventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(MetaEventListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaEventListener);
	});
	return class$;
}

$Class* MetaEventListener::class$ = nullptr;

		} // midi
	} // sound
} // javax
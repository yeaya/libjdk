#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/MidiMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiMessage = ::javax::sound::midi::MidiMessage;

namespace javax {
	namespace sound {
		namespace midi {

$Class* Receiver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"send", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Receiver, send, void, $MidiMessage*, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.midi.Receiver",
		nullptr,
		"java.lang.AutoCloseable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Receiver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Receiver);
	});
	return class$;
}

$Class* Receiver::class$ = nullptr;

		} // midi
	} // sound
} // javax
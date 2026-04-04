#include <javax/sound/midi/Transmitter.h>
#include <javax/sound/midi/Receiver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Receiver = ::javax::sound::midi::Receiver;

namespace javax {
	namespace sound {
		namespace midi {

$Class* Transmitter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"close", "()V", nullptr, $PUBLIC | $ABSTRACT},
		{"getReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transmitter, getReceiver, $Receiver*)},
		{"setReceiver", "(Ljavax/sound/midi/Receiver;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Transmitter, setReceiver, void, $Receiver*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.midi.Transmitter",
		nullptr,
		"java.lang.AutoCloseable",
		nullptr,
		methodInfos$$
	};
	$loadClass(Transmitter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Transmitter);
	});
	return class$;
}

$Class* Transmitter::class$ = nullptr;

		} // midi
	} // sound
} // javax
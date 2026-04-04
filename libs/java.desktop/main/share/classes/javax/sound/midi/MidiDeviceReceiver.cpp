#include <javax/sound/midi/MidiDeviceReceiver.h>
#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice = ::javax::sound::midi::MidiDevice;

namespace javax {
	namespace sound {
		namespace midi {

$Class* MidiDeviceReceiver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getMidiDevice", "()Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiDeviceReceiver, getMidiDevice, $MidiDevice*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.midi.MidiDeviceReceiver",
		nullptr,
		"javax.sound.midi.Receiver",
		nullptr,
		methodInfos$$
	};
	$loadClass(MidiDeviceReceiver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiDeviceReceiver);
	});
	return class$;
}

$Class* MidiDeviceReceiver::class$ = nullptr;

		} // midi
	} // sound
} // javax
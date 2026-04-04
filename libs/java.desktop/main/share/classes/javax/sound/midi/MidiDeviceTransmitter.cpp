#include <javax/sound/midi/MidiDeviceTransmitter.h>
#include <javax/sound/midi/MidiDevice.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice = ::javax::sound::midi::MidiDevice;

namespace javax {
	namespace sound {
		namespace midi {

$Class* MidiDeviceTransmitter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getMidiDevice", "()Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiDeviceTransmitter, getMidiDevice, $MidiDevice*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.midi.MidiDeviceTransmitter",
		nullptr,
		"javax.sound.midi.Transmitter",
		nullptr,
		methodInfos$$
	};
	$loadClass(MidiDeviceTransmitter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiDeviceTransmitter);
	});
	return class$;
}

$Class* MidiDeviceTransmitter::class$ = nullptr;

		} // midi
	} // sound
} // javax
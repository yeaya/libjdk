#include <com/sun/media/sound/ReferenceCountingDevice.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Receiver = ::javax::sound::midi::Receiver;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$Class* ReferenceCountingDevice::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getReceiverReferenceCounting", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReferenceCountingDevice, getReceiverReferenceCounting, $Receiver*), "javax.sound.midi.MidiUnavailableException"},
		{"getTransmitterReferenceCounting", "()Ljavax/sound/midi/Transmitter;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ReferenceCountingDevice, getTransmitterReferenceCounting, $Transmitter*), "javax.sound.midi.MidiUnavailableException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.media.sound.ReferenceCountingDevice",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(ReferenceCountingDevice, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ReferenceCountingDevice);
	});
	return class$;
}

$Class* ReferenceCountingDevice::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#include <com/sun/media/sound/MidiDeviceTransmitterEnvelope.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $Receiver = ::javax::sound::midi::Receiver;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void MidiDeviceTransmitterEnvelope::init$($MidiDevice* device, $Transmitter* transmitter) {
	if (device == nullptr || transmitter == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, device, device);
	$set(this, transmitter, transmitter);
}

void MidiDeviceTransmitterEnvelope::setReceiver($Receiver* receiver) {
	$nc(this->transmitter)->setReceiver(receiver);
}

$Receiver* MidiDeviceTransmitterEnvelope::getReceiver() {
	return $nc(this->transmitter)->getReceiver();
}

void MidiDeviceTransmitterEnvelope::close() {
	$nc(this->transmitter)->close();
}

$MidiDevice* MidiDeviceTransmitterEnvelope::getMidiDevice() {
	return this->device;
}

$Transmitter* MidiDeviceTransmitterEnvelope::getTransmitter() {
	return this->transmitter;
}

MidiDeviceTransmitterEnvelope::MidiDeviceTransmitterEnvelope() {
}

$Class* MidiDeviceTransmitterEnvelope::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"device", "Ljavax/sound/midi/MidiDevice;", nullptr, $PRIVATE | $FINAL, $field(MidiDeviceTransmitterEnvelope, device)},
		{"transmitter", "Ljavax/sound/midi/Transmitter;", nullptr, $PRIVATE | $FINAL, $field(MidiDeviceTransmitterEnvelope, transmitter)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/midi/MidiDevice;Ljavax/sound/midi/Transmitter;)V", nullptr, $PUBLIC, $method(MidiDeviceTransmitterEnvelope, init$, void, $MidiDevice*, $Transmitter*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(MidiDeviceTransmitterEnvelope, close, void)},
		{"getMidiDevice", "()Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC, $virtualMethod(MidiDeviceTransmitterEnvelope, getMidiDevice, $MidiDevice*)},
		{"getReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC, $virtualMethod(MidiDeviceTransmitterEnvelope, getReceiver, $Receiver*)},
		{"getTransmitter", "()Ljavax/sound/midi/Transmitter;", nullptr, $PUBLIC, $method(MidiDeviceTransmitterEnvelope, getTransmitter, $Transmitter*)},
		{"setReceiver", "(Ljavax/sound/midi/Receiver;)V", nullptr, $PUBLIC, $virtualMethod(MidiDeviceTransmitterEnvelope, setReceiver, void, $Receiver*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.MidiDeviceTransmitterEnvelope",
		"java.lang.Object",
		"javax.sound.midi.MidiDeviceTransmitter",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MidiDeviceTransmitterEnvelope, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiDeviceTransmitterEnvelope);
	});
	return class$;
}

$Class* MidiDeviceTransmitterEnvelope::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
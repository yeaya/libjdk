#include <com/sun/media/sound/MidiDeviceReceiverEnvelope.h>

#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Receiver.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Receiver = ::javax::sound::midi::Receiver;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _MidiDeviceReceiverEnvelope_FieldInfo_[] = {
	{"device", "Ljavax/sound/midi/MidiDevice;", nullptr, $PRIVATE | $FINAL, $field(MidiDeviceReceiverEnvelope, device)},
	{"receiver", "Ljavax/sound/midi/Receiver;", nullptr, $PRIVATE | $FINAL, $field(MidiDeviceReceiverEnvelope, receiver)},
	{}
};

$MethodInfo _MidiDeviceReceiverEnvelope_MethodInfo_[] = {
	{"<init>", "(Ljavax/sound/midi/MidiDevice;Ljavax/sound/midi/Receiver;)V", nullptr, $PUBLIC, $method(MidiDeviceReceiverEnvelope, init$, void, $MidiDevice*, $Receiver*)},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(MidiDeviceReceiverEnvelope, close, void)},
	{"getMidiDevice", "()Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC, $virtualMethod(MidiDeviceReceiverEnvelope, getMidiDevice, $MidiDevice*)},
	{"getReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PUBLIC, $method(MidiDeviceReceiverEnvelope, getReceiver, $Receiver*)},
	{"send", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, $PUBLIC, $virtualMethod(MidiDeviceReceiverEnvelope, send, void, $MidiMessage*, int64_t)},
	{}
};

$ClassInfo _MidiDeviceReceiverEnvelope_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.MidiDeviceReceiverEnvelope",
	"java.lang.Object",
	"javax.sound.midi.MidiDeviceReceiver",
	_MidiDeviceReceiverEnvelope_FieldInfo_,
	_MidiDeviceReceiverEnvelope_MethodInfo_
};

$Object* allocate$MidiDeviceReceiverEnvelope($Class* clazz) {
	return $of($alloc(MidiDeviceReceiverEnvelope));
}

void MidiDeviceReceiverEnvelope::init$($MidiDevice* device, $Receiver* receiver) {
	if (device == nullptr || receiver == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, device, device);
	$set(this, receiver, receiver);
}

void MidiDeviceReceiverEnvelope::close() {
	$nc(this->receiver)->close();
}

void MidiDeviceReceiverEnvelope::send($MidiMessage* message, int64_t timeStamp) {
	$nc(this->receiver)->send(message, timeStamp);
}

$MidiDevice* MidiDeviceReceiverEnvelope::getMidiDevice() {
	return this->device;
}

$Receiver* MidiDeviceReceiverEnvelope::getReceiver() {
	return this->receiver;
}

MidiDeviceReceiverEnvelope::MidiDeviceReceiverEnvelope() {
}

$Class* MidiDeviceReceiverEnvelope::load$($String* name, bool initialize) {
	$loadClass(MidiDeviceReceiverEnvelope, name, initialize, &_MidiDeviceReceiverEnvelope_ClassInfo_, allocate$MidiDeviceReceiverEnvelope);
	return class$;
}

$Class* MidiDeviceReceiverEnvelope::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
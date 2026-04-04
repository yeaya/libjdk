#include <com/sun/media/sound/MidiOutDevice.h>
#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/MidiOutDevice$MidiOutReceiver.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiUnavailableException.h>
#include <javax/sound/midi/Receiver.h>
#include <jcpp.h>

using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $MidiOutDevice$MidiOutReceiver = ::com::sun::media::sound::MidiOutDevice$MidiOutReceiver;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiUnavailableException = ::javax::sound::midi::MidiUnavailableException;
using $Receiver = ::javax::sound::midi::Receiver;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void MidiOutDevice::init$($AbstractMidiDeviceProvider$Info* info) {
	$AbstractMidiDevice::init$(info);
}

void MidiOutDevice::implOpen() {
	$synchronized(this) {
		int32_t index = $$sure($AbstractMidiDeviceProvider$Info, getDeviceInfo())->getIndex();
		this->id = nOpen(index);
		if (this->id == 0) {
			$throwNew($MidiUnavailableException, "Unable to open native device"_s);
		}
	}
}

void MidiOutDevice::implClose() {
	$synchronized(this) {
		int64_t oldId = this->id;
		this->id = 0;
		$AbstractMidiDevice::implClose();
		nClose(oldId);
	}
}

int64_t MidiOutDevice::getMicrosecondPosition() {
	int64_t timestamp = -1;
	if (isOpen()) {
		timestamp = nGetTimeStamp(this->id);
	}
	return timestamp;
}

bool MidiOutDevice::hasReceivers() {
	return true;
}

$Receiver* MidiOutDevice::createReceiver() {
	return $new($MidiOutDevice$MidiOutReceiver, this);
}

int64_t MidiOutDevice::nOpen(int32_t index) {
	$prepareNative(nOpen, int64_t, int32_t index);
	int64_t $ret = $invokeNative(index);
	$finishNative();
	return $ret;
}

void MidiOutDevice::nClose(int64_t id) {
	$prepareNative(nClose, void, int64_t id);
	$invokeNative(id);
	$finishNative();
}

void MidiOutDevice::nSendShortMessage(int64_t id, int32_t packedMsg, int64_t timeStamp) {
	$prepareNative(nSendShortMessage, void, int64_t id, int32_t packedMsg, int64_t timeStamp);
	$invokeNative(id, packedMsg, timeStamp);
	$finishNative();
}

void MidiOutDevice::nSendLongMessage(int64_t id, $bytes* data, int32_t size, int64_t timeStamp) {
	$prepareNative(nSendLongMessage, void, int64_t id, $bytes* data, int32_t size, int64_t timeStamp);
	$invokeNative(id, data, size, timeStamp);
	$finishNative();
}

int64_t MidiOutDevice::nGetTimeStamp(int64_t id) {
	$prepareNative(nGetTimeStamp, int64_t, int64_t id);
	int64_t $ret = $invokeNative(id);
	$finishNative();
	return $ret;
}

MidiOutDevice::MidiOutDevice() {
}

$Class* MidiOutDevice::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)V", nullptr, 0, $method(MidiOutDevice, init$, void, $AbstractMidiDeviceProvider$Info*)},
		{"createReceiver", "()Ljavax/sound/midi/Receiver;", nullptr, $PROTECTED, $virtualMethod(MidiOutDevice, createReceiver, $Receiver*)},
		{"getMicrosecondPosition", "()J", nullptr, $PUBLIC, $virtualMethod(MidiOutDevice, getMicrosecondPosition, int64_t)},
		{"hasReceivers", "()Z", nullptr, $PROTECTED, $virtualMethod(MidiOutDevice, hasReceivers, bool)},
		{"implClose", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(MidiOutDevice, implClose, void)},
		{"implOpen", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(MidiOutDevice, implOpen, void), "javax.sound.midi.MidiUnavailableException"},
		{"nClose", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(MidiOutDevice, nClose, void, int64_t)},
		{"nGetTimeStamp", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(MidiOutDevice, nGetTimeStamp, int64_t, int64_t)},
		{"nOpen", "(I)J", nullptr, $PRIVATE | $NATIVE, $method(MidiOutDevice, nOpen, int64_t, int32_t), "javax.sound.midi.MidiUnavailableException"},
		{"nSendLongMessage", "(J[BIJ)V", nullptr, $PRIVATE | $NATIVE, $method(MidiOutDevice, nSendLongMessage, void, int64_t, $bytes*, int32_t, int64_t)},
		{"nSendShortMessage", "(JIJ)V", nullptr, $PRIVATE | $NATIVE, $method(MidiOutDevice, nSendShortMessage, void, int64_t, int32_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.MidiOutDevice$MidiOutReceiver", "com.sun.media.sound.MidiOutDevice", "MidiOutReceiver", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.MidiOutDevice",
		"com.sun.media.sound.AbstractMidiDevice",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.MidiOutDevice$MidiOutReceiver"
	};
	$loadClass(MidiOutDevice, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MidiOutDevice));
	});
	return class$;
}

$Class* MidiOutDevice::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
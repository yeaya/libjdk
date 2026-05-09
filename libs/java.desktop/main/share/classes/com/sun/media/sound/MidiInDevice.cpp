#include <com/sun/media/sound/MidiInDevice.h>
#include <com/sun/media/sound/AbstractMidiDevice$TransmitterList.h>
#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/AbstractMidiDeviceProvider$Info.h>
#include <com/sun/media/sound/JSSecurityManager.h>
#include <com/sun/media/sound/MidiInDevice$MidiInTransmitter.h>
#include <com/sun/media/sound/MidiInDeviceProvider$MidiInDeviceInfo.h>
#include <java/lang/InterruptedException.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <javax/sound/midi/MidiUnavailableException.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDeviceProvider$Info = ::com::sun::media::sound::AbstractMidiDeviceProvider$Info;
using $JSSecurityManager = ::com::sun::media::sound::JSSecurityManager;
using $MidiInDevice$MidiInTransmitter = ::com::sun::media::sound::MidiInDevice$MidiInTransmitter;
using $MidiInDeviceProvider$MidiInDeviceInfo = ::com::sun::media::sound::MidiInDeviceProvider$MidiInDeviceInfo;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiUnavailableException = ::javax::sound::midi::MidiUnavailableException;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void MidiInDevice::finalize() {
	this->$AbstractMidiDevice::finalize();
}

int32_t MidiInDevice::hashCode() {
	return this->$AbstractMidiDevice::hashCode();
}

bool MidiInDevice::equals(Object$* arg0) {
	return this->$AbstractMidiDevice::equals(arg0);
}

$Object* MidiInDevice::clone() {
	return this->$AbstractMidiDevice::clone();
}

$String* MidiInDevice::toString() {
	return this->$AbstractMidiDevice::toString();
}

void MidiInDevice::init$($AbstractMidiDeviceProvider$Info* info) {
	$AbstractMidiDevice::init$(info);
}

void MidiInDevice::implOpen() {
	$synchronized(this) {
		int32_t index = $$sure($MidiInDeviceProvider$MidiInDeviceInfo, getDeviceInfo())->getIndex();
		this->id = nOpen(index);
		if (this->id == 0) {
			$throwNew($MidiUnavailableException, "Unable to open native device"_s);
		}
		if (this->midiInThread == nullptr) {
			$set(this, midiInThread, $JSSecurityManager::createThread(this, "Java Sound MidiInDevice Thread"_s, false, -1, true));
		}
		nStart(this->id);
	}
}

void MidiInDevice::implClose() {
	$synchronized(this) {
		int64_t oldId = this->id;
		this->id = 0;
		$AbstractMidiDevice::implClose();
		nStop(oldId);
		if (this->midiInThread != nullptr) {
			try {
				$nc(this->midiInThread)->join(1000);
			} catch ($InterruptedException& e) {
			}
		}
		nClose(oldId);
	}
}

int64_t MidiInDevice::getMicrosecondPosition() {
	int64_t timestamp = -1;
	if (isOpen()) {
		timestamp = nGetTimeStamp(this->id);
	}
	return timestamp;
}

bool MidiInDevice::hasTransmitters() {
	return true;
}

$Transmitter* MidiInDevice::createTransmitter() {
	return $new($MidiInDevice$MidiInTransmitter, this);
}

void MidiInDevice::run() {
	while (this->id != 0) {
		nGetMessages(this->id);
		if (this->id != 0) {
			try {
				$Thread::sleep(1);
			} catch ($InterruptedException& e) {
			}
		}
	}
	$set(this, midiInThread, nullptr);
}

void MidiInDevice::callbackShortMessage(int32_t packedMsg, int64_t timeStamp) {
	if (packedMsg == 0 || this->id == 0) {
		return;
	}
	$$nc(getTransmitterList())->sendMessage(packedMsg, timeStamp);
}

void MidiInDevice::callbackLongMessage($bytes* data, int64_t timeStamp) {
	if (this->id == 0 || data == nullptr) {
		return;
	}
	$$nc(getTransmitterList())->sendMessage(data, timeStamp);
}

int64_t MidiInDevice::nOpen(int32_t index) {
	$prepareNative(nOpen, int64_t, int32_t index);
	int64_t $ret = $invokeNative(index);
	$finishNative();
	return $ret;
}

void MidiInDevice::nClose(int64_t id) {
	$prepareNative(nClose, void, int64_t id);
	$invokeNative(id);
	$finishNative();
}

void MidiInDevice::nStart(int64_t id) {
	$prepareNative(nStart, void, int64_t id);
	$invokeNative(id);
	$finishNative();
}

void MidiInDevice::nStop(int64_t id) {
	$prepareNative(nStop, void, int64_t id);
	$invokeNative(id);
	$finishNative();
}

int64_t MidiInDevice::nGetTimeStamp(int64_t id) {
	$prepareNative(nGetTimeStamp, int64_t, int64_t id);
	int64_t $ret = $invokeNative(id);
	$finishNative();
	return $ret;
}

void MidiInDevice::nGetMessages(int64_t id) {
	$prepareNative(nGetMessages, void, int64_t id);
	$invokeNative(id);
	$finishNative();
}

MidiInDevice::MidiInDevice() {
}

$Class* MidiInDevice::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"midiInThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $VOLATILE, $field(MidiInDevice, midiInThread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lcom/sun/media/sound/AbstractMidiDeviceProvider$Info;)V", nullptr, 0, $method(MidiInDevice, init$, void, $AbstractMidiDeviceProvider$Info*)},
		{"callbackLongMessage", "([BJ)V", nullptr, 0, $method(MidiInDevice, callbackLongMessage, void, $bytes*, int64_t)},
		{"callbackShortMessage", "(IJ)V", nullptr, 0, $method(MidiInDevice, callbackShortMessage, void, int32_t, int64_t)},
		{"createTransmitter", "()Ljavax/sound/midi/Transmitter;", nullptr, $PROTECTED, $virtualMethod(MidiInDevice, createTransmitter, $Transmitter*)},
		{"getMicrosecondPosition", "()J", nullptr, $PUBLIC, $virtualMethod(MidiInDevice, getMicrosecondPosition, int64_t)},
		{"hasTransmitters", "()Z", nullptr, $PROTECTED, $virtualMethod(MidiInDevice, hasTransmitters, bool)},
		{"implClose", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(MidiInDevice, implClose, void)},
		{"implOpen", "()V", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(MidiInDevice, implOpen, void), "javax.sound.midi.MidiUnavailableException"},
		{"nClose", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(MidiInDevice, nClose, void, int64_t)},
		{"nGetMessages", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(MidiInDevice, nGetMessages, void, int64_t)},
		{"nGetTimeStamp", "(J)J", nullptr, $PRIVATE | $NATIVE, $method(MidiInDevice, nGetTimeStamp, int64_t, int64_t)},
		{"nOpen", "(I)J", nullptr, $PRIVATE | $NATIVE, $method(MidiInDevice, nOpen, int64_t, int32_t), "javax.sound.midi.MidiUnavailableException"},
		{"nStart", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(MidiInDevice, nStart, void, int64_t), "javax.sound.midi.MidiUnavailableException"},
		{"nStop", "(J)V", nullptr, $PRIVATE | $NATIVE, $method(MidiInDevice, nStop, void, int64_t)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(MidiInDevice, run, void)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.MidiInDevice$MidiInTransmitter", "com.sun.media.sound.MidiInDevice", "MidiInTransmitter", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.MidiInDevice",
		"com.sun.media.sound.AbstractMidiDevice",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.MidiInDevice$MidiInTransmitter"
	};
	$loadClass(MidiInDevice, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MidiInDevice));
	});
	return class$;
}

$Class* MidiInDevice::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
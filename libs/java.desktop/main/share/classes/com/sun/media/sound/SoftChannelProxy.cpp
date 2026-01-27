#include <com/sun/media/sound/SoftChannelProxy.h>

#include <javax/sound/midi/MidiChannel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiChannel = ::javax::sound::midi::MidiChannel;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _SoftChannelProxy_FieldInfo_[] = {
	{"channel", "Ljavax/sound/midi/MidiChannel;", nullptr, $PRIVATE, $field(SoftChannelProxy, channel)},
	{}
};

$MethodInfo _SoftChannelProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(SoftChannelProxy, init$, void)},
	{"allNotesOff", "()V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, allNotesOff, void)},
	{"allSoundOff", "()V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, allSoundOff, void)},
	{"controlChange", "(II)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, controlChange, void, int32_t, int32_t)},
	{"getChannel", "()Ljavax/sound/midi/MidiChannel;", nullptr, $PUBLIC, $method(SoftChannelProxy, getChannel, $MidiChannel*)},
	{"getChannelPressure", "()I", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, getChannelPressure, int32_t)},
	{"getController", "(I)I", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, getController, int32_t, int32_t)},
	{"getMono", "()Z", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, getMono, bool)},
	{"getMute", "()Z", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, getMute, bool)},
	{"getOmni", "()Z", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, getOmni, bool)},
	{"getPitchBend", "()I", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, getPitchBend, int32_t)},
	{"getPolyPressure", "(I)I", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, getPolyPressure, int32_t, int32_t)},
	{"getProgram", "()I", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, getProgram, int32_t)},
	{"getSolo", "()Z", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, getSolo, bool)},
	{"localControl", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, localControl, bool, bool)},
	{"noteOff", "(I)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, noteOff, void, int32_t)},
	{"noteOff", "(II)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, noteOff, void, int32_t, int32_t)},
	{"noteOn", "(II)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, noteOn, void, int32_t, int32_t)},
	{"programChange", "(I)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, programChange, void, int32_t)},
	{"programChange", "(II)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, programChange, void, int32_t, int32_t)},
	{"resetAllControllers", "()V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, resetAllControllers, void)},
	{"setChannel", "(Ljavax/sound/midi/MidiChannel;)V", nullptr, $PUBLIC, $method(SoftChannelProxy, setChannel, void, $MidiChannel*)},
	{"setChannelPressure", "(I)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, setChannelPressure, void, int32_t)},
	{"setMono", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, setMono, void, bool)},
	{"setMute", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, setMute, void, bool)},
	{"setOmni", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, setOmni, void, bool)},
	{"setPitchBend", "(I)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, setPitchBend, void, int32_t)},
	{"setPolyPressure", "(II)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, setPolyPressure, void, int32_t, int32_t)},
	{"setSolo", "(Z)V", nullptr, $PUBLIC, $virtualMethod(SoftChannelProxy, setSolo, void, bool)},
	{}
};

$ClassInfo _SoftChannelProxy_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.media.sound.SoftChannelProxy",
	"java.lang.Object",
	"javax.sound.midi.MidiChannel",
	_SoftChannelProxy_FieldInfo_,
	_SoftChannelProxy_MethodInfo_
};

$Object* allocate$SoftChannelProxy($Class* clazz) {
	return $of($alloc(SoftChannelProxy));
}

void SoftChannelProxy::init$() {
	$set(this, channel, nullptr);
}

$MidiChannel* SoftChannelProxy::getChannel() {
	return this->channel;
}

void SoftChannelProxy::setChannel($MidiChannel* channel) {
	$set(this, channel, channel);
}

void SoftChannelProxy::allNotesOff() {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->allNotesOff();
}

void SoftChannelProxy::allSoundOff() {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->allSoundOff();
}

void SoftChannelProxy::controlChange(int32_t controller, int32_t value) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->controlChange(controller, value);
}

int32_t SoftChannelProxy::getChannelPressure() {
	if (this->channel == nullptr) {
		return 0;
	}
	return $nc(this->channel)->getChannelPressure();
}

int32_t SoftChannelProxy::getController(int32_t controller) {
	if (this->channel == nullptr) {
		return 0;
	}
	return $nc(this->channel)->getController(controller);
}

bool SoftChannelProxy::getMono() {
	if (this->channel == nullptr) {
		return false;
	}
	return $nc(this->channel)->getMono();
}

bool SoftChannelProxy::getMute() {
	if (this->channel == nullptr) {
		return false;
	}
	return $nc(this->channel)->getMute();
}

bool SoftChannelProxy::getOmni() {
	if (this->channel == nullptr) {
		return false;
	}
	return $nc(this->channel)->getOmni();
}

int32_t SoftChannelProxy::getPitchBend() {
	if (this->channel == nullptr) {
		return 8192;
	}
	return $nc(this->channel)->getPitchBend();
}

int32_t SoftChannelProxy::getPolyPressure(int32_t noteNumber) {
	if (this->channel == nullptr) {
		return 0;
	}
	return $nc(this->channel)->getPolyPressure(noteNumber);
}

int32_t SoftChannelProxy::getProgram() {
	if (this->channel == nullptr) {
		return 0;
	}
	return $nc(this->channel)->getProgram();
}

bool SoftChannelProxy::getSolo() {
	if (this->channel == nullptr) {
		return false;
	}
	return $nc(this->channel)->getSolo();
}

bool SoftChannelProxy::localControl(bool on) {
	if (this->channel == nullptr) {
		return false;
	}
	return $nc(this->channel)->localControl(on);
}

void SoftChannelProxy::noteOff(int32_t noteNumber) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->noteOff(noteNumber);
}

void SoftChannelProxy::noteOff(int32_t noteNumber, int32_t velocity) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->noteOff(noteNumber, velocity);
}

void SoftChannelProxy::noteOn(int32_t noteNumber, int32_t velocity) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->noteOn(noteNumber, velocity);
}

void SoftChannelProxy::programChange(int32_t program) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->programChange(program);
}

void SoftChannelProxy::programChange(int32_t bank, int32_t program) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->programChange(bank, program);
}

void SoftChannelProxy::resetAllControllers() {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->resetAllControllers();
}

void SoftChannelProxy::setChannelPressure(int32_t pressure) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setChannelPressure(pressure);
}

void SoftChannelProxy::setMono(bool on) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setMono(on);
}

void SoftChannelProxy::setMute(bool mute) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setMute(mute);
}

void SoftChannelProxy::setOmni(bool on) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setOmni(on);
}

void SoftChannelProxy::setPitchBend(int32_t bend) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setPitchBend(bend);
}

void SoftChannelProxy::setPolyPressure(int32_t noteNumber, int32_t pressure) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setPolyPressure(noteNumber, pressure);
}

void SoftChannelProxy::setSolo(bool soloState) {
	if (this->channel == nullptr) {
		return;
	}
	$nc(this->channel)->setSolo(soloState);
}

SoftChannelProxy::SoftChannelProxy() {
}

$Class* SoftChannelProxy::load$($String* name, bool initialize) {
	$loadClass(SoftChannelProxy, name, initialize, &_SoftChannelProxy_ClassInfo_, allocate$SoftChannelProxy);
	return class$;
}

$Class* SoftChannelProxy::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#include <com/sun/media/sound/ModelAbstractChannelMixer.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$MethodInfo _ModelAbstractChannelMixer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(ModelAbstractChannelMixer, init$, void)},
	{"allNotesOff", "()V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, allNotesOff, void)},
	{"allSoundOff", "()V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, allSoundOff, void)},
	{"controlChange", "(II)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, controlChange, void, int32_t, int32_t)},
	{"getChannelPressure", "()I", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, getChannelPressure, int32_t)},
	{"getController", "(I)I", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, getController, int32_t, int32_t)},
	{"getMono", "()Z", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, getMono, bool)},
	{"getMute", "()Z", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, getMute, bool)},
	{"getOmni", "()Z", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, getOmni, bool)},
	{"getPitchBend", "()I", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, getPitchBend, int32_t)},
	{"getPolyPressure", "(I)I", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, getPolyPressure, int32_t, int32_t)},
	{"getProgram", "()I", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, getProgram, int32_t)},
	{"getSolo", "()Z", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, getSolo, bool)},
	{"localControl", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, localControl, bool, bool)},
	{"noteOff", "(I)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, noteOff, void, int32_t)},
	{"noteOff", "(II)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, noteOff, void, int32_t, int32_t)},
	{"noteOn", "(II)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, noteOn, void, int32_t, int32_t)},
	{"process", "([[L[F;II)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"programChange", "(I)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, programChange, void, int32_t)},
	{"programChange", "(II)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, programChange, void, int32_t, int32_t)},
	{"resetAllControllers", "()V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, resetAllControllers, void)},
	{"setChannelPressure", "(I)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, setChannelPressure, void, int32_t)},
	{"setMono", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, setMono, void, bool)},
	{"setMute", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, setMute, void, bool)},
	{"setOmni", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, setOmni, void, bool)},
	{"setPitchBend", "(I)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, setPitchBend, void, int32_t)},
	{"setPolyPressure", "(II)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, setPolyPressure, void, int32_t, int32_t)},
	{"setSolo", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ModelAbstractChannelMixer, setSolo, void, bool)},
	{"stop", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ModelAbstractChannelMixer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.ModelAbstractChannelMixer",
	"java.lang.Object",
	"com.sun.media.sound.ModelChannelMixer",
	nullptr,
	_ModelAbstractChannelMixer_MethodInfo_
};

$Object* allocate$ModelAbstractChannelMixer($Class* clazz) {
	return $of($alloc(ModelAbstractChannelMixer));
}

void ModelAbstractChannelMixer::init$() {
}

void ModelAbstractChannelMixer::allNotesOff() {
}

void ModelAbstractChannelMixer::allSoundOff() {
}

void ModelAbstractChannelMixer::controlChange(int32_t controller, int32_t value) {
}

int32_t ModelAbstractChannelMixer::getChannelPressure() {
	return 0;
}

int32_t ModelAbstractChannelMixer::getController(int32_t controller) {
	return 0;
}

bool ModelAbstractChannelMixer::getMono() {
	return false;
}

bool ModelAbstractChannelMixer::getMute() {
	return false;
}

bool ModelAbstractChannelMixer::getOmni() {
	return false;
}

int32_t ModelAbstractChannelMixer::getPitchBend() {
	return 0;
}

int32_t ModelAbstractChannelMixer::getPolyPressure(int32_t noteNumber) {
	return 0;
}

int32_t ModelAbstractChannelMixer::getProgram() {
	return 0;
}

bool ModelAbstractChannelMixer::getSolo() {
	return false;
}

bool ModelAbstractChannelMixer::localControl(bool on) {
	return false;
}

void ModelAbstractChannelMixer::noteOff(int32_t noteNumber) {
}

void ModelAbstractChannelMixer::noteOff(int32_t noteNumber, int32_t velocity) {
}

void ModelAbstractChannelMixer::noteOn(int32_t noteNumber, int32_t velocity) {
}

void ModelAbstractChannelMixer::programChange(int32_t program) {
}

void ModelAbstractChannelMixer::programChange(int32_t bank, int32_t program) {
}

void ModelAbstractChannelMixer::resetAllControllers() {
}

void ModelAbstractChannelMixer::setChannelPressure(int32_t pressure) {
}

void ModelAbstractChannelMixer::setMono(bool on) {
}

void ModelAbstractChannelMixer::setMute(bool mute) {
}

void ModelAbstractChannelMixer::setOmni(bool on) {
}

void ModelAbstractChannelMixer::setPitchBend(int32_t bend) {
}

void ModelAbstractChannelMixer::setPolyPressure(int32_t noteNumber, int32_t pressure) {
}

void ModelAbstractChannelMixer::setSolo(bool soloState) {
}

ModelAbstractChannelMixer::ModelAbstractChannelMixer() {
}

$Class* ModelAbstractChannelMixer::load$($String* name, bool initialize) {
	$loadClass(ModelAbstractChannelMixer, name, initialize, &_ModelAbstractChannelMixer_ClassInfo_, allocate$ModelAbstractChannelMixer);
	return class$;
}

$Class* ModelAbstractChannelMixer::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
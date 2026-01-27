#include <javax/sound/midi/MidiChannel.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _MidiChannel_MethodInfo_[] = {
	{"allNotesOff", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, allNotesOff, void)},
	{"allSoundOff", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, allSoundOff, void)},
	{"controlChange", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, controlChange, void, int32_t, int32_t)},
	{"getChannelPressure", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, getChannelPressure, int32_t)},
	{"getController", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, getController, int32_t, int32_t)},
	{"getMono", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, getMono, bool)},
	{"getMute", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, getMute, bool)},
	{"getOmni", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, getOmni, bool)},
	{"getPitchBend", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, getPitchBend, int32_t)},
	{"getPolyPressure", "(I)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, getPolyPressure, int32_t, int32_t)},
	{"getProgram", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, getProgram, int32_t)},
	{"getSolo", "()Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, getSolo, bool)},
	{"localControl", "(Z)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, localControl, bool, bool)},
	{"noteOff", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, noteOff, void, int32_t, int32_t)},
	{"noteOff", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, noteOff, void, int32_t)},
	{"noteOn", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, noteOn, void, int32_t, int32_t)},
	{"programChange", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, programChange, void, int32_t)},
	{"programChange", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, programChange, void, int32_t, int32_t)},
	{"resetAllControllers", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, resetAllControllers, void)},
	{"setChannelPressure", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, setChannelPressure, void, int32_t)},
	{"setMono", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, setMono, void, bool)},
	{"setMute", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, setMute, void, bool)},
	{"setOmni", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, setOmni, void, bool)},
	{"setPitchBend", "(I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, setPitchBend, void, int32_t)},
	{"setPolyPressure", "(II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, setPolyPressure, void, int32_t, int32_t)},
	{"setSolo", "(Z)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(MidiChannel, setSolo, void, bool)},
	{}
};

$ClassInfo _MidiChannel_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.MidiChannel",
	nullptr,
	nullptr,
	nullptr,
	_MidiChannel_MethodInfo_
};

$Object* allocate$MidiChannel($Class* clazz) {
	return $of($alloc(MidiChannel));
}

$Class* MidiChannel::load$($String* name, bool initialize) {
	$loadClass(MidiChannel, name, initialize, &_MidiChannel_ClassInfo_, allocate$MidiChannel);
	return class$;
}

$Class* MidiChannel::class$ = nullptr;

		} // midi
	} // sound
} // javax
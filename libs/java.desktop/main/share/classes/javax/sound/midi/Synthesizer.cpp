#include <javax/sound/midi/Synthesizer.h>

#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/VoiceStatus.h>
#include <jcpp.h>

using $InstrumentArray = $Array<::javax::sound::midi::Instrument>;
using $MidiChannelArray = $Array<::javax::sound::midi::MidiChannel>;
using $PatchArray = $Array<::javax::sound::midi::Patch>;
using $VoiceStatusArray = $Array<::javax::sound::midi::VoiceStatus>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Instrument = ::javax::sound::midi::Instrument;
using $Soundbank = ::javax::sound::midi::Soundbank;

namespace javax {
	namespace sound {
		namespace midi {

$MethodInfo _Synthesizer_MethodInfo_[] = {
	{"getAvailableInstruments", "()[Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, getAvailableInstruments, $InstrumentArray*)},
	{"getChannels", "()[Ljavax/sound/midi/MidiChannel;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, getChannels, $MidiChannelArray*)},
	{"getDefaultSoundbank", "()Ljavax/sound/midi/Soundbank;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, getDefaultSoundbank, $Soundbank*)},
	{"getLatency", "()J", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, getLatency, int64_t)},
	{"getLoadedInstruments", "()[Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, getLoadedInstruments, $InstrumentArray*)},
	{"getMaxPolyphony", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, getMaxPolyphony, int32_t)},
	{"getVoiceStatus", "()[Ljavax/sound/midi/VoiceStatus;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, getVoiceStatus, $VoiceStatusArray*)},
	{"isSoundbankSupported", "(Ljavax/sound/midi/Soundbank;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, isSoundbankSupported, bool, $Soundbank*)},
	{"loadAllInstruments", "(Ljavax/sound/midi/Soundbank;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, loadAllInstruments, bool, $Soundbank*)},
	{"loadInstrument", "(Ljavax/sound/midi/Instrument;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, loadInstrument, bool, $Instrument*)},
	{"loadInstruments", "(Ljavax/sound/midi/Soundbank;[Ljavax/sound/midi/Patch;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, loadInstruments, bool, $Soundbank*, $PatchArray*)},
	{"remapInstrument", "(Ljavax/sound/midi/Instrument;Ljavax/sound/midi/Instrument;)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, remapInstrument, bool, $Instrument*, $Instrument*)},
	{"unloadAllInstruments", "(Ljavax/sound/midi/Soundbank;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, unloadAllInstruments, void, $Soundbank*)},
	{"unloadInstrument", "(Ljavax/sound/midi/Instrument;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, unloadInstrument, void, $Instrument*)},
	{"unloadInstruments", "(Ljavax/sound/midi/Soundbank;[Ljavax/sound/midi/Patch;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Synthesizer, unloadInstruments, void, $Soundbank*, $PatchArray*)},
	{}
};

$ClassInfo _Synthesizer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.sound.midi.Synthesizer",
	nullptr,
	"javax.sound.midi.MidiDevice",
	nullptr,
	_Synthesizer_MethodInfo_
};

$Object* allocate$Synthesizer($Class* clazz) {
	return $of($alloc(Synthesizer));
}

$Class* Synthesizer::load$($String* name, bool initialize) {
	$loadClass(Synthesizer, name, initialize, &_Synthesizer_ClassInfo_, allocate$Synthesizer);
	return class$;
}

$Class* Synthesizer::class$ = nullptr;

		} // midi
	} // sound
} // javax
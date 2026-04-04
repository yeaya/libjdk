#include <com/sun/media/sound/ModelMappedInstrument.h>
#include <com/sun/media/sound/ModelChannelMixer.h>
#include <com/sun/media/sound/ModelDirectedPlayer.h>
#include <com/sun/media/sound/ModelDirector.h>
#include <com/sun/media/sound/ModelInstrument.h>
#include <com/sun/media/sound/ModelPerformer.h>
#include <javax/sound/midi/MidiChannel.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <jcpp.h>

using $ModelPerformerArray = $Array<::com::sun::media::sound::ModelPerformer>;
using $ModelChannelMixer = ::com::sun::media::sound::ModelChannelMixer;
using $ModelDirectedPlayer = ::com::sun::media::sound::ModelDirectedPlayer;
using $ModelDirector = ::com::sun::media::sound::ModelDirector;
using $ModelInstrument = ::com::sun::media::sound::ModelInstrument;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiChannel = ::javax::sound::midi::MidiChannel;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void ModelMappedInstrument::init$($ModelInstrument* ins, $Patch* patch) {
	$useLocalObjectStack();
	$var($Soundbank, var$0, $nc(ins)->getSoundbank());
	$var($String, var$1, ins->getName());
	$ModelInstrument::init$(var$0, patch, var$1, ins->getDataClass());
	$set(this, ins, ins);
}

$Object* ModelMappedInstrument::getData() {
	return $nc(this->ins)->getData();
}

$ModelPerformerArray* ModelMappedInstrument::getPerformers() {
	return $nc(this->ins)->getPerformers();
}

$ModelDirector* ModelMappedInstrument::getDirector($ModelPerformerArray* performers, $MidiChannel* channel, $ModelDirectedPlayer* player) {
	return $nc(this->ins)->getDirector(performers, channel, player);
}

$ModelChannelMixer* ModelMappedInstrument::getChannelMixer($MidiChannel* channel, $AudioFormat* format) {
	return $nc(this->ins)->getChannelMixer(channel, format);
}

ModelMappedInstrument::ModelMappedInstrument() {
}

$Class* ModelMappedInstrument::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ins", "Lcom/sun/media/sound/ModelInstrument;", nullptr, $PRIVATE | $FINAL, $field(ModelMappedInstrument, ins)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/ModelInstrument;Ljavax/sound/midi/Patch;)V", nullptr, $PUBLIC, $method(ModelMappedInstrument, init$, void, $ModelInstrument*, $Patch*)},
		{"getChannelMixer", "(Ljavax/sound/midi/MidiChannel;Ljavax/sound/sampled/AudioFormat;)Lcom/sun/media/sound/ModelChannelMixer;", nullptr, $PUBLIC, $virtualMethod(ModelMappedInstrument, getChannelMixer, $ModelChannelMixer*, $MidiChannel*, $AudioFormat*)},
		{"getData", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(ModelMappedInstrument, getData, $Object*)},
		{"getDirector", "([Lcom/sun/media/sound/ModelPerformer;Ljavax/sound/midi/MidiChannel;Lcom/sun/media/sound/ModelDirectedPlayer;)Lcom/sun/media/sound/ModelDirector;", nullptr, $PUBLIC, $virtualMethod(ModelMappedInstrument, getDirector, $ModelDirector*, $ModelPerformerArray*, $MidiChannel*, $ModelDirectedPlayer*)},
		{"getPerformers", "()[Lcom/sun/media/sound/ModelPerformer;", nullptr, $PUBLIC, $virtualMethod(ModelMappedInstrument, getPerformers, $ModelPerformerArray*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.ModelMappedInstrument",
		"com.sun.media.sound.ModelInstrument",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ModelMappedInstrument, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ModelMappedInstrument);
	});
	return class$;
}

$Class* ModelMappedInstrument::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
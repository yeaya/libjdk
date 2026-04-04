#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <jcpp.h>

using $InstrumentArray = $Array<::javax::sound::midi::Instrument>;
using $SoundbankResourceArray = $Array<::javax::sound::midi::SoundbankResource>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Instrument = ::javax::sound::midi::Instrument;
using $Patch = ::javax::sound::midi::Patch;

namespace javax {
	namespace sound {
		namespace midi {

$Class* Soundbank::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Soundbank, getDescription, $String*)},
		{"getInstrument", "(Ljavax/sound/midi/Patch;)Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Soundbank, getInstrument, $Instrument*, $Patch*)},
		{"getInstruments", "()[Ljavax/sound/midi/Instrument;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Soundbank, getInstruments, $InstrumentArray*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Soundbank, getName, $String*)},
		{"getResources", "()[Ljavax/sound/midi/SoundbankResource;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Soundbank, getResources, $SoundbankResourceArray*)},
		{"getVendor", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Soundbank, getVendor, $String*)},
		{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Soundbank, getVersion, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.sound.midi.Soundbank",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Soundbank, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Soundbank);
	});
	return class$;
}

$Class* Soundbank::class$ = nullptr;

		} // midi
	} // sound
} // javax
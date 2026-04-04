#include <javax/sound/midi/Instrument.h>
#include <javax/sound/midi/Patch.h>
#include <javax/sound/midi/Soundbank.h>
#include <javax/sound/midi/SoundbankResource.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Patch = ::javax::sound::midi::Patch;
using $Soundbank = ::javax::sound::midi::Soundbank;
using $SoundbankResource = ::javax::sound::midi::SoundbankResource;

namespace javax {
	namespace sound {
		namespace midi {

void Instrument::init$($Soundbank* soundbank, $Patch* patch, $String* name, $Class* dataClass) {
	$SoundbankResource::init$(soundbank, name, dataClass);
	$set(this, patch, patch);
}

$Patch* Instrument::getPatch() {
	return this->patch;
}

Instrument::Instrument() {
}

$Class* Instrument::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"patch", "Ljavax/sound/midi/Patch;", nullptr, $PRIVATE | $FINAL, $field(Instrument, patch)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/midi/Soundbank;Ljavax/sound/midi/Patch;Ljava/lang/String;Ljava/lang/Class;)V", "(Ljavax/sound/midi/Soundbank;Ljavax/sound/midi/Patch;Ljava/lang/String;Ljava/lang/Class<*>;)V", $PROTECTED, $method(Instrument, init$, void, $Soundbank*, $Patch*, $String*, $Class*)},
		{"getPatch", "()Ljavax/sound/midi/Patch;", nullptr, $PUBLIC, $virtualMethod(Instrument, getPatch, $Patch*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.midi.Instrument",
		"javax.sound.midi.SoundbankResource",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Instrument, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Instrument);
	});
	return class$;
}

$Class* Instrument::class$ = nullptr;

		} // midi
	} // sound
} // javax
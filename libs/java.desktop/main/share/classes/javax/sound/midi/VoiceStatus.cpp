#include <javax/sound/midi/VoiceStatus.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

void VoiceStatus::init$() {
	this->active = false;
	this->channel = 0;
	this->bank = 0;
	this->program = 0;
	this->note = 0;
	this->volume = 0;
}

VoiceStatus::VoiceStatus() {
}

$Class* VoiceStatus::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"active", "Z", nullptr, $PUBLIC, $field(VoiceStatus, active)},
		{"channel", "I", nullptr, $PUBLIC, $field(VoiceStatus, channel)},
		{"bank", "I", nullptr, $PUBLIC, $field(VoiceStatus, bank)},
		{"program", "I", nullptr, $PUBLIC, $field(VoiceStatus, program)},
		{"note", "I", nullptr, $PUBLIC, $field(VoiceStatus, note)},
		{"volume", "I", nullptr, $PUBLIC, $field(VoiceStatus, volume)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(VoiceStatus, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.midi.VoiceStatus",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(VoiceStatus, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(VoiceStatus);
	});
	return class$;
}

$Class* VoiceStatus::class$ = nullptr;

		} // midi
	} // sound
} // javax
#include <javax/sound/midi/Sequencer$SyncMode.h>
#include <javax/sound/midi/Sequencer.h>
#include <jcpp.h>

#undef INTERNAL_CLOCK
#undef MIDI_SYNC
#undef MIDI_TIME_CODE
#undef NO_SYNC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

Sequencer$SyncMode* Sequencer$SyncMode::INTERNAL_CLOCK = nullptr;
Sequencer$SyncMode* Sequencer$SyncMode::MIDI_SYNC = nullptr;
Sequencer$SyncMode* Sequencer$SyncMode::MIDI_TIME_CODE = nullptr;
Sequencer$SyncMode* Sequencer$SyncMode::NO_SYNC = nullptr;

void Sequencer$SyncMode::init$($String* name) {
	$set(this, name, name);
}

bool Sequencer$SyncMode::equals(Object$* obj) {
	return $Object::equals(obj);
}

int32_t Sequencer$SyncMode::hashCode() {
	return $Object::hashCode();
}

$String* Sequencer$SyncMode::toString() {
	return this->name;
}

void Sequencer$SyncMode::clinit$($Class* clazz) {
	$assignStatic(Sequencer$SyncMode::INTERNAL_CLOCK, $new(Sequencer$SyncMode, "Internal Clock"_s));
	$assignStatic(Sequencer$SyncMode::MIDI_SYNC, $new(Sequencer$SyncMode, "MIDI Sync"_s));
	$assignStatic(Sequencer$SyncMode::MIDI_TIME_CODE, $new(Sequencer$SyncMode, "MIDI Time Code"_s));
	$assignStatic(Sequencer$SyncMode::NO_SYNC, $new(Sequencer$SyncMode, "No Timing"_s));
}

Sequencer$SyncMode::Sequencer$SyncMode() {
}

$Class* Sequencer$SyncMode::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(Sequencer$SyncMode, name)},
		{"INTERNAL_CLOCK", "Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequencer$SyncMode, INTERNAL_CLOCK)},
		{"MIDI_SYNC", "Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequencer$SyncMode, MIDI_SYNC)},
		{"MIDI_TIME_CODE", "Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequencer$SyncMode, MIDI_TIME_CODE)},
		{"NO_SYNC", "Ljavax/sound/midi/Sequencer$SyncMode;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Sequencer$SyncMode, NO_SYNC)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(Sequencer$SyncMode, init$, void, $String*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(Sequencer$SyncMode, equals, bool, Object$*)},
		{"hashCode", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(Sequencer$SyncMode, hashCode, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $virtualMethod(Sequencer$SyncMode, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.midi.Sequencer$SyncMode", "javax.sound.midi.Sequencer", "SyncMode", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.midi.Sequencer$SyncMode",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sound.midi.Sequencer"
	};
	$loadClass(Sequencer$SyncMode, name, initialize, &classInfo$$, Sequencer$SyncMode::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Sequencer$SyncMode);
	});
	return class$;
}

$Class* Sequencer$SyncMode::class$ = nullptr;

		} // midi
	} // sound
} // javax
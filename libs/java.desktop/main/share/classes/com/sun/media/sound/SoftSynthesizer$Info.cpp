#include <com/sun/media/sound/SoftSynthesizer$Info.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <javax/sound/midi/MidiDevice$Info.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice$Info = ::javax::sound::midi::MidiDevice$Info;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftSynthesizer$Info::init$() {
	$MidiDevice$Info::init$("Gervill"_s, "OpenJDK"_s, "Software MIDI Synthesizer"_s, "1.0"_s);
}

SoftSynthesizer$Info::SoftSynthesizer$Info() {
}

$Class* SoftSynthesizer$Info::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(SoftSynthesizer$Info, init$, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.SoftSynthesizer$Info", "com.sun.media.sound.SoftSynthesizer", "Info", $PRIVATE | $STATIC},
		{"javax.sound.midi.MidiDevice$Info", "javax.sound.midi.MidiDevice", "Info", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.SoftSynthesizer$Info",
		"javax.sound.midi.MidiDevice$Info",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.SoftSynthesizer"
	};
	$loadClass(SoftSynthesizer$Info, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftSynthesizer$Info);
	});
	return class$;
}

$Class* SoftSynthesizer$Info::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
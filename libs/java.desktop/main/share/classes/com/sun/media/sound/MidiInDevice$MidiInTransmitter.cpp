#include <com/sun/media/sound/MidiInDevice$MidiInTransmitter.h>
#include <com/sun/media/sound/AbstractMidiDevice$BasicTransmitter.h>
#include <com/sun/media/sound/MidiInDevice.h>
#include <jcpp.h>

using $AbstractMidiDevice$BasicTransmitter = ::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter;
using $MidiInDevice = ::com::sun::media::sound::MidiInDevice;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void MidiInDevice$MidiInTransmitter::init$($MidiInDevice* this$0) {
	$set(this, this$0, this$0);
	$AbstractMidiDevice$BasicTransmitter::init$(this$0);
}

MidiInDevice$MidiInTransmitter::MidiInDevice$MidiInTransmitter() {
}

$Class* MidiInDevice$MidiInTransmitter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/MidiInDevice;", nullptr, $FINAL | $SYNTHETIC, $field(MidiInDevice$MidiInTransmitter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/MidiInDevice;)V", nullptr, $PRIVATE, $method(MidiInDevice$MidiInTransmitter, init$, void, $MidiInDevice*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.MidiInDevice$MidiInTransmitter", "com.sun.media.sound.MidiInDevice", "MidiInTransmitter", $PRIVATE | $FINAL},
		{"com.sun.media.sound.AbstractMidiDevice$BasicTransmitter", "com.sun.media.sound.AbstractMidiDevice", "BasicTransmitter", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.MidiInDevice$MidiInTransmitter",
		"com.sun.media.sound.AbstractMidiDevice$BasicTransmitter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.MidiInDevice"
	};
	$loadClass(MidiInDevice$MidiInTransmitter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiInDevice$MidiInTransmitter);
	});
	return class$;
}

$Class* MidiInDevice$MidiInTransmitter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
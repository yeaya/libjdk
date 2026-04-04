#include <com/sun/media/sound/RealTimeSequencer$SequencerTransmitter.h>
#include <com/sun/media/sound/AbstractMidiDevice$BasicTransmitter.h>
#include <com/sun/media/sound/RealTimeSequencer.h>
#include <jcpp.h>

using $AbstractMidiDevice$BasicTransmitter = ::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter;
using $RealTimeSequencer = ::com::sun::media::sound::RealTimeSequencer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void RealTimeSequencer$SequencerTransmitter::init$($RealTimeSequencer* this$0) {
	$set(this, this$0, this$0);
	$AbstractMidiDevice$BasicTransmitter::init$(this$0);
}

RealTimeSequencer$SequencerTransmitter::RealTimeSequencer$SequencerTransmitter() {
}

$Class* RealTimeSequencer$SequencerTransmitter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/RealTimeSequencer;", nullptr, $FINAL | $SYNTHETIC, $field(RealTimeSequencer$SequencerTransmitter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/RealTimeSequencer;)V", nullptr, $PRIVATE, $method(RealTimeSequencer$SequencerTransmitter, init$, void, $RealTimeSequencer*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.RealTimeSequencer$SequencerTransmitter", "com.sun.media.sound.RealTimeSequencer", "SequencerTransmitter", $PRIVATE},
		{"com.sun.media.sound.AbstractMidiDevice$BasicTransmitter", "com.sun.media.sound.AbstractMidiDevice", "BasicTransmitter", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.RealTimeSequencer$SequencerTransmitter",
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
		"com.sun.media.sound.RealTimeSequencer"
	};
	$loadClass(RealTimeSequencer$SequencerTransmitter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RealTimeSequencer$SequencerTransmitter);
	});
	return class$;
}

$Class* RealTimeSequencer$SequencerTransmitter::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
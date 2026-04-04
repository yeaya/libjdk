#include <com/sun/media/sound/RealTimeSequencer$SequencerReceiver.h>
#include <com/sun/media/sound/AbstractMidiDevice$AbstractReceiver.h>
#include <com/sun/media/sound/FastShortMessage.h>
#include <com/sun/media/sound/MidiUtils$TempoCache.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <com/sun/media/sound/RealTimeSequencer$RecordingTrack.h>
#include <com/sun/media/sound/RealTimeSequencer.h>
#include <java/util/List.h>
#include <javax/sound/midi/MidiEvent.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/ShortMessage.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

using $AbstractMidiDevice$AbstractReceiver = ::com::sun::media::sound::AbstractMidiDevice$AbstractReceiver;
using $FastShortMessage = ::com::sun::media::sound::FastShortMessage;
using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $RealTimeSequencer = ::com::sun::media::sound::RealTimeSequencer;
using $RealTimeSequencer$RecordingTrack = ::com::sun::media::sound::RealTimeSequencer$RecordingTrack;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiEvent = ::javax::sound::midi::MidiEvent;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $ShortMessage = ::javax::sound::midi::ShortMessage;
using $Track = ::javax::sound::midi::Track;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void RealTimeSequencer$SequencerReceiver::init$($RealTimeSequencer* this$0) {
	$set(this, this$0, this$0);
	$AbstractMidiDevice$AbstractReceiver::init$(this$0);
}

void RealTimeSequencer$SequencerReceiver::implSend($MidiMessage* message$renamed, int64_t timeStamp) {
	$useLocalObjectStack();
	$var($MidiMessage, message, message$renamed);
	if (this->this$0->recording) {
		int64_t tickPos = 0;
		if (timeStamp < 0) {
			tickPos = this->this$0->getTickPosition();
		} else {
			$synchronized(this->this$0->tempoCache) {
				tickPos = $MidiUtils::microsecond2tick(this->this$0->sequence, timeStamp, this->this$0->tempoCache);
			}
		}
		$var($Track, track, nullptr);
		if ($nc(message)->getLength() > 1) {
			if ($instanceOf($ShortMessage, message)) {
				$var($ShortMessage, sm, $cast($ShortMessage, message));
				if ((sm->getStatus() & 0xf0) != 0xf0) {
					$assign(track, $RealTimeSequencer$RecordingTrack::get(this->this$0->recordingTracks, sm->getChannel()));
				}
			} else {
				$assign(track, $RealTimeSequencer$RecordingTrack::get(this->this$0->recordingTracks, -1));
			}
			if (track != nullptr) {
				if ($instanceOf($ShortMessage, message)) {
					$assign(message, $new($FastShortMessage, $cast($ShortMessage, message)));
				} else {
					$assign(message, $cast($MidiMessage, message->clone()));
				}
				$var($MidiEvent, me, $new($MidiEvent, message, tickPos));
				track->add(me);
			}
		}
	}
}

RealTimeSequencer$SequencerReceiver::RealTimeSequencer$SequencerReceiver() {
}

$Class* RealTimeSequencer$SequencerReceiver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/RealTimeSequencer;", nullptr, $FINAL | $SYNTHETIC, $field(RealTimeSequencer$SequencerReceiver, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/RealTimeSequencer;)V", nullptr, 0, $method(RealTimeSequencer$SequencerReceiver, init$, void, $RealTimeSequencer*)},
		{"implSend", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, 0, $virtualMethod(RealTimeSequencer$SequencerReceiver, implSend, void, $MidiMessage*, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.RealTimeSequencer$SequencerReceiver", "com.sun.media.sound.RealTimeSequencer", "SequencerReceiver", $FINAL},
		{"com.sun.media.sound.AbstractMidiDevice$AbstractReceiver", "com.sun.media.sound.AbstractMidiDevice", "AbstractReceiver", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.RealTimeSequencer$SequencerReceiver",
		"com.sun.media.sound.AbstractMidiDevice$AbstractReceiver",
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
	$loadClass(RealTimeSequencer$SequencerReceiver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RealTimeSequencer$SequencerReceiver);
	});
	return class$;
}

$Class* RealTimeSequencer$SequencerReceiver::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
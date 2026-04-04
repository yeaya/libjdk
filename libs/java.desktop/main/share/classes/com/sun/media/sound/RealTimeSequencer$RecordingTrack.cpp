#include <com/sun/media/sound/RealTimeSequencer$RecordingTrack.h>
#include <com/sun/media/sound/RealTimeSequencer.h>
#include <java/util/List.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Track = ::javax::sound::midi::Track;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void RealTimeSequencer$RecordingTrack::init$($Track* track, int32_t channel) {
	$set(this, track, track);
	this->channel = channel;
}

RealTimeSequencer$RecordingTrack* RealTimeSequencer$RecordingTrack::get($List* recordingTracks, $Track* track) {
	$useLocalObjectStack();
	$synchronized(recordingTracks) {
		int32_t size = recordingTracks->size();
		for (int32_t i = 0; i < size; ++i) {
			$var(RealTimeSequencer$RecordingTrack, current, $cast(RealTimeSequencer$RecordingTrack, recordingTracks->get(i)));
			if ($nc(current)->track == track) {
				return current;
			}
		}
	}
	return nullptr;
}

$Track* RealTimeSequencer$RecordingTrack::get($List* recordingTracks, int32_t channel) {
	$useLocalObjectStack();
	$synchronized(recordingTracks) {
		int32_t size = recordingTracks->size();
		for (int32_t i = 0; i < size; ++i) {
			$var(RealTimeSequencer$RecordingTrack, current, $cast(RealTimeSequencer$RecordingTrack, recordingTracks->get(i)));
			if (($nc(current)->channel == channel) || (current->channel == -1)) {
				return current->track;
			}
		}
	}
	return nullptr;
}

RealTimeSequencer$RecordingTrack::RealTimeSequencer$RecordingTrack() {
}

$Class* RealTimeSequencer$RecordingTrack::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"track", "Ljavax/sound/midi/Track;", nullptr, $PRIVATE | $FINAL, $field(RealTimeSequencer$RecordingTrack, track)},
		{"channel", "I", nullptr, $PRIVATE, $field(RealTimeSequencer$RecordingTrack, channel)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/sound/midi/Track;I)V", nullptr, 0, $method(RealTimeSequencer$RecordingTrack, init$, void, $Track*, int32_t)},
		{"get", "(Ljava/util/List;Ljavax/sound/midi/Track;)Lcom/sun/media/sound/RealTimeSequencer$RecordingTrack;", "(Ljava/util/List<Lcom/sun/media/sound/RealTimeSequencer$RecordingTrack;>;Ljavax/sound/midi/Track;)Lcom/sun/media/sound/RealTimeSequencer$RecordingTrack;", $STATIC, $staticMethod(RealTimeSequencer$RecordingTrack, get, RealTimeSequencer$RecordingTrack*, $List*, $Track*)},
		{"get", "(Ljava/util/List;I)Ljavax/sound/midi/Track;", "(Ljava/util/List<Lcom/sun/media/sound/RealTimeSequencer$RecordingTrack;>;I)Ljavax/sound/midi/Track;", $STATIC, $staticMethod(RealTimeSequencer$RecordingTrack, get, $Track*, $List*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.RealTimeSequencer$RecordingTrack", "com.sun.media.sound.RealTimeSequencer", "RecordingTrack", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.media.sound.RealTimeSequencer$RecordingTrack",
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
		"com.sun.media.sound.RealTimeSequencer"
	};
	$loadClass(RealTimeSequencer$RecordingTrack, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RealTimeSequencer$RecordingTrack);
	});
	return class$;
}

$Class* RealTimeSequencer$RecordingTrack::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#include <com/sun/media/sound/MidiUtils$TempoCache.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <java/util/ArrayList.h>
#include <javax/sound/midi/MidiEvent.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Sequence.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

using $TrackArray = $Array<::javax::sound::midi::Track>;
using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $MidiEvent = ::javax::sound::midi::MidiEvent;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Sequence = ::javax::sound::midi::Sequence;
using $Track = ::javax::sound::midi::Track;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void MidiUtils$TempoCache::init$() {
	this->snapshotIndex = 0;
	this->snapshotMicro = 0;
	this->firstTempoIsFake = false;
	$set(this, ticks, $new($longs, 1));
	$set(this, tempos, $new($ints, 1));
	this->tempos->set(0, 500000);
	this->snapshotIndex = 0;
	this->snapshotMicro = 0;
}

void MidiUtils$TempoCache::init$($Sequence* seq) {
	MidiUtils$TempoCache::init$();
	refresh(seq);
}

void MidiUtils$TempoCache::refresh($Sequence* seq) {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($ArrayList, list, $new($ArrayList));
		$var($TrackArray, tracks, $nc(seq)->getTracks());
		if ($nc(tracks)->length > 0) {
			$var($Track, track, tracks->get(0));
			int32_t c = $nc(track)->size();
			for (int32_t i = 0; i < c; ++i) {
				$var($MidiEvent, ev, track->get(i));
				$var($MidiMessage, msg, $nc(ev)->getMessage());
				if ($MidiUtils::isMetaTempo(msg)) {
					list->add(ev);
				}
			}
		}
		int32_t size = list->size() + 1;
		this->firstTempoIsFake = true;
		if ((size > 1) && ($$sure($MidiEvent, list->get(0))->getTick() == 0)) {
			--size;
			this->firstTempoIsFake = false;
		}
		$set(this, ticks, $new($longs, size));
		$set(this, tempos, $new($ints, size));
		int32_t e = 0;
		if (this->firstTempoIsFake) {
			this->ticks->set(0, 0);
			this->tempos->set(0, 500000);
			++e;
		}
		for (int32_t i = 0; i < list->size(); ++i, ++e) {
			$var($MidiEvent, evt, $cast($MidiEvent, list->get(i)));
			$nc(this->ticks)->set(e, $nc(evt)->getTick());
			$nc(this->tempos)->set(e, $MidiUtils::getTempoMPQ($(evt->getMessage())));
		}
		this->snapshotIndex = 0;
		this->snapshotMicro = 0;
	}
}

int32_t MidiUtils$TempoCache::getCurrTempoMPQ() {
	return this->currTempo;
}

float MidiUtils$TempoCache::getTempoMPQAt(int64_t tick) {
	return getTempoMPQAt(tick, -1.0f);
}

float MidiUtils$TempoCache::getTempoMPQAt(int64_t tick, float startTempoMPQ) {
	$synchronized(this) {
		for (int32_t i = 0; i < $nc(this->ticks)->length; ++i) {
			if (this->ticks->get(i) > tick) {
				if (i > 0) {
					--i;
				}
				if (startTempoMPQ > 0 && i == 0 && this->firstTempoIsFake) {
					return startTempoMPQ;
				}
				return (float)$nc(this->tempos)->get(i);
			}
		}
		return (float)$nc(this->tempos)->get($nc(this->tempos)->length - 1);
	}
}

MidiUtils$TempoCache::MidiUtils$TempoCache() {
}

$Class* MidiUtils$TempoCache::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ticks", "[J", nullptr, 0, $field(MidiUtils$TempoCache, ticks)},
		{"tempos", "[I", nullptr, 0, $field(MidiUtils$TempoCache, tempos)},
		{"snapshotIndex", "I", nullptr, 0, $field(MidiUtils$TempoCache, snapshotIndex)},
		{"snapshotMicro", "I", nullptr, 0, $field(MidiUtils$TempoCache, snapshotMicro)},
		{"currTempo", "I", nullptr, 0, $field(MidiUtils$TempoCache, currTempo)},
		{"firstTempoIsFake", "Z", nullptr, $PRIVATE, $field(MidiUtils$TempoCache, firstTempoIsFake)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MidiUtils$TempoCache, init$, void)},
		{"<init>", "(Ljavax/sound/midi/Sequence;)V", nullptr, $PUBLIC, $method(MidiUtils$TempoCache, init$, void, $Sequence*)},
		{"getCurrTempoMPQ", "()I", nullptr, $PUBLIC, $method(MidiUtils$TempoCache, getCurrTempoMPQ, int32_t)},
		{"getTempoMPQAt", "(J)F", nullptr, 0, $method(MidiUtils$TempoCache, getTempoMPQAt, float, int64_t)},
		{"getTempoMPQAt", "(JF)F", nullptr, $SYNCHRONIZED, $method(MidiUtils$TempoCache, getTempoMPQAt, float, int64_t, float)},
		{"refresh", "(Ljavax/sound/midi/Sequence;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $method(MidiUtils$TempoCache, refresh, void, $Sequence*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.MidiUtils$TempoCache", "com.sun.media.sound.MidiUtils", "TempoCache", $PUBLIC | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.MidiUtils$TempoCache",
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
		"com.sun.media.sound.MidiUtils"
	};
	$loadClass(MidiUtils$TempoCache, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiUtils$TempoCache);
	});
	return class$;
}

$Class* MidiUtils$TempoCache::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#include <javax/sound/midi/Track.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <java/lang/ArrayIndexOutOfBoundsException.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/util/ArrayList.h>
#include <java/util/HashSet.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/MidiEvent.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Track$ImmutableEndOfTrack.h>
#include <jcpp.h>

using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $ArrayIndexOutOfBoundsException = ::java::lang::ArrayIndexOutOfBoundsException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $HashSet = ::java::util::HashSet;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $MidiEvent = ::javax::sound::midi::MidiEvent;
using $Track$ImmutableEndOfTrack = ::javax::sound::midi::Track$ImmutableEndOfTrack;

namespace javax {
	namespace sound {
		namespace midi {

void Track::init$() {
	$set(this, eventsList, $new($ArrayList));
	$set(this, set, $new($HashSet));
	$var($MetaMessage, eot, $new($Track$ImmutableEndOfTrack));
	$set(this, eotEvent, $new($MidiEvent, eot, 0));
	this->eventsList->add(this->eotEvent);
	this->set->add(this->eotEvent);
}

bool Track::add($MidiEvent* event) {
	$useLocalObjectStack();
	if (event == nullptr) {
		return false;
	}
	$synchronized(this->eventsList) {
		if (!this->set->contains(event)) {
			int32_t eventsCount = this->eventsList->size();
			$var($MidiEvent, lastEvent, nullptr);
			if (eventsCount > 0) {
				$assign(lastEvent, $cast($MidiEvent, this->eventsList->get(eventsCount - 1)));
			}
			if (lastEvent != this->eotEvent) {
				if (lastEvent != nullptr) {
					this->eotEvent->setTick(lastEvent->getTick());
				} else {
					this->eotEvent->setTick(0);
				}
				this->eventsList->add(this->eotEvent);
				this->set->add(this->eotEvent);
				eventsCount = this->eventsList->size();
			}
			if ($MidiUtils::isMetaEndOfTrack($($nc(event)->getMessage()))) {
				int64_t var$0 = event->getTick();
				if (var$0 > this->eotEvent->getTick()) {
					this->eotEvent->setTick(event->getTick());
				}
				return true;
			}
			this->set->add(event);
			int32_t i = eventsCount;
			for (; i > 0; --i) {
				int64_t var$1 = event->getTick();
				if (var$1 >= $$sure($MidiEvent, this->eventsList->get(i - 1))->getTick()) {
					break;
				}
			}
			if (i == eventsCount) {
				this->eventsList->set(eventsCount - 1, event);
				int64_t var$2 = this->eotEvent->getTick();
				if (var$2 < event->getTick()) {
					this->eotEvent->setTick(event->getTick());
				}
				this->eventsList->add(this->eotEvent);
			} else {
				this->eventsList->add(i, event);
			}
			return true;
		}
	}
	return false;
}

bool Track::remove($MidiEvent* event) {
	$synchronized(this->eventsList) {
		if (this->set->remove(event)) {
			int32_t i = this->eventsList->indexOf(event);
			if (i >= 0) {
				this->eventsList->remove(i);
				return true;
			}
		}
	}
	return false;
}

$MidiEvent* Track::get(int32_t index) {
	try {
		$synchronized(this->eventsList) {
			return $cast($MidiEvent, this->eventsList->get(index));
		}
	} catch ($IndexOutOfBoundsException& ioobe) {
		$throwNew($ArrayIndexOutOfBoundsException, $(ioobe->getMessage()));
	}
	$shouldNotReachHere();
}

int32_t Track::size() {
	$synchronized(this->eventsList) {
		return this->eventsList->size();
	}
}

int64_t Track::ticks() {
	int64_t ret = 0;
	$synchronized(this->eventsList) {
		if (this->eventsList->size() > 0) {
			ret = $$sure($MidiEvent, this->eventsList->get(this->eventsList->size() - 1))->getTick();
		}
	}
	return ret;
}

Track::Track() {
}

$Class* Track::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"eventsList", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/sound/midi/MidiEvent;>;", $PRIVATE | $FINAL, $field(Track, eventsList)},
		{"set", "Ljava/util/HashSet;", "Ljava/util/HashSet<Ljavax/sound/midi/MidiEvent;>;", $PRIVATE | $FINAL, $field(Track, set)},
		{"eotEvent", "Ljavax/sound/midi/MidiEvent;", nullptr, $PRIVATE | $FINAL, $field(Track, eotEvent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Track, init$, void)},
		{"add", "(Ljavax/sound/midi/MidiEvent;)Z", nullptr, $PUBLIC, $virtualMethod(Track, add, bool, $MidiEvent*)},
		{"get", "(I)Ljavax/sound/midi/MidiEvent;", nullptr, $PUBLIC, $virtualMethod(Track, get, $MidiEvent*, int32_t), "java.lang.ArrayIndexOutOfBoundsException"},
		{"remove", "(Ljavax/sound/midi/MidiEvent;)Z", nullptr, $PUBLIC, $virtualMethod(Track, remove, bool, $MidiEvent*)},
		{"size", "()I", nullptr, $PUBLIC, $virtualMethod(Track, size, int32_t)},
		{"ticks", "()J", nullptr, $PUBLIC, $virtualMethod(Track, ticks, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.midi.Track$ImmutableEndOfTrack", "javax.sound.midi.Track", "ImmutableEndOfTrack", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.midi.Track",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.sound.midi.Track$ImmutableEndOfTrack"
	};
	$loadClass(Track, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Track);
	});
	return class$;
}

$Class* Track::class$ = nullptr;

		} // midi
	} // sound
} // javax
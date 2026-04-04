#include <javax/sound/midi/Track$ImmutableEndOfTrack.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Track.h>
#include <jcpp.h>

#undef META
#undef META_END_OF_TRACK_TYPE

using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MetaMessage = ::javax::sound::midi::MetaMessage;

namespace javax {
	namespace sound {
		namespace midi {

void Track$ImmutableEndOfTrack::init$() {
	$MetaMessage::init$($$new($bytes, 3));
	$nc(this->data)->set(0, (int8_t)$MetaMessage::META);
	this->data->set(1, (int8_t)$MidiUtils::META_END_OF_TRACK_TYPE);
	this->data->set(2, 0);
}

void Track$ImmutableEndOfTrack::setMessage(int32_t type, $bytes* data, int32_t length) {
	$throwNew($InvalidMidiDataException, "cannot modify end of track message"_s);
}

Track$ImmutableEndOfTrack::Track$ImmutableEndOfTrack() {
}

$Class* Track$ImmutableEndOfTrack::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(Track$ImmutableEndOfTrack, init$, void)},
		{"setMessage", "(I[BI)V", nullptr, $PUBLIC, $virtualMethod(Track$ImmutableEndOfTrack, setMessage, void, int32_t, $bytes*, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.sound.midi.Track$ImmutableEndOfTrack", "javax.sound.midi.Track", "ImmutableEndOfTrack", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.sound.midi.Track$ImmutableEndOfTrack",
		"javax.sound.midi.MetaMessage",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.sound.midi.Track"
	};
	$loadClass(Track$ImmutableEndOfTrack, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Track$ImmutableEndOfTrack);
	});
	return class$;
}

$Class* Track$ImmutableEndOfTrack::class$ = nullptr;

		} // midi
	} // sound
} // javax
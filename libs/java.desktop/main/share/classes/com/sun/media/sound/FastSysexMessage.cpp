#include <com/sun/media/sound/FastSysexMessage.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/SysexMessage.h>
#include <jcpp.h>

using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SysexMessage = ::javax::sound::midi::SysexMessage;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void FastSysexMessage::init$($bytes* data) {
	$SysexMessage::init$(data);
	$MidiUtils::checkSysexStatus(data, $nc(data)->length);
}

$bytes* FastSysexMessage::getReadOnlyMessage() {
	return this->data;
}

void FastSysexMessage::setMessage($bytes* data, int32_t length) {
	$MidiUtils::checkSysexStatus(data, length);
	this->length = length;
	$set(this, data, $new($bytes, this->length));
	$System::arraycopy(data, 0, this->data, 0, length);
}

FastSysexMessage::FastSysexMessage() {
}

$Class* FastSysexMessage::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([B)V", nullptr, 0, $method(FastSysexMessage, init$, void, $bytes*), "javax.sound.midi.InvalidMidiDataException"},
		{"getReadOnlyMessage", "()[B", nullptr, 0, $method(FastSysexMessage, getReadOnlyMessage, $bytes*)},
		{"setMessage", "([BI)V", nullptr, $PUBLIC, $virtualMethod(FastSysexMessage, setMessage, void, $bytes*, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.FastSysexMessage",
		"javax.sound.midi.SysexMessage",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(FastSysexMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FastSysexMessage);
	});
	return class$;
}

$Class* FastSysexMessage::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
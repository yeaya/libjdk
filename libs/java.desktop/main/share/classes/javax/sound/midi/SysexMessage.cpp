#include <javax/sound/midi/SysexMessage.h>
#include <com/sun/media/sound/MidiUtils.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/ShortMessage.h>
#include <jcpp.h>

#undef END_OF_EXCLUSIVE
#undef SPECIAL_SYSTEM_EXCLUSIVE
#undef SYSTEM_EXCLUSIVE

using $MidiUtils = ::com::sun::media::sound::MidiUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $ShortMessage = ::javax::sound::midi::ShortMessage;

namespace javax {
	namespace sound {
		namespace midi {

void SysexMessage::init$() {
	SysexMessage::init$($$new($bytes, 2));
	$nc(this->data)->set(0, (int8_t)(SysexMessage::SYSTEM_EXCLUSIVE & 0xff));
	this->data->set(1, (int8_t)($ShortMessage::END_OF_EXCLUSIVE & 0xff));
}

void SysexMessage::init$($bytes* data, int32_t length) {
	$MidiMessage::init$(nullptr);
	setMessage(data, length);
}

void SysexMessage::init$(int32_t status, $bytes* data, int32_t length) {
	$MidiMessage::init$(nullptr);
	setMessage(status, data, length);
}

void SysexMessage::init$($bytes* data) {
	$MidiMessage::init$(data);
}

void SysexMessage::setMessage($bytes* data, int32_t length) {
	$MidiUtils::checkSysexStatus(data, length);
	$MidiMessage::setMessage(data, length);
}

void SysexMessage::setMessage(int32_t status, $bytes* data, int32_t length) {
	$useLocalObjectStack();
	$MidiUtils::checkSysexStatus(status);
	if (length < 0 || length > $nc(data)->length) {
		$throwNew($IndexOutOfBoundsException, $$str({"length out of bounds: "_s, $$str(length)}));
	}
	this->length = length + 1;
	if (this->data == nullptr || this->data->length < this->length) {
		$set(this, data, $new($bytes, this->length));
	}
	$nc(this->data)->set(0, (int8_t)(status & 0xff));
	if (length > 0) {
		$System::arraycopy(data, 0, this->data, 1, length);
	}
}

$bytes* SysexMessage::getData() {
	$var($bytes, returnedArray, $new($bytes, this->length - 1));
	$System::arraycopy(this->data, 1, returnedArray, 0, (this->length - 1));
	return returnedArray;
}

$Object* SysexMessage::clone() {
	$var($bytes, newData, $new($bytes, this->length));
	$System::arraycopy(this->data, 0, newData, 0, newData->length);
	return $new(SysexMessage, newData);
}

SysexMessage::SysexMessage() {
}

$Class* SysexMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"SYSTEM_EXCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SysexMessage, SYSTEM_EXCLUSIVE)},
		{"SPECIAL_SYSTEM_EXCLUSIVE", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(SysexMessage, SPECIAL_SYSTEM_EXCLUSIVE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SysexMessage, init$, void)},
		{"<init>", "([BI)V", nullptr, $PUBLIC, $method(SysexMessage, init$, void, $bytes*, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{"<init>", "(I[BI)V", nullptr, $PUBLIC, $method(SysexMessage, init$, void, int32_t, $bytes*, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{"<init>", "([B)V", nullptr, $PROTECTED, $method(SysexMessage, init$, void, $bytes*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(SysexMessage, clone, $Object*)},
		{"getData", "()[B", nullptr, $PUBLIC, $virtualMethod(SysexMessage, getData, $bytes*)},
		{"setMessage", "([BI)V", nullptr, $PUBLIC, $virtualMethod(SysexMessage, setMessage, void, $bytes*, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{"setMessage", "(I[BI)V", nullptr, $PUBLIC, $virtualMethod(SysexMessage, setMessage, void, int32_t, $bytes*, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.midi.SysexMessage",
		"javax.sound.midi.MidiMessage",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SysexMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SysexMessage);
	});
	return class$;
}

$Class* SysexMessage::class$ = nullptr;

		} // midi
	} // sound
} // javax
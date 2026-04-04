#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MidiMessage.h>
#include <jcpp.h>

#undef META

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MidiMessage = ::javax::sound::midi::MidiMessage;

namespace javax {
	namespace sound {
		namespace midi {

void MetaMessage::init$() {
	MetaMessage::init$($$new($bytes, {
		(int8_t)MetaMessage::META,
		0
	}));
}

void MetaMessage::init$(int32_t type, $bytes* data, int32_t length) {
	$MidiMessage::init$(nullptr);
	this->dataLength = 0;
	setMessage(type, data, length);
}

void MetaMessage::init$($bytes* data) {
	$MidiMessage::init$(data);
	this->dataLength = 0;
	if ($nc(data)->length >= 3) {
		this->dataLength = data->length - 3;
		int32_t pos = 2;
		while (pos < data->length && (data->get(pos) & 0x80) != 0) {
			--this->dataLength;
			++pos;
		}
	}
}

void MetaMessage::setMessage(int32_t type, $bytes* data, int32_t length) {
	$useLocalObjectStack();
	if (type >= 128 || type < 0) {
		$throwNew($InvalidMidiDataException, $$str({"Invalid meta event with type "_s, $$str(type)}));
	}
	if ((length > 0 && length > $nc(data)->length) || length < 0) {
		$throwNew($InvalidMidiDataException, $$str({"length out of bounds: "_s, $$str(length)}));
	}
	this->length = 2 + getVarIntLength(length) + length;
	this->dataLength = length;
	$set(this, data, $new($bytes, this->length));
	this->data->set(0, (int8_t)MetaMessage::META);
	this->data->set(1, (int8_t)type);
	writeVarInt(this->data, 2, length);
	if (length > 0) {
		$System::arraycopy(data, 0, this->data, this->length - this->dataLength, this->dataLength);
	}
}

int32_t MetaMessage::getType() {
	if (this->length >= 2) {
		return $nc(this->data)->get(1) & 0xff;
	}
	return 0;
}

$bytes* MetaMessage::getData() {
	$var($bytes, returnedArray, $new($bytes, this->dataLength));
	$System::arraycopy(this->data, (this->length - this->dataLength), returnedArray, 0, this->dataLength);
	return returnedArray;
}

$Object* MetaMessage::clone() {
	$var($bytes, newData, $new($bytes, this->length));
	$System::arraycopy(this->data, 0, newData, 0, newData->length);
	return $new(MetaMessage, newData);
}

int32_t MetaMessage::getVarIntLength(int64_t value) {
	int32_t length = 0;
	do {
		value = value >> 7;
		++length;
	} while (value > 0);
	return length;
}

void MetaMessage::writeVarInt($bytes* data, int32_t off, int64_t value) {
	int32_t shift = 63;
	while ((shift > 0) && ((value & ($sl(MetaMessage::mask, shift))) == 0)) {
		shift -= 7;
	}
	while (shift > 0) {
		$nc(data)->set(off++, (int8_t)(($sr(value & ($sl(MetaMessage::mask, shift)), shift)) | 0x80));
		shift -= 7;
	}
	$nc(data)->set(off, (int8_t)(value & MetaMessage::mask));
}

MetaMessage::MetaMessage() {
}

$Class* MetaMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"META", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(MetaMessage, META)},
		{"dataLength", "I", nullptr, $PRIVATE, $field(MetaMessage, dataLength)},
		{"mask", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MetaMessage, mask)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetaMessage, init$, void)},
		{"<init>", "(I[BI)V", nullptr, $PUBLIC, $method(MetaMessage, init$, void, int32_t, $bytes*, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{"<init>", "([B)V", nullptr, $PROTECTED, $method(MetaMessage, init$, void, $bytes*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(MetaMessage, clone, $Object*)},
		{"getData", "()[B", nullptr, $PUBLIC, $virtualMethod(MetaMessage, getData, $bytes*)},
		{"getType", "()I", nullptr, $PUBLIC, $virtualMethod(MetaMessage, getType, int32_t)},
		{"getVarIntLength", "(J)I", nullptr, $PRIVATE, $method(MetaMessage, getVarIntLength, int32_t, int64_t)},
		{"setMessage", "(I[BI)V", nullptr, $PUBLIC, $virtualMethod(MetaMessage, setMessage, void, int32_t, $bytes*, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{"writeVarInt", "([BIJ)V", nullptr, $PRIVATE, $method(MetaMessage, writeVarInt, void, $bytes*, int32_t, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.sound.midi.MetaMessage",
		"javax.sound.midi.MidiMessage",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MetaMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MetaMessage);
	});
	return class$;
}

$Class* MetaMessage::class$ = nullptr;

		} // midi
	} // sound
} // javax
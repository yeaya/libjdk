#include <javax/sound/midi/MidiMessage.h>
#include <java/lang/Cloneable.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace sound {
		namespace midi {

$Object* MidiMessage::clone() {
	 return this->$Cloneable::clone();
}

void MidiMessage::init$($bytes* data) {
	this->length = 0;
	$set(this, data, data);
	if (data != nullptr) {
		this->length = data->length;
	}
}

void MidiMessage::setMessage($bytes* data, int32_t length) {
	$useLocalObjectStack();
	if (length < 0 || (length > 0 && length > $nc(data)->length)) {
		$throwNew($IndexOutOfBoundsException, $$str({"length out of bounds: "_s, $$str(length)}));
	}
	this->length = length;
	if (this->data == nullptr || this->data->length < this->length) {
		$set(this, data, $new($bytes, this->length));
	}
	$System::arraycopy(data, 0, this->data, 0, length);
}

$bytes* MidiMessage::getMessage() {
	$var($bytes, returnedArray, $new($bytes, this->length));
	$System::arraycopy(this->data, 0, returnedArray, 0, this->length);
	return returnedArray;
}

int32_t MidiMessage::getStatus() {
	if (this->length > 0) {
		return ($nc(this->data)->get(0) & 0xff);
	}
	return 0;
}

int32_t MidiMessage::getLength() {
	return this->length;
}

MidiMessage::MidiMessage() {
}

$Class* MidiMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"data", "[B", nullptr, $PROTECTED, $field(MidiMessage, data)},
		{"length", "I", nullptr, $PROTECTED, $field(MidiMessage, length)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
		{"<init>", "([B)V", nullptr, $PROTECTED, $method(MidiMessage, init$, void, $bytes*)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(MidiMessage, getLength, int32_t)},
		{"getMessage", "()[B", nullptr, $PUBLIC, $virtualMethod(MidiMessage, getMessage, $bytes*)},
		{"getStatus", "()I", nullptr, $PUBLIC, $virtualMethod(MidiMessage, getStatus, int32_t)},
		{"setMessage", "([BI)V", nullptr, $PROTECTED, $virtualMethod(MidiMessage, setMessage, void, $bytes*, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"javax.sound.midi.MidiMessage",
		"java.lang.Object",
		"java.lang.Cloneable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MidiMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiMessage);
	});
	return class$;
}

$Class* MidiMessage::class$ = nullptr;

		} // midi
	} // sound
} // javax
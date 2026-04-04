#include <com/sun/media/sound/FastShortMessage.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/ShortMessage.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $ShortMessage = ::javax::sound::midi::ShortMessage;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void FastShortMessage::init$(int32_t packedMsg) {
	$ShortMessage::init$();
	this->packedMsg = packedMsg;
	getDataLength(packedMsg & 0xff);
}

void FastShortMessage::init$($ShortMessage* msg) {
	$ShortMessage::init$();
	int32_t var$1 = $nc(msg)->getStatus();
	int32_t var$0 = var$1 | (msg->getData1() << 8);
	this->packedMsg = var$0 | (msg->getData2() << 16);
}

int32_t FastShortMessage::getPackedMsg() {
	return this->packedMsg;
}

$bytes* FastShortMessage::getMessage() {
	int32_t length = 0;
	try {
		length = getDataLength(this->packedMsg & 0xff) + 1;
	} catch ($InvalidMidiDataException& imde) {
	}
	$var($bytes, returnedArray, $new($bytes, length));
	if (length > 0) {
		returnedArray->set(0, (int8_t)(this->packedMsg & 0xff));
		if (length > 1) {
			returnedArray->set(1, (int8_t)((this->packedMsg & 0xff00) >> 8));
			if (length > 2) {
				returnedArray->set(2, (int8_t)((this->packedMsg & 0x00ff0000) >> 0x10));
			}
		}
	}
	return returnedArray;
}

int32_t FastShortMessage::getLength() {
	try {
		return getDataLength(this->packedMsg & 0xff) + 1;
	} catch ($InvalidMidiDataException& imde) {
	}
	return 0;
}

void FastShortMessage::setMessage(int32_t status) {
	int32_t dataLength = getDataLength(status);
	if (dataLength != 0) {
		$ShortMessage::setMessage(status);
	}
	this->packedMsg = (this->packedMsg & 0x00ffff00) | (status & 0xff);
}

void FastShortMessage::setMessage(int32_t status, int32_t data1, int32_t data2) {
	getDataLength(status);
	this->packedMsg = ((status & 0xff) | ((data1 & 0xff) << 8)) | ((data2 & 0xff) << 16);
}

void FastShortMessage::setMessage(int32_t command, int32_t channel, int32_t data1, int32_t data2) {
	getDataLength(command);
	this->packedMsg = (((command & 0xf0) | (channel & 0x0f)) | ((data1 & 0xff) << 8)) | ((data2 & 0xff) << 16);
}

int32_t FastShortMessage::getChannel() {
	return this->packedMsg & 0x0f;
}

int32_t FastShortMessage::getCommand() {
	return this->packedMsg & 0xf0;
}

int32_t FastShortMessage::getData1() {
	return (this->packedMsg & 0xff00) >> 8;
}

int32_t FastShortMessage::getData2() {
	return (this->packedMsg & 0x00ff0000) >> 0x10;
}

int32_t FastShortMessage::getStatus() {
	return this->packedMsg & 0xff;
}

$Object* FastShortMessage::clone() {
	try {
		return $new(FastShortMessage, this->packedMsg);
	} catch ($InvalidMidiDataException& imde) {
	}
	return nullptr;
}

FastShortMessage::FastShortMessage() {
}

$Class* FastShortMessage::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"packedMsg", "I", nullptr, $PRIVATE, $field(FastShortMessage, packedMsg)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(I)V", nullptr, 0, $method(FastShortMessage, init$, void, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{"<init>", "(Ljavax/sound/midi/ShortMessage;)V", nullptr, 0, $method(FastShortMessage, init$, void, $ShortMessage*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(FastShortMessage, clone, $Object*)},
		{"getChannel", "()I", nullptr, $PUBLIC, $virtualMethod(FastShortMessage, getChannel, int32_t)},
		{"getCommand", "()I", nullptr, $PUBLIC, $virtualMethod(FastShortMessage, getCommand, int32_t)},
		{"getData1", "()I", nullptr, $PUBLIC, $virtualMethod(FastShortMessage, getData1, int32_t)},
		{"getData2", "()I", nullptr, $PUBLIC, $virtualMethod(FastShortMessage, getData2, int32_t)},
		{"getLength", "()I", nullptr, $PUBLIC, $virtualMethod(FastShortMessage, getLength, int32_t)},
		{"getMessage", "()[B", nullptr, $PUBLIC, $virtualMethod(FastShortMessage, getMessage, $bytes*)},
		{"getPackedMsg", "()I", nullptr, 0, $method(FastShortMessage, getPackedMsg, int32_t)},
		{"getStatus", "()I", nullptr, $PUBLIC, $virtualMethod(FastShortMessage, getStatus, int32_t)},
		{"setMessage", "(I)V", nullptr, $PUBLIC, $virtualMethod(FastShortMessage, setMessage, void, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{"setMessage", "(III)V", nullptr, $PUBLIC, $virtualMethod(FastShortMessage, setMessage, void, int32_t, int32_t, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{"setMessage", "(IIII)V", nullptr, $PUBLIC, $virtualMethod(FastShortMessage, setMessage, void, int32_t, int32_t, int32_t, int32_t), "javax.sound.midi.InvalidMidiDataException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.FastShortMessage",
		"javax.sound.midi.ShortMessage",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FastShortMessage, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FastShortMessage);
	});
	return class$;
}

$Class* FastShortMessage::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
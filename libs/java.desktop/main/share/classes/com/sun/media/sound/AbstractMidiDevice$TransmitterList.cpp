#include <com/sun/media/sound/AbstractMidiDevice$TransmitterList.h>
#include <com/sun/media/sound/AbstractMidiDevice$BasicTransmitter.h>
#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <com/sun/media/sound/FastShortMessage.h>
#include <com/sun/media/sound/FastSysexMessage.h>
#include <com/sun/media/sound/MidiOutDevice$MidiOutReceiver.h>
#include <java/util/ArrayList.h>
#include <javax/sound/midi/InvalidMidiDataException.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/Transmitter.h>
#include <jcpp.h>

using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $AbstractMidiDevice$BasicTransmitter = ::com::sun::media::sound::AbstractMidiDevice$BasicTransmitter;
using $FastShortMessage = ::com::sun::media::sound::FastShortMessage;
using $FastSysexMessage = ::com::sun::media::sound::FastSysexMessage;
using $MidiOutDevice$MidiOutReceiver = ::com::sun::media::sound::MidiOutDevice$MidiOutReceiver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $InvalidMidiDataException = ::javax::sound::midi::InvalidMidiDataException;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $Receiver = ::javax::sound::midi::Receiver;
using $Transmitter = ::javax::sound::midi::Transmitter;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void AbstractMidiDevice$TransmitterList::init$($AbstractMidiDevice* this$0) {
	$set(this, this$0, this$0);
	$set(this, transmitters, $new($ArrayList));
	this->optimizedReceiverCount = 0;
}

void AbstractMidiDevice$TransmitterList::add($Transmitter* t) {
	$synchronized(this->transmitters) {
		this->transmitters->add(t);
	}
	if ($instanceOf($AbstractMidiDevice$BasicTransmitter, t)) {
		$cast($AbstractMidiDevice$BasicTransmitter, t)->setTransmitterList(this);
	}
}

void AbstractMidiDevice$TransmitterList::remove($Transmitter* t) {
	$synchronized(this->transmitters) {
		int32_t index = this->transmitters->indexOf(t);
		if (index >= 0) {
			this->transmitters->remove(index);
		}
	}
}

void AbstractMidiDevice$TransmitterList::receiverChanged($AbstractMidiDevice$BasicTransmitter* t, $Receiver* oldR, $Receiver* newR) {
	$synchronized(this->transmitters) {
		if ($equals(this->midiOutReceiver, oldR)) {
			$set(this, midiOutReceiver, nullptr);
		}
		if (newR != nullptr) {
			if (($instanceOf($MidiOutDevice$MidiOutReceiver, newR)) && (this->midiOutReceiver == nullptr)) {
				$set(this, midiOutReceiver, $cast($MidiOutDevice$MidiOutReceiver, newR));
			}
		}
		this->optimizedReceiverCount = ((this->midiOutReceiver != nullptr) ? 1 : 0);
	}
}

void AbstractMidiDevice$TransmitterList::close() {
	$useLocalObjectStack();
	$synchronized(this->transmitters) {
		for (int32_t i = 0; i < this->transmitters->size(); ++i) {
			$$sure($Transmitter, this->transmitters->get(i))->close();
		}
		this->transmitters->clear();
	}
}

void AbstractMidiDevice$TransmitterList::sendMessage(int32_t packedMessage, int64_t timeStamp) {
	$useLocalObjectStack();
	try {
		$synchronized(this->transmitters) {
			int32_t size = this->transmitters->size();
			if (this->optimizedReceiverCount == size) {
				if (this->midiOutReceiver != nullptr) {
					this->midiOutReceiver->sendPackedMidiMessage(packedMessage, timeStamp);
				}
			} else {
				for (int32_t i = 0; i < size; ++i) {
					$var($Receiver, receiver, $$sure($Transmitter, this->transmitters->get(i))->getReceiver());
					if (receiver != nullptr) {
						if (this->optimizedReceiverCount > 0) {
							if ($instanceOf($MidiOutDevice$MidiOutReceiver, receiver)) {
								$cast($MidiOutDevice$MidiOutReceiver, receiver)->sendPackedMidiMessage(packedMessage, timeStamp);
							} else {
								receiver->send($$new($FastShortMessage, packedMessage), timeStamp);
							}
						} else {
							receiver->send($$new($FastShortMessage, packedMessage), timeStamp);
						}
					}
				}
			}
		}
	} catch ($InvalidMidiDataException& e) {
	}
}

void AbstractMidiDevice$TransmitterList::sendMessage($bytes* data, int64_t timeStamp) {
	$useLocalObjectStack();
	try {
		$synchronized(this->transmitters) {
			int32_t size = this->transmitters->size();
			for (int32_t i = 0; i < size; ++i) {
				$var($Receiver, receiver, $$sure($Transmitter, this->transmitters->get(i))->getReceiver());
				if (receiver != nullptr) {
					receiver->send($$new($FastSysexMessage, data), timeStamp);
				}
			}
		}
	} catch ($InvalidMidiDataException& e) {
		return;
	}
}

void AbstractMidiDevice$TransmitterList::sendMessage($MidiMessage* message, int64_t timeStamp) {
	$useLocalObjectStack();
	if ($instanceOf($FastShortMessage, message)) {
		sendMessage($cast($FastShortMessage, message)->getPackedMsg(), timeStamp);
		return;
	}
	$synchronized(this->transmitters) {
		int32_t size = this->transmitters->size();
		if (this->optimizedReceiverCount == size) {
			if (this->midiOutReceiver != nullptr) {
				this->midiOutReceiver->send(message, timeStamp);
			}
		} else {
			for (int32_t i = 0; i < size; ++i) {
				$var($Receiver, receiver, $$sure($Transmitter, this->transmitters->get(i))->getReceiver());
				if (receiver != nullptr) {
					receiver->send(message, timeStamp);
				}
			}
		}
	}
}

AbstractMidiDevice$TransmitterList::AbstractMidiDevice$TransmitterList() {
}

$Class* AbstractMidiDevice$TransmitterList::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/AbstractMidiDevice;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractMidiDevice$TransmitterList, this$0)},
		{"transmitters", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljavax/sound/midi/Transmitter;>;", $PRIVATE | $FINAL, $field(AbstractMidiDevice$TransmitterList, transmitters)},
		{"midiOutReceiver", "Lcom/sun/media/sound/MidiOutDevice$MidiOutReceiver;", nullptr, $PRIVATE, $field(AbstractMidiDevice$TransmitterList, midiOutReceiver)},
		{"optimizedReceiverCount", "I", nullptr, $PRIVATE, $field(AbstractMidiDevice$TransmitterList, optimizedReceiverCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/AbstractMidiDevice;)V", nullptr, 0, $method(AbstractMidiDevice$TransmitterList, init$, void, $AbstractMidiDevice*)},
		{"add", "(Ljavax/sound/midi/Transmitter;)V", nullptr, $PRIVATE, $method(AbstractMidiDevice$TransmitterList, add, void, $Transmitter*)},
		{"close", "()V", nullptr, 0, $method(AbstractMidiDevice$TransmitterList, close, void)},
		{"receiverChanged", "(Lcom/sun/media/sound/AbstractMidiDevice$BasicTransmitter;Ljavax/sound/midi/Receiver;Ljavax/sound/midi/Receiver;)V", nullptr, $PRIVATE, $method(AbstractMidiDevice$TransmitterList, receiverChanged, void, $AbstractMidiDevice$BasicTransmitter*, $Receiver*, $Receiver*)},
		{"remove", "(Ljavax/sound/midi/Transmitter;)V", nullptr, $PRIVATE, $method(AbstractMidiDevice$TransmitterList, remove, void, $Transmitter*)},
		{"sendMessage", "(IJ)V", nullptr, 0, $method(AbstractMidiDevice$TransmitterList, sendMessage, void, int32_t, int64_t)},
		{"sendMessage", "([BJ)V", nullptr, 0, $method(AbstractMidiDevice$TransmitterList, sendMessage, void, $bytes*, int64_t)},
		{"sendMessage", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, 0, $method(AbstractMidiDevice$TransmitterList, sendMessage, void, $MidiMessage*, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.AbstractMidiDevice$TransmitterList", "com.sun.media.sound.AbstractMidiDevice", "TransmitterList", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.AbstractMidiDevice$TransmitterList",
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
		"com.sun.media.sound.AbstractMidiDevice"
	};
	$loadClass(AbstractMidiDevice$TransmitterList, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AbstractMidiDevice$TransmitterList);
	});
	return class$;
}

$Class* AbstractMidiDevice$TransmitterList::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
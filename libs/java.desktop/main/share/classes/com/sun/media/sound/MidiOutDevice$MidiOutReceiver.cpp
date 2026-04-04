#include <com/sun/media/sound/MidiOutDevice$MidiOutReceiver.h>
#include <com/sun/media/sound/AbstractMidiDevice$AbstractReceiver.h>
#include <com/sun/media/sound/FastShortMessage.h>
#include <com/sun/media/sound/FastSysexMessage.h>
#include <com/sun/media/sound/MidiOutDevice.h>
#include <java/lang/Math.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/ShortMessage.h>
#include <jcpp.h>

using $AbstractMidiDevice$AbstractReceiver = ::com::sun::media::sound::AbstractMidiDevice$AbstractReceiver;
using $FastShortMessage = ::com::sun::media::sound::FastShortMessage;
using $FastSysexMessage = ::com::sun::media::sound::FastSysexMessage;
using $MidiOutDevice = ::com::sun::media::sound::MidiOutDevice;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $ShortMessage = ::javax::sound::midi::ShortMessage;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void MidiOutDevice$MidiOutReceiver::init$($MidiOutDevice* this$0) {
	$set(this, this$0, this$0);
	$AbstractMidiDevice$AbstractReceiver::init$(this$0);
}

void MidiOutDevice$MidiOutReceiver::implSend($MidiMessage* message, int64_t timeStamp) {
	$useLocalObjectStack();
	int32_t length = $nc(message)->getLength();
	int32_t status = message->getStatus();
	if (length <= 3 && status != 240 && status != 247) {
		int32_t packedMsg = 0;
		if ($instanceOf($ShortMessage, message)) {
			if ($instanceOf($FastShortMessage, message)) {
				packedMsg = $cast($FastShortMessage, message)->getPackedMsg();
			} else {
				$var($ShortMessage, msg, $cast($ShortMessage, message));
				int32_t var$0 = (status & 0xff) | ((msg->getData1() & 0xff) << 8);
				packedMsg = var$0 | ((msg->getData2() & 0xff) << 16);
			}
		} else {
			packedMsg = 0;
			$var($bytes, data, message->getMessage());
			if (length > 0) {
				packedMsg = $nc(data)->get(0) & 0xff;
				if (length > 1) {
					if (status == 255) {
						return;
					}
					packedMsg |= (data->get(1) & 0xff) << 8;
					if (length > 2) {
						packedMsg |= (data->get(2) & 0xff) << 16;
					}
				}
			}
		}
		this->this$0->nSendShortMessage(this->this$0->id, packedMsg, timeStamp);
	} else {
		$var($bytes, data, nullptr);
		if ($instanceOf($FastSysexMessage, message)) {
			$assign(data, $cast($FastSysexMessage, message)->getReadOnlyMessage());
		} else {
			$assign(data, message->getMessage());
		}
		int32_t dataLength = $Math::min(length, $nc(data)->length);
		if (dataLength > 0) {
			this->this$0->nSendLongMessage(this->this$0->id, data, dataLength, timeStamp);
		}
	}
}

void MidiOutDevice$MidiOutReceiver::sendPackedMidiMessage(int32_t packedMsg, int64_t timeStamp) {
	$synchronized(this) {
		if (isOpen() && this->this$0->id != 0) {
			this->this$0->nSendShortMessage(this->this$0->id, packedMsg, timeStamp);
		}
	}
}

MidiOutDevice$MidiOutReceiver::MidiOutDevice$MidiOutReceiver() {
}

$Class* MidiOutDevice$MidiOutReceiver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/media/sound/MidiOutDevice;", nullptr, $FINAL | $SYNTHETIC, $field(MidiOutDevice$MidiOutReceiver, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/MidiOutDevice;)V", nullptr, 0, $method(MidiOutDevice$MidiOutReceiver, init$, void, $MidiOutDevice*)},
		{"implSend", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, 0, $virtualMethod(MidiOutDevice$MidiOutReceiver, implSend, void, $MidiMessage*, int64_t)},
		{"sendPackedMidiMessage", "(IJ)V", nullptr, $SYNCHRONIZED, $method(MidiOutDevice$MidiOutReceiver, sendPackedMidiMessage, void, int32_t, int64_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.MidiOutDevice$MidiOutReceiver", "com.sun.media.sound.MidiOutDevice", "MidiOutReceiver", $FINAL},
		{"com.sun.media.sound.AbstractMidiDevice$AbstractReceiver", "com.sun.media.sound.AbstractMidiDevice", "AbstractReceiver", $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.MidiOutDevice$MidiOutReceiver",
		"com.sun.media.sound.AbstractMidiDevice$AbstractReceiver",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.media.sound.MidiOutDevice"
	};
	$loadClass(MidiOutDevice$MidiOutReceiver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MidiOutDevice$MidiOutReceiver);
	});
	return class$;
}

$Class* MidiOutDevice$MidiOutReceiver::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
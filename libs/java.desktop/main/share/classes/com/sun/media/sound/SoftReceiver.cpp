#include <com/sun/media/sound/SoftReceiver.h>
#include <com/sun/media/sound/SoftMainMixer.h>
#include <com/sun/media/sound/SoftSynthesizer.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/TreeMap.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/MidiMessage.h>
#include <javax/sound/midi/Receiver.h>
#include <javax/sound/midi/ShortMessage.h>
#include <jcpp.h>

using $SoftSynthesizer = ::com::sun::media::sound::SoftSynthesizer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $Long = ::java::lang::Long;
using $MethodInfo = ::java::lang::MethodInfo;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiMessage = ::javax::sound::midi::MidiMessage;
using $ShortMessage = ::javax::sound::midi::ShortMessage;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void SoftReceiver::init$($SoftSynthesizer* synth) {
	this->open = true;
	$set(this, control_mutex, $nc(synth)->control_mutex);
	$set(this, synth, synth);
	$set(this, mainmixer, synth->getMainMixer());
	if (this->mainmixer != nullptr) {
		$set(this, midimessages, this->mainmixer->midimessages);
	}
}

$MidiDevice* SoftReceiver::getMidiDevice() {
	return this->synth;
}

void SoftReceiver::send($MidiMessage* message, int64_t timeStamp) {
	$useLocalObjectStack();
	$synchronized(this->control_mutex) {
		if (!this->open) {
			$throwNew($IllegalStateException, "Receiver is not open"_s);
		}
	}
	if (timeStamp != -1) {
		$synchronized(this->control_mutex) {
			$nc(this->mainmixer)->activity();
			while ($nc(this->midimessages)->get($($Long::valueOf(timeStamp))) != nullptr) {
				++timeStamp;
			}
			if ($instanceOf($ShortMessage, message) && ($cast($ShortMessage, message)->getChannel() > 15)) {
				$var($Object, var$0, $Long::valueOf(timeStamp));
				$nc(this->midimessages)->put(var$0, $(message->clone()));
			} else {
				$var($Object, var$1, $Long::valueOf(timeStamp));
				$nc(this->midimessages)->put(var$1, $($nc(message)->getMessage()));
			}
		}
	} else {
		$nc(this->mainmixer)->processMessage(message);
	}
}

void SoftReceiver::close() {
	$synchronized(this->control_mutex) {
		this->open = false;
	}
	$nc(this->synth)->removeReceiver(this);
}

SoftReceiver::SoftReceiver() {
}

$Class* SoftReceiver::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"open", "Z", nullptr, 0, $field(SoftReceiver, open)},
		{"control_mutex", "Ljava/lang/Object;", nullptr, $PRIVATE | $FINAL, $field(SoftReceiver, control_mutex)},
		{"synth", "Lcom/sun/media/sound/SoftSynthesizer;", nullptr, $PRIVATE | $FINAL, $field(SoftReceiver, synth)},
		{"midimessages", "Ljava/util/TreeMap;", "Ljava/util/TreeMap<Ljava/lang/Long;Ljava/lang/Object;>;", 0, $field(SoftReceiver, midimessages)},
		{"mainmixer", "Lcom/sun/media/sound/SoftMainMixer;", nullptr, 0, $field(SoftReceiver, mainmixer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/media/sound/SoftSynthesizer;)V", nullptr, $PUBLIC, $method(SoftReceiver, init$, void, $SoftSynthesizer*)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(SoftReceiver, close, void)},
		{"getMidiDevice", "()Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC, $virtualMethod(SoftReceiver, getMidiDevice, $MidiDevice*)},
		{"send", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, $PUBLIC, $virtualMethod(SoftReceiver, send, void, $MidiMessage*, int64_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.media.sound.SoftReceiver",
		"java.lang.Object",
		"javax.sound.midi.MidiDeviceReceiver",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(SoftReceiver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SoftReceiver);
	});
	return class$;
}

$Class* SoftReceiver::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
#include <com/sun/media/sound/AbstractMidiDevice$AbstractReceiver.h>

#include <com/sun/media/sound/AbstractMidiDevice.h>
#include <java/lang/IllegalStateException.h>
#include <java/util/List.h>
#include <javax/sound/midi/MidiDevice.h>
#include <javax/sound/midi/MidiMessage.h>
#include <jcpp.h>

using $AbstractMidiDevice = ::com::sun::media::sound::AbstractMidiDevice;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $MidiDevice = ::javax::sound::midi::MidiDevice;
using $MidiMessage = ::javax::sound::midi::MidiMessage;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AbstractMidiDevice$AbstractReceiver_FieldInfo_[] = {
	{"this$0", "Lcom/sun/media/sound/AbstractMidiDevice;", nullptr, $FINAL | $SYNTHETIC, $field(AbstractMidiDevice$AbstractReceiver, this$0)},
	{"open", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AbstractMidiDevice$AbstractReceiver, open)},
	{}
};

$MethodInfo _AbstractMidiDevice$AbstractReceiver_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/media/sound/AbstractMidiDevice;)V", nullptr, 0, $method(AbstractMidiDevice$AbstractReceiver, init$, void, $AbstractMidiDevice*)},
	{"close", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractMidiDevice$AbstractReceiver, close, void)},
	{"getMidiDevice", "()Ljavax/sound/midi/MidiDevice;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractMidiDevice$AbstractReceiver, getMidiDevice, $MidiDevice*)},
	{"implSend", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, $ABSTRACT, $virtualMethod(AbstractMidiDevice$AbstractReceiver, implSend, void, $MidiMessage*, int64_t)},
	{"isOpen", "()Z", nullptr, $FINAL, $method(AbstractMidiDevice$AbstractReceiver, isOpen, bool)},
	{"send", "(Ljavax/sound/midi/MidiMessage;J)V", nullptr, $PUBLIC | $FINAL | $SYNCHRONIZED, $virtualMethod(AbstractMidiDevice$AbstractReceiver, send, void, $MidiMessage*, int64_t)},
	{}
};

$InnerClassInfo _AbstractMidiDevice$AbstractReceiver_InnerClassesInfo_[] = {
	{"com.sun.media.sound.AbstractMidiDevice$AbstractReceiver", "com.sun.media.sound.AbstractMidiDevice", "AbstractReceiver", $ABSTRACT},
	{}
};

$ClassInfo _AbstractMidiDevice$AbstractReceiver_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.AbstractMidiDevice$AbstractReceiver",
	"java.lang.Object",
	"javax.sound.midi.MidiDeviceReceiver",
	_AbstractMidiDevice$AbstractReceiver_FieldInfo_,
	_AbstractMidiDevice$AbstractReceiver_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractMidiDevice$AbstractReceiver_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.media.sound.AbstractMidiDevice"
};

$Object* allocate$AbstractMidiDevice$AbstractReceiver($Class* clazz) {
	return $of($alloc(AbstractMidiDevice$AbstractReceiver));
}

void AbstractMidiDevice$AbstractReceiver::init$($AbstractMidiDevice* this$0) {
	$set(this, this$0, this$0);
	this->open = true;
}

void AbstractMidiDevice$AbstractReceiver::send($MidiMessage* message, int64_t timeStamp) {
	$synchronized(this) {
		if (!this->open) {
			$throwNew($IllegalStateException, "Receiver is not open"_s);
		}
		implSend(message, timeStamp);
	}
}

void AbstractMidiDevice$AbstractReceiver::close() {
	this->open = false;
	$synchronized(this->this$0->traRecLock) {
		$nc($(this->this$0->getReceiverList()))->remove($of(this));
	}
	this->this$0->closeInternal(this);
}

$MidiDevice* AbstractMidiDevice$AbstractReceiver::getMidiDevice() {
	return this->this$0;
}

bool AbstractMidiDevice$AbstractReceiver::isOpen() {
	return this->open;
}

AbstractMidiDevice$AbstractReceiver::AbstractMidiDevice$AbstractReceiver() {
}

$Class* AbstractMidiDevice$AbstractReceiver::load$($String* name, bool initialize) {
	$loadClass(AbstractMidiDevice$AbstractReceiver, name, initialize, &_AbstractMidiDevice$AbstractReceiver_ClassInfo_, allocate$AbstractMidiDevice$AbstractReceiver);
	return class$;
}

$Class* AbstractMidiDevice$AbstractReceiver::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
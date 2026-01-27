#include <com/sun/media/sound/AbstractDataLine.h>

#include <com/sun/media/sound/AbstractLine.h>
#include <com/sun/media/sound/AbstractMixer.h>
#include <com/sun/media/sound/Platform.h>
#include <com/sun/media/sound/Toolkit.h>
#include <java/lang/IllegalStateException.h>
#include <javax/sound/sampled/AudioFormat.h>
#include <javax/sound/sampled/AudioSystem.h>
#include <javax/sound/sampled/Control$Type.h>
#include <javax/sound/sampled/Control.h>
#include <javax/sound/sampled/DataLine$Info.h>
#include <javax/sound/sampled/Line$Info.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineEvent$Type.h>
#include <javax/sound/sampled/LineEvent.h>
#include <javax/sound/sampled/LineListener.h>
#include <javax/sound/sampled/LineUnavailableException.h>
#include <jcpp.h>

#undef NOT_SPECIFIED
#undef START
#undef STOP

using $ControlArray = $Array<::javax::sound::sampled::Control>;
using $AbstractLine = ::com::sun::media::sound::AbstractLine;
using $AbstractMixer = ::com::sun::media::sound::AbstractMixer;
using $Platform = ::com::sun::media::sound::Platform;
using $Toolkit = ::com::sun::media::sound::Toolkit;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AudioFormat = ::javax::sound::sampled::AudioFormat;
using $AudioSystem = ::javax::sound::sampled::AudioSystem;
using $Control = ::javax::sound::sampled::Control;
using $Control$Type = ::javax::sound::sampled::Control$Type;
using $DataLine$Info = ::javax::sound::sampled::DataLine$Info;
using $Line = ::javax::sound::sampled::Line;
using $Line$Info = ::javax::sound::sampled::Line$Info;
using $LineEvent = ::javax::sound::sampled::LineEvent;
using $LineEvent$Type = ::javax::sound::sampled::LineEvent$Type;
using $LineListener = ::javax::sound::sampled::LineListener;
using $LineUnavailableException = ::javax::sound::sampled::LineUnavailableException;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

$FieldInfo _AbstractDataLine_FieldInfo_[] = {
	{"defaultFormat", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PRIVATE | $FINAL, $field(AbstractDataLine, defaultFormat)},
	{"defaultBufferSize", "I", nullptr, $PRIVATE | $FINAL, $field(AbstractDataLine, defaultBufferSize)},
	{"lock", "Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $field(AbstractDataLine, lock)},
	{"format", "Ljavax/sound/sampled/AudioFormat;", nullptr, $PROTECTED, $field(AbstractDataLine, format)},
	{"bufferSize", "I", nullptr, $PROTECTED, $field(AbstractDataLine, bufferSize)},
	{"running", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AbstractDataLine, running)},
	{"started", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AbstractDataLine, started)},
	{"active", "Z", nullptr, $PRIVATE | $VOLATILE, $field(AbstractDataLine, active)},
	{}
};

$MethodInfo _AbstractDataLine_MethodInfo_[] = {
	{"*addLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getControl", "(Ljavax/sound/sampled/Control$Type;)Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getControls", "()[Ljavax/sound/sampled/Control;", nullptr, $PUBLIC | $FINAL},
	{"*getFramePosition", "()I", nullptr, $PUBLIC | $FINAL},
	{"*getLineInfo", "()Ljavax/sound/sampled/Line$Info;", nullptr, $PUBLIC | $FINAL},
	{"*getLongFramePosition", "()J", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/sound/sampled/DataLine$Info;Lcom/sun/media/sound/AbstractMixer;[Ljavax/sound/sampled/Control;)V", nullptr, $PROTECTED, $method(AbstractDataLine, init$, void, $DataLine$Info*, $AbstractMixer*, $ControlArray*)},
	{"<init>", "(Ljavax/sound/sampled/DataLine$Info;Lcom/sun/media/sound/AbstractMixer;[Ljavax/sound/sampled/Control;Ljavax/sound/sampled/AudioFormat;I)V", nullptr, $PROTECTED, $method(AbstractDataLine, init$, void, $DataLine$Info*, $AbstractMixer*, $ControlArray*, $AudioFormat*, int32_t)},
	{"available", "()I", nullptr, $PUBLIC, $virtualMethod(AbstractDataLine, available, int32_t)},
	{"close", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractDataLine, close, void)},
	{"drain", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDataLine, drain, void)},
	{"flush", "()V", nullptr, $PUBLIC, $virtualMethod(AbstractDataLine, flush, void)},
	{"getBufferSize", "()I", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractDataLine, getBufferSize, int32_t)},
	{"getFormat", "()Ljavax/sound/sampled/AudioFormat;", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractDataLine, getFormat, $AudioFormat*)},
	{"getLevel", "()F", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractDataLine, getLevel, float)},
	{"getMicrosecondPosition", "()J", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractDataLine, getMicrosecondPosition, int64_t)},
	{"implClose", "()V", nullptr, $ABSTRACT, $virtualMethod(AbstractDataLine, implClose, void)},
	{"implOpen", "(Ljavax/sound/sampled/AudioFormat;I)V", nullptr, $ABSTRACT, $virtualMethod(AbstractDataLine, implOpen, void, $AudioFormat*, int32_t), "javax.sound.sampled.LineUnavailableException"},
	{"implStart", "()V", nullptr, $ABSTRACT, $virtualMethod(AbstractDataLine, implStart, void)},
	{"implStop", "()V", nullptr, $ABSTRACT, $virtualMethod(AbstractDataLine, implStop, void)},
	{"isActive", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractDataLine, isActive, bool)},
	{"*isControlSupported", "(Ljavax/sound/sampled/Control$Type;)Z", nullptr, $PUBLIC | $FINAL},
	{"*isOpen", "()Z", nullptr, $PUBLIC | $FINAL},
	{"isRunning", "()Z", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractDataLine, isRunning, bool)},
	{"isStartedRunning", "()Z", nullptr, $FINAL, $method(AbstractDataLine, isStartedRunning, bool)},
	{"open", "(Ljavax/sound/sampled/AudioFormat;I)V", nullptr, $PUBLIC | $FINAL, $method(AbstractDataLine, open, void, $AudioFormat*, int32_t), "javax.sound.sampled.LineUnavailableException"},
	{"open", "(Ljavax/sound/sampled/AudioFormat;)V", nullptr, $PUBLIC | $FINAL, $method(AbstractDataLine, open, void, $AudioFormat*), "javax.sound.sampled.LineUnavailableException"},
	{"open", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractDataLine, open, void), "javax.sound.sampled.LineUnavailableException"},
	{"*removeLineListener", "(Ljavax/sound/sampled/LineListener;)V", nullptr, $PUBLIC | $FINAL},
	{"setActive", "(Z)V", nullptr, $FINAL, $method(AbstractDataLine, setActive, void, bool)},
	{"setBufferSize", "(I)I", nullptr, $PUBLIC | $FINAL, $method(AbstractDataLine, setBufferSize, int32_t, int32_t)},
	{"setEOM", "()V", nullptr, $FINAL, $method(AbstractDataLine, setEOM, void)},
	{"setStarted", "(Z)V", nullptr, $FINAL, $method(AbstractDataLine, setStarted, void, bool)},
	{"start", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractDataLine, start, void)},
	{"stop", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(AbstractDataLine, stop, void)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AbstractDataLine_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"com.sun.media.sound.AbstractDataLine",
	"com.sun.media.sound.AbstractLine",
	"javax.sound.sampled.DataLine",
	_AbstractDataLine_FieldInfo_,
	_AbstractDataLine_MethodInfo_
};

$Object* allocate$AbstractDataLine($Class* clazz) {
	return $of($alloc(AbstractDataLine));
}

$Line$Info* AbstractDataLine::getLineInfo() {
	 return this->$AbstractLine::getLineInfo();
}

bool AbstractDataLine::isOpen() {
	 return this->$AbstractLine::isOpen();
}

void AbstractDataLine::addLineListener($LineListener* listener) {
	this->$AbstractLine::addLineListener(listener);
}

void AbstractDataLine::removeLineListener($LineListener* listener) {
	this->$AbstractLine::removeLineListener(listener);
}

$ControlArray* AbstractDataLine::getControls() {
	 return this->$AbstractLine::getControls();
}

bool AbstractDataLine::isControlSupported($Control$Type* controlType) {
	 return this->$AbstractLine::isControlSupported(controlType);
}

$Control* AbstractDataLine::getControl($Control$Type* controlType) {
	 return this->$AbstractLine::getControl(controlType);
}

int32_t AbstractDataLine::getFramePosition() {
	 return this->$AbstractLine::getFramePosition();
}

int64_t AbstractDataLine::getLongFramePosition() {
	 return this->$AbstractLine::getLongFramePosition();
}

int32_t AbstractDataLine::hashCode() {
	 return this->$AbstractLine::hashCode();
}

bool AbstractDataLine::equals(Object$* arg0) {
	 return this->$AbstractLine::equals(arg0);
}

$Object* AbstractDataLine::clone() {
	 return this->$AbstractLine::clone();
}

$String* AbstractDataLine::toString() {
	 return this->$AbstractLine::toString();
}

void AbstractDataLine::finalize() {
	this->$AbstractLine::finalize();
}

void AbstractDataLine::init$($DataLine$Info* info, $AbstractMixer* mixer, $ControlArray* controls) {
	AbstractDataLine::init$(info, mixer, controls, nullptr, $AudioSystem::NOT_SPECIFIED);
}

void AbstractDataLine::init$($DataLine$Info* info, $AbstractMixer* mixer, $ControlArray* controls, $AudioFormat* format, int32_t bufferSize) {
	$AbstractLine::init$(info, mixer, controls);
	$set(this, lock, $new($Object));
	if (format != nullptr) {
		$set(this, defaultFormat, format);
	} else {
		$set(this, defaultFormat, $new($AudioFormat, 44100.0f, 16, 2, true, $Platform::isBigEndian()));
	}
	if (bufferSize > 0) {
		this->defaultBufferSize = bufferSize;
	} else {
		int32_t var$0 = ($cast(int32_t, ($nc(this->defaultFormat)->getFrameRate() / 2)));
		this->defaultBufferSize = var$0 * $nc(this->defaultFormat)->getFrameSize();
	}
	$set(this, format, this->defaultFormat);
	this->bufferSize = this->defaultBufferSize;
}

void AbstractDataLine::open($AudioFormat* format, int32_t bufferSize) {
	$useLocalCurrentObjectStackCache();
	$synchronized(this->mixer) {
		if (!isOpen()) {
			$Toolkit::isFullySpecifiedAudioFormat(format);
			$nc(this->mixer)->open(static_cast<$Line*>(static_cast<$AbstractLine*>(this)));
			try {
				implOpen(format, bufferSize);
				setOpen(true);
			} catch ($LineUnavailableException& e) {
				$nc(this->mixer)->close(static_cast<$Line*>(static_cast<$AbstractLine*>(this)));
				$throw(e);
			}
		} else {
			if (!$nc(format)->matches($(getFormat()))) {
				$var($String, var$0, $$str({"Line is already open with format "_s, $(getFormat()), " and bufferSize "_s}));
				$throwNew($IllegalStateException, $$concat(var$0, $$str(getBufferSize())));
			}
			if (bufferSize > 0) {
				setBufferSize(bufferSize);
			}
		}
	}
}

void AbstractDataLine::open($AudioFormat* format) {
	open(format, $AudioSystem::NOT_SPECIFIED);
}

int32_t AbstractDataLine::available() {
	return 0;
}

void AbstractDataLine::drain() {
}

void AbstractDataLine::flush() {
}

void AbstractDataLine::start() {
	$synchronized(this->mixer) {
		if (isOpen()) {
			if (!isStartedRunning()) {
				$nc(this->mixer)->start(static_cast<$Line*>(static_cast<$AbstractLine*>(this)));
				implStart();
				this->running = true;
			}
		}
	}
	$synchronized(this->lock) {
		$nc($of(this->lock))->notifyAll();
	}
}

void AbstractDataLine::stop() {
	$synchronized(this->mixer) {
		if (isOpen()) {
			if (isStartedRunning()) {
				implStop();
				$nc(this->mixer)->stop(static_cast<$Line*>(static_cast<$AbstractLine*>(this)));
				this->running = false;
				if (this->started && (!isActive())) {
					setStarted(false);
				}
			}
		}
	}
	$synchronized(this->lock) {
		$nc($of(this->lock))->notifyAll();
	}
}

bool AbstractDataLine::isRunning() {
	return this->started;
}

bool AbstractDataLine::isActive() {
	return this->active;
}

int64_t AbstractDataLine::getMicrosecondPosition() {
	int64_t microseconds = getLongFramePosition();
	if (microseconds != $AudioSystem::NOT_SPECIFIED) {
		microseconds = $Toolkit::frames2micros($(getFormat()), microseconds);
	}
	return microseconds;
}

$AudioFormat* AbstractDataLine::getFormat() {
	return this->format;
}

int32_t AbstractDataLine::getBufferSize() {
	return this->bufferSize;
}

int32_t AbstractDataLine::setBufferSize(int32_t newSize) {
	return getBufferSize();
}

float AbstractDataLine::getLevel() {
	return (float)$AudioSystem::NOT_SPECIFIED;
}

bool AbstractDataLine::isStartedRunning() {
	return this->running;
}

void AbstractDataLine::setActive(bool active) {
	this->active = active;
}

void AbstractDataLine::setStarted(bool started) {
	$useLocalCurrentObjectStackCache();
	bool sendEvents = false;
	int64_t position = getLongFramePosition();
	if (this->started != started) {
		this->started = started;
		sendEvents = true;
	}
	if (sendEvents) {
		if (started) {
			$init($LineEvent$Type);
			this->sendEvents($$new($LineEvent, static_cast<$Line*>(static_cast<$AbstractLine*>(this)), $LineEvent$Type::START, position));
		} else {
			$init($LineEvent$Type);
			this->sendEvents($$new($LineEvent, static_cast<$Line*>(static_cast<$AbstractLine*>(this)), $LineEvent$Type::STOP, position));
		}
	}
}

void AbstractDataLine::setEOM() {
	setStarted(false);
}

void AbstractDataLine::open() {
	open(this->format, this->bufferSize);
}

void AbstractDataLine::close() {
	$synchronized(this->mixer) {
		if (isOpen()) {
			stop();
			setOpen(false);
			implClose();
			$nc(this->mixer)->close(static_cast<$Line*>(static_cast<$AbstractLine*>(this)));
			$set(this, format, this->defaultFormat);
			this->bufferSize = this->defaultBufferSize;
		}
	}
}

AbstractDataLine::AbstractDataLine() {
}

$Class* AbstractDataLine::load$($String* name, bool initialize) {
	$loadClass(AbstractDataLine, name, initialize, &_AbstractDataLine_ClassInfo_, allocate$AbstractDataLine);
	return class$;
}

$Class* AbstractDataLine::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
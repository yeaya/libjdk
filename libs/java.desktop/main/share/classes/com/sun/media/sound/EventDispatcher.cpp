#include <com/sun/media/sound/EventDispatcher.h>
#include <com/sun/media/sound/AutoClosingClip.h>
#include <com/sun/media/sound/EventDispatcher$ClipInfo.h>
#include <com/sun/media/sound/EventDispatcher$EventInfo.h>
#include <com/sun/media/sound/EventDispatcher$LineMonitor.h>
#include <com/sun/media/sound/JSSecurityManager.h>
#include <com/sun/media/sound/Printer.h>
#include <java/lang/InterruptedException.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/sound/midi/ControllerEventListener.h>
#include <javax/sound/midi/MetaEventListener.h>
#include <javax/sound/midi/MetaMessage.h>
#include <javax/sound/midi/ShortMessage.h>
#include <javax/sound/sampled/DataLine.h>
#include <javax/sound/sampled/Line.h>
#include <javax/sound/sampled/LineEvent.h>
#include <javax/sound/sampled/LineListener.h>
#include <jcpp.h>

#undef AUTO_CLOSE_TIME
#undef LINE_MONITOR_TIME

using $AutoClosingClip = ::com::sun::media::sound::AutoClosingClip;
using $EventDispatcher$ClipInfo = ::com::sun::media::sound::EventDispatcher$ClipInfo;
using $EventDispatcher$EventInfo = ::com::sun::media::sound::EventDispatcher$EventInfo;
using $EventDispatcher$LineMonitor = ::com::sun::media::sound::EventDispatcher$LineMonitor;
using $JSSecurityManager = ::com::sun::media::sound::JSSecurityManager;
using $Printer = ::com::sun::media::sound::Printer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ControllerEventListener = ::javax::sound::midi::ControllerEventListener;
using $MetaEventListener = ::javax::sound::midi::MetaEventListener;
using $MetaMessage = ::javax::sound::midi::MetaMessage;
using $ShortMessage = ::javax::sound::midi::ShortMessage;
using $LineEvent = ::javax::sound::sampled::LineEvent;
using $LineListener = ::javax::sound::sampled::LineListener;

namespace com {
	namespace sun {
		namespace media {
			namespace sound {

void EventDispatcher::init$() {
	$set(this, eventQueue, $new($ArrayList));
	$set(this, thread, nullptr);
	$set(this, autoClosingClips, $new($ArrayList));
	$set(this, lineMonitors, $new($ArrayList));
}

void EventDispatcher::start() {
	$synchronized(this) {
		if (this->thread == nullptr) {
			$set(this, thread, $JSSecurityManager::createThread(this, "Java Sound Event Dispatcher"_s, true, -1, true));
		}
	}
}

void EventDispatcher::processEvent($EventDispatcher$EventInfo* eventInfo) {
	$useLocalObjectStack();
	int32_t count = $nc(eventInfo)->getListenerCount();
	if ($instanceOf($LineEvent, $(eventInfo->getEvent()))) {
		$var($LineEvent, event, $cast($LineEvent, eventInfo->getEvent()));
		for (int32_t i = 0; i < count; ++i) {
			try {
				$$sure($LineListener, eventInfo->getListener(i))->update(event);
			} catch ($Throwable& t) {
				$init($Printer);
				if ($Printer::err$) {
					t->printStackTrace();
				}
			}
		}
		return;
	}
	if ($instanceOf($MetaMessage, $(eventInfo->getEvent()))) {
		$var($MetaMessage, event, $cast($MetaMessage, eventInfo->getEvent()));
		for (int32_t i = 0; i < count; ++i) {
			try {
				$$sure($MetaEventListener, eventInfo->getListener(i))->meta(event);
			} catch ($Throwable& t) {
				$init($Printer);
				if ($Printer::err$) {
					t->printStackTrace();
				}
			}
		}
		return;
	}
	if ($instanceOf($ShortMessage, $(eventInfo->getEvent()))) {
		$var($ShortMessage, event, $cast($ShortMessage, eventInfo->getEvent()));
		int32_t status = $nc(event)->getStatus();
		if ((status & 0xf0) == 0xb0) {
			for (int32_t i = 0; i < count; ++i) {
				try {
					$$sure($ControllerEventListener, eventInfo->getListener(i))->controlChange(event);
				} catch ($Throwable& t) {
					$init($Printer);
					if ($Printer::err$) {
						t->printStackTrace();
					}
				}
			}
		}
		return;
	}
	$Printer::err($$str({"Unknown event type: "_s, $(eventInfo->getEvent())}));
}

void EventDispatcher::dispatchEvents() {
	$var($EventDispatcher$EventInfo, eventInfo, nullptr);
	$synchronized(this) {
		try {
			if (this->eventQueue->size() == 0) {
				bool var$0 = this->autoClosingClips->size() > 0;
				if (var$0 || this->lineMonitors->size() > 0) {
					int32_t waitTime = EventDispatcher::AUTO_CLOSE_TIME;
					if (this->lineMonitors->size() > 0) {
						waitTime = EventDispatcher::LINE_MONITOR_TIME;
					}
					$of(this)->wait(waitTime);
				} else {
					$of(this)->wait();
				}
			}
		} catch ($InterruptedException& e) {
		}
		if (this->eventQueue->size() > 0) {
			$assign(eventInfo, $cast($EventDispatcher$EventInfo, this->eventQueue->remove(0)));
		}
	}
	if (eventInfo != nullptr) {
		processEvent(eventInfo);
	} else {
		if (this->autoClosingClips->size() > 0) {
			closeAutoClosingClips();
		}
		if (this->lineMonitors->size() > 0) {
			monitorLines();
		}
	}
}

void EventDispatcher::postEvent($EventDispatcher$EventInfo* eventInfo) {
	$synchronized(this) {
		this->eventQueue->add(eventInfo);
		$of(this)->notifyAll();
	}
}

void EventDispatcher::run() {
	while (true) {
		try {
			dispatchEvents();
		} catch ($Throwable& t) {
			$init($Printer);
			if ($Printer::err$) {
				t->printStackTrace();
			}
		}
	}
}

void EventDispatcher::sendAudioEvents(Object$* event, $List* listeners) {
	if ((listeners == nullptr) || (listeners->size() == 0)) {
		return;
	}
	start();
	$var($EventDispatcher$EventInfo, eventInfo, $new($EventDispatcher$EventInfo, this, event, listeners));
	postEvent(eventInfo);
}

void EventDispatcher::closeAutoClosingClips() {
	$useLocalObjectStack();
	$synchronized(this->autoClosingClips) {
		int64_t currTime = $System::currentTimeMillis();
		for (int32_t i = this->autoClosingClips->size() - 1; i >= 0; --i) {
			$var($EventDispatcher$ClipInfo, info, $cast($EventDispatcher$ClipInfo, this->autoClosingClips->get(i)));
			if ($nc(info)->isExpired(currTime)) {
				$var($AutoClosingClip, clip, info->getClip());
				bool var$0 = !$nc(clip)->isOpen();
				if (var$0 || !clip->isAutoClosing()) {
					this->autoClosingClips->remove(i);
				} else {
					bool var$2 = !clip->isRunning();
					bool var$1 = var$2 && !clip->isActive();
					if (var$1 && clip->isAutoClosing()) {
						clip->close();
					} else {
					}
				}
			}
		}
	}
}

int32_t EventDispatcher::getAutoClosingClipIndex($AutoClosingClip* clip) {
	$useLocalObjectStack();
	$synchronized(this->autoClosingClips) {
		for (int32_t i = this->autoClosingClips->size() - 1; i >= 0; --i) {
			if ($nc($of(clip))->equals($($$sure($EventDispatcher$ClipInfo, this->autoClosingClips->get(i))->getClip()))) {
				return i;
			}
		}
	}
	return -1;
}

void EventDispatcher::autoClosingClipOpened($AutoClosingClip* clip) {
	int32_t index = 0;
	$synchronized(this->autoClosingClips) {
		index = getAutoClosingClipIndex(clip);
		if (index == -1) {
			this->autoClosingClips->add($$new($EventDispatcher$ClipInfo, this, clip));
		}
	}
	if (index == -1) {
		$synchronized(this) {
			$of(this)->notifyAll();
		}
	}
}

void EventDispatcher::autoClosingClipClosed($AutoClosingClip* clip) {
	$synchronized(this->autoClosingClips) {
		int32_t index = getAutoClosingClipIndex(clip);
		if (index != -1) {
			this->autoClosingClips->remove(index);
		}
	}
}

void EventDispatcher::monitorLines() {
	$useLocalObjectStack();
	$synchronized(this->lineMonitors) {
		for (int32_t i = 0; i < this->lineMonitors->size(); ++i) {
			$$sure($EventDispatcher$LineMonitor, this->lineMonitors->get(i))->checkLine();
		}
	}
}

void EventDispatcher::addLineMonitor($EventDispatcher$LineMonitor* lm) {
	$synchronized(this->lineMonitors) {
		if (this->lineMonitors->indexOf(lm) >= 0) {
			return;
		}
		this->lineMonitors->add(lm);
	}
	$synchronized(this) {
		$of(this)->notifyAll();
	}
}

void EventDispatcher::removeLineMonitor($EventDispatcher$LineMonitor* lm) {
	$synchronized(this->lineMonitors) {
		if (this->lineMonitors->indexOf(lm) < 0) {
			return;
		}
		this->lineMonitors->remove(lm);
	}
}

EventDispatcher::EventDispatcher() {
}

$Class* EventDispatcher::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"AUTO_CLOSE_TIME", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventDispatcher, AUTO_CLOSE_TIME)},
		{"eventQueue", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/media/sound/EventDispatcher$EventInfo;>;", $PRIVATE | $FINAL, $field(EventDispatcher, eventQueue)},
		{"thread", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(EventDispatcher, thread)},
		{"autoClosingClips", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/media/sound/EventDispatcher$ClipInfo;>;", $PRIVATE | $FINAL, $field(EventDispatcher, autoClosingClips)},
		{"lineMonitors", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Lcom/sun/media/sound/EventDispatcher$LineMonitor;>;", $PRIVATE | $FINAL, $field(EventDispatcher, lineMonitors)},
		{"LINE_MONITOR_TIME", "I", nullptr, $STATIC | $FINAL, $constField(EventDispatcher, LINE_MONITOR_TIME)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(EventDispatcher, init$, void)},
		{"addLineMonitor", "(Lcom/sun/media/sound/EventDispatcher$LineMonitor;)V", nullptr, 0, $method(EventDispatcher, addLineMonitor, void, $EventDispatcher$LineMonitor*)},
		{"autoClosingClipClosed", "(Lcom/sun/media/sound/AutoClosingClip;)V", nullptr, 0, $method(EventDispatcher, autoClosingClipClosed, void, $AutoClosingClip*)},
		{"autoClosingClipOpened", "(Lcom/sun/media/sound/AutoClosingClip;)V", nullptr, 0, $method(EventDispatcher, autoClosingClipOpened, void, $AutoClosingClip*)},
		{"closeAutoClosingClips", "()V", nullptr, $PRIVATE, $method(EventDispatcher, closeAutoClosingClips, void)},
		{"dispatchEvents", "()V", nullptr, 0, $method(EventDispatcher, dispatchEvents, void)},
		{"getAutoClosingClipIndex", "(Lcom/sun/media/sound/AutoClosingClip;)I", nullptr, $PRIVATE, $method(EventDispatcher, getAutoClosingClipIndex, int32_t, $AutoClosingClip*)},
		{"monitorLines", "()V", nullptr, $PRIVATE, $method(EventDispatcher, monitorLines, void)},
		{"postEvent", "(Lcom/sun/media/sound/EventDispatcher$EventInfo;)V", nullptr, $PRIVATE | $SYNCHRONIZED, $method(EventDispatcher, postEvent, void, $EventDispatcher$EventInfo*)},
		{"processEvent", "(Lcom/sun/media/sound/EventDispatcher$EventInfo;)V", nullptr, 0, $method(EventDispatcher, processEvent, void, $EventDispatcher$EventInfo*)},
		{"removeLineMonitor", "(Lcom/sun/media/sound/EventDispatcher$LineMonitor;)V", nullptr, 0, $method(EventDispatcher, removeLineMonitor, void, $EventDispatcher$LineMonitor*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(EventDispatcher, run, void)},
		{"sendAudioEvents", "(Ljava/lang/Object;Ljava/util/List;)V", "(Ljava/lang/Object;Ljava/util/List<Ljava/lang/Object;>;)V", 0, $method(EventDispatcher, sendAudioEvents, void, Object$*, $List*)},
		{"start", "()V", nullptr, $SYNCHRONIZED, $method(EventDispatcher, start, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.media.sound.EventDispatcher$LineMonitor", "com.sun.media.sound.EventDispatcher", "LineMonitor", $STATIC | $INTERFACE | $ABSTRACT},
		{"com.sun.media.sound.EventDispatcher$ClipInfo", "com.sun.media.sound.EventDispatcher", "ClipInfo", $PRIVATE},
		{"com.sun.media.sound.EventDispatcher$EventInfo", "com.sun.media.sound.EventDispatcher", "EventInfo", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.media.sound.EventDispatcher",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.media.sound.EventDispatcher$LineMonitor,com.sun.media.sound.EventDispatcher$ClipInfo,com.sun.media.sound.EventDispatcher$EventInfo"
	};
	$loadClass(EventDispatcher, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventDispatcher);
	});
	return class$;
}

$Class* EventDispatcher::class$ = nullptr;

			} // sound
		} // media
	} // sun
} // com
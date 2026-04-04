#include <com/apple/eawt/FullScreenHandler.h>
#include <com/apple/eawt/FullScreenHandler$1.h>
#include <com/apple/eawt/FullScreenListener.h>
#include <com/apple/eawt/event/FullScreenEvent.h>
#include <java/awt/Window.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedList.h>
#include <java/util/List.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/RootPaneContainer.h>
#include <sun/awt/SunToolkit.h>
#include <jcpp.h>

#undef CLIENT_PROPERTY
#undef FULLSCREEN_DID_ENTER
#undef FULLSCREEN_DID_EXIT
#undef FULLSCREEN_WILL_ENTER
#undef FULLSCREEN_WILL_EXIT

using $FullScreenHandler$1 = ::com::apple::eawt::FullScreenHandler$1;
using $FullScreenListener = ::com::apple::eawt::FullScreenListener;
using $FullScreenEvent = ::com::apple::eawt::event::FullScreenEvent;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $LinkedList = ::java::util::LinkedList;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SunToolkit = ::sun::awt::SunToolkit;

namespace com {
	namespace apple {
		namespace eawt {

$String* FullScreenHandler::CLIENT_PROPERTY = nullptr;

void FullScreenHandler::addFullScreenListenerTo($RootPaneContainer* window, $FullScreenListener* listener) {
	$init(FullScreenHandler);
	$useLocalObjectStack();
	$var($Object, value, $$nc($nc(window)->getRootPane())->getClientProperty(FullScreenHandler::CLIENT_PROPERTY));
	if ($instanceOf(FullScreenHandler, value)) {
		$cast(FullScreenHandler, value)->addListener(listener);
		return;
	}
	if (value != nullptr) {
		return;
	}
	$var(FullScreenHandler, newHandler, $new(FullScreenHandler));
	newHandler->addListener(listener);
	$$nc(window->getRootPane())->putClientProperty(FullScreenHandler::CLIENT_PROPERTY, newHandler);
}

void FullScreenHandler::removeFullScreenListenerFrom($RootPaneContainer* window, $FullScreenListener* listener) {
	$init(FullScreenHandler);
	$useLocalObjectStack();
	$var($Object, value, $$nc($nc(window)->getRootPane())->getClientProperty(FullScreenHandler::CLIENT_PROPERTY));
	if (!($instanceOf(FullScreenHandler, value))) {
		return;
	}
	$nc($cast(FullScreenHandler, value))->removeListener(listener);
}

FullScreenHandler* FullScreenHandler::getHandlerFor($RootPaneContainer* window) {
	$init(FullScreenHandler);
	$useLocalObjectStack();
	$var($Object, value, $$nc($nc(window)->getRootPane())->getClientProperty(FullScreenHandler::CLIENT_PROPERTY));
	if ($instanceOf(FullScreenHandler, value)) {
		return $cast(FullScreenHandler, value);
	}
	return nullptr;
}

void FullScreenHandler::handleFullScreenEventFromNative($Window* window, int32_t type) {
	$init(FullScreenHandler);
	if (!($instanceOf($RootPaneContainer, window))) {
		return;
	}
	$SunToolkit::executeOnEventHandlerThread(window, $$new($FullScreenHandler$1, window, type));
}

void FullScreenHandler::init$() {
	$set(this, listeners, $new($LinkedList));
}

void FullScreenHandler::addListener($FullScreenListener* listener) {
	this->listeners->add(listener);
}

void FullScreenHandler::removeListener($FullScreenListener* listener) {
	this->listeners->remove(listener);
}

void FullScreenHandler::notifyListener($FullScreenEvent* e, int32_t op) {
	$useLocalObjectStack();
	$var($Iterator, i$, this->listeners->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($FullScreenListener, listener, $cast($FullScreenListener, i$->next()));
		{
			switch (op) {
			case FullScreenHandler::FULLSCREEN_WILL_ENTER:
				$nc(listener)->windowEnteringFullScreen(e);
				return;
			case FullScreenHandler::FULLSCREEN_DID_ENTER:
				$nc(listener)->windowEnteredFullScreen(e);
				return;
			case FullScreenHandler::FULLSCREEN_WILL_EXIT:
				$nc(listener)->windowExitingFullScreen(e);
				return;
			case FullScreenHandler::FULLSCREEN_DID_EXIT:
				$nc(listener)->windowExitedFullScreen(e);
				return;
			}
		}
	}
}

FullScreenHandler::FullScreenHandler() {
}

void FullScreenHandler::clinit$($Class* clazz) {
	$assignStatic(FullScreenHandler::CLIENT_PROPERTY, "com.apple.eawt.event.internalFullScreenHandler"_s);
}

$Class* FullScreenHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CLIENT_PROPERTY", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FullScreenHandler, CLIENT_PROPERTY)},
		{"FULLSCREEN_WILL_ENTER", "I", nullptr, $STATIC | $FINAL, $constField(FullScreenHandler, FULLSCREEN_WILL_ENTER)},
		{"FULLSCREEN_DID_ENTER", "I", nullptr, $STATIC | $FINAL, $constField(FullScreenHandler, FULLSCREEN_DID_ENTER)},
		{"FULLSCREEN_WILL_EXIT", "I", nullptr, $STATIC | $FINAL, $constField(FullScreenHandler, FULLSCREEN_WILL_EXIT)},
		{"FULLSCREEN_DID_EXIT", "I", nullptr, $STATIC | $FINAL, $constField(FullScreenHandler, FULLSCREEN_DID_EXIT)},
		{"listeners", "Ljava/util/List;", "Ljava/util/List<Lcom/apple/eawt/FullScreenListener;>;", $FINAL, $field(FullScreenHandler, listeners)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(FullScreenHandler, init$, void)},
		{"addFullScreenListenerTo", "(Ljavax/swing/RootPaneContainer;Lcom/apple/eawt/FullScreenListener;)V", nullptr, $STATIC, $staticMethod(FullScreenHandler, addFullScreenListenerTo, void, $RootPaneContainer*, $FullScreenListener*)},
		{"addListener", "(Lcom/apple/eawt/FullScreenListener;)V", nullptr, 0, $method(FullScreenHandler, addListener, void, $FullScreenListener*)},
		{"getHandlerFor", "(Ljavax/swing/RootPaneContainer;)Lcom/apple/eawt/FullScreenHandler;", nullptr, $STATIC, $staticMethod(FullScreenHandler, getHandlerFor, FullScreenHandler*, $RootPaneContainer*)},
		{"handleFullScreenEventFromNative", "(Ljava/awt/Window;I)V", nullptr, $STATIC, $staticMethod(FullScreenHandler, handleFullScreenEventFromNative, void, $Window*, int32_t)},
		{"notifyListener", "(Lcom/apple/eawt/event/FullScreenEvent;I)V", nullptr, 0, $method(FullScreenHandler, notifyListener, void, $FullScreenEvent*, int32_t)},
		{"removeFullScreenListenerFrom", "(Ljavax/swing/RootPaneContainer;Lcom/apple/eawt/FullScreenListener;)V", nullptr, $STATIC, $staticMethod(FullScreenHandler, removeFullScreenListenerFrom, void, $RootPaneContainer*, $FullScreenListener*)},
		{"removeListener", "(Lcom/apple/eawt/FullScreenListener;)V", nullptr, 0, $method(FullScreenHandler, removeListener, void, $FullScreenListener*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.eawt.FullScreenHandler$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.apple.eawt.FullScreenHandler",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.apple.eawt.FullScreenHandler$1"
	};
	$loadClass(FullScreenHandler, name, initialize, &classInfo$$, FullScreenHandler::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FullScreenHandler);
	});
	return class$;
}

$Class* FullScreenHandler::class$ = nullptr;

		} // eawt
	} // apple
} // com
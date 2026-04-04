#include <com/apple/eawt/event/GestureUtilities.h>
#include <com/apple/eawt/event/GestureHandler.h>
#include <com/apple/eawt/event/GestureListener.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $GestureHandler = ::com::apple::eawt::event::GestureHandler;
using $GestureListener = ::com::apple::eawt::event::GestureListener;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace eawt {
			namespace event {

void GestureUtilities::init$() {
}

void GestureUtilities::addGestureListenerTo($JComponent* component, $GestureListener* listener) {
	if (component == nullptr || listener == nullptr) {
		$throwNew($NullPointerException);
	}
	$GestureHandler::addGestureListenerTo(component, listener);
}

void GestureUtilities::removeGestureListenerFrom($JComponent* component, $GestureListener* listener) {
	if (component == nullptr || listener == nullptr) {
		$throwNew($NullPointerException);
	}
	$GestureHandler::removeGestureListenerFrom(component, listener);
}

GestureUtilities::GestureUtilities() {
}

$Class* GestureUtilities::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(GestureUtilities, init$, void)},
		{"addGestureListenerTo", "(Ljavax/swing/JComponent;Lcom/apple/eawt/event/GestureListener;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GestureUtilities, addGestureListenerTo, void, $JComponent*, $GestureListener*)},
		{"removeGestureListenerFrom", "(Ljavax/swing/JComponent;Lcom/apple/eawt/event/GestureListener;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GestureUtilities, removeGestureListenerFrom, void, $JComponent*, $GestureListener*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.apple.eawt.event.GestureUtilities",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(GestureUtilities, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GestureUtilities);
	});
	return class$;
}

$Class* GestureUtilities::class$ = nullptr;

			} // event
		} // eawt
	} // apple
} // com
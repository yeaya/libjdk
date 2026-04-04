#include <com/sun/java/swing/plaf/windows/WindowsSliderUI$WindowsTrackListener.h>
#include <com/sun/java/swing/plaf/windows/WindowsSliderUI.h>
#include <java/awt/Component.h>
#include <java/awt/Rectangle.h>
#include <java/awt/event/MouseAdapter.h>
#include <java/awt/event/MouseEvent.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>
#include <jcpp.h>

using $WindowsSliderUI = ::com::sun::java::swing::plaf::windows::WindowsSliderUI;
using $MouseEvent = ::java::awt::event::MouseEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicSliderUI$TrackListener = ::javax::swing::plaf::basic::BasicSliderUI$TrackListener;

namespace com {
	namespace sun {
		namespace java {
			namespace swing {
				namespace plaf {
					namespace windows {

void WindowsSliderUI$WindowsTrackListener::init$($WindowsSliderUI* this$0) {
	$set(this, this$0, this$0);
	$BasicSliderUI$TrackListener::init$(this$0);
}

void WindowsSliderUI$WindowsTrackListener::mouseMoved($MouseEvent* e) {
	int32_t var$0 = $nc(e)->getX();
	updateRollover($$nc($WindowsSliderUI::access$000(this->this$0))->contains(var$0, e->getY()));
	$BasicSliderUI$TrackListener::mouseMoved(e);
}

void WindowsSliderUI$WindowsTrackListener::mouseEntered($MouseEvent* e) {
	int32_t var$0 = $nc(e)->getX();
	updateRollover($$nc($WindowsSliderUI::access$100(this->this$0))->contains(var$0, e->getY()));
	$BasicSliderUI$TrackListener::mouseEntered(e);
}

void WindowsSliderUI$WindowsTrackListener::mouseExited($MouseEvent* e) {
	updateRollover(false);
	$BasicSliderUI$TrackListener::mouseExited(e);
}

void WindowsSliderUI$WindowsTrackListener::mousePressed($MouseEvent* e) {
	int32_t var$0 = $nc(e)->getX();
	updatePressed($$nc($WindowsSliderUI::access$200(this->this$0))->contains(var$0, e->getY()));
	$BasicSliderUI$TrackListener::mousePressed(e);
}

void WindowsSliderUI$WindowsTrackListener::mouseReleased($MouseEvent* e) {
	updatePressed(false);
	$BasicSliderUI$TrackListener::mouseReleased(e);
}

void WindowsSliderUI$WindowsTrackListener::updatePressed(bool newPressed) {
	$useLocalObjectStack();
	if (!$$nc($WindowsSliderUI::access$300(this->this$0))->isEnabled()) {
		return;
	}
	if (this->this$0->pressed != newPressed) {
		this->this$0->pressed = newPressed;
		$$nc($WindowsSliderUI::access$500(this->this$0))->repaint($($WindowsSliderUI::access$400(this->this$0)));
	}
}

void WindowsSliderUI$WindowsTrackListener::updateRollover(bool newRollover) {
	$useLocalObjectStack();
	if (!$$nc($WindowsSliderUI::access$600(this->this$0))->isEnabled()) {
		return;
	}
	if (this->this$0->rollover != newRollover) {
		this->this$0->rollover = newRollover;
		$$nc($WindowsSliderUI::access$800(this->this$0))->repaint($($WindowsSliderUI::access$700(this->this$0)));
	}
}

WindowsSliderUI$WindowsTrackListener::WindowsSliderUI$WindowsTrackListener() {
}

$Class* WindowsSliderUI$WindowsTrackListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/java/swing/plaf/windows/WindowsSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(WindowsSliderUI$WindowsTrackListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/java/swing/plaf/windows/WindowsSliderUI;)V", nullptr, $PRIVATE, $method(WindowsSliderUI$WindowsTrackListener, init$, void, $WindowsSliderUI*)},
		{"mouseEntered", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsSliderUI$WindowsTrackListener, mouseEntered, void, $MouseEvent*)},
		{"mouseExited", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsSliderUI$WindowsTrackListener, mouseExited, void, $MouseEvent*)},
		{"mouseMoved", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsSliderUI$WindowsTrackListener, mouseMoved, void, $MouseEvent*)},
		{"mousePressed", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsSliderUI$WindowsTrackListener, mousePressed, void, $MouseEvent*)},
		{"mouseReleased", "(Ljava/awt/event/MouseEvent;)V", nullptr, $PUBLIC, $virtualMethod(WindowsSliderUI$WindowsTrackListener, mouseReleased, void, $MouseEvent*)},
		{"updatePressed", "(Z)V", nullptr, $PUBLIC, $virtualMethod(WindowsSliderUI$WindowsTrackListener, updatePressed, void, bool)},
		{"updateRollover", "(Z)V", nullptr, $PUBLIC, $virtualMethod(WindowsSliderUI$WindowsTrackListener, updateRollover, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.java.swing.plaf.windows.WindowsSliderUI$WindowsTrackListener", "com.sun.java.swing.plaf.windows.WindowsSliderUI", "WindowsTrackListener", $PRIVATE},
		{"javax.swing.plaf.basic.BasicSliderUI$TrackListener", "javax.swing.plaf.basic.BasicSliderUI", "TrackListener", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.java.swing.plaf.windows.WindowsSliderUI$WindowsTrackListener",
		"javax.swing.plaf.basic.BasicSliderUI$TrackListener",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.java.swing.plaf.windows.WindowsSliderUI"
	};
	$loadClass(WindowsSliderUI$WindowsTrackListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WindowsSliderUI$WindowsTrackListener));
	});
	return class$;
}

$Class* WindowsSliderUI$WindowsTrackListener::class$ = nullptr;

					} // windows
				} // plaf
			} // swing
		} // java
	} // sun
} // com
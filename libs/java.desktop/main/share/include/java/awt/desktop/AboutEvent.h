#ifndef _java_awt_desktop_AboutEvent_h_
#define _java_awt_desktop_AboutEvent_h_
//$ class java.awt.desktop.AboutEvent
//$ extends java.awt.desktop.AppEvent

#include <java/awt/desktop/AppEvent.h>

namespace java {
	namespace awt {
		namespace desktop {

class $import AboutEvent : public ::java::awt::desktop::AppEvent {
	$class(AboutEvent, $NO_CLASS_INIT, ::java::awt::desktop::AppEvent)
public:
	AboutEvent();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xace942d7d804fc83;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_AboutEvent_h_
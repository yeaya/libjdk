#ifndef _java_awt_desktop_PreferencesEvent_h_
#define _java_awt_desktop_PreferencesEvent_h_
//$ class java.awt.desktop.PreferencesEvent
//$ extends java.awt.desktop.AppEvent

#include <java/awt/desktop/AppEvent.h>

namespace java {
	namespace awt {
		namespace desktop {

class $export PreferencesEvent : public ::java::awt::desktop::AppEvent {
	$class(PreferencesEvent, $NO_CLASS_INIT, ::java::awt::desktop::AppEvent)
public:
	PreferencesEvent();
	void init$();
	static const int64_t serialVersionUID = (int64_t)0xa73394bf18de0080;
};

		} // desktop
	} // awt
} // java

#endif // _java_awt_desktop_PreferencesEvent_h_
#ifndef _java_awt_datatransfer_FlavorEvent_h_
#define _java_awt_datatransfer_FlavorEvent_h_
//$ class java.awt.datatransfer.FlavorEvent
//$ extends java.util.EventObject

#include <java/util/EventObject.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Clipboard;
		}
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class $import FlavorEvent : public ::java::util::EventObject {
	$class(FlavorEvent, $NO_CLASS_INIT, ::java::util::EventObject)
public:
	FlavorEvent();
	void init$(::java::awt::datatransfer::Clipboard* source);
	static const int64_t serialVersionUID = (int64_t)0xAEEAAFF2174595AC;
};

		} // datatransfer
	} // awt
} // java

#endif // _java_awt_datatransfer_FlavorEvent_h_
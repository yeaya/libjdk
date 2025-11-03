#ifndef _java_awt_datatransfer_FlavorListener_h_
#define _java_awt_datatransfer_FlavorListener_h_
//$ interface java.awt.datatransfer.FlavorListener
//$ extends java.util.EventListener

#include <java/util/EventListener.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class FlavorEvent;
		}
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class $import FlavorListener : public ::java::util::EventListener {
	$interface(FlavorListener, $NO_CLASS_INIT, ::java::util::EventListener)
public:
	virtual void flavorsChanged(::java::awt::datatransfer::FlavorEvent* e) {}
};

		} // datatransfer
	} // awt
} // java

#endif // _java_awt_datatransfer_FlavorListener_h_
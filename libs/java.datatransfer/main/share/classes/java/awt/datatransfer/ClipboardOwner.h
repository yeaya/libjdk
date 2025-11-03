#ifndef _java_awt_datatransfer_ClipboardOwner_h_
#define _java_awt_datatransfer_ClipboardOwner_h_
//$ interface java.awt.datatransfer.ClipboardOwner
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class Clipboard;
			class Transferable;
		}
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class $export ClipboardOwner : public ::java::lang::Object {
	$interface(ClipboardOwner, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void lostOwnership(::java::awt::datatransfer::Clipboard* clipboard, ::java::awt::datatransfer::Transferable* contents) {}
};

		} // datatransfer
	} // awt
} // java

#endif // _java_awt_datatransfer_ClipboardOwner_h_
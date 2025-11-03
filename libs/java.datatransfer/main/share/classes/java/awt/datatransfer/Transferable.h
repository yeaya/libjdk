#ifndef _java_awt_datatransfer_Transferable_h_
#define _java_awt_datatransfer_Transferable_h_
//$ interface java.awt.datatransfer.Transferable
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class DataFlavor;
		}
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class $export Transferable : public ::java::lang::Object {
	$interface(Transferable, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* flavor) {return nullptr;}
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() {return nullptr;}
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* flavor) {return false;}
};

		} // datatransfer
	} // awt
} // java

#endif // _java_awt_datatransfer_Transferable_h_
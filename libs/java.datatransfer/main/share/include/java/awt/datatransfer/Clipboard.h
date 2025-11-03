#ifndef _java_awt_datatransfer_Clipboard_h_
#define _java_awt_datatransfer_Clipboard_h_
//$ class java.awt.datatransfer.Clipboard
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace awt {
		namespace datatransfer {
			class ClipboardOwner;
			class DataFlavor;
			class FlavorListener;
			class Transferable;
		}
	}
}
namespace java {
	namespace util {
		class Set;
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class $import Clipboard : public ::java::lang::Object {
	$class(Clipboard, $NO_CLASS_INIT, ::java::lang::Object)
public:
	Clipboard();
	void init$($String* name);
	virtual void addFlavorListener(::java::awt::datatransfer::FlavorListener* listener);
	void fireFlavorsChanged();
	::java::util::Set* getAvailableDataFlavorSet();
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getAvailableDataFlavors();
	virtual ::java::awt::datatransfer::Transferable* getContents(Object$* requestor);
	virtual $Object* getData(::java::awt::datatransfer::DataFlavor* flavor);
	virtual $Array<::java::awt::datatransfer::FlavorListener>* getFlavorListeners();
	virtual $String* getName();
	virtual bool isDataFlavorAvailable(::java::awt::datatransfer::DataFlavor* flavor);
	void lambda$fireFlavorsChanged$1(::java::awt::datatransfer::FlavorListener* listener);
	void lambda$fireFlavorsChanged$2(::java::awt::datatransfer::FlavorListener* listener);
	void lambda$setContents$0(::java::awt::datatransfer::ClipboardOwner* oldOwner, ::java::awt::datatransfer::Transferable* oldContents);
	virtual void removeFlavorListener(::java::awt::datatransfer::FlavorListener* listener);
	virtual void setContents(::java::awt::datatransfer::Transferable* contents, ::java::awt::datatransfer::ClipboardOwner* owner);
	$String* name = nullptr;
	::java::awt::datatransfer::ClipboardOwner* owner = nullptr;
	::java::awt::datatransfer::Transferable* contents = nullptr;
	::java::util::Set* flavorListeners = nullptr;
	::java::util::Set* currentDataFlavors = nullptr;
};

		} // datatransfer
	} // awt
} // java

#endif // _java_awt_datatransfer_Clipboard_h_
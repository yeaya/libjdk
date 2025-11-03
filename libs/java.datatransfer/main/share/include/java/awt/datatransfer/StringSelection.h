#ifndef _java_awt_datatransfer_StringSelection_h_
#define _java_awt_datatransfer_StringSelection_h_
//$ class java.awt.datatransfer.StringSelection
//$ extends java.awt.datatransfer.Transferable
//$ implements java.awt.datatransfer.ClipboardOwner

#include <java/awt/datatransfer/ClipboardOwner.h>
#include <java/awt/datatransfer/Transferable.h>
#include <java/lang/Array.h>

#pragma push_macro("PLAIN_TEXT")
#undef PLAIN_TEXT
#pragma push_macro("STRING")
#undef STRING

namespace java {
	namespace awt {
		namespace datatransfer {
			class Clipboard;
			class DataFlavor;
		}
	}
}

namespace java {
	namespace awt {
		namespace datatransfer {

class $import StringSelection : public ::java::awt::datatransfer::Transferable, public ::java::awt::datatransfer::ClipboardOwner {
	$class(StringSelection, 0, ::java::awt::datatransfer::Transferable, ::java::awt::datatransfer::ClipboardOwner)
public:
	StringSelection();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* data);
	virtual $Object* getTransferData(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual $Array<::java::awt::datatransfer::DataFlavor>* getTransferDataFlavors() override;
	virtual bool isDataFlavorSupported(::java::awt::datatransfer::DataFlavor* flavor) override;
	virtual void lostOwnership(::java::awt::datatransfer::Clipboard* clipboard, ::java::awt::datatransfer::Transferable* contents) override;
	virtual $String* toString() override;
	static const int32_t STRING = 0;
	static const int32_t PLAIN_TEXT = 1;
	static $Array<::java::awt::datatransfer::DataFlavor>* flavors;
	$String* data = nullptr;
};

		} // datatransfer
	} // awt
} // java

#pragma pop_macro("PLAIN_TEXT")
#pragma pop_macro("STRING")

#endif // _java_awt_datatransfer_StringSelection_h_
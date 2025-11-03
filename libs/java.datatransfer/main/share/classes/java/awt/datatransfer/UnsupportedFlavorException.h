#ifndef _java_awt_datatransfer_UnsupportedFlavorException_h_
#define _java_awt_datatransfer_UnsupportedFlavorException_h_
//$ class java.awt.datatransfer.UnsupportedFlavorException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

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

class $export UnsupportedFlavorException : public ::java::lang::Exception {
	$class(UnsupportedFlavorException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	UnsupportedFlavorException();
	void init$(::java::awt::datatransfer::DataFlavor* flavor);
	static const int64_t serialVersionUID = (int64_t)0x4AB7272AC88F5CC1;
	UnsupportedFlavorException(const UnsupportedFlavorException& e);
	virtual void throw$() override;
	inline UnsupportedFlavorException* operator ->() {
		return (UnsupportedFlavorException*)throwing$;
	}
};

		} // datatransfer
	} // awt
} // java

#endif // _java_awt_datatransfer_UnsupportedFlavorException_h_
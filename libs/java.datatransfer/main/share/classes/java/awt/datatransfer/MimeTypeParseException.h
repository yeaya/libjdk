#ifndef _java_awt_datatransfer_MimeTypeParseException_h_
#define _java_awt_datatransfer_MimeTypeParseException_h_
//$ class java.awt.datatransfer.MimeTypeParseException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace awt {
		namespace datatransfer {

class $export MimeTypeParseException : public ::java::lang::Exception {
	$class(MimeTypeParseException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	MimeTypeParseException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xB23924D4D91E2FCB;
	MimeTypeParseException(const MimeTypeParseException& e);
	virtual void throw$() override;
	inline MimeTypeParseException* operator ->() {
		return (MimeTypeParseException*)throwing$;
	}
};

		} // datatransfer
	} // awt
} // java

#endif // _java_awt_datatransfer_MimeTypeParseException_h_
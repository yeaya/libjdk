#ifndef _java_awt_FontFormatException_h_
#define _java_awt_FontFormatException_h_
//$ class java.awt.FontFormatException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace awt {

class $export FontFormatException : public ::java::lang::Exception {
	$class(FontFormatException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	FontFormatException();
	void init$($String* reason);
	static const int64_t serialVersionUID = (int64_t)0xc1cf425a7c3efe08;
	FontFormatException(const FontFormatException& e);
	virtual void throw$() override;
	inline FontFormatException* operator ->() const {
		return (FontFormatException*)throwing$;
	}
	inline operator FontFormatException*() const {
		return (FontFormatException*)throwing$;
	}
};

	} // awt
} // java

#endif // _java_awt_FontFormatException_h_
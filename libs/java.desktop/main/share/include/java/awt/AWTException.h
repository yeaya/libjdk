#ifndef _java_awt_AWTException_h_
#define _java_awt_AWTException_h_
//$ class java.awt.AWTException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace java {
	namespace awt {

class $import AWTException : public ::java::lang::Exception {
	$class(AWTException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	AWTException();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xe5a05f535a20d519;
	AWTException(const AWTException& e);
	virtual void throw$() override;
	inline AWTException* operator ->() const {
		return (AWTException*)throwing$;
	}
	inline operator AWTException*() const {
		return (AWTException*)throwing$;
	}
};

	} // awt
} // java

#endif // _java_awt_AWTException_h_
#ifndef _java_awt_AWTError_h_
#define _java_awt_AWTError_h_
//$ class java.awt.AWTError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace awt {

class $import AWTError : public ::java::lang::Error {
	$class(AWTError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	AWTError();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xe6be9b620904e302;
	AWTError(const AWTError& e);
	virtual void throw$() override;
	inline AWTError* operator ->() const {
		return (AWTError*)throwing$;
	}
	inline operator AWTError*() const {
		return (AWTError*)throwing$;
	}
};

	} // awt
} // java

#endif // _java_awt_AWTError_h_
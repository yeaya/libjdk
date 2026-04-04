#ifndef _java_awt_dnd_InvalidDnDOperationException_h_
#define _java_awt_dnd_InvalidDnDOperationException_h_
//$ class java.awt.dnd.InvalidDnDOperationException
//$ extends java.lang.IllegalStateException

#include <java/lang/IllegalStateException.h>

namespace java {
	namespace awt {
		namespace dnd {

class $import InvalidDnDOperationException : public ::java::lang::IllegalStateException {
	$class(InvalidDnDOperationException, 0, ::java::lang::IllegalStateException)
public:
	InvalidDnDOperationException();
	static void clinit$(::java::lang::Class* clazz);
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xabdd6dd9cabf42ba;
	static $String* dft_msg;
	InvalidDnDOperationException(const InvalidDnDOperationException& e);
	virtual void throw$() override;
	inline InvalidDnDOperationException* operator ->() const {
		return (InvalidDnDOperationException*)throwing$;
	}
	inline operator InvalidDnDOperationException*() const {
		return (InvalidDnDOperationException*)throwing$;
	}
};

		} // dnd
	} // awt
} // java

#endif // _java_awt_dnd_InvalidDnDOperationException_h_
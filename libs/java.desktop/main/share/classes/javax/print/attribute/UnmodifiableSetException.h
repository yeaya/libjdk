#ifndef _javax_print_attribute_UnmodifiableSetException_h_
#define _javax_print_attribute_UnmodifiableSetException_h_
//$ class javax.print.attribute.UnmodifiableSetException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace javax {
	namespace print {
		namespace attribute {

class $export UnmodifiableSetException : public ::java::lang::RuntimeException {
	$class(UnmodifiableSetException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	UnmodifiableSetException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x1f4c4234f1febbb3;
	UnmodifiableSetException(const UnmodifiableSetException& e);
	virtual void throw$() override;
	inline UnmodifiableSetException* operator ->() const {
		return (UnmodifiableSetException*)throwing$;
	}
	inline operator UnmodifiableSetException*() const {
		return (UnmodifiableSetException*)throwing$;
	}
};

		} // attribute
	} // print
} // javax

#endif // _javax_print_attribute_UnmodifiableSetException_h_
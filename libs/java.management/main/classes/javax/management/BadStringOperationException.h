#ifndef _javax_management_BadStringOperationException_h_
#define _javax_management_BadStringOperationException_h_
//$ class javax.management.BadStringOperationException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace management {

class $export BadStringOperationException : public ::java::lang::Exception {
	$class(BadStringOperationException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	BadStringOperationException();
	void init$($String* message);
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x6c46fcb0436d9694;
	$String* op = nullptr;
	BadStringOperationException(const BadStringOperationException& e);
	virtual void throw$() override;
	inline BadStringOperationException* operator ->() const {
		return (BadStringOperationException*)throwing$;
	}
	inline operator BadStringOperationException*() const {
		return (BadStringOperationException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_BadStringOperationException_h_
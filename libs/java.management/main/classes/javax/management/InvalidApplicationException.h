#ifndef _javax_management_InvalidApplicationException_h_
#define _javax_management_InvalidApplicationException_h_
//$ class javax.management.InvalidApplicationException
//$ extends java.lang.Exception

#include <java/lang/Exception.h>

namespace javax {
	namespace management {

class $export InvalidApplicationException : public ::java::lang::Exception {
	$class(InvalidApplicationException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	InvalidApplicationException();
	void init$(Object$* val);
	static const int64_t serialVersionUID = (int64_t)0xd5b33fe3ea7c8a8b;
	$Object* val = nullptr;
	InvalidApplicationException(const InvalidApplicationException& e);
	virtual void throw$() override;
	inline InvalidApplicationException* operator ->() const {
		return (InvalidApplicationException*)throwing$;
	}
	inline operator InvalidApplicationException*() const {
		return (InvalidApplicationException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_InvalidApplicationException_h_
#ifndef _javax_management_openmbean_InvalidKeyException_h_
#define _javax_management_openmbean_InvalidKeyException_h_
//$ class javax.management.openmbean.InvalidKeyException
//$ extends java.lang.IllegalArgumentException

#include <java/lang/IllegalArgumentException.h>

namespace javax {
	namespace management {
		namespace openmbean {

class $import InvalidKeyException : public ::java::lang::IllegalArgumentException {
	$class(InvalidKeyException, $NO_CLASS_INIT, ::java::lang::IllegalArgumentException)
public:
	InvalidKeyException();
	void init$();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x3a9f9ead99f5188e;
	InvalidKeyException(const InvalidKeyException& e);
	virtual void throw$() override;
	inline InvalidKeyException* operator ->() const {
		return (InvalidKeyException*)throwing$;
	}
	inline operator InvalidKeyException*() const {
		return (InvalidKeyException*)throwing$;
	}
};

		} // openmbean
	} // management
} // javax

#endif // _javax_management_openmbean_InvalidKeyException_h_
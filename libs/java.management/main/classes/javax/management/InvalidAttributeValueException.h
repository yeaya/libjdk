#ifndef _javax_management_InvalidAttributeValueException_h_
#define _javax_management_InvalidAttributeValueException_h_
//$ class javax.management.InvalidAttributeValueException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $export InvalidAttributeValueException : public ::javax::management::OperationsException {
	$class(InvalidAttributeValueException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	InvalidAttributeValueException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x1e0a1aa7e57f7bb1;
	InvalidAttributeValueException(const InvalidAttributeValueException& e);
	virtual void throw$() override;
	inline InvalidAttributeValueException* operator ->() const {
		return (InvalidAttributeValueException*)throwing$;
	}
	inline operator InvalidAttributeValueException*() const {
		return (InvalidAttributeValueException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_InvalidAttributeValueException_h_
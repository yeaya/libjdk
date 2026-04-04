#ifndef _javax_management_InstanceAlreadyExistsException_h_
#define _javax_management_InstanceAlreadyExistsException_h_
//$ class javax.management.InstanceAlreadyExistsException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $import InstanceAlreadyExistsException : public ::javax::management::OperationsException {
	$class(InstanceAlreadyExistsException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	InstanceAlreadyExistsException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x7b6cecfb762166eb;
	InstanceAlreadyExistsException(const InstanceAlreadyExistsException& e);
	virtual void throw$() override;
	inline InstanceAlreadyExistsException* operator ->() const {
		return (InstanceAlreadyExistsException*)throwing$;
	}
	inline operator InstanceAlreadyExistsException*() const {
		return (InstanceAlreadyExistsException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_InstanceAlreadyExistsException_h_
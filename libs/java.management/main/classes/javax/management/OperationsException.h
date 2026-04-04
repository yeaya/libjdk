#ifndef _javax_management_OperationsException_h_
#define _javax_management_OperationsException_h_
//$ class javax.management.OperationsException
//$ extends javax.management.JMException

#include <javax/management/JMException.h>

namespace javax {
	namespace management {

class $export OperationsException : public ::javax::management::JMException {
	$class(OperationsException, $NO_CLASS_INIT, ::javax::management::JMException)
public:
	OperationsException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xbb0f8c4e68566a68;
	OperationsException(const OperationsException& e);
	virtual void throw$() override;
	inline OperationsException* operator ->() const {
		return (OperationsException*)throwing$;
	}
	inline operator OperationsException*() const {
		return (OperationsException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_OperationsException_h_
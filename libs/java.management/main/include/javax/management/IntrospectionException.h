#ifndef _javax_management_IntrospectionException_h_
#define _javax_management_IntrospectionException_h_
//$ class javax.management.IntrospectionException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $import IntrospectionException : public ::javax::management::OperationsException {
	$class(IntrospectionException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	IntrospectionException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x0ea26590ec7dd07d;
	IntrospectionException(const IntrospectionException& e);
	virtual void throw$() override;
	inline IntrospectionException* operator ->() const {
		return (IntrospectionException*)throwing$;
	}
	inline operator IntrospectionException*() const {
		return (IntrospectionException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_IntrospectionException_h_
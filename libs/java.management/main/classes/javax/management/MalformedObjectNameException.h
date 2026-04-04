#ifndef _javax_management_MalformedObjectNameException_h_
#define _javax_management_MalformedObjectNameException_h_
//$ class javax.management.MalformedObjectNameException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $export MalformedObjectNameException : public ::javax::management::OperationsException {
	$class(MalformedObjectNameException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	MalformedObjectNameException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xf80d65bd2c1c3010;
	MalformedObjectNameException(const MalformedObjectNameException& e);
	virtual void throw$() override;
	inline MalformedObjectNameException* operator ->() const {
		return (MalformedObjectNameException*)throwing$;
	}
	inline operator MalformedObjectNameException*() const {
		return (MalformedObjectNameException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_MalformedObjectNameException_h_
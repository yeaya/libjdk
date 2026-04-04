#ifndef _javax_management_InstanceNotFoundException_h_
#define _javax_management_InstanceNotFoundException_h_
//$ class javax.management.InstanceNotFoundException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $export InstanceNotFoundException : public ::javax::management::OperationsException {
	$class(InstanceNotFoundException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	InstanceNotFoundException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xf3c072ad486a71c7;
	InstanceNotFoundException(const InstanceNotFoundException& e);
	virtual void throw$() override;
	inline InstanceNotFoundException* operator ->() const {
		return (InstanceNotFoundException*)throwing$;
	}
	inline operator InstanceNotFoundException*() const {
		return (InstanceNotFoundException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_InstanceNotFoundException_h_
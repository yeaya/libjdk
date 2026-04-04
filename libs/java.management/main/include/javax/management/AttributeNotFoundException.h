#ifndef _javax_management_AttributeNotFoundException_h_
#define _javax_management_AttributeNotFoundException_h_
//$ class javax.management.AttributeNotFoundException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $import AttributeNotFoundException : public ::javax::management::OperationsException {
	$class(AttributeNotFoundException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	AttributeNotFoundException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x5a5dcb5e38fd7f6e;
	AttributeNotFoundException(const AttributeNotFoundException& e);
	virtual void throw$() override;
	inline AttributeNotFoundException* operator ->() const {
		return (AttributeNotFoundException*)throwing$;
	}
	inline operator AttributeNotFoundException*() const {
		return (AttributeNotFoundException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_AttributeNotFoundException_h_
#ifndef _javax_management_relation_InvalidRoleValueException_h_
#define _javax_management_relation_InvalidRoleValueException_h_
//$ class javax.management.relation.InvalidRoleValueException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $export InvalidRoleValueException : public ::javax::management::relation::RelationException {
	$class(InvalidRoleValueException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	InvalidRoleValueException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0xe353c480a0b2fa17;
	InvalidRoleValueException(const InvalidRoleValueException& e);
	virtual void throw$() override;
	inline InvalidRoleValueException* operator ->() const {
		return (InvalidRoleValueException*)throwing$;
	}
	inline operator InvalidRoleValueException*() const {
		return (InvalidRoleValueException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_InvalidRoleValueException_h_
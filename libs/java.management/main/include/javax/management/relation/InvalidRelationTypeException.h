#ifndef _javax_management_relation_InvalidRelationTypeException_h_
#define _javax_management_relation_InvalidRelationTypeException_h_
//$ class javax.management.relation.InvalidRelationTypeException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $import InvalidRelationTypeException : public ::javax::management::relation::RelationException {
	$class(InvalidRelationTypeException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	InvalidRelationTypeException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x29bc98c190a018a9;
	InvalidRelationTypeException(const InvalidRelationTypeException& e);
	virtual void throw$() override;
	inline InvalidRelationTypeException* operator ->() const {
		return (InvalidRelationTypeException*)throwing$;
	}
	inline operator InvalidRelationTypeException*() const {
		return (InvalidRelationTypeException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_InvalidRelationTypeException_h_
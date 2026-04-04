#ifndef _javax_management_relation_InvalidRelationServiceException_h_
#define _javax_management_relation_InvalidRelationServiceException_h_
//$ class javax.management.relation.InvalidRelationServiceException
//$ extends javax.management.relation.RelationException

#include <javax/management/relation/RelationException.h>

namespace javax {
	namespace management {
		namespace relation {

class $export InvalidRelationServiceException : public ::javax::management::relation::RelationException {
	$class(InvalidRelationServiceException, $NO_CLASS_INIT, ::javax::management::relation::RelationException)
public:
	InvalidRelationServiceException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x2f31cabc4e679067;
	InvalidRelationServiceException(const InvalidRelationServiceException& e);
	virtual void throw$() override;
	inline InvalidRelationServiceException* operator ->() const {
		return (InvalidRelationServiceException*)throwing$;
	}
	inline operator InvalidRelationServiceException*() const {
		return (InvalidRelationServiceException*)throwing$;
	}
};

		} // relation
	} // management
} // javax

#endif // _javax_management_relation_InvalidRelationServiceException_h_
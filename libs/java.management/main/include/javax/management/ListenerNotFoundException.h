#ifndef _javax_management_ListenerNotFoundException_h_
#define _javax_management_ListenerNotFoundException_h_
//$ class javax.management.ListenerNotFoundException
//$ extends javax.management.OperationsException

#include <javax/management/OperationsException.h>

namespace javax {
	namespace management {

class $import ListenerNotFoundException : public ::javax::management::OperationsException {
	$class(ListenerNotFoundException, $NO_CLASS_INIT, ::javax::management::OperationsException)
public:
	ListenerNotFoundException();
	void init$();
	void init$($String* message);
	static const int64_t serialVersionUID = (int64_t)0x9b7d1860a0c7b86b;
	ListenerNotFoundException(const ListenerNotFoundException& e);
	virtual void throw$() override;
	inline ListenerNotFoundException* operator ->() const {
		return (ListenerNotFoundException*)throwing$;
	}
	inline operator ListenerNotFoundException*() const {
		return (ListenerNotFoundException*)throwing$;
	}
};

	} // management
} // javax

#endif // _javax_management_ListenerNotFoundException_h_
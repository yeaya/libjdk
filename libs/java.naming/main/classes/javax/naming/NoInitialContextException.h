#ifndef _javax_naming_NoInitialContextException_h_
#define _javax_naming_NoInitialContextException_h_
//$ class javax.naming.NoInitialContextException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $export NoInitialContextException : public ::javax::naming::NamingException {
	$class(NoInitialContextException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	NoInitialContextException();
	void init$();
	void init$($String* explanation);
	static const int64_t serialVersionUID = (int64_t)0xd09ffbc0d4c9ce81;
	NoInitialContextException(const NoInitialContextException& e);
	virtual void throw$() override;
	inline NoInitialContextException* operator ->() const {
		return (NoInitialContextException*)throwing$;
	}
	inline operator NoInitialContextException*() const {
		return (NoInitialContextException*)throwing$;
	}
};

	} // naming
} // javax

#endif // _javax_naming_NoInitialContextException_h_
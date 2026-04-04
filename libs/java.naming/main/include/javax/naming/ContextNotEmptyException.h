#ifndef _javax_naming_ContextNotEmptyException_h_
#define _javax_naming_ContextNotEmptyException_h_
//$ class javax.naming.ContextNotEmptyException
//$ extends javax.naming.NamingException

#include <javax/naming/NamingException.h>

namespace javax {
	namespace naming {

class $import ContextNotEmptyException : public ::javax::naming::NamingException {
	$class(ContextNotEmptyException, $NO_CLASS_INIT, ::javax::naming::NamingException)
public:
	ContextNotEmptyException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x0f23e1b098d287e5;
	ContextNotEmptyException(const ContextNotEmptyException& e);
	virtual void throw$() override;
	inline ContextNotEmptyException* operator ->() const {
		return (ContextNotEmptyException*)throwing$;
	}
	inline operator ContextNotEmptyException*() const {
		return (ContextNotEmptyException*)throwing$;
	}
};

	} // naming
} // javax

#endif // _javax_naming_ContextNotEmptyException_h_
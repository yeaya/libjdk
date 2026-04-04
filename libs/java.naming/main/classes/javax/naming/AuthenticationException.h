#ifndef _javax_naming_AuthenticationException_h_
#define _javax_naming_AuthenticationException_h_
//$ class javax.naming.AuthenticationException
//$ extends javax.naming.NamingSecurityException

#include <javax/naming/NamingSecurityException.h>

namespace javax {
	namespace naming {

class $export AuthenticationException : public ::javax::naming::NamingSecurityException {
	$class(AuthenticationException, $NO_CLASS_INIT, ::javax::naming::NamingSecurityException)
public:
	AuthenticationException();
	void init$($String* explanation);
	void init$();
	static const int64_t serialVersionUID = (int64_t)0x330ca61885881b20;
	AuthenticationException(const AuthenticationException& e);
	virtual void throw$() override;
	inline AuthenticationException* operator ->() const {
		return (AuthenticationException*)throwing$;
	}
	inline operator AuthenticationException*() const {
		return (AuthenticationException*)throwing$;
	}
};

	} // naming
} // javax

#endif // _javax_naming_AuthenticationException_h_
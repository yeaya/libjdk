#ifndef _javax_security_sasl_AuthenticationException_h_
#define _javax_security_sasl_AuthenticationException_h_
//$ class javax.security.sasl.AuthenticationException
//$ extends javax.security.sasl.SaslException

#include <javax/security/sasl/SaslException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace javax {
	namespace security {
		namespace sasl {

class $export AuthenticationException : public ::javax::security::sasl::SaslException {
	$class(AuthenticationException, $NO_CLASS_INIT, ::javax::security::sasl::SaslException)
public:
	AuthenticationException();
	void init$();
	void init$($String* detail);
	void init$($String* detail, $Throwable* ex);
	static const int64_t serialVersionUID = (int64_t)0xce5251d8228acea1;
	AuthenticationException(const AuthenticationException& e);
	virtual void throw$() override;
	inline AuthenticationException* operator ->() const {
		return (AuthenticationException*)throwing$;
	}
	inline operator AuthenticationException*() const {
		return (AuthenticationException*)throwing$;
	}
};

		} // sasl
	} // security
} // javax

#endif // _javax_security_sasl_AuthenticationException_h_
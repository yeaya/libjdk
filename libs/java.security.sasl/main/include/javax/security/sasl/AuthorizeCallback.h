#ifndef _javax_security_sasl_AuthorizeCallback_h_
#define _javax_security_sasl_AuthorizeCallback_h_
//$ class javax.security.sasl.AuthorizeCallback
//$ extends javax.security.auth.callback.Callback
//$ implements java.io.Serializable

#include <java/io/Serializable.h>
#include <javax/security/auth/callback/Callback.h>

namespace javax {
	namespace security {
		namespace sasl {

class $import AuthorizeCallback : public ::javax::security::auth::callback::Callback, public ::java::io::Serializable {
	$class(AuthorizeCallback, $NO_CLASS_INIT, ::javax::security::auth::callback::Callback, ::java::io::Serializable)
public:
	AuthorizeCallback();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* authnID, $String* authzID);
	virtual $String* getAuthenticationID();
	virtual $String* getAuthorizationID();
	virtual $String* getAuthorizedID();
	virtual bool isAuthorized();
	virtual void setAuthorized(bool ok);
	virtual void setAuthorizedID($String* id);
	virtual $String* toString() override;
	$String* authenticationID = nullptr;
	$String* authorizationID = nullptr;
	$String* authorizedID = nullptr;
	bool authorized = false;
	static const int64_t serialVersionUID = (int64_t)0xdf573dee52013e6b;
};

		} // sasl
	} // security
} // javax

#endif // _javax_security_sasl_AuthorizeCallback_h_
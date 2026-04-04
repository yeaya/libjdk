#ifndef _sun_security_krb5_internal_KrbErrException_h_
#define _sun_security_krb5_internal_KrbErrException_h_
//$ class sun.security.krb5.internal.KrbErrException
//$ extends sun.security.krb5.KrbException

#include <sun/security/krb5/KrbException.h>

namespace sun {
	namespace security {
		namespace krb5 {
			namespace internal {

class $export KrbErrException : public ::sun::security::krb5::KrbException {
	$class(KrbErrException, $NO_CLASS_INIT, ::sun::security::krb5::KrbException)
public:
	KrbErrException();
	void init$(int32_t i);
	void init$(int32_t i, $String* s);
	static const int64_t serialVersionUID = (int64_t)0x1e5820f096f7f57d;
	KrbErrException(const KrbErrException& e);
	virtual void throw$() override;
	inline KrbErrException* operator ->() const {
		return (KrbErrException*)throwing$;
	}
	inline operator KrbErrException*() const {
		return (KrbErrException*)throwing$;
	}
};

			} // internal
		} // krb5
	} // security
} // sun

#endif // _sun_security_krb5_internal_KrbErrException_h_
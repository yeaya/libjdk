#ifndef _com_sun_jndi_ldap_Ber$DecodeException_h_
#define _com_sun_jndi_ldap_Ber$DecodeException_h_
//$ class com.sun.jndi.ldap.Ber$DecodeException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class Ber$DecodeException : public ::java::io::IOException {
	$class(Ber$DecodeException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	Ber$DecodeException();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0x793915d7e3b7fd6f;
	Ber$DecodeException(const Ber$DecodeException& e);
	virtual void throw$() override;
	inline Ber$DecodeException* operator ->() const {
		return (Ber$DecodeException*)throwing$;
	}
	inline operator Ber$DecodeException*() const {
		return (Ber$DecodeException*)throwing$;
	}
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_Ber$DecodeException_h_
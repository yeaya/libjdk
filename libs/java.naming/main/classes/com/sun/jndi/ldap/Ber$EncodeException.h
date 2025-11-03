#ifndef _com_sun_jndi_ldap_Ber$EncodeException_h_
#define _com_sun_jndi_ldap_Ber$EncodeException_h_
//$ class com.sun.jndi.ldap.Ber$EncodeException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

class Ber$EncodeException : public ::java::io::IOException {
	$class(Ber$EncodeException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	Ber$EncodeException();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xB72DA2360DA6F078;
	Ber$EncodeException(const Ber$EncodeException& e);
	virtual void throw$() override;
	inline Ber$EncodeException* operator ->() {
		return (Ber$EncodeException*)throwing$;
	}
};

			} // ldap
		} // jndi
	} // sun
} // com

#endif // _com_sun_jndi_ldap_Ber$EncodeException_h_
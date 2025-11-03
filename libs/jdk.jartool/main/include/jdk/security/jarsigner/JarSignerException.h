#ifndef _jdk_security_jarsigner_JarSignerException_h_
#define _jdk_security_jarsigner_JarSignerException_h_
//$ class jdk.security.jarsigner.JarSignerException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Throwable;
	}
}

namespace jdk {
	namespace security {
		namespace jarsigner {

class $import JarSignerException : public ::java::lang::RuntimeException {
	$class(JarSignerException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	JarSignerException();
	void init$($String* message, $Throwable* cause);
	static const int64_t serialVersionUID = (int64_t)0xBE53C9A45B803AA6;
	JarSignerException(const JarSignerException& e);
	virtual void throw$() override;
	inline JarSignerException* operator ->() {
		return (JarSignerException*)throwing$;
	}
};

		} // jarsigner
	} // security
} // jdk

#endif // _jdk_security_jarsigner_JarSignerException_h_
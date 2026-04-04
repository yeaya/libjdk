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
	static const int64_t serialVersionUID = (int64_t)0xbe53c9a45b803aa6;
	JarSignerException(const JarSignerException& e);
	virtual void throw$() override;
	inline JarSignerException* operator ->() const {
		return (JarSignerException*)throwing$;
	}
	inline operator JarSignerException*() const {
		return (JarSignerException*)throwing$;
	}
};

		} // jarsigner
	} // security
} // jdk

#endif // _jdk_security_jarsigner_JarSignerException_h_
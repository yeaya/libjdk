#ifndef _sun_tools_jar_Validator$InvalidJarException_h_
#define _sun_tools_jar_Validator$InvalidJarException_h_
//$ class sun.tools.jar.Validator$InvalidJarException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace sun {
	namespace tools {
		namespace jar {

class Validator$InvalidJarException : public ::java::lang::RuntimeException {
	$class(Validator$InvalidJarException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	Validator$InvalidJarException();
	void init$($String* msg);
	static const int64_t serialVersionUID = (int64_t)0xcd73d8f03c2dbec2;
	Validator$InvalidJarException(const Validator$InvalidJarException& e);
	virtual void throw$() override;
	inline Validator$InvalidJarException* operator ->() const {
		return (Validator$InvalidJarException*)throwing$;
	}
	inline operator Validator$InvalidJarException*() const {
		return (Validator$InvalidJarException*)throwing$;
	}
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Validator$InvalidJarException_h_
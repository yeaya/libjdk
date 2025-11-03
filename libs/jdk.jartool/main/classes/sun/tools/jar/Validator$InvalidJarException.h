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
	static const int64_t serialVersionUID = (int64_t)0xCD73D8F03C2DBEC2;
	Validator$InvalidJarException(const Validator$InvalidJarException& e);
	virtual void throw$() override;
	inline Validator$InvalidJarException* operator ->() {
		return (Validator$InvalidJarException*)throwing$;
	}
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_Validator$InvalidJarException_h_
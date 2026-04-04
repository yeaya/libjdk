#ifndef _sun_tools_jar_JarException_h_
#define _sun_tools_jar_JarException_h_
//$ class sun.tools.jar.JarException
//$ extends java.io.IOException

#include <java/io/IOException.h>

namespace sun {
	namespace tools {
		namespace jar {

class JarException : public ::java::io::IOException {
	$class(JarException, $NO_CLASS_INIT, ::java::io::IOException)
public:
	JarException();
	void init$();
	void init$($String* s);
	static const int64_t serialVersionUID = (int64_t)0xc39b3aab2fac51d7;
	JarException(const JarException& e);
	virtual void throw$() override;
	inline JarException* operator ->() const {
		return (JarException*)throwing$;
	}
	inline operator JarException*() const {
		return (JarException*)throwing$;
	}
};

		} // jar
	} // tools
} // sun

#endif // _sun_tools_jar_JarException_h_
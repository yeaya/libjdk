#ifndef _com_sun_tools_javac_util_PropagatedException_h_
#define _com_sun_tools_javac_util_PropagatedException_h_
//$ class com.sun.tools.javac.util.PropagatedException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace com {
	namespace sun {
		namespace tools {
			namespace javac {
				namespace util {

class $export PropagatedException : public ::java::lang::RuntimeException {
	$class(PropagatedException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	PropagatedException();
	void init$(::java::lang::RuntimeException* cause);
	virtual ::java::lang::RuntimeException* getCause() override;
	static const int64_t serialVersionUID = (int64_t)0xabd3b14a6f120f39;
	PropagatedException(const PropagatedException& e);
	virtual void throw$() override;
	inline PropagatedException* operator ->() const {
		return (PropagatedException*)throwing$;
	}
	inline operator PropagatedException*() const {
		return (PropagatedException*)throwing$;
	}
};

				} // util
			} // javac
		} // tools
	} // sun
} // com

#endif // _com_sun_tools_javac_util_PropagatedException_h_
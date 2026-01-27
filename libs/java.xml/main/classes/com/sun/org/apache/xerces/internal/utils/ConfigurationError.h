#ifndef _com_sun_org_apache_xerces_internal_utils_ConfigurationError_h_
#define _com_sun_org_apache_xerces_internal_utils_ConfigurationError_h_
//$ class com.sun.org.apache.xerces.internal.utils.ConfigurationError
//$ extends java.lang.Error

#include <java/lang/Error.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace utils {

class ConfigurationError : public ::java::lang::Error {
	$class(ConfigurationError, $NO_CLASS_INIT, ::java::lang::Error)
public:
	ConfigurationError();
	void init$($String* msg, ::java::lang::Exception* x);
	::java::lang::Exception* getException();
	static const int64_t serialVersionUID = (int64_t)0x705A6C30A8815C60;
	::java::lang::Exception* exception = nullptr;
	ConfigurationError(const ConfigurationError& e);
	virtual void throw$() override;
	inline ConfigurationError* operator ->() {
		return (ConfigurationError*)throwing$;
	}
};

						} // utils
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_utils_ConfigurationError_h_
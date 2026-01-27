#ifndef _com_sun_org_apache_xml_internal_serializer_utils_WrappedRuntimeException_h_
#define _com_sun_org_apache_xml_internal_serializer_utils_WrappedRuntimeException_h_
//$ class com.sun.org.apache.xml.internal.serializer.utils.WrappedRuntimeException
//$ extends java.lang.RuntimeException

#include <java/lang/RuntimeException.h>

namespace java {
	namespace lang {
		class Exception;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

class WrappedRuntimeException : public ::java::lang::RuntimeException {
	$class(WrappedRuntimeException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	WrappedRuntimeException();
	void init$(::java::lang::Exception* e);
	void init$($String* msg, ::java::lang::Exception* e);
	::java::lang::Exception* getException();
	static const int64_t serialVersionUID = (int64_t)0x6317D91DE98A8119;
	::java::lang::Exception* m_exception = nullptr;
	WrappedRuntimeException(const WrappedRuntimeException& e);
	virtual void throw$() override;
	inline WrappedRuntimeException* operator ->() {
		return (WrappedRuntimeException*)throwing$;
	}
};

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_serializer_utils_WrappedRuntimeException_h_
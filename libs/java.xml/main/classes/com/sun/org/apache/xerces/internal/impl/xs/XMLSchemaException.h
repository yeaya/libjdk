#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaException_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaException_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaException
//$ extends java.lang.Exception

#include <java/lang/Array.h>
#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

class XMLSchemaException : public ::java::lang::Exception {
	$class(XMLSchemaException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	XMLSchemaException();
	void init$($String* key, $ObjectArray* args);
	virtual $ObjectArray* getArgs();
	virtual $String* getKey();
	static const int64_t serialVersionUID = (int64_t)0x81C104A8F8C48336;
	$String* key = nullptr;
	$ObjectArray* args = nullptr;
	XMLSchemaException(const XMLSchemaException& e);
	virtual void throw$() override;
	inline XMLSchemaException* operator ->() {
		return (XMLSchemaException*)throwing$;
	}
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaException_h_
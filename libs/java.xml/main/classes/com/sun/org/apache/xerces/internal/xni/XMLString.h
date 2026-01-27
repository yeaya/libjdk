#ifndef _com_sun_org_apache_xerces_internal_xni_XMLString_h_
#define _com_sun_org_apache_xerces_internal_xni_XMLString_h_
//$ class com.sun.org.apache.xerces.internal.xni.XMLString
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xni {

class XMLString : public ::java::lang::Object {
	$class(XMLString, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLString();
	using ::java::lang::Object::equals;
	void init$();
	void init$($chars* ch, int32_t offset, int32_t length);
	void init$(::com::sun::org::apache::xerces::internal::xni::XMLString* string);
	virtual void clear();
	virtual bool equals($chars* ch, int32_t offset, int32_t length);
	virtual bool equals($String* s);
	virtual void setValues($chars* ch, int32_t offset, int32_t length);
	virtual void setValues(::com::sun::org::apache::xerces::internal::xni::XMLString* s);
	virtual $String* toString() override;
	$chars* ch = nullptr;
	int32_t offset = 0;
	int32_t length = 0;
};

						} // xni
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_xni_XMLString_h_
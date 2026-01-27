#ifndef _com_sun_org_apache_xerces_internal_util_XMLErrorCode_h_
#define _com_sun_org_apache_xerces_internal_util_XMLErrorCode_h_
//$ class com.sun.org.apache.xerces.internal.util.XMLErrorCode
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {

class XMLErrorCode : public ::java::lang::Object {
	$class(XMLErrorCode, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLErrorCode();
	void init$($String* domain, $String* key);
	virtual bool equals(Object$* obj) override;
	virtual int32_t hashCode() override;
	void setValues($String* domain, $String* key);
	$String* fDomain = nullptr;
	$String* fKey = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_XMLErrorCode_h_
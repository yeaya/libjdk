#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaLoader$LocationArray_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaLoader$LocationArray_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaLoader$LocationArray
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {

class XMLSchemaLoader$LocationArray : public ::java::lang::Object {
	$class(XMLSchemaLoader$LocationArray, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLSchemaLoader$LocationArray();
	void init$();
	virtual void addLocation($String* location);
	virtual $String* getFirstLocation();
	virtual int32_t getLength();
	virtual $StringArray* getLocationArray();
	virtual void resize(int32_t oldLength, int32_t newLength);
	int32_t length = 0;
	$StringArray* locations = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaLoader$LocationArray_h_
#ifndef _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$ShortVector_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$ShortVector_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.XMLSchemaValidator$ShortVector
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

class XMLSchemaValidator$ShortVector : public ::java::lang::Object {
	$class(XMLSchemaValidator$ShortVector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLSchemaValidator$ShortVector();
	void init$();
	void init$(int32_t initialCapacity);
	void add(int16_t value);
	void clear();
	bool contains(int16_t value);
	void ensureCapacity(int32_t size);
	int32_t length();
	int16_t valueAt(int32_t position);
	int32_t fLength = 0;
	$shorts* fData = nullptr;
};

							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_XMLSchemaValidator$ShortVector_h_
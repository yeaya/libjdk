#ifndef _com_sun_org_apache_xerces_internal_dom_DeferredDocumentImpl$IntVector_h_
#define _com_sun_org_apache_xerces_internal_dom_DeferredDocumentImpl$IntVector_h_
//$ class com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$IntVector
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class DeferredDocumentImpl$IntVector : public ::java::lang::Object {
	$class(DeferredDocumentImpl$IntVector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DeferredDocumentImpl$IntVector();
	void init$();
	void addElement(int32_t element);
	int32_t elementAt(int32_t index);
	void ensureCapacity(int32_t newsize);
	void removeAllElements();
	int32_t size();
	$ints* data = nullptr;
	int32_t size$ = 0;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DeferredDocumentImpl$IntVector_h_
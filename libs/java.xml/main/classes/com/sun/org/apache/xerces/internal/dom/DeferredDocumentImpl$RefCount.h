#ifndef _com_sun_org_apache_xerces_internal_dom_DeferredDocumentImpl$RefCount_h_
#define _com_sun_org_apache_xerces_internal_dom_DeferredDocumentImpl$RefCount_h_
//$ class com.sun.org.apache.xerces.internal.dom.DeferredDocumentImpl$RefCount
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class DeferredDocumentImpl$RefCount : public ::java::lang::Object {
	$class(DeferredDocumentImpl$RefCount, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DeferredDocumentImpl$RefCount();
	void init$();
	int32_t fCount = 0;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DeferredDocumentImpl$RefCount_h_
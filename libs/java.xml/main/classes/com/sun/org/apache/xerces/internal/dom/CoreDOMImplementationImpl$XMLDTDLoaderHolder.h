#ifndef _com_sun_org_apache_xerces_internal_dom_CoreDOMImplementationImpl$XMLDTDLoaderHolder_h_
#define _com_sun_org_apache_xerces_internal_dom_CoreDOMImplementationImpl$XMLDTDLoaderHolder_h_
//$ class com.sun.org.apache.xerces.internal.dom.CoreDOMImplementationImpl$XMLDTDLoaderHolder
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace dtd {
								class XMLDTDLoader;
							}
						}
					}
				}
			}
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

class CoreDOMImplementationImpl$XMLDTDLoaderHolder : public ::java::lang::Object {
	$class(CoreDOMImplementationImpl$XMLDTDLoaderHolder, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CoreDOMImplementationImpl$XMLDTDLoaderHolder();
	void init$(::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader* loader);
	::com::sun::org::apache::xerces::internal::impl::dtd::XMLDTDLoader* loader = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_CoreDOMImplementationImpl$XMLDTDLoaderHolder_h_
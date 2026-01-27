#ifndef _com_sun_org_apache_xalan_internal_xsltc_DOMCache_h_
#define _com_sun_org_apache_xalan_internal_xsltc_DOMCache_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.DOMCache
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class DOM;
							class Translet;
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
				namespace xalan {
					namespace internal {
						namespace xsltc {

class DOMCache : public ::java::lang::Object {
	$interface(DOMCache, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::com::sun::org::apache::xalan::internal::xsltc::DOM* retrieveDocument($String* baseURI, $String* href, ::com::sun::org::apache::xalan::internal::xsltc::Translet* translet) {return nullptr;}
};

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_DOMCache_h_
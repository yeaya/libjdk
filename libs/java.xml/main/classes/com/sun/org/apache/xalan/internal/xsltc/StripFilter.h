#ifndef _com_sun_org_apache_xalan_internal_xsltc_StripFilter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_StripFilter_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.StripFilter
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

class StripFilter : public ::java::lang::Object {
	$interface(StripFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool stripSpace(::com::sun::org::apache::xalan::internal::xsltc::DOM* dom, int32_t node, int32_t type) {return false;}
};

						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_StripFilter_h_
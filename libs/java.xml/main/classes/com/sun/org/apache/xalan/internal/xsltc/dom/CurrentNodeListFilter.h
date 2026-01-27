#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_CurrentNodeListFilter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_CurrentNodeListFilter_h_
//$ interface com.sun.org.apache.xalan.internal.xsltc.dom.CurrentNodeListFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							namespace runtime {
								class AbstractTranslet;
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
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisIterator;
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
							namespace dom {

class CurrentNodeListFilter : public ::java::lang::Object {
	$interface(CurrentNodeListFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool test(int32_t node, int32_t position, int32_t last, int32_t current, ::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet, ::com::sun::org::apache::xml::internal::dtm::DTMAxisIterator* iter) {return false;}
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_CurrentNodeListFilter_h_
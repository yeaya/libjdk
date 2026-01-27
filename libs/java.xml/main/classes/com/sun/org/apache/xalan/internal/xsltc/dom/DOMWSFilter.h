#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_DOMWSFilter_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_DOMWSFilter_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.DOMWSFilter
//$ extends com.sun.org.apache.xml.internal.dtm.DTMWSFilter

#include <com/sun/org/apache/xml/internal/dtm/DTMWSFilter.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xalan {
					namespace internal {
						namespace xsltc {
							class StripFilter;
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
							class DTM;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class Map;
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

class DOMWSFilter : public ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter {
	$class(DOMWSFilter, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter)
public:
	DOMWSFilter();
	void init$(::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* translet);
	virtual int16_t getShouldStripSpace(int32_t node, ::com::sun::org::apache::xml::internal::dtm::DTM* dtm) override;
	::com::sun::org::apache::xalan::internal::xsltc::runtime::AbstractTranslet* m_translet = nullptr;
	::com::sun::org::apache::xalan::internal::xsltc::StripFilter* m_filter = nullptr;
	::java::util::Map* m_mappings = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTM* m_currentDTM = nullptr;
	$shorts* m_currentMapping = nullptr;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_DOMWSFilter_h_
#ifndef _com_sun_org_apache_xalan_internal_xsltc_dom_XSLTCDTMManager_h_
#define _com_sun_org_apache_xalan_internal_xsltc_dom_XSLTCDTMManager_h_
//$ class com.sun.org.apache.xalan.internal.xsltc.dom.XSLTCDTMManager
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMManagerDefault

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMManagerDefault.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("DUMPTREE")
#undef DUMPTREE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
							class DTMWSFilter;
						}
					}
				}
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Source;
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

class XSLTCDTMManager : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault {
	$class(XSLTCDTMManager, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault)
public:
	XSLTCDTMManager();
	using ::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault::getDTM;
	void init$();
	static ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* createNewDTMManagerInstance();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(::javax::xml::transform::Source* source, bool unique, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(::javax::xml::transform::Source* source, bool unique, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing, bool buildIdIndex);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(::javax::xml::transform::Source* source, bool unique, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing, bool buildIdIndex, bool newNameTable);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(::javax::xml::transform::Source* source, bool unique, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing, bool hasUserReader, int32_t size, bool buildIdIndex);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(::javax::xml::transform::Source* source, bool unique, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing, bool hasUserReader, int32_t size, bool buildIdIndex, bool newNameTable);
	static ::com::sun::org::apache::xalan::internal::xsltc::dom::XSLTCDTMManager* newInstance();
	static const bool DUMPTREE = false;
	static const bool DEBUG = false;
};

							} // dom
						} // xsltc
					} // internal
				} // xalan
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("DUMPTREE")

#endif // _com_sun_org_apache_xalan_internal_xsltc_dom_XSLTCDTMManager_h_
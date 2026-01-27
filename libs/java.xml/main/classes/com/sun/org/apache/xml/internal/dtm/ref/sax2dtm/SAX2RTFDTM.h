#ifndef _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2RTFDTM_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2RTFDTM_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2RTFDTM
//$ extends com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM

#include <com/sun/org/apache/xml/internal/dtm/ref/sax2dtm/SAX2DTM.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("SAX2RTFDTM")
#undef SAX2RTFDTM

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMManager;
							class DTMWSFilter;
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
						namespace utils {
							class IntStack;
							class XMLStringFactory;
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
				namespace xml {
					namespace internal {
						namespace dtm {
							namespace ref {
								namespace sax2dtm {

class SAX2RTFDTM : public ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM {
	$class(SAX2RTFDTM, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM)
public:
	SAX2RTFDTM();
	using ::com::sun::org::apache::xml::internal::dtm::ref::sax2dtm::SAX2DTM::error;
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr, ::javax::xml::transform::Source* source, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing);
	virtual int32_t _documentRoot(int32_t nodeIdentifier);
	virtual void endDocument() override;
	virtual int32_t getDocument() override;
	virtual int32_t getDocumentRoot(int32_t nodeHandle) override;
	virtual bool isTreeIncomplete();
	virtual bool popRewindMark();
	virtual void pushRewindMark();
	virtual void startDocument() override;
	static const bool DEBUG = false;
	int32_t m_currentDocumentNode = 0;
	::com::sun::org::apache::xml::internal::utils::IntStack* mark_size = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntStack* mark_data_size = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntStack* mark_char_size = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntStack* mark_doq_size = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntStack* mark_nsdeclset_size = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntStack* mark_nsdeclelem_size = nullptr;
	int32_t m_emptyNodeCount = 0;
	int32_t m_emptyNSDeclSetCount = 0;
	int32_t m_emptyNSDeclSetElemsCount = 0;
	int32_t m_emptyDataCount = 0;
	int32_t m_emptyCharsCount = 0;
	int32_t m_emptyDataQNCount = 0;
};

								} // sax2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("SAX2RTFDTM")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2RTFDTM_h_
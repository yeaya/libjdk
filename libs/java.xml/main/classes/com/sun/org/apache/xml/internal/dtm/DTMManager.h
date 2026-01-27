#ifndef _com_sun_org_apache_xml_internal_dtm_DTMManager_h_
#define _com_sun_org_apache_xml_internal_dtm_DTMManager_h_
//$ class com.sun.org.apache.xml.internal.dtm.DTMManager
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("IDENT_DTM_DEFAULT")
#undef IDENT_DTM_DEFAULT
#pragma push_macro("IDENT_DTM_NODE_BITS")
#undef IDENT_DTM_NODE_BITS
#pragma push_macro("IDENT_MAX_DTMS")
#undef IDENT_MAX_DTMS
#pragma push_macro("IDENT_NODE_DEFAULT")
#undef IDENT_NODE_DEFAULT

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTM;
							class DTMFilter;
							class DTMIterator;
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
							class PrefixResolver;
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
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
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

class $export DTMManager : public ::java::lang::Object {
	$class(DTMManager, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DTMManager();
	void init$();
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator(Object$* xpathCompiler, int32_t pos) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator($String* xpathString, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* presolver) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator(int32_t whatToShow, ::com::sun::org::apache::xml::internal::dtm::DTMFilter* filter, bool entityReferenceExpansion) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator(int32_t node) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* createDocumentFragment() {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(::javax::xml::transform::Source* source, bool unique, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing) {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(int32_t nodeHandle) {return nullptr;}
	virtual int32_t getDTMHandleFromNode(::org::w3c::dom::Node* node) {return 0;}
	virtual int32_t getDTMIdentity(::com::sun::org::apache::xml::internal::dtm::DTM* dtm) {return 0;}
	virtual int32_t getDTMIdentityMask();
	virtual bool getIncremental();
	virtual int32_t getNodeIdentityMask();
	virtual bool getSource_location();
	virtual ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* getXMLStringFactory();
	static ::com::sun::org::apache::xml::internal::dtm::DTMManager* newInstance(::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xsf);
	virtual bool overrideDefaultParser();
	virtual bool release(::com::sun::org::apache::xml::internal::dtm::DTM* dtm, bool shouldHardDelete) {return false;}
	virtual void setIncremental(bool incremental);
	virtual void setOverrideDefaultParser(bool flag);
	virtual void setSource_location(bool sourceLocation);
	virtual void setXMLStringFactory(::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xsf);
	::com::sun::org::apache::xml::internal::utils::XMLStringFactory* m_xsf = nullptr;
	bool _overrideDefaultParser = false;
	bool m_incremental = false;
	bool m_source_location = false;
	static const int32_t IDENT_DTM_NODE_BITS = 16;
	static const int32_t IDENT_NODE_DEFAULT = 65535; // (1 << IDENT_DTM_NODE_BITS) - 1
	static const int32_t IDENT_DTM_DEFAULT = ~IDENT_NODE_DEFAULT;
	static const int32_t IDENT_MAX_DTMS = 65536; // (IDENT_DTM_DEFAULT >>> IDENT_DTM_NODE_BITS) + 1
};

						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("IDENT_DTM_DEFAULT")
#pragma pop_macro("IDENT_DTM_NODE_BITS")
#pragma pop_macro("IDENT_MAX_DTMS")
#pragma pop_macro("IDENT_NODE_DEFAULT")

#endif // _com_sun_org_apache_xml_internal_dtm_DTMManager_h_
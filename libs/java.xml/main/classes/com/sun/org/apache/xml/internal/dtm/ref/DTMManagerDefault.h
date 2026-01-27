#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMManagerDefault_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMManagerDefault_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMManagerDefault
//$ extends com.sun.org.apache.xml.internal.dtm.DTMManager

#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <java/lang/Array.h>

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
						namespace dtm {
							namespace ref {
								class ExpandedNameTable;
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
						namespace utils {
							class PrefixResolver;
							class XMLReaderManager;
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
namespace org {
	namespace xml {
		namespace sax {
			class XMLReader;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class DefaultHandler;
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
							namespace ref {

class DTMManagerDefault : public ::com::sun::org::apache::xml::internal::dtm::DTMManager {
	$class(DTMManagerDefault, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::DTMManager)
public:
	DTMManagerDefault();
	void init$();
	virtual void addDTM(::com::sun::org::apache::xml::internal::dtm::DTM* dtm, int32_t id);
	virtual void addDTM(::com::sun::org::apache::xml::internal::dtm::DTM* dtm, int32_t id, int32_t offset);
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator(int32_t whatToShow, ::com::sun::org::apache::xml::internal::dtm::DTMFilter* filter, bool entityReferenceExpansion) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator($String* xpathString, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* presolver) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMIterator* createDTMIterator(Object$* xpathCompiler, int32_t pos) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* createDocumentFragment() override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(::javax::xml::transform::Source* source, bool unique, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, bool incremental, bool doIndexing) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTM* getDTM(int32_t nodeHandle) override;
	virtual int32_t getDTMHandleFromNode(::org::w3c::dom::Node* node) override;
	virtual int32_t getDTMIdentity(::com::sun::org::apache::xml::internal::dtm::DTM* dtm) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable* getExpandedNameTable(::com::sun::org::apache::xml::internal::dtm::DTM* dtm);
	virtual int32_t getFirstFreeDTMID();
	virtual ::org::xml::sax::XMLReader* getXMLReader(::javax::xml::transform::Source* inputSource);
	virtual bool release(::com::sun::org::apache::xml::internal::dtm::DTM* dtm, bool shouldHardDelete) override;
	virtual void releaseXMLReader(::org::xml::sax::XMLReader* reader);
	static const bool DUMPTREE = false;
	static const bool DEBUG = false;
	$Array<::com::sun::org::apache::xml::internal::dtm::DTM>* m_dtms = nullptr;
	$ints* m_dtm_offsets = nullptr;
	::com::sun::org::apache::xml::internal::utils::XMLReaderManager* m_readerManager = nullptr;
	::org::xml::sax::helpers::DefaultHandler* m_defaultHandler = nullptr;
	::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable* m_expandedNameTable = nullptr;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEBUG")
#pragma pop_macro("DUMPTREE")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMManagerDefault_h_
#ifndef _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBase_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBase_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBase
//$ extends com.sun.org.apache.xml.internal.dtm.DTM

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <java/lang/Array.h>

#pragma push_macro("DEFAULT_BLOCKSIZE")
#undef DEFAULT_BLOCKSIZE
#pragma push_macro("DEFAULT_NUMBLOCKS")
#undef DEFAULT_NUMBLOCKS
#pragma push_macro("DEFAULT_NUMBLOCKS_SMALL")
#undef DEFAULT_NUMBLOCKS_SMALL
#pragma push_macro("JJK_DEBUG")
#undef JJK_DEBUG
#pragma push_macro("NOTPROCESSED")
#undef NOTPROCESSED
#pragma push_macro("ROOTNODE")
#undef ROOTNODE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace dtm {
							class DTMAxisTraverser;
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
						namespace dtm {
							namespace ref {
								class DTMManagerDefault;
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
							class BoolStack;
							class SuballocatedIntVector;
							class XMLStringFactory;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Vector;
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
							namespace ref {

class DTMDefaultBase : public ::com::sun::org::apache::xml::internal::dtm::DTM {
	$class(DTMDefaultBase, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::dtm::DTM)
public:
	DTMDefaultBase();
	virtual void dispatchCharactersEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch, bool normalize) override {}
	virtual void dispatchToEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch) override {}
	virtual int32_t getAttributeNode(int32_t nodeHandle, $String* namespaceURI, $String* name) override {return 0;}
	virtual $String* getDocumentTypeDeclarationPublicIdentifier() override {return nullptr;}
	virtual $String* getDocumentTypeDeclarationSystemIdentifier() override {return nullptr;}
	virtual int32_t getElementById($String* elementId) override {return 0;}
	virtual $String* getLocalName(int32_t nodeHandle) override {return nullptr;}
	virtual $String* getNamespaceURI(int32_t nodeHandle) override {return nullptr;}
	virtual $String* getNodeName(int32_t nodeHandle) override {return nullptr;}
	virtual $String* getNodeValue(int32_t nodeHandle) override {return nullptr;}
	virtual $String* getPrefix(int32_t nodeHandle) override {return nullptr;}
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* getStringValue(int32_t nodeHandle) override {return nullptr;}
	virtual $String* getUnparsedEntityURI($String* name) override {return nullptr;}
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr, ::javax::xml::transform::Source* source, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing);
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr, ::javax::xml::transform::Source* source, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing, int32_t blocksize, bool usePrevsib, bool newNameTable);
	virtual int32_t _exptype(int32_t identity);
	virtual int32_t _firstch(int32_t identity);
	virtual int32_t _level(int32_t identity);
	virtual int32_t _nextsib(int32_t identity);
	virtual int32_t _parent(int32_t identity);
	virtual int32_t _prevsib(int32_t identity);
	virtual int16_t _type(int32_t identity);
	virtual void appendChild(int32_t newChild, bool clone, bool cloneDepth) override;
	virtual void appendTextChild($String* str) override;
	virtual void declareNamespaceInContext(int32_t elementNodeIndex, int32_t namespaceNodeIndex);
	virtual void documentRegistration() override;
	virtual void documentRelease() override;
	virtual void dumpDTM(::java::io::OutputStream* os);
	virtual $String* dumpNode(int32_t nodeHandle);
	virtual void ensureSizeOfIndex(int32_t namespaceID, int32_t LocalNameID);
	virtual void error($String* msg);
	virtual int32_t findElementFromIndex(int32_t nsIndex, int32_t lnIndex, int32_t firstPotential);
	virtual int32_t findGTE($ints* list, int32_t start, int32_t len, int32_t value);
	virtual int32_t findInSortedSuballocatedIntVector(::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* vector, int32_t lookfor);
	virtual ::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* findNamespaceContext(int32_t elementNodeIndex);
	virtual ::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* getDTMIDs();
	virtual int32_t getDocument() override;
	virtual bool getDocumentAllDeclarationsProcessed() override;
	virtual $String* getDocumentBaseURI() override;
	virtual $String* getDocumentEncoding(int32_t nodeHandle) override;
	virtual int32_t getDocumentRoot(int32_t nodeHandle) override;
	virtual $String* getDocumentStandalone(int32_t nodeHandle) override;
	virtual $String* getDocumentSystemIdentifier(int32_t nodeHandle) override;
	virtual $String* getDocumentVersion(int32_t documentHandle) override;
	virtual int32_t getExpandedTypeID(int32_t nodeHandle) override;
	virtual int32_t getExpandedTypeID($String* namespace$, $String* localName, int32_t type) override;
	virtual int32_t getFirstAttribute(int32_t nodeHandle) override;
	virtual int32_t getFirstAttributeIdentity(int32_t identity);
	virtual int32_t getFirstChild(int32_t nodeHandle) override;
	virtual int32_t getFirstNamespaceNode(int32_t nodeHandle, bool inScope) override;
	virtual int32_t getLastChild(int32_t nodeHandle) override;
	virtual int16_t getLevel(int32_t nodeHandle) override;
	virtual $String* getLocalNameFromExpandedNameID(int32_t expandedNameID) override;
	virtual ::com::sun::org::apache::xml::internal::dtm::DTMManager* getManager();
	virtual $String* getNamespaceFromExpandedNameID(int32_t expandedNameID) override;
	virtual int32_t getNamespaceType(int32_t nodeHandle);
	virtual int32_t getNextAttribute(int32_t nodeHandle) override;
	virtual int32_t getNextAttributeIdentity(int32_t identity);
	virtual int32_t getNextNamespaceNode(int32_t baseHandle, int32_t nodeHandle, bool inScope) override;
	virtual int32_t getNextNodeIdentity(int32_t identity) {return 0;}
	virtual int32_t getNextSibling(int32_t nodeHandle) override;
	virtual ::org::w3c::dom::Node* getNode(int32_t nodeHandle) override;
	virtual int32_t getNodeHandle(int32_t nodeId);
	virtual int32_t getNodeIdent(int32_t nodeHandle);
	virtual $String* getNodeNameX(int32_t nodeHandle) override;
	virtual int16_t getNodeType(int32_t nodeHandle) override;
	virtual int32_t getNumberOfNodes() {return 0;}
	virtual int32_t getOwnerDocument(int32_t nodeHandle) override;
	virtual int32_t getParent(int32_t nodeHandle) override;
	virtual int32_t getPreviousSibling(int32_t nodeHandle) override;
	virtual bool getShouldStripWhitespace();
	virtual $chars* getStringValueChunk(int32_t nodeHandle, int32_t chunkIndex, $ints* startAndLen) override;
	virtual int32_t getStringValueChunkCount(int32_t nodeHandle) override;
	virtual int32_t getTypedAttribute(int32_t nodeHandle, int32_t attType);
	virtual int32_t getTypedFirstChild(int32_t nodeHandle, int32_t nodeType);
	virtual int32_t getTypedNextSibling(int32_t nodeHandle, int32_t nodeType);
	virtual bool hasChildNodes(int32_t nodeHandle) override;
	virtual void indexNode(int32_t expandedTypeID, int32_t identity);
	virtual bool isAttributeSpecified(int32_t attributeHandle) override {return false;}
	virtual bool isCharacterElementContentWhitespace(int32_t nodeHandle) override;
	virtual bool isDocumentAllDeclarationsProcessed(int32_t documentHandle) override;
	virtual bool isNodeAfter(int32_t nodeHandle1, int32_t nodeHandle2) override;
	virtual bool isSupported($String* feature, $String* version) override;
	int32_t makeNodeHandle(int32_t nodeIdentity);
	int32_t makeNodeIdentity(int32_t nodeHandle);
	virtual void migrateTo(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr) override;
	virtual bool nextNode() {return false;}
	virtual void popShouldStripWhitespace();
	virtual void pushShouldStripWhitespace(bool shouldStrip);
	virtual void setDocumentBaseURI($String* baseURI) override;
	virtual void setFeature($String* featureId, bool state) override;
	virtual void setShouldStripWhitespace(bool shouldStrip);
	virtual bool supportsPreStripping() override;
	static const bool JJK_DEBUG = false;
	static const int32_t ROOTNODE = 0;
	int32_t m_size = 0;
	::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* m_exptype = nullptr;
	::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* m_firstch = nullptr;
	::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* m_nextsib = nullptr;
	::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* m_prevsib = nullptr;
	::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* m_parent = nullptr;
	::java::util::Vector* m_namespaceDeclSets = nullptr;
	::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* m_namespaceDeclSetElements = nullptr;
	$Array<int32_t, 3>* m_elemIndexes = nullptr;
	static const int32_t DEFAULT_BLOCKSIZE = 512;
	static const int32_t DEFAULT_NUMBLOCKS = 32;
	static const int32_t DEFAULT_NUMBLOCKS_SMALL = 4;
	static const int32_t NOTPROCESSED = -2; // DTM.NULL - 1
	::com::sun::org::apache::xml::internal::dtm::DTMManager* m_mgr = nullptr;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMManagerDefault* m_mgrDefault = nullptr;
	::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* m_dtmIdent = nullptr;
	$String* m_documentBaseURI = nullptr;
	::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* m_wsfilter = nullptr;
	bool m_shouldStripWS = false;
	::com::sun::org::apache::xml::internal::utils::BoolStack* m_shouldStripWhitespaceStack = nullptr;
	::com::sun::org::apache::xml::internal::utils::XMLStringFactory* m_xstrf = nullptr;
	::com::sun::org::apache::xml::internal::dtm::ref::ExpandedNameTable* m_expandedNameTable = nullptr;
	bool m_indexing = false;
	$Array<::com::sun::org::apache::xml::internal::dtm::DTMAxisTraverser>* m_traversers = nullptr;
};

							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DEFAULT_BLOCKSIZE")
#pragma pop_macro("DEFAULT_NUMBLOCKS")
#pragma pop_macro("DEFAULT_NUMBLOCKS_SMALL")
#pragma pop_macro("JJK_DEBUG")
#pragma pop_macro("NOTPROCESSED")
#pragma pop_macro("ROOTNODE")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_DTMDefaultBase_h_
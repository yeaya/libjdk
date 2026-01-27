#ifndef _com_sun_org_apache_xml_internal_dtm_ref_dom2dtm_DOM2DTM_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_dom2dtm_DOM2DTM_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.dom2dtm.DOM2DTM
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>

#pragma push_macro("DOM2DTM")
#undef DOM2DTM
#pragma push_macro("JJK_DEBUG")
#undef JJK_DEBUG
#pragma push_macro("JJK_NEWCODE")
#undef JJK_NEWCODE
#pragma push_macro("NAMESPACE_DECL_NS")
#undef NAMESPACE_DECL_NS

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
						namespace dtm {
							namespace ref {
								class IncrementalSAXSource;
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
							class FastStringBuffer;
							class TreeWalker;
							class XMLString;
							class XMLStringFactory;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class SourceLocator;
		}
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			namespace dom {
				class DOMSource;
			}
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
			class ContentHandler;
			class DTDHandler;
			class EntityResolver;
			class ErrorHandler;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class DeclHandler;
				class LexicalHandler;
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
								namespace dom2dtm {

class DOM2DTM : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators {
	$class(DOM2DTM, 0, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators)
public:
	DOM2DTM();
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr, ::javax::xml::transform::dom::DOMSource* domSource, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing);
	virtual int32_t addNode(::org::w3c::dom::Node* node, int32_t parentIndex, int32_t previousSibling, int32_t forceNodeType);
	virtual void dispatchCharactersEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch, bool normalize) override;
	static void dispatchNodeData(::org::w3c::dom::Node* node, ::org::xml::sax::ContentHandler* ch, int32_t depth);
	virtual void dispatchToEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch) override;
	virtual int32_t getAttributeNode(int32_t nodeHandle, $String* namespaceURI, $String* name) override;
	virtual ::org::xml::sax::ContentHandler* getContentHandler() override;
	virtual ::org::xml::sax::DTDHandler* getDTDHandler() override;
	virtual ::org::xml::sax::ext::DeclHandler* getDeclHandler() override;
	virtual $String* getDocumentTypeDeclarationPublicIdentifier() override;
	virtual $String* getDocumentTypeDeclarationSystemIdentifier() override;
	virtual int32_t getElementById($String* elementId) override;
	virtual ::org::xml::sax::EntityResolver* getEntityResolver() override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	int32_t getHandleFromNode(::org::w3c::dom::Node* node);
	virtual int32_t getHandleOfNode(::org::w3c::dom::Node* node);
	virtual ::org::xml::sax::ext::LexicalHandler* getLexicalHandler() override;
	virtual $String* getLocalName(int32_t nodeHandle) override;
	virtual $String* getNamespaceURI(int32_t nodeHandle) override;
	virtual int32_t getNextNodeIdentity(int32_t identity) override;
	virtual ::org::w3c::dom::Node* getNode(int32_t nodeHandle) override;
	static void getNodeData(::org::w3c::dom::Node* node, ::com::sun::org::apache::xml::internal::utils::FastStringBuffer* buf);
	virtual $String* getNodeName(int32_t nodeHandle) override;
	virtual $String* getNodeNameX(int32_t nodeHandle) override;
	virtual $String* getNodeValue(int32_t nodeHandle) override;
	virtual int32_t getNumberOfNodes() override;
	virtual $String* getPrefix(int32_t nodeHandle) override;
	virtual ::javax::xml::transform::SourceLocator* getSourceLocatorFor(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* getStringValue(int32_t nodeHandle) override;
	virtual $String* getUnparsedEntityURI($String* name) override;
	virtual bool isAttributeSpecified(int32_t attributeHandle) override;
	static bool isSpace(char16_t ch);
	virtual bool isWhitespace(int32_t nodeHandle);
	::org::w3c::dom::Node* logicalNextDOMTextNode(::org::w3c::dom::Node* n);
	virtual ::org::w3c::dom::Node* lookupNode(int32_t nodeIdentity);
	virtual bool needsTwoThreads() override;
	virtual bool nextNode() override;
	virtual void setIncrementalSAXSource(::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource* source);
	virtual void setProperty($String* property, Object$* value) override;
	static const bool JJK_DEBUG = false;
	static const bool JJK_NEWCODE = true;
	static $String* NAMESPACE_DECL_NS;
	::org::w3c::dom::Node* m_pos = nullptr;
	int32_t m_last_parent = 0;
	int32_t m_last_kid = 0;
	::org::w3c::dom::Node* m_root = nullptr;
	bool m_processedFirstElement = false;
	bool m_nodesAreProcessed = false;
	::java::util::List* m_nodes = nullptr;
	::com::sun::org::apache::xml::internal::utils::TreeWalker* m_walker = nullptr;
};

								} // dom2dtm
							} // ref
						} // dtm
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DOM2DTM")
#pragma pop_macro("JJK_DEBUG")
#pragma pop_macro("JJK_NEWCODE")
#pragma pop_macro("NAMESPACE_DECL_NS")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_dom2dtm_DOM2DTM_h_
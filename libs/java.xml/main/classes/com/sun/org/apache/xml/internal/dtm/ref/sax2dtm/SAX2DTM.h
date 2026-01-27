#ifndef _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM_h_
#define _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM_h_
//$ class com.sun.org.apache.xml.internal.dtm.ref.sax2dtm.SAX2DTM
//$ extends com.sun.org.apache.xml.internal.dtm.ref.DTMDefaultBaseIterators
//$ implements org.xml.sax.EntityResolver,org.xml.sax.DTDHandler,org.xml.sax.ContentHandler,org.xml.sax.ErrorHandler,org.xml.sax.ext.DeclHandler,org.xml.sax.ext.LexicalHandler

#include <com/sun/org/apache/xml/internal/dtm/ref/DTMDefaultBaseIterators.h>
#include <java/lang/Array.h>
#include <org/xml/sax/ContentHandler.h>
#include <org/xml/sax/DTDHandler.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/ErrorHandler.h>
#include <org/xml/sax/ext/DeclHandler.h>
#include <org/xml/sax/ext/LexicalHandler.h>

#pragma push_macro("DEBUG")
#undef DEBUG
#pragma push_macro("ENTITY_FIELDS_PER")
#undef ENTITY_FIELDS_PER
#pragma push_macro("ENTITY_FIELD_NAME")
#undef ENTITY_FIELD_NAME
#pragma push_macro("ENTITY_FIELD_NOTATIONNAME")
#undef ENTITY_FIELD_NOTATIONNAME
#pragma push_macro("ENTITY_FIELD_PUBLICID")
#undef ENTITY_FIELD_PUBLICID
#pragma push_macro("ENTITY_FIELD_SYSTEMID")
#undef ENTITY_FIELD_SYSTEMID
#pragma push_macro("SAX2DTM")
#undef SAX2DTM

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
								class DTMStringPool;
								class DTMTreeWalker;
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
							class IntStack;
							class IntVector;
							class StringVector;
							class SuballocatedIntVector;
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
		class Map;
		class Vector;
	}
}
namespace javax {
	namespace xml {
		namespace transform {
			class Source;
			class SourceLocator;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class InputSource;
			class Locator;
			class SAXParseException;
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

class SAX2DTM : public ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators, public ::org::xml::sax::EntityResolver, public ::org::xml::sax::DTDHandler, public ::org::xml::sax::ContentHandler, public ::org::xml::sax::ErrorHandler, public ::org::xml::sax::ext::DeclHandler, public ::org::xml::sax::ext::LexicalHandler {
	$class(SAX2DTM, 0, ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators, ::org::xml::sax::EntityResolver, ::org::xml::sax::DTDHandler, ::org::xml::sax::ContentHandler, ::org::xml::sax::ErrorHandler, ::org::xml::sax::ext::DeclHandler, ::org::xml::sax::ext::LexicalHandler)
public:
	SAX2DTM();
	using ::com::sun::org::apache::xml::internal::dtm::ref::DTMDefaultBaseIterators::error;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr, ::javax::xml::transform::Source* source, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing);
	void init$(::com::sun::org::apache::xml::internal::dtm::DTMManager* mgr, ::javax::xml::transform::Source* source, int32_t dtmIdentity, ::com::sun::org::apache::xml::internal::dtm::DTMWSFilter* whiteSpaceFilter, ::com::sun::org::apache::xml::internal::utils::XMLStringFactory* xstringfactory, bool doIndexing, int32_t blocksize, bool usePrevsib, bool newNameTable);
	virtual int32_t _dataOrQName(int32_t identity);
	virtual void addNewDTMID(int32_t nodeIndex);
	virtual int32_t addNode(int32_t type, int32_t expandedTypeID, int32_t parentIndex, int32_t previousSibling, int32_t dataOrPrefix, bool canHaveFirstChild);
	virtual void attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) override;
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	virtual void charactersFlush();
	virtual void clearCoRoutine();
	virtual void clearCoRoutine(bool callDoTerminate);
	virtual void comment($chars* ch, int32_t start, int32_t length) override;
	virtual bool declAlreadyDeclared($String* prefix);
	virtual void dispatchCharactersEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch, bool normalize) override;
	virtual void dispatchToEvents(int32_t nodeHandle, ::org::xml::sax::ContentHandler* ch) override;
	virtual void elementDecl($String* name, $String* model) override;
	virtual void endCDATA() override;
	virtual void endDTD() override;
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	virtual void endEntity($String* name) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual void error(::org::xml::sax::SAXParseException* e) override;
	virtual void externalEntityDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* e) override;
	virtual int32_t getAttributeNode(int32_t nodeHandle, $String* namespaceURI, $String* name) override;
	virtual ::org::xml::sax::ContentHandler* getContentHandler() override;
	virtual ::org::xml::sax::DTDHandler* getDTDHandler() override;
	virtual ::org::xml::sax::ext::DeclHandler* getDeclHandler() override;
	virtual $String* getDocumentTypeDeclarationPublicIdentifier() override;
	virtual $String* getDocumentTypeDeclarationSystemIdentifier() override;
	virtual int32_t getElementById($String* elementId) override;
	virtual ::org::xml::sax::EntityResolver* getEntityResolver() override;
	virtual ::org::xml::sax::ErrorHandler* getErrorHandler() override;
	virtual $String* getFixedNames(int32_t type);
	virtual int32_t getIdForNamespace($String* uri);
	virtual ::org::xml::sax::ext::LexicalHandler* getLexicalHandler() override;
	virtual $String* getLocalName(int32_t nodeHandle) override;
	virtual $String* getNamespaceURI(int32_t nodeHandle) override;
	virtual $String* getNamespaceURI($String* prefix);
	virtual int32_t getNextNodeIdentity(int32_t identity) override;
	virtual $String* getNodeName(int32_t nodeHandle) override;
	virtual $String* getNodeNameX(int32_t nodeHandle) override;
	virtual $String* getNodeValue(int32_t nodeHandle) override;
	virtual int32_t getNumberOfNodes() override;
	virtual $String* getPrefix(int32_t nodeHandle) override;
	virtual $String* getPrefix($String* qname, $String* uri);
	virtual ::javax::xml::transform::SourceLocator* getSourceLocatorFor(int32_t node) override;
	virtual ::com::sun::org::apache::xml::internal::utils::XMLString* getStringValue(int32_t nodeHandle) override;
	virtual $String* getUnparsedEntityURI($String* name) override;
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void internalEntityDecl($String* name, $String* value) override;
	virtual bool isAttributeSpecified(int32_t attributeHandle) override;
	bool isTextType(int32_t type);
	virtual bool isWhitespace(int32_t nodeHandle);
	virtual void migrateTo(::com::sun::org::apache::xml::internal::dtm::DTMManager* manager) override;
	virtual bool needsTwoThreads() override;
	virtual bool nextNode() override;
	virtual void notationDecl($String* name, $String* publicId, $String* systemId) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual ::org::xml::sax::InputSource* resolveEntity($String* publicId, $String* systemId) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void setIDAttribute($String* id, int32_t elem);
	virtual void setIncrementalSAXSource(::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource* incrementalSAXSource);
	virtual void setProperty($String* property, Object$* value) override;
	virtual void setSourceLocation();
	virtual void setUseSourceLocation(bool useSourceLocation);
	virtual void skippedEntity($String* name) override;
	virtual void startCDATA() override;
	virtual void startDTD($String* name, $String* publicId, $String* systemId) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::org::xml::sax::Attributes* attributes) override;
	virtual void startEntity($String* name) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	virtual $String* toString() override;
	virtual void unparsedEntityDecl($String* name, $String* publicId, $String* systemId, $String* notationName) override;
	virtual void warning(::org::xml::sax::SAXParseException* e) override;
	static const bool DEBUG = false;
	::com::sun::org::apache::xml::internal::dtm::ref::IncrementalSAXSource* m_incrementalSAXSource = nullptr;
	::com::sun::org::apache::xml::internal::utils::FastStringBuffer* m_chars = nullptr;
	::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* m_data = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntStack* m_parents = nullptr;
	int32_t m_previous = 0;
	::java::util::Vector* m_prefixMappings = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntStack* m_contextIndexes = nullptr;
	int32_t m_textType = 0;
	int32_t m_coalescedTextType = 0;
	::org::xml::sax::Locator* m_locator = nullptr;
	$String* m_systemId = nullptr;
	bool m_insideDTD = false;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMTreeWalker* m_walker = nullptr;
	::com::sun::org::apache::xml::internal::dtm::ref::DTMStringPool* m_valuesOrPrefixes = nullptr;
	bool m_endDocumentOccured = false;
	::com::sun::org::apache::xml::internal::utils::SuballocatedIntVector* m_dataOrQName = nullptr;
	::java::util::Map* m_idAttributes = nullptr;
	static $StringArray* m_fixednames;
	::java::util::List* m_entities = nullptr;
	static const int32_t ENTITY_FIELD_PUBLICID = 0;
	static const int32_t ENTITY_FIELD_SYSTEMID = 1;
	static const int32_t ENTITY_FIELD_NOTATIONNAME = 2;
	static const int32_t ENTITY_FIELD_NAME = 3;
	static const int32_t ENTITY_FIELDS_PER = 4;
	int32_t m_textPendingStart = 0;
	bool m_useSourceLocationProperty = false;
	::com::sun::org::apache::xml::internal::utils::StringVector* m_sourceSystemId = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntVector* m_sourceLine = nullptr;
	::com::sun::org::apache::xml::internal::utils::IntVector* m_sourceColumn = nullptr;
	bool m_pastFirstElement = false;
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
#pragma pop_macro("ENTITY_FIELDS_PER")
#pragma pop_macro("ENTITY_FIELD_NAME")
#pragma pop_macro("ENTITY_FIELD_NOTATIONNAME")
#pragma pop_macro("ENTITY_FIELD_PUBLICID")
#pragma pop_macro("ENTITY_FIELD_SYSTEMID")
#pragma pop_macro("SAX2DTM")

#endif // _com_sun_org_apache_xml_internal_dtm_ref_sax2dtm_SAX2DTM_h_
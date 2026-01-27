#ifndef _com_sun_org_apache_xml_internal_serializer_dom3_DOM3TreeWalker_h_
#define _com_sun_org_apache_xml_internal_serializer_dom3_DOM3TreeWalker_h_
//$ class com.sun.org.apache.xml.internal.serializer.dom3.DOM3TreeWalker
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CANONICAL")
#undef CANONICAL
#pragma push_macro("CDATA")
#undef CDATA
#pragma push_macro("CHARNORMALIZE")
#undef CHARNORMALIZE
#pragma push_macro("COMMENTS")
#undef COMMENTS
#pragma push_macro("DISCARDDEFAULT")
#undef DISCARDDEFAULT
#pragma push_macro("DTNORMALIZE")
#undef DTNORMALIZE
#pragma push_macro("ELEM_CONTENT_WHITESPACE")
#undef ELEM_CONTENT_WHITESPACE
#pragma push_macro("ENTITIES")
#undef ENTITIES
#pragma push_macro("IGNORE_CHAR_DENORMALIZE")
#undef IGNORE_CHAR_DENORMALIZE
#pragma push_macro("INFOSET")
#undef INFOSET
#pragma push_macro("NAMESPACEDECLS")
#undef NAMESPACEDECLS
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("NORMALIZECHARS")
#undef NORMALIZECHARS
#pragma push_macro("PRETTY_PRINT")
#undef PRETTY_PRINT
#pragma push_macro("SCHEMAVALIDATE")
#undef SCHEMAVALIDATE
#pragma push_macro("SPLITCDATA")
#undef SPLITCDATA
#pragma push_macro("VALIDATE")
#undef VALIDATE
#pragma push_macro("WELLFORMED")
#undef WELLFORMED
#pragma push_macro("XMLDECL")
#undef XMLDECL
#pragma push_macro("XMLNS_PREFIX")
#undef XMLNS_PREFIX
#pragma push_macro("XMLNS_URI")
#undef XMLNS_URI
#pragma push_macro("XML_PREFIX")
#undef XML_PREFIX
#pragma push_macro("XML_URI")
#undef XML_URI

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							class SerializationHandler;
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
						namespace serializer {
							namespace dom3 {
								class NamespaceSupport;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Character;
	}
}
namespace java {
	namespace util {
		class Map;
		class Properties;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class CDATASection;
			class Comment;
			class DOMErrorHandler;
			class DocumentType;
			class Element;
			class EntityReference;
			class Node;
			class ProcessingInstruction;
			class Text;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {
				class LSSerializerFilter;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace ext {
				class LexicalHandler;
			}
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			namespace helpers {
				class LocatorImpl;
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
						namespace serializer {
							namespace dom3 {

class DOM3TreeWalker : public ::java::lang::Object {
	$class(DOM3TreeWalker, 0, ::java::lang::Object)
public:
	DOM3TreeWalker();
	void init$(::com::sun::org::apache::xml::internal::serializer::SerializationHandler* serialHandler, ::org::w3c::dom::DOMErrorHandler* errHandler, ::org::w3c::dom::ls::LSSerializerFilter* filter, $String* newLine);
	bool applyFilter(::org::w3c::dom::Node* node, int32_t nodeType);
	void checkUnboundPrefixInEntRef(::org::w3c::dom::Node* node);
	void dispatachChars(::org::w3c::dom::Node* node);
	void endNode(::org::w3c::dom::Node* node);
	void fixupElementNS(::org::w3c::dom::Node* node);
	void initProperties(::java::util::Properties* properties);
	void isAttributeWellFormed(::org::w3c::dom::Node* node);
	void isCDATASectionWellFormed(::org::w3c::dom::CDATASection* node);
	void isCommentWellFormed($String* data);
	void isElementWellFormed(::org::w3c::dom::Node* node);
	void isEntityReferneceWellFormed(::org::w3c::dom::EntityReference* node);
	void isPIWellFormed(::org::w3c::dom::ProcessingInstruction* node);
	void isTextWellFormed(::org::w3c::dom::Text* node);
	bool isValidQName($String* prefix, $String* local, bool xml11Version);
	bool isWFXMLChar($String* chardata, ::java::lang::Character* refInvalidChar);
	::java::lang::Character* isWFXMLChar($String* chardata);
	bool isXMLName($String* s, bool xml11Version);
	void recordLocalNSDecl(::org::w3c::dom::Node* node);
	void serializeAttList(::org::w3c::dom::Element* node);
	void serializeCDATASection(::org::w3c::dom::CDATASection* node);
	void serializeComment(::org::w3c::dom::Comment* node);
	void serializeDocType(::org::w3c::dom::DocumentType* node, bool bStart);
	void serializeElement(::org::w3c::dom::Element* node, bool bStart);
	void serializeEntityReference(::org::w3c::dom::EntityReference* node, bool bStart);
	void serializePI(::org::w3c::dom::ProcessingInstruction* node);
	void serializeText(::org::w3c::dom::Text* node);
	void startNode(::org::w3c::dom::Node* node);
	void traverse(::org::w3c::dom::Node* pos);
	void traverse(::org::w3c::dom::Node* pos, ::org::w3c::dom::Node* top);
	::com::sun::org::apache::xml::internal::serializer::SerializationHandler* fSerializer = nullptr;
	::org::xml::sax::helpers::LocatorImpl* fLocator = nullptr;
	::org::w3c::dom::DOMErrorHandler* fErrorHandler = nullptr;
	::org::w3c::dom::ls::LSSerializerFilter* fFilter = nullptr;
	::org::xml::sax::ext::LexicalHandler* fLexicalHandler = nullptr;
	int32_t fWhatToShowFilter = 0;
	$String* fNewLine = nullptr;
	::java::util::Properties* fDOMConfigProperties = nullptr;
	bool fInEntityRef = false;
	$String* fXMLVersion = nullptr;
	bool fIsXMLVersion11 = false;
	bool fIsLevel3DOM = false;
	int32_t fFeatures = 0;
	bool fNextIsRaw = false;
	static $String* XMLNS_URI;
	static $String* XMLNS_PREFIX;
	static $String* XML_URI;
	static $String* XML_PREFIX;
	::com::sun::org::apache::xml::internal::serializer::dom3::NamespaceSupport* fNSBinder = nullptr;
	::com::sun::org::apache::xml::internal::serializer::dom3::NamespaceSupport* fLocalNSBinder = nullptr;
	int32_t fElementDepth = 0;
	static const int32_t CANONICAL = 1; // 1 << 0
	static const int32_t CDATA = 2; // 1 << 1
	static const int32_t CHARNORMALIZE = 4; // 1 << 2
	static const int32_t COMMENTS = 8; // 1 << 3
	static const int32_t DTNORMALIZE = 16; // 1 << 4
	static const int32_t ELEM_CONTENT_WHITESPACE = 32; // 1 << 5
	static const int32_t ENTITIES = 64; // 1 << 6
	static const int32_t INFOSET = 128; // 1 << 7
	static const int32_t NAMESPACES = 256; // 1 << 8
	static const int32_t NAMESPACEDECLS = 512; // 1 << 9
	static const int32_t NORMALIZECHARS = 1024; // 1 << 10
	static const int32_t SPLITCDATA = 2048; // 1 << 11
	static const int32_t VALIDATE = 4096; // 1 << 12
	static const int32_t SCHEMAVALIDATE = 8192; // 1 << 13
	static const int32_t WELLFORMED = 16384; // 1 << 14
	static const int32_t DISCARDDEFAULT = 32768; // 1 << 15
	static const int32_t PRETTY_PRINT = 65536; // 1 << 16
	static const int32_t IGNORE_CHAR_DENORMALIZE = 131072; // 1 << 17
	static const int32_t XMLDECL = 262144; // 1 << 18
	static ::java::util::Map* fFeatureMap;
};

							} // dom3
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CANONICAL")
#pragma pop_macro("CDATA")
#pragma pop_macro("CHARNORMALIZE")
#pragma pop_macro("COMMENTS")
#pragma pop_macro("DISCARDDEFAULT")
#pragma pop_macro("DTNORMALIZE")
#pragma pop_macro("ELEM_CONTENT_WHITESPACE")
#pragma pop_macro("ENTITIES")
#pragma pop_macro("IGNORE_CHAR_DENORMALIZE")
#pragma pop_macro("INFOSET")
#pragma pop_macro("NAMESPACEDECLS")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("NORMALIZECHARS")
#pragma pop_macro("PRETTY_PRINT")
#pragma pop_macro("SCHEMAVALIDATE")
#pragma pop_macro("SPLITCDATA")
#pragma pop_macro("VALIDATE")
#pragma pop_macro("WELLFORMED")
#pragma pop_macro("XMLDECL")
#pragma pop_macro("XMLNS_PREFIX")
#pragma pop_macro("XMLNS_URI")
#pragma pop_macro("XML_PREFIX")
#pragma pop_macro("XML_URI")

#endif // _com_sun_org_apache_xml_internal_serializer_dom3_DOM3TreeWalker_h_
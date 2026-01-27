#ifndef _com_sun_xml_internal_stream_dtd_DTDGrammarUtil_h_
#define _com_sun_xml_internal_stream_dtd_DTDGrammarUtil_h_
//$ class com.sun.xml.internal.stream.dtd.DTDGrammarUtil
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("DEBUG_ATTRIBUTES")
#undef DEBUG_ATTRIBUTES
#pragma push_macro("DEBUG_ELEMENT_CHILDREN")
#undef DEBUG_ELEMENT_CHILDREN
#pragma push_macro("NAMESPACES")
#undef NAMESPACES
#pragma push_macro("SYMBOL_TABLE")
#undef SYMBOL_TABLE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class SymbolTable;
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
				namespace xerces {
					namespace internal {
						namespace xni {
							class Augmentations;
							class NamespaceContext;
							class QName;
							class XMLAttributes;
							class XMLString;
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
				namespace xerces {
					namespace internal {
						namespace xni {
							namespace parser {
								class XMLComponentManager;
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
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {
						namespace nonvalidating {
							class DTDGrammar;
							class XMLAttributeDecl;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace dtd {

class DTDGrammarUtil : public ::java::lang::Object {
	$class(DTDGrammarUtil, 0, ::java::lang::Object)
public:
	DTDGrammarUtil();
	void init$(::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::xml::internal::stream::dtd::nonvalidating::DTDGrammar* grammar, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable);
	void init$(::com::sun::xml::internal::stream::dtd::nonvalidating::DTDGrammar* grammar, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext);
	virtual void addDTDDefaultAttrs(::com::sun::org::apache::xerces::internal::xni::QName* elementName, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element);
	void ensureStackCapacity(int32_t newElementDepth);
	$String* getAttributeTypeName(::com::sun::xml::internal::stream::dtd::nonvalidating::XMLAttributeDecl* attrDecl);
	virtual void handleEndElement(::com::sun::org::apache::xerces::internal::xni::QName* element);
	virtual void handleStartElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	virtual bool isIgnorableWhiteSpace(::com::sun::org::apache::xerces::internal::xni::XMLString* text);
	virtual bool isInElementContent();
	bool normalizeAttrValue(::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, int32_t index);
	virtual void reset(::com::sun::org::apache::xerces::internal::xni::parser::XMLComponentManager* componentManager);
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs);
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes);
	static $String* SYMBOL_TABLE;
	static $String* NAMESPACES;
	static const bool DEBUG_ATTRIBUTES = false;
	static const bool DEBUG_ELEMENT_CHILDREN = false;
	::com::sun::xml::internal::stream::dtd::nonvalidating::DTDGrammar* fDTDGrammar = nullptr;
	bool fNamespaces = false;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	int32_t fCurrentElementIndex = 0;
	int32_t fCurrentContentSpecType = 0;
	$booleans* fElementContentState = nullptr;
	int32_t fElementDepth = 0;
	bool fInElementContent = false;
	::com::sun::xml::internal::stream::dtd::nonvalidating::XMLAttributeDecl* fTempAttDecl = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fTempQName = nullptr;
	::java::lang::StringBuilder* fBuffer = nullptr;
	::com::sun::org::apache::xerces::internal::xni::NamespaceContext* fNamespaceContext = nullptr;
};

					} // dtd
				} // stream
			} // internal
		} // xml
	} // sun
} // com

#pragma pop_macro("DEBUG_ATTRIBUTES")
#pragma pop_macro("DEBUG_ELEMENT_CHILDREN")
#pragma pop_macro("NAMESPACES")
#pragma pop_macro("SYMBOL_TABLE")

#endif // _com_sun_xml_internal_stream_dtd_DTDGrammarUtil_h_
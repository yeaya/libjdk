#ifndef _com_sun_org_apache_xerces_internal_impl_xs_traversers_SchemaContentHandler_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_traversers_SchemaContentHandler_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.traversers.SchemaContentHandler
//$ extends org.xml.sax.ContentHandler

#include <java/lang/Array.h>
#include <org/xml/sax/ContentHandler.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {
									class SchemaDOMParser;
								}
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
				namespace xerces {
					namespace internal {
						namespace util {
							class NamespaceSupport;
							class SAXLocatorWrapper;
							class SymbolTable;
							class XMLAttributesImpl;
							class XMLStringBuffer;
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
							class QName;
							class XMLString;
							class XNIException;
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
								class XMLParseException;
							}
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
		}
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class Attributes;
			class Locator;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace traversers {

class SchemaContentHandler : public ::org::xml::sax::ContentHandler {
	$class(SchemaContentHandler, $NO_CLASS_INIT, ::org::xml::sax::ContentHandler)
public:
	SchemaContentHandler();
	void init$();
	void addNamespaceDeclarations(int32_t prefixCount);
	virtual void characters($chars* ch, int32_t start, int32_t length) override;
	static void convertToSAXException(::com::sun::org::apache::xerces::internal::xni::XNIException* e);
	static void convertToSAXParseException(::com::sun::org::apache::xerces::internal::xni::parser::XMLParseException* e);
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* localName, $String* qName) override;
	virtual void endPrefixMapping($String* prefix) override;
	void fillQName(::com::sun::org::apache::xerces::internal::xni::QName* toFill, $String* uri, $String* localpart, $String* rawname);
	void fillXMLAttributes(::org::xml::sax::Attributes* atts);
	::org::w3c::dom::Document* getDocument();
	virtual void ignorableWhitespace($chars* ch, int32_t start, int32_t length) override;
	virtual void processingInstruction($String* target, $String* data) override;
	void reset(::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser* schemaDOMParser, ::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable, bool namespacePrefixes, bool stringsInternalized);
	virtual void setDocumentLocator(::org::xml::sax::Locator* locator) override;
	virtual void skippedEntity($String* arg) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* localName, $String* qName, ::org::xml::sax::Attributes* atts) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* fSymbolTable = nullptr;
	::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOMParser* fSchemaDOMParser = nullptr;
	::com::sun::org::apache::xerces::internal::util::SAXLocatorWrapper* fSAXLocatorWrapper = nullptr;
	::com::sun::org::apache::xerces::internal::util::NamespaceSupport* fNamespaceContext = nullptr;
	bool fNeedPushNSContext = false;
	bool fNamespacePrefixes = false;
	bool fStringsInternalized = false;
	::com::sun::org::apache::xerces::internal::xni::QName* fElementQName = nullptr;
	::com::sun::org::apache::xerces::internal::xni::QName* fAttributeQName = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLAttributesImpl* fAttributes = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLString* fTempString = nullptr;
	::com::sun::org::apache::xerces::internal::util::XMLStringBuffer* fStringBuffer = nullptr;
};

								} // traversers
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_traversers_SchemaContentHandler_h_
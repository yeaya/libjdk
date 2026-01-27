#ifndef _com_sun_org_apache_xerces_internal_util_SAX2XNI_h_
#define _com_sun_org_apache_xerces_internal_util_SAX2XNI_h_
//$ class com.sun.org.apache.xerces.internal.util.SAX2XNI
//$ extends org.xml.sax.ContentHandler
//$ implements com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentSource

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentSource.h>
#include <java/lang/Array.h>
#include <org/xml/sax/ContentHandler.h>

#pragma push_macro("SAX2XNI")
#undef SAX2XNI

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace util {
							class NamespaceSupport;
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
							class QName;
							class XMLAttributes;
							class XMLDocumentHandler;
							class XMLString;
						}
					}
				}
			}
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
						namespace util {

class SAX2XNI : public ::org::xml::sax::ContentHandler, public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource {
	$class(SAX2XNI, $NO_CLASS_INIT, ::org::xml::sax::ContentHandler, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource)
public:
	SAX2XNI();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* core);
	virtual void characters($chars* buf, int32_t offset, int32_t len) override;
	::com::sun::org::apache::xerces::internal::xni::XMLAttributes* createAttributes(::org::xml::sax::Attributes* att);
	::com::sun::org::apache::xerces::internal::xni::QName* createQName($String* uri, $String* local, $String* raw);
	::com::sun::org::apache::xerces::internal::xni::XMLString* createXMLString($String* str);
	virtual void endDocument() override;
	virtual void endElement($String* uri, $String* local, $String* qname) override;
	virtual void endPrefixMapping($String* prefix) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() override;
	virtual void ignorableWhitespace($chars* buf, int32_t offset, int32_t len) override;
	virtual void processingInstruction($String* target, $String* data) override;
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* handler) override;
	virtual void setDocumentLocator(::org::xml::sax::Locator* _loc) override;
	virtual void skippedEntity($String* name) override;
	virtual void startDocument() override;
	virtual void startElement($String* uri, $String* local, $String* qname, ::org::xml::sax::Attributes* att) override;
	virtual void startPrefixMapping($String* prefix, $String* uri) override;
	$String* symbolize($String* s);
	virtual $String* toString() override;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* fCore = nullptr;
	::com::sun::org::apache::xerces::internal::util::NamespaceSupport* nsContext = nullptr;
	::com::sun::org::apache::xerces::internal::util::SymbolTable* symbolTable = nullptr;
	::org::xml::sax::Locator* locator = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLAttributes* xa = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("SAX2XNI")

#endif // _com_sun_org_apache_xerces_internal_util_SAX2XNI_h_
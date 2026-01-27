#ifndef _com_sun_org_apache_xerces_internal_util_TeeXMLDocumentFilterImpl_h_
#define _com_sun_org_apache_xerces_internal_util_TeeXMLDocumentFilterImpl_h_
//$ class com.sun.org.apache.xerces.internal.util.TeeXMLDocumentFilterImpl
//$ extends com.sun.org.apache.xerces.internal.xni.parser.XMLDocumentFilter

#include <com/sun/org/apache/xerces/internal/xni/parser/XMLDocumentFilter.h>

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
							class XMLDocumentHandler;
							class XMLLocator;
							class XMLResourceIdentifier;
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
								class XMLDocumentSource;
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

class TeeXMLDocumentFilterImpl : public ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter {
	$class(TeeXMLDocumentFilterImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentFilter)
public:
	TeeXMLDocumentFilterImpl();
	void init$();
	virtual void characters(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void comment(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void doctypeDecl($String* rootElement, $String* publicId, $String* systemId, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void emptyElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endDocument(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void endGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getDocumentHandler() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* getDocumentSource() override;
	virtual ::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* getSide();
	virtual void ignorableWhitespace(::com::sun::org::apache::xerces::internal::xni::XMLString* text, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void processingInstruction($String* target, ::com::sun::org::apache::xerces::internal::xni::XMLString* data, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void setDocumentHandler(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* handler) override;
	virtual void setDocumentSource(::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* source) override;
	virtual void setSide(::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* side);
	virtual void startCDATA(::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startDocument(::com::sun::org::apache::xerces::internal::xni::XMLLocator* locator, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::NamespaceContext* namespaceContext, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startElement(::com::sun::org::apache::xerces::internal::xni::QName* element, ::com::sun::org::apache::xerces::internal::xni::XMLAttributes* attributes, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void startGeneralEntity($String* name, ::com::sun::org::apache::xerces::internal::xni::XMLResourceIdentifier* identifier, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void textDecl($String* version, $String* encoding, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	virtual void xmlDecl($String* version, $String* encoding, $String* standalone, ::com::sun::org::apache::xerces::internal::xni::Augmentations* augs) override;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* next = nullptr;
	::com::sun::org::apache::xerces::internal::xni::XMLDocumentHandler* side = nullptr;
	::com::sun::org::apache::xerces::internal::xni::parser::XMLDocumentSource* source = nullptr;
};

						} // util
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_util_TeeXMLDocumentFilterImpl_h_
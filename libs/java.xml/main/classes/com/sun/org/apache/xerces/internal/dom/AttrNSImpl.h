#ifndef _com_sun_org_apache_xerces_internal_dom_AttrNSImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_AttrNSImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.AttrNSImpl
//$ extends com.sun.org.apache.xerces.internal.dom.AttrImpl

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class CoreDocumentImpl;
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
						namespace dom {

class AttrNSImpl : public ::com::sun::org::apache::xerces::internal::dom::AttrImpl {
	$class(AttrNSImpl, 0, ::com::sun::org::apache::xerces::internal::dom::AttrImpl)
public:
	AttrNSImpl();
	void init$();
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName);
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* namespaceURI, $String* qualifiedName, $String* localName);
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument, $String* value);
	virtual $String* getLocalName() override;
	virtual $String* getNamespaceURI() override;
	virtual $String* getPrefix() override;
	virtual $String* getTypeName() override;
	virtual $String* getTypeNamespace() override;
	virtual bool isDerivedFrom($String* typeNamespaceArg, $String* typeNameArg, int32_t derivationMethod) override;
	using ::com::sun::org::apache::xerces::internal::dom::AttrImpl::rename;
	virtual void rename($String* namespaceURI, $String* qualifiedName);
	void setName($String* namespaceURI, $String* qname);
	virtual void setPrefix($String* prefix) override;
	static const int64_t serialVersionUID = (int64_t)0xF5261C13775AF8AA;
	static $String* xmlnsURI;
	static $String* xmlURI;
	$String* namespaceURI = nullptr;
	$String* localName = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_AttrNSImpl_h_
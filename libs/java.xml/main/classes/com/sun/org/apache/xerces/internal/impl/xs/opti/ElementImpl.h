#ifndef _com_sun_org_apache_xerces_internal_impl_xs_opti_ElementImpl_h_
#define _com_sun_org_apache_xerces_internal_impl_xs_opti_ElementImpl_h_
//$ class com.sun.org.apache.xerces.internal.impl.xs.opti.ElementImpl
//$ extends com.sun.org.apache.xerces.internal.impl.xs.opti.DefaultElement

#include <com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultElement.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {
							namespace xs {
								namespace opti {
									class SchemaDOM;
								}
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
			class Attr;
			class Document;
			class NamedNodeMap;
			class Node;
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
								namespace opti {

class ElementImpl : public ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultElement {
	$class(ElementImpl, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultElement)
public:
	ElementImpl();
	void init$(int32_t line, int32_t column, int32_t offset);
	void init$(int32_t line, int32_t column);
	void init$($String* prefix, $String* localpart, $String* rawname, $String* uri, int32_t line, int32_t column, int32_t offset);
	void init$($String* prefix, $String* localpart, $String* rawname, $String* uri, int32_t line, int32_t column);
	virtual $String* getAnnotation();
	virtual $String* getAttribute($String* name) override;
	virtual $String* getAttributeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::Attr* getAttributeNode($String* name) override;
	virtual ::org::w3c::dom::Attr* getAttributeNodeNS($String* namespaceURI, $String* localName) override;
	virtual ::org::w3c::dom::NamedNodeMap* getAttributes() override;
	virtual int32_t getCharacterOffset();
	virtual int32_t getColumnNumber();
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual int32_t getLineNumber();
	virtual ::org::w3c::dom::Node* getNextSibling() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual ::org::w3c::dom::Node* getParentNode() override;
	virtual ::org::w3c::dom::Node* getPreviousSibling() override;
	virtual $String* getSyntheticAnnotation();
	virtual $String* getTagName() override;
	virtual bool hasAttribute($String* name) override;
	virtual bool hasAttributeNS($String* namespaceURI, $String* localName) override;
	virtual bool hasAttributes() override;
	virtual bool hasChildNodes() override;
	static bool nsEquals($String* nsURI_1, $String* nsURI_2);
	virtual void setAttribute($String* name, $String* value) override;
	::com::sun::org::apache::xerces::internal::impl::xs::opti::SchemaDOM* schemaDOM = nullptr;
	$Array<::org::w3c::dom::Attr>* attrs = nullptr;
	int32_t row = 0;
	int32_t col = 0;
	int32_t parentRow = 0;
	int32_t line = 0;
	int32_t column = 0;
	int32_t charOffset = 0;
	$String* fAnnotation = nullptr;
	$String* fSyntheticAnnotation = nullptr;
};

								} // opti
							} // xs
						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_impl_xs_opti_ElementImpl_h_
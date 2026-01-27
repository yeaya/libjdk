#ifndef _com_sun_org_apache_xerces_internal_dom_ParentNode_h_
#define _com_sun_org_apache_xerces_internal_dom_ParentNode_h_
//$ class com.sun.org.apache.xerces.internal.dom.ParentNode
//$ extends com.sun.org.apache.xerces.internal.dom.ChildNode

#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class CoreDocumentImpl;
							class NodeListCache;
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class ObjectInputStream;
		class ObjectOutputStream;
	}
}
namespace java {
	namespace lang {
		class StringBuilder;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Node;
			class NodeList;
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

class ParentNode : public ::com::sun::org::apache::xerces::internal::dom::ChildNode {
	$class(ParentNode, $NO_CLASS_INIT, ::com::sun::org::apache::xerces::internal::dom::ChildNode)
public:
	ParentNode();
	void init$(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument);
	void init$();
	virtual void checkNormalizationAfterInsert(::com::sun::org::apache::xerces::internal::dom::ChildNode* insertedChild);
	virtual void checkNormalizationAfterRemove(::com::sun::org::apache::xerces::internal::dom::ChildNode* previousSibling);
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual ::org::w3c::dom::NodeList* getChildNodes() override;
	::org::w3c::dom::NodeList* getChildNodesUnoptimized();
	virtual ::org::w3c::dom::Node* getFirstChild() override;
	virtual ::org::w3c::dom::Node* getLastChild() override;
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument() override;
	virtual $String* getTextContent() override;
	virtual void getTextContent(::java::lang::StringBuilder* buf) override;
	virtual bool hasChildNodes() override;
	bool hasTextContent(::org::w3c::dom::Node* child);
	virtual ::org::w3c::dom::Node* insertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild) override;
	virtual ::org::w3c::dom::Node* internalInsertBefore(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* refChild, bool replace);
	virtual ::org::w3c::dom::Node* internalRemoveChild(::org::w3c::dom::Node* oldChild, bool replace);
	virtual bool isEqualNode(::org::w3c::dom::Node* arg) override;
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	::com::sun::org::apache::xerces::internal::dom::ChildNode* lastChild();
	void lastChild(::com::sun::org::apache::xerces::internal::dom::ChildNode* node);
	int32_t nodeListGetLength();
	::org::w3c::dom::Node* nodeListItem(int32_t index);
	virtual void normalize() override;
	virtual ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument() override;
	void readObject(::java::io::ObjectInputStream* ois);
	virtual ::org::w3c::dom::Node* removeChild(::org::w3c::dom::Node* oldChild) override;
	virtual ::org::w3c::dom::Node* replaceChild(::org::w3c::dom::Node* newChild, ::org::w3c::dom::Node* oldChild) override;
	virtual void setOwnerDocument(::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* doc) override;
	virtual void setReadOnly(bool readOnly, bool deep) override;
	virtual void setTextContent($String* textContent) override;
	virtual void synchronizeChildren();
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x2713D65863899C28;
	::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl* ownerDocument$ = nullptr;
	::com::sun::org::apache::xerces::internal::dom::ChildNode* firstChild = nullptr;
	::com::sun::org::apache::xerces::internal::dom::NodeListCache* fNodeListCache = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_ParentNode_h_
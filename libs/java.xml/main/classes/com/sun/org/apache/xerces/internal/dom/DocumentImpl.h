#ifndef _com_sun_org_apache_xerces_internal_dom_DocumentImpl_h_
#define _com_sun_org_apache_xerces_internal_dom_DocumentImpl_h_
//$ class com.sun.org.apache.xerces.internal.dom.DocumentImpl
//$ extends com.sun.org.apache.xerces.internal.dom.CoreDocumentImpl
//$ implements org.w3c.dom.traversal.DocumentTraversal,org.w3c.dom.events.DocumentEvent,org.w3c.dom.ranges.DocumentRange

#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <java/lang/Array.h>
#include <org/w3c/dom/events/DocumentEvent.h>
#include <org/w3c/dom/ranges/DocumentRange.h>
#include <org/w3c/dom/traversal/DocumentTraversal.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							class AttrImpl;
							class DocumentImpl$EnclosingAttr;
							class NodeImpl;
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
		class ObjectStreamField;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class DOMImplementation;
			class DocumentType;
			class Element;
			class Node;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace events {
				class Event;
				class EventListener;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace ranges {
				class Range;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			namespace traversal {
				class NodeFilter;
				class NodeIterator;
				class TreeWalker;
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

class DocumentImpl : public ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl, public ::org::w3c::dom::traversal::DocumentTraversal, public ::org::w3c::dom::events::DocumentEvent, public ::org::w3c::dom::ranges::DocumentRange {
	$class(DocumentImpl, 0, ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl, ::org::w3c::dom::traversal::DocumentTraversal, ::org::w3c::dom::events::DocumentEvent, ::org::w3c::dom::ranges::DocumentRange)
public:
	DocumentImpl();
	using ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl::cloneNode;
	using ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl::getTextContent;
	using ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl::getUserData;
	using ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl::getUserDataRecord;
	using ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl::addEventListener;
	using ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl::dispatchEvent;
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(bool grammarAccess);
	void init$(::org::w3c::dom::DocumentType* doctype);
	void init$(::org::w3c::dom::DocumentType* doctype, bool grammarAccess);
	virtual void addEventListener(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, $String* type, ::org::w3c::dom::events::EventListener* listener, bool useCapture) override;
	virtual ::org::w3c::dom::Node* cloneNode(bool deep) override;
	virtual void copyEventListeners(::com::sun::org::apache::xerces::internal::dom::NodeImpl* src, ::com::sun::org::apache::xerces::internal::dom::NodeImpl* tgt) override;
	virtual ::org::w3c::dom::events::Event* createEvent($String* type) override;
	virtual ::org::w3c::dom::traversal::NodeIterator* createNodeIterator(::org::w3c::dom::Node* root, int16_t whatToShow, ::org::w3c::dom::traversal::NodeFilter* filter);
	virtual ::org::w3c::dom::traversal::NodeIterator* createNodeIterator(::org::w3c::dom::Node* root, int32_t whatToShow, ::org::w3c::dom::traversal::NodeFilter* filter, bool entityReferenceExpansion) override;
	virtual ::org::w3c::dom::ranges::Range* createRange() override;
	virtual ::org::w3c::dom::traversal::TreeWalker* createTreeWalker(::org::w3c::dom::Node* root, int16_t whatToShow, ::org::w3c::dom::traversal::NodeFilter* filter);
	virtual ::org::w3c::dom::traversal::TreeWalker* createTreeWalker(::org::w3c::dom::Node* root, int32_t whatToShow, ::org::w3c::dom::traversal::NodeFilter* filter, bool entityReferenceExpansion) override;
	virtual void deletedText(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, int32_t offset, int32_t count) override;
	virtual void dispatchAggregateEvents(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, ::com::sun::org::apache::xerces::internal::dom::DocumentImpl$EnclosingAttr* ea);
	virtual void dispatchAggregateEvents(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, ::com::sun::org::apache::xerces::internal::dom::AttrImpl* enclosingAttr, $String* oldvalue, int16_t change);
	virtual bool dispatchEvent(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, ::org::w3c::dom::events::Event* event) override;
	virtual void dispatchEventToSubtree(::org::w3c::dom::Node* n, ::org::w3c::dom::events::Event* e);
	virtual void dispatchingEventToSubtree(::org::w3c::dom::Node* n, ::org::w3c::dom::events::Event* e);
	virtual ::java::util::List* getEventListeners(::com::sun::org::apache::xerces::internal::dom::NodeImpl* n);
	virtual ::org::w3c::dom::DOMImplementation* getImplementation() override;
	virtual bool getMutationEvents() override;
	virtual void insertedNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, ::com::sun::org::apache::xerces::internal::dom::NodeImpl* newInternal, bool replace) override;
	virtual void insertedText(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, int32_t offset, int32_t count) override;
	virtual void insertingNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, bool replace) override;
	virtual void modifiedAttrValue(::com::sun::org::apache::xerces::internal::dom::AttrImpl* attr, $String* oldvalue) override;
	virtual void modifiedCharacterData(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, $String* oldvalue, $String* value, bool replace) override;
	virtual void modifyingCharacterData(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, bool replace) override;
	void readObject(::java::io::ObjectInputStream* in);
	using ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl::removeEventListener;
	virtual void removeEventListener(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, $String* type, ::org::w3c::dom::events::EventListener* listener, bool useCapture) override;
	virtual void removeNodeIterator(::org::w3c::dom::traversal::NodeIterator* nodeIterator);
	virtual void removeRange(::org::w3c::dom::ranges::Range* range);
	virtual void removedAttrNode(::com::sun::org::apache::xerces::internal::dom::AttrImpl* attr, ::com::sun::org::apache::xerces::internal::dom::NodeImpl* oldOwner, $String* name) override;
	virtual void removedNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, bool replace) override;
	virtual void removingNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, ::com::sun::org::apache::xerces::internal::dom::NodeImpl* oldChild, bool replace) override;
	virtual void renamedAttrNode(::org::w3c::dom::Attr* oldAt, ::org::w3c::dom::Attr* newAt) override;
	virtual void renamedElement(::org::w3c::dom::Element* oldEl, ::org::w3c::dom::Element* newEl) override;
	virtual void replacedCharacterData(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node, $String* oldvalue, $String* value) override;
	virtual void replacedNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node) override;
	virtual void replacedText(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node) override;
	virtual void replacingData(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node) override;
	virtual void replacingNode(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node) override;
	virtual void saveEnclosingAttr(::com::sun::org::apache::xerces::internal::dom::NodeImpl* node);
	virtual void setAttrNode(::com::sun::org::apache::xerces::internal::dom::AttrImpl* attr, ::com::sun::org::apache::xerces::internal::dom::AttrImpl* previous) override;
	virtual void setEventListeners(::com::sun::org::apache::xerces::internal::dom::NodeImpl* n, ::java::util::List* listeners);
	virtual void setMutationEvents(bool set) override;
	using ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl::setUserData;
	virtual void splitData(::org::w3c::dom::Node* node, ::org::w3c::dom::Node* newNode, int32_t offset);
	virtual $String* toString() override;
	void writeObject(::java::io::ObjectOutputStream* out);
	static const int64_t serialVersionUID = (int64_t)0x0728175AAC81FA76;
	::java::util::List* iterators = nullptr;
	::java::util::List* ranges = nullptr;
	::java::util::Map* eventListeners = nullptr;
	bool mutationEvents = false;
	static $Array<::java::io::ObjectStreamField>* serialPersistentFields;
	::com::sun::org::apache::xerces::internal::dom::DocumentImpl$EnclosingAttr* savedEnclosingAttr = nullptr;
};

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xerces_internal_dom_DocumentImpl_h_
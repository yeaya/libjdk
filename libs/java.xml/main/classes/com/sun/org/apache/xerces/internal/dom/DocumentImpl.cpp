#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/AttrImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ChildNode.h>
#include <com/sun/org/apache/xerces/internal/dom/CoreDocumentImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMImplementationImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/DOMMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl$EnclosingAttr.h>
#include <com/sun/org/apache/xerces/internal/dom/DocumentImpl$LEntry.h>
#include <com/sun/org/apache/xerces/internal/dom/LCount.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/NodeIteratorImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/ParentNode.h>
#include <com/sun/org/apache/xerces/internal/dom/RangeImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/TreeWalkerImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/events/EventImpl.h>
#include <com/sun/org/apache/xerces/internal/dom/events/MutationEventImpl.h>
#include <java/io/ObjectInputStream$GetField.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream$PutField.h>
#include <java/io/ObjectOutputStream.h>
#include <java/io/ObjectStreamField.h>
#include <java/util/AbstractCollection.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/HashMap.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/Vector.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/DOMImplementation.h>
#include <org/w3c/dom/DocumentType.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/UserDataHandler.h>
#include <org/w3c/dom/events/Event.h>
#include <org/w3c/dom/events/EventException.h>
#include <org/w3c/dom/events/EventListener.h>
#include <org/w3c/dom/events/EventTarget.h>
#include <org/w3c/dom/events/MutationEvent.h>
#include <org/w3c/dom/ranges/Range.h>
#include <org/w3c/dom/traversal/NodeFilter.h>
#include <org/w3c/dom/traversal/NodeIterator.h>
#include <org/w3c/dom/traversal/TreeWalker.h>
#include <jcpp.h>

#undef ADDITION
#undef ATTRIBUTE_NODE
#undef AT_TARGET
#undef BUBBLING_PHASE
#undef CAPTURING_PHASE
#undef DOCUMENT_NODE
#undef DOM_ATTR_MODIFIED
#undef DOM_CHARACTER_DATA_MODIFIED
#undef DOM_DOMAIN
#undef DOM_NODE_INSERTED
#undef DOM_NODE_INSERTED_INTO_DOCUMENT
#undef DOM_NODE_REMOVED
#undef DOM_NODE_REMOVED_FROM_DOCUMENT
#undef DOM_SUBTREE_MODIFIED
#undef ELEMENT_NODE
#undef ENTITY_REFERENCE_NODE
#undef MODIFICATION
#undef NODE_CLONED
#undef NOT_SUPPORTED_ERR
#undef REMOVAL
#undef TEXT_NODE
#undef TYPE
#undef UNSPECIFIED_EVENT_TYPE_ERR

using $ObjectStreamFieldArray = $Array<::java::io::ObjectStreamField>;
using $AttrImpl = ::com::sun::org::apache::xerces::internal::dom::AttrImpl;
using $ChildNode = ::com::sun::org::apache::xerces::internal::dom::ChildNode;
using $CoreDocumentImpl = ::com::sun::org::apache::xerces::internal::dom::CoreDocumentImpl;
using $DOMImplementationImpl = ::com::sun::org::apache::xerces::internal::dom::DOMImplementationImpl;
using $DOMMessageFormatter = ::com::sun::org::apache::xerces::internal::dom::DOMMessageFormatter;
using $DocumentImpl$EnclosingAttr = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl$EnclosingAttr;
using $DocumentImpl$LEntry = ::com::sun::org::apache::xerces::internal::dom::DocumentImpl$LEntry;
using $LCount = ::com::sun::org::apache::xerces::internal::dom::LCount;
using $NodeImpl = ::com::sun::org::apache::xerces::internal::dom::NodeImpl;
using $NodeIteratorImpl = ::com::sun::org::apache::xerces::internal::dom::NodeIteratorImpl;
using $ParentNode = ::com::sun::org::apache::xerces::internal::dom::ParentNode;
using $RangeImpl = ::com::sun::org::apache::xerces::internal::dom::RangeImpl;
using $TreeWalkerImpl = ::com::sun::org::apache::xerces::internal::dom::TreeWalkerImpl;
using $EventImpl = ::com::sun::org::apache::xerces::internal::dom::events::EventImpl;
using $MutationEventImpl = ::com::sun::org::apache::xerces::internal::dom::events::MutationEventImpl;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectInputStream$GetField = ::java::io::ObjectInputStream$GetField;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ObjectOutputStream$PutField = ::java::io::ObjectOutputStream$PutField;
using $ObjectStreamField = ::java::io::ObjectStreamField;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractCollection = ::java::util::AbstractCollection;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $HashMap = ::java::util::HashMap;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $Vector = ::java::util::Vector;
using $Attr = ::org::w3c::dom::Attr;
using $DOMException = ::org::w3c::dom::DOMException;
using $DOMImplementation = ::org::w3c::dom::DOMImplementation;
using $DocumentType = ::org::w3c::dom::DocumentType;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $UserDataHandler = ::org::w3c::dom::UserDataHandler;
using $Event = ::org::w3c::dom::events::Event;
using $EventException = ::org::w3c::dom::events::EventException;
using $EventListener = ::org::w3c::dom::events::EventListener;
using $EventTarget = ::org::w3c::dom::events::EventTarget;
using $MutationEvent = ::org::w3c::dom::events::MutationEvent;
using $Range = ::org::w3c::dom::ranges::Range;
using $NodeFilter = ::org::w3c::dom::traversal::NodeFilter;
using $NodeIterator = ::org::w3c::dom::traversal::NodeIterator;
using $TreeWalker = ::org::w3c::dom::traversal::TreeWalker;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {

$FieldInfo _DocumentImpl_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(DocumentImpl, serialVersionUID)},
	{"iterators", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/traversal/NodeIterator;>;", $PROTECTED, $field(DocumentImpl, iterators)},
	{"ranges", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/ranges/Range;>;", $PROTECTED, $field(DocumentImpl, ranges)},
	{"eventListeners", "Ljava/util/Map;", "Ljava/util/Map<Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl$LEntry;>;>;", $PROTECTED, $field(DocumentImpl, eventListeners)},
	{"mutationEvents", "Z", nullptr, $PROTECTED, $field(DocumentImpl, mutationEvents)},
	{"serialPersistentFields", "[Ljava/io/ObjectStreamField;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DocumentImpl, serialPersistentFields)},
	{"savedEnclosingAttr", "Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl$EnclosingAttr;", nullptr, 0, $field(DocumentImpl, savedEnclosingAttr)},
	{}
};

$MethodInfo _DocumentImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(DocumentImpl, init$, void)},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(DocumentImpl, init$, void, bool)},
	{"<init>", "(Lorg/w3c/dom/DocumentType;)V", nullptr, $PUBLIC, $method(DocumentImpl, init$, void, $DocumentType*)},
	{"<init>", "(Lorg/w3c/dom/DocumentType;Z)V", nullptr, $PUBLIC, $method(DocumentImpl, init$, void, $DocumentType*, bool)},
	{"addEventListener", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, $PROTECTED, $virtualMethod(DocumentImpl, addEventListener, void, $NodeImpl*, $String*, $EventListener*, bool)},
	{"cloneNode", "(Z)Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(DocumentImpl, cloneNode, $Node*, bool)},
	{"copyEventListeners", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, $PROTECTED, $virtualMethod(DocumentImpl, copyEventListeners, void, $NodeImpl*, $NodeImpl*)},
	{"createEvent", "(Ljava/lang/String;)Lorg/w3c/dom/events/Event;", nullptr, $PUBLIC, $virtualMethod(DocumentImpl, createEvent, $Event*, $String*), "org.w3c.dom.DOMException"},
	{"createNodeIterator", "(Lorg/w3c/dom/Node;SLorg/w3c/dom/traversal/NodeFilter;)Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC, $virtualMethod(DocumentImpl, createNodeIterator, $NodeIterator*, $Node*, int16_t, $NodeFilter*)},
	{"createNodeIterator", "(Lorg/w3c/dom/Node;ILorg/w3c/dom/traversal/NodeFilter;Z)Lorg/w3c/dom/traversal/NodeIterator;", nullptr, $PUBLIC, $virtualMethod(DocumentImpl, createNodeIterator, $NodeIterator*, $Node*, int32_t, $NodeFilter*, bool)},
	{"createRange", "()Lorg/w3c/dom/ranges/Range;", nullptr, $PUBLIC, $virtualMethod(DocumentImpl, createRange, $Range*)},
	{"createTreeWalker", "(Lorg/w3c/dom/Node;SLorg/w3c/dom/traversal/NodeFilter;)Lorg/w3c/dom/traversal/TreeWalker;", nullptr, $PUBLIC, $virtualMethod(DocumentImpl, createTreeWalker, $TreeWalker*, $Node*, int16_t, $NodeFilter*)},
	{"createTreeWalker", "(Lorg/w3c/dom/Node;ILorg/w3c/dom/traversal/NodeFilter;Z)Lorg/w3c/dom/traversal/TreeWalker;", nullptr, $PUBLIC, $virtualMethod(DocumentImpl, createTreeWalker, $TreeWalker*, $Node*, int32_t, $NodeFilter*, bool)},
	{"deletedText", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;II)V", nullptr, 0, $virtualMethod(DocumentImpl, deletedText, void, $NodeImpl*, int32_t, int32_t)},
	{"dispatchAggregateEvents", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl$EnclosingAttr;)V", nullptr, $PROTECTED, $virtualMethod(DocumentImpl, dispatchAggregateEvents, void, $NodeImpl*, $DocumentImpl$EnclosingAttr*)},
	{"dispatchAggregateEvents", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;Ljava/lang/String;S)V", nullptr, $PROTECTED, $virtualMethod(DocumentImpl, dispatchAggregateEvents, void, $NodeImpl*, $AttrImpl*, $String*, int16_t)},
	{"dispatchEvent", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Lorg/w3c/dom/events/Event;)Z", nullptr, $PROTECTED, $virtualMethod(DocumentImpl, dispatchEvent, bool, $NodeImpl*, $Event*)},
	{"dispatchEventToSubtree", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/events/Event;)V", nullptr, $PROTECTED, $virtualMethod(DocumentImpl, dispatchEventToSubtree, void, $Node*, $Event*)},
	{"dispatchingEventToSubtree", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/events/Event;)V", nullptr, $PROTECTED, $virtualMethod(DocumentImpl, dispatchingEventToSubtree, void, $Node*, $Event*)},
	{"getEventListeners", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)Ljava/util/List;", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)Ljava/util/List<Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl$LEntry;>;", $PROTECTED, $virtualMethod(DocumentImpl, getEventListeners, $List*, $NodeImpl*)},
	{"getImplementation", "()Lorg/w3c/dom/DOMImplementation;", nullptr, $PUBLIC, $virtualMethod(DocumentImpl, getImplementation, $DOMImplementation*)},
	{"getMutationEvents", "()Z", nullptr, 0, $virtualMethod(DocumentImpl, getMutationEvents, bool)},
	{"insertedNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Z)V", nullptr, 0, $virtualMethod(DocumentImpl, insertedNode, void, $NodeImpl*, $NodeImpl*, bool)},
	{"insertedText", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;II)V", nullptr, 0, $virtualMethod(DocumentImpl, insertedText, void, $NodeImpl*, int32_t, int32_t)},
	{"insertingNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Z)V", nullptr, 0, $virtualMethod(DocumentImpl, insertingNode, void, $NodeImpl*, bool)},
	{"modifiedAttrValue", "(Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(DocumentImpl, modifiedAttrValue, void, $AttrImpl*, $String*)},
	{"modifiedCharacterData", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;Ljava/lang/String;Z)V", nullptr, 0, $virtualMethod(DocumentImpl, modifiedCharacterData, void, $NodeImpl*, $String*, $String*, bool)},
	{"modifyingCharacterData", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Z)V", nullptr, 0, $virtualMethod(DocumentImpl, modifyingCharacterData, void, $NodeImpl*, bool)},
	{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(DocumentImpl, readObject, void, $ObjectInputStream*), "java.io.IOException,java.lang.ClassNotFoundException"},
	{"removeEventListener", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;Lorg/w3c/dom/events/EventListener;Z)V", nullptr, $PROTECTED, $virtualMethod(DocumentImpl, removeEventListener, void, $NodeImpl*, $String*, $EventListener*, bool)},
	{"removeNodeIterator", "(Lorg/w3c/dom/traversal/NodeIterator;)V", nullptr, 0, $virtualMethod(DocumentImpl, removeNodeIterator, void, $NodeIterator*)},
	{"removeRange", "(Lorg/w3c/dom/ranges/Range;)V", nullptr, 0, $virtualMethod(DocumentImpl, removeRange, void, $Range*)},
	{"removedAttrNode", "(Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(DocumentImpl, removedAttrNode, void, $AttrImpl*, $NodeImpl*, $String*)},
	{"removedNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Z)V", nullptr, 0, $virtualMethod(DocumentImpl, removedNode, void, $NodeImpl*, bool)},
	{"removingNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Z)V", nullptr, 0, $virtualMethod(DocumentImpl, removingNode, void, $NodeImpl*, $NodeImpl*, bool)},
	{"renamedAttrNode", "(Lorg/w3c/dom/Attr;Lorg/w3c/dom/Attr;)V", nullptr, 0, $virtualMethod(DocumentImpl, renamedAttrNode, void, $Attr*, $Attr*)},
	{"renamedElement", "(Lorg/w3c/dom/Element;Lorg/w3c/dom/Element;)V", nullptr, 0, $virtualMethod(DocumentImpl, renamedElement, void, $Element*, $Element*)},
	{"replacedCharacterData", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $virtualMethod(DocumentImpl, replacedCharacterData, void, $NodeImpl*, $String*, $String*)},
	{"replacedNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, 0, $virtualMethod(DocumentImpl, replacedNode, void, $NodeImpl*)},
	{"replacedText", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, 0, $virtualMethod(DocumentImpl, replacedText, void, $NodeImpl*)},
	{"replacingData", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, 0, $virtualMethod(DocumentImpl, replacingData, void, $NodeImpl*)},
	{"replacingNode", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, 0, $virtualMethod(DocumentImpl, replacingNode, void, $NodeImpl*)},
	{"saveEnclosingAttr", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;)V", nullptr, $PROTECTED, $virtualMethod(DocumentImpl, saveEnclosingAttr, void, $NodeImpl*)},
	{"setAttrNode", "(Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;Lcom/sun/org/apache/xerces/internal/dom/AttrImpl;)V", nullptr, 0, $virtualMethod(DocumentImpl, setAttrNode, void, $AttrImpl*, $AttrImpl*)},
	{"setEventListeners", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/util/List;)V", "(Lcom/sun/org/apache/xerces/internal/dom/NodeImpl;Ljava/util/List<Lcom/sun/org/apache/xerces/internal/dom/DocumentImpl$LEntry;>;)V", $PROTECTED, $virtualMethod(DocumentImpl, setEventListeners, void, $NodeImpl*, $List*)},
	{"setMutationEvents", "(Z)V", nullptr, 0, $virtualMethod(DocumentImpl, setMutationEvents, void, bool)},
	{"splitData", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;I)V", nullptr, 0, $virtualMethod(DocumentImpl, splitData, void, $Node*, $Node*, int32_t)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(DocumentImpl, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
	{}
};

$InnerClassInfo _DocumentImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.dom.DocumentImpl$EnclosingAttr", "com.sun.org.apache.xerces.internal.dom.DocumentImpl", "EnclosingAttr", 0},
	{"com.sun.org.apache.xerces.internal.dom.DocumentImpl$LEntry", "com.sun.org.apache.xerces.internal.dom.DocumentImpl", "LEntry", 0},
	{}
};

$ClassInfo _DocumentImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.DocumentImpl",
	"com.sun.org.apache.xerces.internal.dom.CoreDocumentImpl",
	"org.w3c.dom.traversal.DocumentTraversal,org.w3c.dom.events.DocumentEvent,org.w3c.dom.ranges.DocumentRange",
	_DocumentImpl_FieldInfo_,
	_DocumentImpl_MethodInfo_,
	nullptr,
	nullptr,
	_DocumentImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.dom.DocumentImpl$EnclosingAttr,com.sun.org.apache.xerces.internal.dom.DocumentImpl$LEntry"
};

$Object* allocate$DocumentImpl($Class* clazz) {
	return $of($alloc(DocumentImpl));
}

$Object* DocumentImpl::clone() {
	 return this->$CoreDocumentImpl::clone();
}

$String* DocumentImpl::toString() {
	 return this->$CoreDocumentImpl::toString();
}

int32_t DocumentImpl::hashCode() {
	 return this->$CoreDocumentImpl::hashCode();
}

bool DocumentImpl::equals(Object$* arg0) {
	 return this->$CoreDocumentImpl::equals(arg0);
}

void DocumentImpl::finalize() {
	this->$CoreDocumentImpl::finalize();
}

$ObjectStreamFieldArray* DocumentImpl::serialPersistentFields = nullptr;

void DocumentImpl::init$() {
	$CoreDocumentImpl::init$();
	this->mutationEvents = false;
}

void DocumentImpl::init$(bool grammarAccess) {
	$CoreDocumentImpl::init$(grammarAccess);
	this->mutationEvents = false;
}

void DocumentImpl::init$($DocumentType* doctype) {
	$CoreDocumentImpl::init$(doctype);
	this->mutationEvents = false;
}

void DocumentImpl::init$($DocumentType* doctype, bool grammarAccess) {
	$CoreDocumentImpl::init$(doctype, grammarAccess);
	this->mutationEvents = false;
}

$Node* DocumentImpl::cloneNode(bool deep) {
	$var(DocumentImpl, newdoc, $new(DocumentImpl));
	callUserDataHandlers(static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$CoreDocumentImpl*>(this))))), static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$CoreDocumentImpl*>(newdoc))))), $UserDataHandler::NODE_CLONED);
	cloneNode(newdoc, deep);
	newdoc->mutationEvents = this->mutationEvents;
	return static_cast<$Node*>(static_cast<$NodeImpl*>(static_cast<$ChildNode*>(static_cast<$ParentNode*>(static_cast<$CoreDocumentImpl*>(newdoc)))));
}

$DOMImplementation* DocumentImpl::getImplementation() {
	return $DOMImplementationImpl::getDOMImplementation();
}

$NodeIterator* DocumentImpl::createNodeIterator($Node* root, int16_t whatToShow, $NodeFilter* filter) {
	return createNodeIterator(root, whatToShow, filter, true);
}

$NodeIterator* DocumentImpl::createNodeIterator($Node* root, int32_t whatToShow, $NodeFilter* filter, bool entityReferenceExpansion) {
	$useLocalCurrentObjectStackCache();
	if (root == nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
	}
	$var($NodeIterator, iterator, $new($NodeIteratorImpl, this, root, whatToShow, filter, entityReferenceExpansion));
	if (this->iterators == nullptr) {
		$set(this, iterators, $new($ArrayList));
	}
	$nc(this->iterators)->add(iterator);
	return iterator;
}

$TreeWalker* DocumentImpl::createTreeWalker($Node* root, int16_t whatToShow, $NodeFilter* filter) {
	return createTreeWalker(root, whatToShow, filter, true);
}

$TreeWalker* DocumentImpl::createTreeWalker($Node* root, int32_t whatToShow, $NodeFilter* filter, bool entityReferenceExpansion) {
	if (root == nullptr) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
	}
	return $new($TreeWalkerImpl, root, whatToShow, filter, entityReferenceExpansion);
}

void DocumentImpl::removeNodeIterator($NodeIterator* nodeIterator) {
	if (nodeIterator == nullptr) {
		return;
	}
	if (this->iterators == nullptr) {
		return;
	}
	$nc(this->iterators)->remove($of(nodeIterator));
}

$Range* DocumentImpl::createRange() {
	if (this->ranges == nullptr) {
		$set(this, ranges, $new($ArrayList));
	}
	$var($Range, range, $new($RangeImpl, this));
	$nc(this->ranges)->add(range);
	return range;
}

void DocumentImpl::removeRange($Range* range) {
	if (range == nullptr) {
		return;
	}
	if (this->ranges == nullptr) {
		return;
	}
	$nc(this->ranges)->remove($of(range));
}

void DocumentImpl::replacedText($NodeImpl* node) {
	$useLocalCurrentObjectStackCache();
	if (this->ranges != nullptr) {
		int32_t size = $nc(this->ranges)->size();
		for (int32_t i = 0; i != size; ++i) {
			$nc(($cast($RangeImpl, $($nc(this->ranges)->get(i)))))->receiveReplacedText(node);
		}
	}
}

void DocumentImpl::deletedText($NodeImpl* node, int32_t offset, int32_t count) {
	$useLocalCurrentObjectStackCache();
	if (this->ranges != nullptr) {
		int32_t size = $nc(this->ranges)->size();
		for (int32_t i = 0; i != size; ++i) {
			$nc(($cast($RangeImpl, $($nc(this->ranges)->get(i)))))->receiveDeletedText(node, offset, count);
		}
	}
}

void DocumentImpl::insertedText($NodeImpl* node, int32_t offset, int32_t count) {
	$useLocalCurrentObjectStackCache();
	if (this->ranges != nullptr) {
		int32_t size = $nc(this->ranges)->size();
		for (int32_t i = 0; i != size; ++i) {
			$nc(($cast($RangeImpl, $($nc(this->ranges)->get(i)))))->receiveInsertedText(node, offset, count);
		}
	}
}

void DocumentImpl::splitData($Node* node, $Node* newNode, int32_t offset) {
	$useLocalCurrentObjectStackCache();
	if (this->ranges != nullptr) {
		int32_t size = $nc(this->ranges)->size();
		for (int32_t i = 0; i != size; ++i) {
			$nc(($cast($RangeImpl, $($nc(this->ranges)->get(i)))))->receiveSplitData(node, newNode, offset);
		}
	}
}

$Event* DocumentImpl::createEvent($String* type) {
	bool var$0 = $nc(type)->equalsIgnoreCase("Events"_s);
	if (var$0 || "Event"_s->equals(type)) {
		return $new($EventImpl);
	}
	bool var$1 = $nc(type)->equalsIgnoreCase("MutationEvents"_s);
	if (var$1 || "MutationEvent"_s->equals(type)) {
		return static_cast<$Event*>(static_cast<$EventImpl*>($new($MutationEventImpl)));
	} else {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "NOT_SUPPORTED_ERR"_s, nullptr));
		$throwNew($DOMException, $DOMException::NOT_SUPPORTED_ERR, msg);
	}
}

void DocumentImpl::setMutationEvents(bool set) {
	this->mutationEvents = set;
}

bool DocumentImpl::getMutationEvents() {
	return this->mutationEvents;
}

void DocumentImpl::setEventListeners($NodeImpl* n, $List* listeners) {
	if (this->eventListeners == nullptr) {
		$set(this, eventListeners, $new($HashMap));
	}
	if (listeners == nullptr) {
		$nc(this->eventListeners)->remove(n);
		if ($nc(this->eventListeners)->isEmpty()) {
			this->mutationEvents = false;
		}
	} else {
		$nc(this->eventListeners)->put(n, listeners);
		this->mutationEvents = true;
	}
}

$List* DocumentImpl::getEventListeners($NodeImpl* n) {
	if (this->eventListeners == nullptr) {
		return nullptr;
	}
	return $cast($List, $nc(this->eventListeners)->get(n));
}

void DocumentImpl::addEventListener($NodeImpl* node, $String* type, $EventListener* listener, bool useCapture) {
	$useLocalCurrentObjectStackCache();
	if (type == nullptr || $nc(type)->equals(""_s) || listener == nullptr) {
		return;
	}
	removeEventListener(node, type, listener, useCapture);
	$var($List, nodeListeners, getEventListeners(node));
	if (nodeListeners == nullptr) {
		$assign(nodeListeners, $new($ArrayList));
		setEventListeners(node, nodeListeners);
	}
	$nc(nodeListeners)->add($$new($DocumentImpl$LEntry, this, type, listener, useCapture));
	$var($LCount, lc, $LCount::lookup(type));
	if (useCapture) {
		++$nc(lc)->captures;
		++lc->total;
	} else {
		++$nc(lc)->bubbles;
		++lc->total;
	}
}

void DocumentImpl::removeEventListener($NodeImpl* node, $String* type, $EventListener* listener, bool useCapture) {
	$useLocalCurrentObjectStackCache();
	if (type == nullptr || $nc(type)->equals(""_s) || listener == nullptr) {
		return;
	}
	$var($List, nodeListeners, getEventListeners(node));
	if (nodeListeners == nullptr) {
		return;
	}
	for (int32_t i = $nc(nodeListeners)->size() - 1; i >= 0; --i) {
		$var($DocumentImpl$LEntry, le, $cast($DocumentImpl$LEntry, nodeListeners->get(i)));
		if ($nc(le)->useCapture == useCapture && le->listener == listener && $nc(le->type)->equals(type)) {
			nodeListeners->remove(i);
			if (nodeListeners->isEmpty()) {
				setEventListeners(node, nullptr);
			}
			$var($LCount, lc, $LCount::lookup(type));
			if (useCapture) {
				--$nc(lc)->captures;
				--lc->total;
			} else {
				--$nc(lc)->bubbles;
				--lc->total;
			}
			break;
		}
	}
}

void DocumentImpl::copyEventListeners($NodeImpl* src, $NodeImpl* tgt) {
	$useLocalCurrentObjectStackCache();
	$var($List, nodeListeners, getEventListeners(src));
	if (nodeListeners == nullptr) {
		return;
	}
	setEventListeners(tgt, $$new($ArrayList, static_cast<$Collection*>(nodeListeners)));
}

bool DocumentImpl::dispatchEvent($NodeImpl* node, $Event* event) {
	$useLocalCurrentObjectStackCache();
	if (event == nullptr) {
		return false;
	}
	$var($EventImpl, evt, $cast($EventImpl, event));
	if (!$nc(evt)->initialized || $nc(evt)->type == nullptr || $nc($nc(evt)->type)->equals(""_s)) {
		$init($DOMMessageFormatter);
		$var($String, msg, $DOMMessageFormatter::formatMessage($DOMMessageFormatter::DOM_DOMAIN, "UNSPECIFIED_EVENT_TYPE_ERR"_s, nullptr));
		$throwNew($EventException, $EventException::UNSPECIFIED_EVENT_TYPE_ERR, msg);
	}
	$var($LCount, lc, $LCount::lookup($($nc(evt)->getType())));
	if ($nc(lc)->total == 0) {
		return $nc(evt)->preventDefault$;
	}
	$set($nc(evt), target, node);
	evt->stopPropagation$ = false;
	evt->preventDefault$ = false;
	$var($List, pv, $new($ArrayList, 10));
	$var($Node, p, node);
	$var($Node, n, $nc(p)->getParentNode());
	while (n != nullptr) {
		pv->add(n);
		$assign(p, n);
		$assign(n, n->getParentNode());
	}
	if ($nc(lc)->captures > 0) {
		evt->eventPhase = $Event::CAPTURING_PHASE;
		for (int32_t j = pv->size() - 1; j >= 0; --j) {
			if (evt->stopPropagation$) {
				break;
			}
			$var($NodeImpl, nn, $cast($NodeImpl, pv->get(j)));
			$set(evt, currentTarget, nn);
			$var($ArrayList, nodeListeners, $cast($ArrayList, getEventListeners(nn)));
			if (nodeListeners != nullptr) {
				$var($List, nl, $cast($ArrayList, nodeListeners->clone()));
				int32_t nlsize = $nc(nl)->size();
				for (int32_t i = 0; i < nlsize; ++i) {
					$var($DocumentImpl$LEntry, le, $cast($DocumentImpl$LEntry, nl->get(i)));
					bool var$0 = $nc(le)->useCapture && $nc(le->type)->equals(evt->type);
					if (var$0 && nodeListeners->contains(le)) {
						try {
							$nc(le->listener)->handleEvent(evt);
						} catch ($Exception& e) {
						}
					}
				}
			}
		}
	}
	if ($nc(lc)->bubbles > 0) {
		evt->eventPhase = $Event::AT_TARGET;
		$set(evt, currentTarget, node);
		$var($ArrayList, nodeListeners, $cast($ArrayList, getEventListeners(node)));
		if (!evt->stopPropagation$ && nodeListeners != nullptr) {
			$var($List, nl, $cast($ArrayList, nodeListeners->clone()));
			int32_t nlsize = $nc(nl)->size();
			for (int32_t i = 0; i < nlsize; ++i) {
				$var($DocumentImpl$LEntry, le, $cast($DocumentImpl$LEntry, nl->get(i)));
				bool var$1 = !$nc(le)->useCapture && $nc(le->type)->equals(evt->type);
				if (var$1 && nodeListeners->contains(le)) {
					try {
						$nc(le->listener)->handleEvent(evt);
					} catch ($Exception& e) {
					}
				}
			}
		}
		if (evt->bubbles) {
			evt->eventPhase = $Event::BUBBLING_PHASE;
			int32_t pvsize = pv->size();
			for (int32_t j = 0; j < pvsize; ++j) {
				if (evt->stopPropagation$) {
					break;
				}
				$var($NodeImpl, nn, $cast($NodeImpl, pv->get(j)));
				$set(evt, currentTarget, nn);
				$assign(nodeListeners, $cast($ArrayList, getEventListeners(nn)));
				if (nodeListeners != nullptr) {
					$var($List, nl, $cast($ArrayList, nodeListeners->clone()));
					int32_t nlsize = $nc(nl)->size();
					for (int32_t i = 0; i < nlsize; ++i) {
						$var($DocumentImpl$LEntry, le, $cast($DocumentImpl$LEntry, nl->get(i)));
						bool var$2 = !$nc(le)->useCapture && $nc(le->type)->equals(evt->type);
						if (var$2 && nodeListeners->contains(le)) {
							try {
								$nc(le->listener)->handleEvent(evt);
							} catch ($Exception& e) {
							}
						}
					}
				}
			}
		}
	}
	if ($nc(lc)->defaults > 0 && (!evt->cancelable || !evt->preventDefault$)) {
	}
	return evt->preventDefault$;
}

void DocumentImpl::dispatchEventToSubtree($Node* n, $Event* e) {
	$useLocalCurrentObjectStackCache();
	$nc(($cast($NodeImpl, n)))->dispatchEvent(e);
	if ($nc(n)->getNodeType() == $Node::ELEMENT_NODE) {
		$var($NamedNodeMap, a, n->getAttributes());
		for (int32_t i = $nc(a)->getLength() - 1; i >= 0; --i) {
			dispatchingEventToSubtree($(a->item(i)), e);
		}
	}
	dispatchingEventToSubtree($($nc(n)->getFirstChild()), e);
}

void DocumentImpl::dispatchingEventToSubtree($Node* n, $Event* e) {
	$useLocalCurrentObjectStackCache();
	if (n == nullptr) {
		return;
	}
	$nc(($cast($NodeImpl, n)))->dispatchEvent(e);
	if ($nc(n)->getNodeType() == $Node::ELEMENT_NODE) {
		$var($NamedNodeMap, a, n->getAttributes());
		for (int32_t i = $nc(a)->getLength() - 1; i >= 0; --i) {
			dispatchingEventToSubtree($(a->item(i)), e);
		}
	}
	dispatchingEventToSubtree($($nc(n)->getFirstChild()), e);
	dispatchingEventToSubtree($($nc(n)->getNextSibling()), e);
}

void DocumentImpl::dispatchAggregateEvents($NodeImpl* node, $DocumentImpl$EnclosingAttr* ea) {
	if (ea != nullptr) {
		dispatchAggregateEvents(node, ea->node, ea->oldvalue, $MutationEvent::MODIFICATION);
	} else {
		dispatchAggregateEvents(node, nullptr, nullptr, (int16_t)0);
	}
}

void DocumentImpl::dispatchAggregateEvents($NodeImpl* node, $AttrImpl* enclosingAttr, $String* oldvalue, int16_t change) {
	$useLocalCurrentObjectStackCache();
	$var($NodeImpl, owner, nullptr);
	if (enclosingAttr != nullptr) {
		$init($MutationEventImpl);
		$var($LCount, lc, $LCount::lookup($MutationEventImpl::DOM_ATTR_MODIFIED));
		$assign(owner, $cast($NodeImpl, enclosingAttr->getOwnerElement()));
		if ($nc(lc)->total > 0) {
			if (owner != nullptr) {
				$var($MutationEventImpl, me, $new($MutationEventImpl));
				$var($String, var$0, $MutationEventImpl::DOM_ATTR_MODIFIED);
				$var($Node, var$1, static_cast<$Node*>(static_cast<$NodeImpl*>(enclosingAttr)));
				$var($String, var$2, oldvalue);
				$var($String, var$3, enclosingAttr->getNodeValue());
				me->initMutationEvent(var$0, true, false, var$1, var$2, var$3, $(enclosingAttr->getNodeName()), change);
				owner->dispatchEvent(static_cast<$Event*>(static_cast<$EventImpl*>(me)));
			}
		}
	}
	$init($MutationEventImpl);
	$var($LCount, lc, $LCount::lookup($MutationEventImpl::DOM_SUBTREE_MODIFIED));
	if ($nc(lc)->total > 0) {
		$var($MutationEvent, me, $new($MutationEventImpl));
		me->initMutationEvent($MutationEventImpl::DOM_SUBTREE_MODIFIED, true, false, nullptr, nullptr, nullptr, nullptr, (int16_t)0);
		if (enclosingAttr != nullptr) {
			dispatchEvent(enclosingAttr, me);
			if (owner != nullptr) {
				dispatchEvent(owner, me);
			}
		} else {
			dispatchEvent(node, me);
		}
	}
}

void DocumentImpl::saveEnclosingAttr($NodeImpl* node) {
	$useLocalCurrentObjectStackCache();
	$set(this, savedEnclosingAttr, nullptr);
	$init($MutationEventImpl);
	$var($LCount, lc, $LCount::lookup($MutationEventImpl::DOM_ATTR_MODIFIED));
	if ($nc(lc)->total > 0) {
		$var($NodeImpl, eventAncestor, node);
		while (true) {
			if (eventAncestor == nullptr) {
				return;
			}
			int32_t type = $nc(eventAncestor)->getNodeType();
			if (type == $Node::ATTRIBUTE_NODE) {
				$var($DocumentImpl$EnclosingAttr, retval, $new($DocumentImpl$EnclosingAttr, this));
				$set(retval, node, $cast($AttrImpl, eventAncestor));
				$set(retval, oldvalue, $nc(retval->node)->getNodeValue());
				$set(this, savedEnclosingAttr, retval);
				return;
			} else if (type == $Node::ENTITY_REFERENCE_NODE) {
				$assign(eventAncestor, eventAncestor->parentNode());
			} else if (type == $Node::TEXT_NODE) {
				$assign(eventAncestor, eventAncestor->parentNode());
			} else {
				return;
			}
		}
	}
}

void DocumentImpl::modifyingCharacterData($NodeImpl* node, bool replace) {
	if (this->mutationEvents) {
		if (!replace) {
			saveEnclosingAttr(node);
		}
	}
}

void DocumentImpl::modifiedCharacterData($NodeImpl* node, $String* oldvalue, $String* value, bool replace) {
	$useLocalCurrentObjectStackCache();
	if (this->mutationEvents) {
		if (!replace) {
			$init($MutationEventImpl);
			$var($LCount, lc, $LCount::lookup($MutationEventImpl::DOM_CHARACTER_DATA_MODIFIED));
			if ($nc(lc)->total > 0) {
				$var($MutationEvent, me, $new($MutationEventImpl));
				me->initMutationEvent($MutationEventImpl::DOM_CHARACTER_DATA_MODIFIED, true, false, nullptr, oldvalue, value, nullptr, (int16_t)0);
				dispatchEvent(node, me);
			}
			dispatchAggregateEvents(node, this->savedEnclosingAttr);
		}
	}
}

void DocumentImpl::replacedCharacterData($NodeImpl* node, $String* oldvalue, $String* value) {
	modifiedCharacterData(node, oldvalue, value, false);
}

void DocumentImpl::insertingNode($NodeImpl* node, bool replace) {
	if (this->mutationEvents) {
		if (!replace) {
			saveEnclosingAttr(node);
		}
	}
}

void DocumentImpl::insertedNode($NodeImpl* node, $NodeImpl* newInternal, bool replace) {
	$useLocalCurrentObjectStackCache();
	if (this->mutationEvents) {
		$init($MutationEventImpl);
		$var($LCount, lc, $LCount::lookup($MutationEventImpl::DOM_NODE_INSERTED));
		if ($nc(lc)->total > 0) {
			$var($MutationEventImpl, me, $new($MutationEventImpl));
			me->initMutationEvent($MutationEventImpl::DOM_NODE_INSERTED, true, false, node, nullptr, nullptr, nullptr, (int16_t)0);
			dispatchEvent(newInternal, static_cast<$Event*>(static_cast<$EventImpl*>(me)));
		}
		$assign(lc, $LCount::lookup($MutationEventImpl::DOM_NODE_INSERTED_INTO_DOCUMENT));
		if ($nc(lc)->total > 0) {
			$var($NodeImpl, eventAncestor, node);
			if (this->savedEnclosingAttr != nullptr) {
				$assign(eventAncestor, $cast($NodeImpl, $nc($nc(this->savedEnclosingAttr)->node)->getOwnerElement()));
			}
			if (eventAncestor != nullptr) {
				$var($NodeImpl, p, eventAncestor);
				while (p != nullptr) {
					$assign(eventAncestor, p);
					if (p->getNodeType() == $Node::ATTRIBUTE_NODE) {
						$assign(p, $cast($NodeImpl, $nc(($cast($AttrImpl, p)))->getOwnerElement()));
					} else {
						$assign(p, p->parentNode());
					}
				}
				if (eventAncestor->getNodeType() == $Node::DOCUMENT_NODE) {
					$var($MutationEventImpl, me, $new($MutationEventImpl));
					me->initMutationEvent($MutationEventImpl::DOM_NODE_INSERTED_INTO_DOCUMENT, false, false, nullptr, nullptr, nullptr, nullptr, (int16_t)0);
					dispatchEventToSubtree(newInternal, static_cast<$Event*>(static_cast<$EventImpl*>(me)));
				}
			}
		}
		if (!replace) {
			dispatchAggregateEvents(node, this->savedEnclosingAttr);
		}
	}
	if (this->ranges != nullptr) {
		int32_t size = $nc(this->ranges)->size();
		for (int32_t i = 0; i != size; ++i) {
			$nc(($cast($RangeImpl, $($nc(this->ranges)->get(i)))))->insertedNodeFromDOM(newInternal);
		}
	}
}

void DocumentImpl::removingNode($NodeImpl* node, $NodeImpl* oldChild, bool replace) {
	$useLocalCurrentObjectStackCache();
	if (this->iterators != nullptr) {
		int32_t size = $nc(this->iterators)->size();
		for (int32_t i = 0; i != size; ++i) {
			$nc(($cast($NodeIteratorImpl, $($nc(this->iterators)->get(i)))))->removeNode(oldChild);
		}
	}
	if (this->ranges != nullptr) {
		int32_t size = $nc(this->ranges)->size();
		for (int32_t i = 0; i != size; ++i) {
			$nc(($cast($RangeImpl, $($nc(this->ranges)->get(i)))))->removeNode(oldChild);
		}
	}
	if (this->mutationEvents) {
		if (!replace) {
			saveEnclosingAttr(node);
		}
		$init($MutationEventImpl);
		$var($LCount, lc, $LCount::lookup($MutationEventImpl::DOM_NODE_REMOVED));
		if ($nc(lc)->total > 0) {
			$var($MutationEventImpl, me, $new($MutationEventImpl));
			me->initMutationEvent($MutationEventImpl::DOM_NODE_REMOVED, true, false, node, nullptr, nullptr, nullptr, (int16_t)0);
			dispatchEvent(oldChild, static_cast<$Event*>(static_cast<$EventImpl*>(me)));
		}
		$assign(lc, $LCount::lookup($MutationEventImpl::DOM_NODE_REMOVED_FROM_DOCUMENT));
		if ($nc(lc)->total > 0) {
			$var($NodeImpl, eventAncestor, this);
			if (this->savedEnclosingAttr != nullptr) {
				$assign(eventAncestor, $cast($NodeImpl, $nc($nc(this->savedEnclosingAttr)->node)->getOwnerElement()));
			}
			if (eventAncestor != nullptr) {
				{
					$var($NodeImpl, p, eventAncestor->parentNode());
					for (; p != nullptr; $assign(p, $nc(p)->parentNode())) {
						$assign(eventAncestor, p);
					}
				}
				if ($nc(eventAncestor)->getNodeType() == $Node::DOCUMENT_NODE) {
					$var($MutationEventImpl, me, $new($MutationEventImpl));
					me->initMutationEvent($MutationEventImpl::DOM_NODE_REMOVED_FROM_DOCUMENT, false, false, nullptr, nullptr, nullptr, nullptr, (int16_t)0);
					dispatchEventToSubtree(oldChild, static_cast<$Event*>(static_cast<$EventImpl*>(me)));
				}
			}
		}
	}
}

void DocumentImpl::removedNode($NodeImpl* node, bool replace) {
	if (this->mutationEvents) {
		if (!replace) {
			dispatchAggregateEvents(node, this->savedEnclosingAttr);
		}
	}
}

void DocumentImpl::replacingNode($NodeImpl* node) {
	if (this->mutationEvents) {
		saveEnclosingAttr(node);
	}
}

void DocumentImpl::replacingData($NodeImpl* node) {
	if (this->mutationEvents) {
		saveEnclosingAttr(node);
	}
}

void DocumentImpl::replacedNode($NodeImpl* node) {
	if (this->mutationEvents) {
		dispatchAggregateEvents(node, this->savedEnclosingAttr);
	}
}

void DocumentImpl::modifiedAttrValue($AttrImpl* attr, $String* oldvalue) {
	if (this->mutationEvents) {
		dispatchAggregateEvents(attr, attr, oldvalue, $MutationEvent::MODIFICATION);
	}
}

void DocumentImpl::setAttrNode($AttrImpl* attr, $AttrImpl* previous) {
	if (this->mutationEvents) {
		if (previous == nullptr) {
			dispatchAggregateEvents($nc(attr)->ownerNode, attr, nullptr, $MutationEvent::ADDITION);
		} else {
			dispatchAggregateEvents($nc(attr)->ownerNode, attr, $($nc(previous)->getNodeValue()), $MutationEvent::MODIFICATION);
		}
	}
}

void DocumentImpl::removedAttrNode($AttrImpl* attr, $NodeImpl* oldOwner, $String* name) {
	$useLocalCurrentObjectStackCache();
	if (this->mutationEvents) {
		$init($MutationEventImpl);
		$var($LCount, lc, $LCount::lookup($MutationEventImpl::DOM_ATTR_MODIFIED));
		if ($nc(lc)->total > 0) {
			$var($MutationEventImpl, me, $new($MutationEventImpl));
			me->initMutationEvent($MutationEventImpl::DOM_ATTR_MODIFIED, true, false, static_cast<$Node*>(static_cast<$NodeImpl*>(attr)), $($nc(attr)->getNodeValue()), nullptr, name, $MutationEvent::REMOVAL);
			dispatchEvent(oldOwner, static_cast<$Event*>(static_cast<$EventImpl*>(me)));
		}
		dispatchAggregateEvents(oldOwner, nullptr, nullptr, (int16_t)0);
	}
}

void DocumentImpl::renamedAttrNode($Attr* oldAt, $Attr* newAt) {
}

void DocumentImpl::renamedElement($Element* oldEl, $Element* newEl) {
}

void DocumentImpl::writeObject($ObjectOutputStream* out) {
	$useLocalCurrentObjectStackCache();
	$var($Vector, it, (this->iterators == nullptr) ? ($Vector*)nullptr : $new($Vector, static_cast<$Collection*>(this->iterators)));
	$var($Vector, r, (this->ranges == nullptr) ? ($Vector*)nullptr : $new($Vector, static_cast<$Collection*>(this->ranges)));
	$var($Hashtable, el, nullptr);
	if (this->eventListeners != nullptr) {
		$assign(el, $new($Hashtable));
		{
			$var($Iterator, i$, $nc($($nc(this->eventListeners)->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					$var($Object, var$0, $cast($NodeImpl, $nc(e)->getKey()));
					el->put(var$0, $$new($Vector, $cast($Collection, $(e->getValue()))));
				}
			}
		}
	}
	$var($ObjectOutputStream$PutField, pf, $nc(out)->putFields());
	$nc(pf)->put("iterators"_s, $of(it));
	pf->put("ranges"_s, $of(r));
	pf->put("eventListeners"_s, $of(el));
	pf->put("mutationEvents"_s, this->mutationEvents);
	out->writeFields();
}

void DocumentImpl::readObject($ObjectInputStream* in) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectInputStream$GetField, gf, $nc(in)->readFields());
	$var($Vector, it, $cast($Vector, $nc(gf)->get("iterators"_s, ($Object*)nullptr)));
	$var($Vector, r, $cast($Vector, gf->get("ranges"_s, ($Object*)nullptr)));
	$var($Hashtable, el, $cast($Hashtable, gf->get("eventListeners"_s, ($Object*)nullptr)));
	this->mutationEvents = gf->get("mutationEvents"_s, false);
	if (it != nullptr) {
		$set(this, iterators, $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(it)))));
	}
	if (r != nullptr) {
		$set(this, ranges, $new($ArrayList, static_cast<$Collection*>(static_cast<$AbstractCollection*>(static_cast<$AbstractList*>(r)))));
	}
	if (el != nullptr) {
		$set(this, eventListeners, $new($HashMap));
		{
			$var($Iterator, i$, $nc($(el->entrySet()))->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Map$Entry, e, $cast($Map$Entry, i$->next()));
				{
					$var($Object, var$0, $cast($NodeImpl, $nc(e)->getKey()));
					$nc(this->eventListeners)->put(var$0, $$new($ArrayList, $cast($Collection, $(e->getValue()))));
				}
			}
		}
	}
}

void clinit$DocumentImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$load($Vector);
	$load($Hashtable);
	$init($Boolean);
	$assignStatic(DocumentImpl::serialPersistentFields, $new($ObjectStreamFieldArray, {
		$$new($ObjectStreamField, "iterators"_s, $Vector::class$),
		$$new($ObjectStreamField, "ranges"_s, $Vector::class$),
		$$new($ObjectStreamField, "eventListeners"_s, $Hashtable::class$),
		$$new($ObjectStreamField, "mutationEvents"_s, $Boolean::TYPE)
	}));
}

DocumentImpl::DocumentImpl() {
}

$Class* DocumentImpl::load$($String* name, bool initialize) {
	$loadClass(DocumentImpl, name, initialize, &_DocumentImpl_ClassInfo_, clinit$DocumentImpl, allocate$DocumentImpl);
	return class$;
}

$Class* DocumentImpl::class$ = nullptr;

						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
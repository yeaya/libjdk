#include <com/sun/org/apache/xerces/internal/dom/events/MutationEventImpl.h>

#include <com/sun/org/apache/xerces/internal/dom/events/EventImpl.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/events/EventTarget.h>
#include <jcpp.h>

#undef DOM_ATTR_MODIFIED
#undef DOM_CHARACTER_DATA_MODIFIED
#undef DOM_NODE_INSERTED
#undef DOM_NODE_INSERTED_INTO_DOCUMENT
#undef DOM_NODE_REMOVED
#undef DOM_NODE_REMOVED_FROM_DOCUMENT
#undef DOM_SUBTREE_MODIFIED

using $EventImpl = ::com::sun::org::apache::xerces::internal::dom::events::EventImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;
using $EventTarget = ::org::w3c::dom::events::EventTarget;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							namespace events {

$FieldInfo _MutationEventImpl_FieldInfo_[] = {
	{"relatedNode", "Lorg/w3c/dom/Node;", nullptr, 0, $field(MutationEventImpl, relatedNode)},
	{"prevValue", "Ljava/lang/String;", nullptr, 0, $field(MutationEventImpl, prevValue)},
	{"newValue", "Ljava/lang/String;", nullptr, 0, $field(MutationEventImpl, newValue)},
	{"attrName", "Ljava/lang/String;", nullptr, 0, $field(MutationEventImpl, attrName)},
	{"attrChange", "S", nullptr, $PUBLIC, $field(MutationEventImpl, attrChange)},
	{"DOM_SUBTREE_MODIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MutationEventImpl, DOM_SUBTREE_MODIFIED)},
	{"DOM_NODE_INSERTED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MutationEventImpl, DOM_NODE_INSERTED)},
	{"DOM_NODE_REMOVED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MutationEventImpl, DOM_NODE_REMOVED)},
	{"DOM_NODE_REMOVED_FROM_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MutationEventImpl, DOM_NODE_REMOVED_FROM_DOCUMENT)},
	{"DOM_NODE_INSERTED_INTO_DOCUMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MutationEventImpl, DOM_NODE_INSERTED_INTO_DOCUMENT)},
	{"DOM_ATTR_MODIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MutationEventImpl, DOM_ATTR_MODIFIED)},
	{"DOM_CHARACTER_DATA_MODIFIED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MutationEventImpl, DOM_CHARACTER_DATA_MODIFIED)},
	{}
};

$MethodInfo _MutationEventImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getBubbles", "()Z", nullptr, $PUBLIC},
	{"*getCancelable", "()Z", nullptr, $PUBLIC},
	{"*getCurrentTarget", "()Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC},
	{"*getEventPhase", "()S", nullptr, $PUBLIC},
	{"*getTarget", "()Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC},
	{"*getTimeStamp", "()J", nullptr, $PUBLIC},
	{"*getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(MutationEventImpl, init$, void)},
	{"getAttrChange", "()S", nullptr, $PUBLIC, $virtualMethod(MutationEventImpl, getAttrChange, int16_t)},
	{"getAttrName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MutationEventImpl, getAttrName, $String*)},
	{"getNewValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MutationEventImpl, getNewValue, $String*)},
	{"getPrevValue", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MutationEventImpl, getPrevValue, $String*)},
	{"getRelatedNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $virtualMethod(MutationEventImpl, getRelatedNode, $Node*)},
	{"*initEvent", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC},
	{"initMutationEvent", "(Ljava/lang/String;ZZLorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;S)V", nullptr, $PUBLIC, $virtualMethod(MutationEventImpl, initMutationEvent, void, $String*, bool, bool, $Node*, $String*, $String*, $String*, int16_t)},
	{"*stopPropagation", "()V", nullptr, $PUBLIC},
	{"*preventDefault", "()V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MutationEventImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.events.MutationEventImpl",
	"com.sun.org.apache.xerces.internal.dom.events.EventImpl",
	"org.w3c.dom.events.MutationEvent",
	_MutationEventImpl_FieldInfo_,
	_MutationEventImpl_MethodInfo_
};

$Object* allocate$MutationEventImpl($Class* clazz) {
	return $of($alloc(MutationEventImpl));
}

void MutationEventImpl::initEvent($String* eventTypeArg, bool canBubbleArg, bool cancelableArg) {
	this->$EventImpl::initEvent(eventTypeArg, canBubbleArg, cancelableArg);
}

bool MutationEventImpl::getBubbles() {
	 return this->$EventImpl::getBubbles();
}

bool MutationEventImpl::getCancelable() {
	 return this->$EventImpl::getCancelable();
}

$EventTarget* MutationEventImpl::getCurrentTarget() {
	 return this->$EventImpl::getCurrentTarget();
}

int16_t MutationEventImpl::getEventPhase() {
	 return this->$EventImpl::getEventPhase();
}

$EventTarget* MutationEventImpl::getTarget() {
	 return this->$EventImpl::getTarget();
}

$String* MutationEventImpl::getType() {
	 return this->$EventImpl::getType();
}

int64_t MutationEventImpl::getTimeStamp() {
	 return this->$EventImpl::getTimeStamp();
}

void MutationEventImpl::stopPropagation() {
	this->$EventImpl::stopPropagation();
}

void MutationEventImpl::preventDefault() {
	this->$EventImpl::preventDefault();
}

int32_t MutationEventImpl::hashCode() {
	 return this->$EventImpl::hashCode();
}

bool MutationEventImpl::equals(Object$* arg0) {
	 return this->$EventImpl::equals(arg0);
}

$Object* MutationEventImpl::clone() {
	 return this->$EventImpl::clone();
}

$String* MutationEventImpl::toString() {
	 return this->$EventImpl::toString();
}

void MutationEventImpl::finalize() {
	this->$EventImpl::finalize();
}

$String* MutationEventImpl::DOM_SUBTREE_MODIFIED = nullptr;
$String* MutationEventImpl::DOM_NODE_INSERTED = nullptr;
$String* MutationEventImpl::DOM_NODE_REMOVED = nullptr;
$String* MutationEventImpl::DOM_NODE_REMOVED_FROM_DOCUMENT = nullptr;
$String* MutationEventImpl::DOM_NODE_INSERTED_INTO_DOCUMENT = nullptr;
$String* MutationEventImpl::DOM_ATTR_MODIFIED = nullptr;
$String* MutationEventImpl::DOM_CHARACTER_DATA_MODIFIED = nullptr;

void MutationEventImpl::init$() {
	$EventImpl::init$();
	$set(this, relatedNode, nullptr);
	$set(this, prevValue, nullptr);
	$set(this, newValue, nullptr);
	$set(this, attrName, nullptr);
}

$String* MutationEventImpl::getAttrName() {
	return this->attrName;
}

int16_t MutationEventImpl::getAttrChange() {
	return this->attrChange;
}

$String* MutationEventImpl::getNewValue() {
	return this->newValue;
}

$String* MutationEventImpl::getPrevValue() {
	return this->prevValue;
}

$Node* MutationEventImpl::getRelatedNode() {
	return this->relatedNode;
}

void MutationEventImpl::initMutationEvent($String* typeArg, bool canBubbleArg, bool cancelableArg, $Node* relatedNodeArg, $String* prevValueArg, $String* newValueArg, $String* attrNameArg, int16_t attrChangeArg) {
	$set(this, relatedNode, relatedNodeArg);
	$set(this, prevValue, prevValueArg);
	$set(this, newValue, newValueArg);
	$set(this, attrName, attrNameArg);
	this->attrChange = attrChangeArg;
	$EventImpl::initEvent(typeArg, canBubbleArg, cancelableArg);
}

MutationEventImpl::MutationEventImpl() {
}

void clinit$MutationEventImpl($Class* class$) {
	$assignStatic(MutationEventImpl::DOM_SUBTREE_MODIFIED, "DOMSubtreeModified"_s);
	$assignStatic(MutationEventImpl::DOM_NODE_INSERTED, "DOMNodeInserted"_s);
	$assignStatic(MutationEventImpl::DOM_NODE_REMOVED, "DOMNodeRemoved"_s);
	$assignStatic(MutationEventImpl::DOM_NODE_REMOVED_FROM_DOCUMENT, "DOMNodeRemovedFromDocument"_s);
	$assignStatic(MutationEventImpl::DOM_NODE_INSERTED_INTO_DOCUMENT, "DOMNodeInsertedIntoDocument"_s);
	$assignStatic(MutationEventImpl::DOM_ATTR_MODIFIED, "DOMAttrModified"_s);
	$assignStatic(MutationEventImpl::DOM_CHARACTER_DATA_MODIFIED, "DOMCharacterDataModified"_s);
}

$Class* MutationEventImpl::load$($String* name, bool initialize) {
	$loadClass(MutationEventImpl, name, initialize, &_MutationEventImpl_ClassInfo_, clinit$MutationEventImpl, allocate$MutationEventImpl);
	return class$;
}

$Class* MutationEventImpl::class$ = nullptr;

							} // events
						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
#include <com/sun/org/apache/xerces/internal/dom/events/EventImpl.h>

#include <org/w3c/dom/events/EventTarget.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventTarget = ::org::w3c::dom::events::EventTarget;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace dom {
							namespace events {

$FieldInfo _EventImpl_FieldInfo_[] = {
	{"type", "Ljava/lang/String;", nullptr, $PUBLIC, $field(EventImpl, type)},
	{"target", "Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC, $field(EventImpl, target)},
	{"currentTarget", "Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC, $field(EventImpl, currentTarget)},
	{"eventPhase", "S", nullptr, $PUBLIC, $field(EventImpl, eventPhase)},
	{"initialized", "Z", nullptr, $PUBLIC, $field(EventImpl, initialized)},
	{"bubbles", "Z", nullptr, $PUBLIC, $field(EventImpl, bubbles)},
	{"cancelable", "Z", nullptr, $PUBLIC, $field(EventImpl, cancelable)},
	{"stopPropagation", "Z", nullptr, $PUBLIC, $field(EventImpl, stopPropagation$)},
	{"preventDefault", "Z", nullptr, $PUBLIC, $field(EventImpl, preventDefault$)},
	{"timeStamp", "J", nullptr, $PROTECTED, $field(EventImpl, timeStamp)},
	{}
};

$MethodInfo _EventImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(EventImpl, init$, void)},
	{"getBubbles", "()Z", nullptr, $PUBLIC, $virtualMethod(EventImpl, getBubbles, bool)},
	{"getCancelable", "()Z", nullptr, $PUBLIC, $virtualMethod(EventImpl, getCancelable, bool)},
	{"getCurrentTarget", "()Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC, $virtualMethod(EventImpl, getCurrentTarget, $EventTarget*)},
	{"getEventPhase", "()S", nullptr, $PUBLIC, $virtualMethod(EventImpl, getEventPhase, int16_t)},
	{"getTarget", "()Lorg/w3c/dom/events/EventTarget;", nullptr, $PUBLIC, $virtualMethod(EventImpl, getTarget, $EventTarget*)},
	{"getTimeStamp", "()J", nullptr, $PUBLIC, $virtualMethod(EventImpl, getTimeStamp, int64_t)},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(EventImpl, getType, $String*)},
	{"initEvent", "(Ljava/lang/String;ZZ)V", nullptr, $PUBLIC, $virtualMethod(EventImpl, initEvent, void, $String*, bool, bool)},
	{"preventDefault", "()V", nullptr, $PUBLIC, $virtualMethod(EventImpl, preventDefault, void)},
	{"stopPropagation", "()V", nullptr, $PUBLIC, $virtualMethod(EventImpl, stopPropagation, void)},
	{}
};

$ClassInfo _EventImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.dom.events.EventImpl",
	"java.lang.Object",
	"org.w3c.dom.events.Event",
	_EventImpl_FieldInfo_,
	_EventImpl_MethodInfo_
};

$Object* allocate$EventImpl($Class* clazz) {
	return $of($alloc(EventImpl));
}

void EventImpl::init$() {
	$set(this, type, nullptr);
	this->initialized = false;
	this->bubbles = true;
	this->cancelable = false;
	this->stopPropagation$ = false;
	this->preventDefault$ = false;
	this->timeStamp = $System::currentTimeMillis();
}

void EventImpl::initEvent($String* eventTypeArg, bool canBubbleArg, bool cancelableArg) {
	$set(this, type, eventTypeArg);
	this->bubbles = canBubbleArg;
	this->cancelable = cancelableArg;
	this->initialized = true;
}

bool EventImpl::getBubbles() {
	return this->bubbles;
}

bool EventImpl::getCancelable() {
	return this->cancelable;
}

$EventTarget* EventImpl::getCurrentTarget() {
	return this->currentTarget;
}

int16_t EventImpl::getEventPhase() {
	return this->eventPhase;
}

$EventTarget* EventImpl::getTarget() {
	return this->target;
}

$String* EventImpl::getType() {
	return this->type;
}

int64_t EventImpl::getTimeStamp() {
	return this->timeStamp;
}

void EventImpl::stopPropagation() {
	this->stopPropagation$ = true;
}

void EventImpl::preventDefault() {
	this->preventDefault$ = true;
}

EventImpl::EventImpl() {
}

$Class* EventImpl::load$($String* name, bool initialize) {
	$loadClass(EventImpl, name, initialize, &_EventImpl_ClassInfo_, allocate$EventImpl);
	return class$;
}

$Class* EventImpl::class$ = nullptr;

							} // events
						} // dom
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
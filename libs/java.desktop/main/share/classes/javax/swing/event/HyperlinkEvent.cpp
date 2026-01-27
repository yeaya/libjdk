#include <javax/swing/event/HyperlinkEvent.h>

#include <java/awt/event/InputEvent.h>
#include <java/net/URL.h>
#include <java/util/EventObject.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $EventObject = ::java::util::EventObject;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace event {

$FieldInfo _HyperlinkEvent_FieldInfo_[] = {
	{"type", "Ljavax/swing/event/HyperlinkEvent$EventType;", nullptr, $PRIVATE, $field(HyperlinkEvent, type)},
	{"u", "Ljava/net/URL;", nullptr, $PRIVATE, $field(HyperlinkEvent, u)},
	{"desc", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HyperlinkEvent, desc)},
	{"sourceElement", "Ljavax/swing/text/Element;", nullptr, $PRIVATE, $field(HyperlinkEvent, sourceElement)},
	{"inputEvent", "Ljava/awt/event/InputEvent;", nullptr, $PRIVATE, $field(HyperlinkEvent, inputEvent)},
	{}
};

$MethodInfo _HyperlinkEvent_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;)V", nullptr, $PUBLIC, $method(HyperlinkEvent, init$, void, Object$*, $HyperlinkEvent$EventType*, $URL*)},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HyperlinkEvent, init$, void, Object$*, $HyperlinkEvent$EventType*, $URL*, $String*)},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljava/lang/String;Ljavax/swing/text/Element;)V", nullptr, $PUBLIC, $method(HyperlinkEvent, init$, void, Object$*, $HyperlinkEvent$EventType*, $URL*, $String*, $Element*)},
	{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljava/lang/String;Ljavax/swing/text/Element;Ljava/awt/event/InputEvent;)V", nullptr, $PUBLIC, $method(HyperlinkEvent, init$, void, Object$*, $HyperlinkEvent$EventType*, $URL*, $String*, $Element*, $InputEvent*)},
	{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HyperlinkEvent, getDescription, $String*)},
	{"getEventType", "()Ljavax/swing/event/HyperlinkEvent$EventType;", nullptr, $PUBLIC, $virtualMethod(HyperlinkEvent, getEventType, $HyperlinkEvent$EventType*)},
	{"getInputEvent", "()Ljava/awt/event/InputEvent;", nullptr, $PUBLIC, $virtualMethod(HyperlinkEvent, getInputEvent, $InputEvent*)},
	{"getSourceElement", "()Ljavax/swing/text/Element;", nullptr, $PUBLIC, $virtualMethod(HyperlinkEvent, getSourceElement, $Element*)},
	{"getURL", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(HyperlinkEvent, getURL, $URL*)},
	{}
};

$InnerClassInfo _HyperlinkEvent_InnerClassesInfo_[] = {
	{"javax.swing.event.HyperlinkEvent$EventType", "javax.swing.event.HyperlinkEvent", "EventType", $PUBLIC | $STATIC | $FINAL},
	{}
};

$ClassInfo _HyperlinkEvent_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.swing.event.HyperlinkEvent",
	"java.util.EventObject",
	nullptr,
	_HyperlinkEvent_FieldInfo_,
	_HyperlinkEvent_MethodInfo_,
	nullptr,
	nullptr,
	_HyperlinkEvent_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.swing.event.HyperlinkEvent$EventType"
};

$Object* allocate$HyperlinkEvent($Class* clazz) {
	return $of($alloc(HyperlinkEvent));
}

void HyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* u) {
	HyperlinkEvent::init$(source, type, u, nullptr);
}

void HyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* u, $String* desc) {
	HyperlinkEvent::init$(source, type, u, desc, nullptr);
}

void HyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* u, $String* desc, $Element* sourceElement) {
	$EventObject::init$(source);
	$set(this, type, type);
	$set(this, u, u);
	$set(this, desc, desc);
	$set(this, sourceElement, sourceElement);
}

void HyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* u, $String* desc, $Element* sourceElement, $InputEvent* inputEvent) {
	$EventObject::init$(source);
	$set(this, type, type);
	$set(this, u, u);
	$set(this, desc, desc);
	$set(this, sourceElement, sourceElement);
	$set(this, inputEvent, inputEvent);
}

$HyperlinkEvent$EventType* HyperlinkEvent::getEventType() {
	return this->type;
}

$String* HyperlinkEvent::getDescription() {
	return this->desc;
}

$URL* HyperlinkEvent::getURL() {
	return this->u;
}

$Element* HyperlinkEvent::getSourceElement() {
	return this->sourceElement;
}

$InputEvent* HyperlinkEvent::getInputEvent() {
	return this->inputEvent;
}

HyperlinkEvent::HyperlinkEvent() {
}

$Class* HyperlinkEvent::load$($String* name, bool initialize) {
	$loadClass(HyperlinkEvent, name, initialize, &_HyperlinkEvent_ClassInfo_, allocate$HyperlinkEvent);
	return class$;
}

$Class* HyperlinkEvent::class$ = nullptr;

		} // event
	} // swing
} // javax
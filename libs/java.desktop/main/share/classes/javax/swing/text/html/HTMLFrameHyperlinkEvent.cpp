#include <javax/swing/text/html/HTMLFrameHyperlinkEvent.h>
#include <java/awt/event/InputEvent.h>
#include <java/net/URL.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/event/HyperlinkEvent.h>
#include <javax/swing/text/Element.h>
#include <jcpp.h>

using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $HyperlinkEvent = ::javax::swing::event::HyperlinkEvent;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $Element = ::javax::swing::text::Element;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void HTMLFrameHyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $String* targetFrame) {
	$HyperlinkEvent::init$(source, type, targetURL);
	$set(this, targetFrame, targetFrame);
}

void HTMLFrameHyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $String* desc, $String* targetFrame) {
	$HyperlinkEvent::init$(source, type, targetURL, desc);
	$set(this, targetFrame, targetFrame);
}

void HTMLFrameHyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $Element* sourceElement, $String* targetFrame) {
	$HyperlinkEvent::init$(source, type, targetURL, nullptr, sourceElement);
	$set(this, targetFrame, targetFrame);
}

void HTMLFrameHyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $String* desc, $Element* sourceElement, $String* targetFrame) {
	$HyperlinkEvent::init$(source, type, targetURL, desc, sourceElement);
	$set(this, targetFrame, targetFrame);
}

void HTMLFrameHyperlinkEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $String* desc, $Element* sourceElement, $InputEvent* inputEvent, $String* targetFrame) {
	$HyperlinkEvent::init$(source, type, targetURL, desc, sourceElement, inputEvent);
	$set(this, targetFrame, targetFrame);
}

$String* HTMLFrameHyperlinkEvent::getTarget() {
	return this->targetFrame;
}

HTMLFrameHyperlinkEvent::HTMLFrameHyperlinkEvent() {
}

$Class* HTMLFrameHyperlinkEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"targetFrame", "Ljava/lang/String;", nullptr, $PRIVATE, $field(HTMLFrameHyperlinkEvent, targetFrame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HTMLFrameHyperlinkEvent, init$, void, Object$*, $HyperlinkEvent$EventType*, $URL*, $String*)},
		{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HTMLFrameHyperlinkEvent, init$, void, Object$*, $HyperlinkEvent$EventType*, $URL*, $String*, $String*)},
		{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HTMLFrameHyperlinkEvent, init$, void, Object$*, $HyperlinkEvent$EventType*, $URL*, $Element*, $String*)},
		{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljava/lang/String;Ljavax/swing/text/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HTMLFrameHyperlinkEvent, init$, void, Object$*, $HyperlinkEvent$EventType*, $URL*, $String*, $Element*, $String*)},
		{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljava/lang/String;Ljavax/swing/text/Element;Ljava/awt/event/InputEvent;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(HTMLFrameHyperlinkEvent, init$, void, Object$*, $HyperlinkEvent$EventType*, $URL*, $String*, $Element*, $InputEvent*, $String*)},
		{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(HTMLFrameHyperlinkEvent, getTarget, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.html.HTMLFrameHyperlinkEvent",
		"javax.swing.event.HyperlinkEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HTMLFrameHyperlinkEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HTMLFrameHyperlinkEvent);
	});
	return class$;
}

$Class* HTMLFrameHyperlinkEvent::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
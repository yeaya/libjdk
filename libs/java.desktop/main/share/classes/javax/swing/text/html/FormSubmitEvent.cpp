#include <javax/swing/text/html/FormSubmitEvent.h>
#include <java/net/URL.h>
#include <javax/swing/event/HyperlinkEvent$EventType.h>
#include <javax/swing/text/Element.h>
#include <javax/swing/text/html/FormSubmitEvent$MethodType.h>
#include <javax/swing/text/html/HTMLFrameHyperlinkEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URL = ::java::net::URL;
using $HyperlinkEvent$EventType = ::javax::swing::event::HyperlinkEvent$EventType;
using $Element = ::javax::swing::text::Element;
using $FormSubmitEvent$MethodType = ::javax::swing::text::html::FormSubmitEvent$MethodType;
using $HTMLFrameHyperlinkEvent = ::javax::swing::text::html::HTMLFrameHyperlinkEvent;

namespace javax {
	namespace swing {
		namespace text {
			namespace html {

void FormSubmitEvent::init$(Object$* source, $HyperlinkEvent$EventType* type, $URL* targetURL, $Element* sourceElement, $String* targetFrame, $FormSubmitEvent$MethodType* method, $String* data) {
	$HTMLFrameHyperlinkEvent::init$(source, type, targetURL, sourceElement, targetFrame);
	$set(this, method, method);
	$set(this, data, data);
}

$FormSubmitEvent$MethodType* FormSubmitEvent::getMethod() {
	return this->method;
}

$String* FormSubmitEvent::getData() {
	return this->data;
}

FormSubmitEvent::FormSubmitEvent() {
}

$Class* FormSubmitEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"method", "Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PRIVATE, $field(FormSubmitEvent, method)},
		{"data", "Ljava/lang/String;", nullptr, $PRIVATE, $field(FormSubmitEvent, data)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Object;Ljavax/swing/event/HyperlinkEvent$EventType;Ljava/net/URL;Ljavax/swing/text/Element;Ljava/lang/String;Ljavax/swing/text/html/FormSubmitEvent$MethodType;Ljava/lang/String;)V", nullptr, 0, $method(FormSubmitEvent, init$, void, Object$*, $HyperlinkEvent$EventType*, $URL*, $Element*, $String*, $FormSubmitEvent$MethodType*, $String*)},
		{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(FormSubmitEvent, getData, $String*)},
		{"getMethod", "()Ljavax/swing/text/html/FormSubmitEvent$MethodType;", nullptr, $PUBLIC, $virtualMethod(FormSubmitEvent, getMethod, $FormSubmitEvent$MethodType*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.html.FormSubmitEvent$MethodType", "javax.swing.text.html.FormSubmitEvent", "MethodType", $PUBLIC | $STATIC | $FINAL | $ENUM},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.html.FormSubmitEvent",
		"javax.swing.text.html.HTMLFrameHyperlinkEvent",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.html.FormSubmitEvent$MethodType"
	};
	$loadClass(FormSubmitEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FormSubmitEvent);
	});
	return class$;
}

$Class* FormSubmitEvent::class$ = nullptr;

			} // html
		} // text
	} // swing
} // javax
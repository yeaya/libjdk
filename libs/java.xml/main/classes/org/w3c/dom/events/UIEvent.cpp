#include <org/w3c/dom/events/UIEvent.h>
#include <org/w3c/dom/views/AbstractView.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractView = ::org::w3c::dom::views::AbstractView;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$Class* UIEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getDetail", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UIEvent, getDetail, int32_t)},
		{"getView", "()Lorg/w3c/dom/views/AbstractView;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UIEvent, getView, $AbstractView*)},
		{"initUIEvent", "(Ljava/lang/String;ZZLorg/w3c/dom/views/AbstractView;I)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(UIEvent, initUIEvent, void, $String*, bool, bool, $AbstractView*, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.events.UIEvent",
		nullptr,
		"org.w3c.dom.events.Event",
		nullptr,
		methodInfos$$
	};
	$loadClass(UIEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(UIEvent);
	});
	return class$;
}

$Class* UIEvent::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org
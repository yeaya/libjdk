#include <org/w3c/dom/ls/LSProgressEvent.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $LSInput = ::org::w3c::dom::ls::LSInput;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$Class* LSProgressEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInput", "()Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSProgressEvent, getInput, $LSInput*)},
		{"getPosition", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSProgressEvent, getPosition, int32_t)},
		{"getTotalSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSProgressEvent, getTotalSize, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.ls.LSProgressEvent",
		nullptr,
		"org.w3c.dom.events.Event",
		nullptr,
		methodInfos$$
	};
	$loadClass(LSProgressEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LSProgressEvent);
	});
	return class$;
}

$Class* LSProgressEvent::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org
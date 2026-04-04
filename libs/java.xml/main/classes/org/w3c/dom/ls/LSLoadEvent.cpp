#include <org/w3c/dom/ls/LSLoadEvent.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $LSInput = ::org::w3c::dom::ls::LSInput;

namespace org {
	namespace w3c {
		namespace dom {
			namespace ls {

$Class* LSLoadEvent::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getInput", "()Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSLoadEvent, getInput, $LSInput*)},
		{"getNewDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSLoadEvent, getNewDocument, $Document*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.ls.LSLoadEvent",
		nullptr,
		"org.w3c.dom.events.Event",
		nullptr,
		methodInfos$$
	};
	$loadClass(LSLoadEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LSLoadEvent);
	});
	return class$;
}

$Class* LSLoadEvent::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org
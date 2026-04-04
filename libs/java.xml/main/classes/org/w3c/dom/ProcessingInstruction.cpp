#include <org/w3c/dom/ProcessingInstruction.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$Class* ProcessingInstruction::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingInstruction, getData, $String*)},
		{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingInstruction, getTarget, $String*)},
		{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingInstruction, setData, void, $String*), "org.w3c.dom.DOMException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"org.w3c.dom.ProcessingInstruction",
		nullptr,
		"org.w3c.dom.Node",
		nullptr,
		methodInfos$$
	};
	$loadClass(ProcessingInstruction, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProcessingInstruction);
	});
	return class$;
}

$Class* ProcessingInstruction::class$ = nullptr;

		} // dom
	} // w3c
} // org
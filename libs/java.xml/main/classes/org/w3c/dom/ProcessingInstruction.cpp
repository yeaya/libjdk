#include <org/w3c/dom/ProcessingInstruction.h>

#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace org {
	namespace w3c {
		namespace dom {

$MethodInfo _ProcessingInstruction_MethodInfo_[] = {
	{"getData", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingInstruction, getData, $String*)},
	{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingInstruction, getTarget, $String*)},
	{"setData", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(ProcessingInstruction, setData, void, $String*), "org.w3c.dom.DOMException"},
	{}
};

$ClassInfo _ProcessingInstruction_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ProcessingInstruction",
	nullptr,
	"org.w3c.dom.Node",
	nullptr,
	_ProcessingInstruction_MethodInfo_
};

$Object* allocate$ProcessingInstruction($Class* clazz) {
	return $of($alloc(ProcessingInstruction));
}

$Class* ProcessingInstruction::load$($String* name, bool initialize) {
	$loadClass(ProcessingInstruction, name, initialize, &_ProcessingInstruction_ClassInfo_, allocate$ProcessingInstruction);
	return class$;
}

$Class* ProcessingInstruction::class$ = nullptr;

		} // dom
	} // w3c
} // org
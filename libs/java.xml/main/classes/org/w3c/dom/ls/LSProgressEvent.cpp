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

$MethodInfo _LSProgressEvent_MethodInfo_[] = {
	{"getInput", "()Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSProgressEvent, getInput, $LSInput*)},
	{"getPosition", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSProgressEvent, getPosition, int32_t)},
	{"getTotalSize", "()I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(LSProgressEvent, getTotalSize, int32_t)},
	{}
};

$ClassInfo _LSProgressEvent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"org.w3c.dom.ls.LSProgressEvent",
	nullptr,
	"org.w3c.dom.events.Event",
	nullptr,
	_LSProgressEvent_MethodInfo_
};

$Object* allocate$LSProgressEvent($Class* clazz) {
	return $of($alloc(LSProgressEvent));
}

$Class* LSProgressEvent::load$($String* name, bool initialize) {
	$loadClass(LSProgressEvent, name, initialize, &_LSProgressEvent_ClassInfo_, allocate$LSProgressEvent);
	return class$;
}

$Class* LSProgressEvent::class$ = nullptr;

			} // ls
		} // dom
	} // w3c
} // org
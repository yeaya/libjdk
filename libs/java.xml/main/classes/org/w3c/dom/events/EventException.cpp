#include <org/w3c/dom/events/EventException.h>

#include <jcpp.h>

#undef UNSPECIFIED_EVENT_TYPE_ERR

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace org {
	namespace w3c {
		namespace dom {
			namespace events {

$FieldInfo _EventException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventException, serialVersionUID)},
	{"code", "S", nullptr, $PUBLIC, $field(EventException, code)},
	{"UNSPECIFIED_EVENT_TYPE_ERR", "S", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(EventException, UNSPECIFIED_EVENT_TYPE_ERR)},
	{}
};

$MethodInfo _EventException_MethodInfo_[] = {
	{"<init>", "(SLjava/lang/String;)V", nullptr, $PUBLIC, $method(EventException, init$, void, int16_t, $String*)},
	{}
};

$ClassInfo _EventException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.w3c.dom.events.EventException",
	"java.lang.RuntimeException",
	nullptr,
	_EventException_FieldInfo_,
	_EventException_MethodInfo_
};

$Object* allocate$EventException($Class* clazz) {
	return $of($alloc(EventException));
}

void EventException::init$(int16_t code, $String* message) {
	$RuntimeException::init$(message);
	this->code = code;
}

EventException::EventException() {
}

EventException::EventException(const EventException& e) : $RuntimeException(e) {
}

void EventException::throw$() {
	throw *this;
}

$Class* EventException::load$($String* name, bool initialize) {
	$loadClass(EventException, name, initialize, &_EventException_ClassInfo_, allocate$EventException);
	return class$;
}

$Class* EventException::class$ = nullptr;

			} // events
		} // dom
	} // w3c
} // org
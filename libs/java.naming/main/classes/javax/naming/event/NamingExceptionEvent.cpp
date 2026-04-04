#include <javax/naming/event/NamingExceptionEvent.h>
#include <java/util/EventObject.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/event/EventContext.h>
#include <javax/naming/event/NamingListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $NamingException = ::javax::naming::NamingException;
using $EventContext = ::javax::naming::event::EventContext;
using $NamingListener = ::javax::naming::event::NamingListener;

namespace javax {
	namespace naming {
		namespace event {

void NamingExceptionEvent::init$($EventContext* source, $NamingException* exc) {
	$EventObject::init$(source);
	$set(this, exception, exc);
}

$NamingException* NamingExceptionEvent::getException() {
	return this->exception;
}

$EventContext* NamingExceptionEvent::getEventContext() {
	return $cast($EventContext, getSource());
}

void NamingExceptionEvent::dispatch($NamingListener* listener) {
	$nc(listener)->namingExceptionThrown(this);
}

NamingExceptionEvent::NamingExceptionEvent() {
}

$Class* NamingExceptionEvent::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"exception", "Ljavax/naming/NamingException;", nullptr, $PRIVATE, $field(NamingExceptionEvent, exception)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NamingExceptionEvent, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/naming/event/EventContext;Ljavax/naming/NamingException;)V", nullptr, $PUBLIC, $method(NamingExceptionEvent, init$, void, $EventContext*, $NamingException*)},
		{"dispatch", "(Ljavax/naming/event/NamingListener;)V", nullptr, $PUBLIC, $virtualMethod(NamingExceptionEvent, dispatch, void, $NamingListener*)},
		{"getEventContext", "()Ljavax/naming/event/EventContext;", nullptr, $PUBLIC, $virtualMethod(NamingExceptionEvent, getEventContext, $EventContext*)},
		{"getException", "()Ljavax/naming/NamingException;", nullptr, $PUBLIC, $virtualMethod(NamingExceptionEvent, getException, $NamingException*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.naming.event.NamingExceptionEvent",
		"java.util.EventObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(NamingExceptionEvent, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamingExceptionEvent);
	});
	return class$;
}

$Class* NamingExceptionEvent::class$ = nullptr;

		} // event
	} // naming
} // javax
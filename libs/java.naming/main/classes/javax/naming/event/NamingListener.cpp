#include <javax/naming/event/NamingListener.h>

#include <javax/naming/event/NamingExceptionEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingExceptionEvent = ::javax::naming::event::NamingExceptionEvent;

namespace javax {
	namespace naming {
		namespace event {

$MethodInfo _NamingListener_MethodInfo_[] = {
	{"namingExceptionThrown", "(Ljavax/naming/event/NamingExceptionEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamingListener, namingExceptionThrown, void, $NamingExceptionEvent*)},
	{}
};

$ClassInfo _NamingListener_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.naming.event.NamingListener",
	nullptr,
	"java.util.EventListener",
	nullptr,
	_NamingListener_MethodInfo_
};

$Object* allocate$NamingListener($Class* clazz) {
	return $of($alloc(NamingListener));
}

$Class* NamingListener::load$($String* name, bool initialize) {
	$loadClass(NamingListener, name, initialize, &_NamingListener_ClassInfo_, allocate$NamingListener);
	return class$;
}

$Class* NamingListener::class$ = nullptr;

		} // event
	} // naming
} // javax
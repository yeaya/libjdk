#include <javax/naming/event/NamespaceChangeListener.h>
#include <javax/naming/event/NamingEvent.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamingEvent = ::javax::naming::event::NamingEvent;

namespace javax {
	namespace naming {
		namespace event {

$Class* NamespaceChangeListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"objectAdded", "(Ljavax/naming/event/NamingEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamespaceChangeListener, objectAdded, void, $NamingEvent*)},
		{"objectRemoved", "(Ljavax/naming/event/NamingEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamespaceChangeListener, objectRemoved, void, $NamingEvent*)},
		{"objectRenamed", "(Ljavax/naming/event/NamingEvent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NamespaceChangeListener, objectRenamed, void, $NamingEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.naming.event.NamespaceChangeListener",
		nullptr,
		"javax.naming.event.NamingListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(NamespaceChangeListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NamespaceChangeListener);
	});
	return class$;
}

$Class* NamespaceChangeListener::class$ = nullptr;

		} // event
	} // naming
} // javax
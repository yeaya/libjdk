#include <com/sun/jndi/ldap/EventQueue$QueueElement.h>
#include <com/sun/jndi/ldap/EventQueue.h>
#include <java/util/EventObject.h>
#include <java/util/Vector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Vector = ::java::util::Vector;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void EventQueue$QueueElement::init$($EventObject* event, $Vector* vector) {
	$set(this, next, nullptr);
	$set(this, prev, nullptr);
	$set(this, event, nullptr);
	$set(this, vector, nullptr);
	$set(this, event, event);
	$set(this, vector, vector);
}

EventQueue$QueueElement::EventQueue$QueueElement() {
}

$Class* EventQueue$QueueElement::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"next", "Lcom/sun/jndi/ldap/EventQueue$QueueElement;", nullptr, 0, $field(EventQueue$QueueElement, next)},
		{"prev", "Lcom/sun/jndi/ldap/EventQueue$QueueElement;", nullptr, 0, $field(EventQueue$QueueElement, prev)},
		{"event", "Ljava/util/EventObject;", nullptr, 0, $field(EventQueue$QueueElement, event)},
		{"vector", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/naming/event/NamingListener;>;", 0, $field(EventQueue$QueueElement, vector)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/EventObject;Ljava/util/Vector;)V", "(Ljava/util/EventObject;Ljava/util/Vector<Ljavax/naming/event/NamingListener;>;)V", 0, $method(EventQueue$QueueElement, init$, void, $EventObject*, $Vector*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jndi.ldap.EventQueue$QueueElement", "com.sun.jndi.ldap.EventQueue", "QueueElement", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jndi.ldap.EventQueue$QueueElement",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jndi.ldap.EventQueue"
	};
	$loadClass(EventQueue$QueueElement, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventQueue$QueueElement);
	});
	return class$;
}

$Class* EventQueue$QueueElement::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com
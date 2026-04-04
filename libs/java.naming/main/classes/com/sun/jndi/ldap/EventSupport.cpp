#include <com/sun/jndi/ldap/EventSupport.h>
#include <com/sun/jndi/ldap/EventQueue.h>
#include <com/sun/jndi/ldap/LdapCtx.h>
#include <com/sun/jndi/ldap/NamingEventNotifier.h>
#include <com/sun/jndi/ldap/NotifierArgs.h>
#include <java/util/Collection.h>
#include <java/util/EventObject.h>
#include <java/util/Hashtable.h>
#include <java/util/Iterator.h>
#include <java/util/Vector.h>
#include <javax/naming/NamingException.h>
#include <javax/naming/directory/SearchControls.h>
#include <javax/naming/event/EventContext.h>
#include <javax/naming/event/NamespaceChangeListener.h>
#include <javax/naming/event/NamingExceptionEvent.h>
#include <javax/naming/event/NamingListener.h>
#include <javax/naming/event/ObjectChangeListener.h>
#include <javax/naming/ldap/UnsolicitedNotification.h>
#include <javax/naming/ldap/UnsolicitedNotificationEvent.h>
#include <javax/naming/ldap/UnsolicitedNotificationListener.h>
#include <jcpp.h>

using $EventQueue = ::com::sun::jndi::ldap::EventQueue;
using $LdapCtx = ::com::sun::jndi::ldap::LdapCtx;
using $NamingEventNotifier = ::com::sun::jndi::ldap::NamingEventNotifier;
using $NotifierArgs = ::com::sun::jndi::ldap::NotifierArgs;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $EventObject = ::java::util::EventObject;
using $Hashtable = ::java::util::Hashtable;
using $Iterator = ::java::util::Iterator;
using $Vector = ::java::util::Vector;
using $NamingException = ::javax::naming::NamingException;
using $SearchControls = ::javax::naming::directory::SearchControls;
using $NamespaceChangeListener = ::javax::naming::event::NamespaceChangeListener;
using $NamingExceptionEvent = ::javax::naming::event::NamingExceptionEvent;
using $NamingListener = ::javax::naming::event::NamingListener;
using $ObjectChangeListener = ::javax::naming::event::ObjectChangeListener;
using $UnsolicitedNotification = ::javax::naming::ldap::UnsolicitedNotification;
using $UnsolicitedNotificationEvent = ::javax::naming::ldap::UnsolicitedNotificationEvent;
using $UnsolicitedNotificationListener = ::javax::naming::ldap::UnsolicitedNotificationListener;

namespace com {
	namespace sun {
		namespace jndi {
			namespace ldap {

void EventSupport::init$($LdapCtx* ctx) {
	$set(this, notifiers, $new($Hashtable, 11));
	$set(this, unsolicited, nullptr);
	$set(this, ctx, ctx);
}

void EventSupport::addNamingListener($String* nm, int32_t scope, $NamingListener* l) {
	$synchronized(this) {
		$useLocalObjectStack();
		if ($instanceOf($ObjectChangeListener, l) || $instanceOf($NamespaceChangeListener, l)) {
			$var($NotifierArgs, args, $new($NotifierArgs, nm, scope, l));
			$var($NamingEventNotifier, notifier, $cast($NamingEventNotifier, $nc(this->notifiers)->get(args)));
			if (notifier == nullptr) {
				$assign(notifier, $new($NamingEventNotifier, this, this->ctx, args, l));
				this->notifiers->put(args, notifier);
			} else {
				notifier->addNamingListener(l);
			}
		}
		if ($instanceOf($UnsolicitedNotificationListener, l)) {
			if (this->unsolicited == nullptr) {
				$set(this, unsolicited, $new($Vector, 3));
			}
			$nc(this->unsolicited)->addElement($cast($UnsolicitedNotificationListener, l));
		}
	}
}

void EventSupport::addNamingListener($String* nm, $String* filter, $SearchControls* ctls, $NamingListener* l) {
	$synchronized(this) {
		$useLocalObjectStack();
		if ($instanceOf($ObjectChangeListener, l) || $instanceOf($NamespaceChangeListener, l)) {
			$var($NotifierArgs, args, $new($NotifierArgs, nm, filter, ctls, l));
			$var($NamingEventNotifier, notifier, $cast($NamingEventNotifier, $nc(this->notifiers)->get(args)));
			if (notifier == nullptr) {
				$assign(notifier, $new($NamingEventNotifier, this, this->ctx, args, l));
				this->notifiers->put(args, notifier);
			} else {
				notifier->addNamingListener(l);
			}
		}
		if ($instanceOf($UnsolicitedNotificationListener, l)) {
			if (this->unsolicited == nullptr) {
				$set(this, unsolicited, $new($Vector, 3));
			}
			$nc(this->unsolicited)->addElement($cast($UnsolicitedNotificationListener, l));
		}
	}
}

void EventSupport::removeNamingListener($NamingListener* l) {
	$synchronized(this) {
		$useLocalObjectStack();
		;
		$var($Iterator, iterator, $$nc($nc(this->notifiers)->values())->iterator());
		while ($nc(iterator)->hasNext()) {
			$var($NamingEventNotifier, notifier, $cast($NamingEventNotifier, iterator->next()));
			if (notifier != nullptr) {
				;
				notifier->removeNamingListener(l);
				if (!notifier->hasNamingListeners()) {
					;
					notifier->stop();
					iterator->remove();
				}
			}
		}
		;
		if (this->unsolicited != nullptr) {
			this->unsolicited->removeElement(l);
		}
	}
}

bool EventSupport::hasUnsolicited() {
	$synchronized(this) {
		return (this->unsolicited != nullptr && this->unsolicited->size() > 0);
	}
}

void EventSupport::removeDeadNotifier($NotifierArgs* info) {
	$synchronized(this) {
		;
		if (this->notifiers != nullptr) {
			this->notifiers->remove(info);
		}
	}
}

void EventSupport::fireUnsolicited(Object$* obj) {
	$synchronized(this) {
		$useLocalObjectStack();
		;
		if (this->unsolicited == nullptr || this->unsolicited->size() == 0) {
			return;
		}
		if ($instanceOf($UnsolicitedNotification, obj)) {
			$var($UnsolicitedNotificationEvent, evt, $new($UnsolicitedNotificationEvent, this->ctx, $cast($UnsolicitedNotification, obj)));
			queueEvent(evt, this->unsolicited);
		} else if ($instanceOf($NamingException, obj)) {
			$var($NamingExceptionEvent, evt, $new($NamingExceptionEvent, this->ctx, $cast($NamingException, obj)));
			queueEvent(evt, this->unsolicited);
			$set(this, unsolicited, nullptr);
		}
	}
}

void EventSupport::cleanup() {
	$synchronized(this) {
		$useLocalObjectStack();
		;
		if (this->notifiers != nullptr) {
			{
				$var($Iterator, i$, $$nc(this->notifiers->values())->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($NamingEventNotifier, notifier, $cast($NamingEventNotifier, i$->next()));
					{
						$nc(notifier)->stop();
					}
				}
			}
			$set(this, notifiers, nullptr);
		}
		if (this->eventQueue != nullptr) {
			this->eventQueue->stop();
			$set(this, eventQueue, nullptr);
		}
	}
}

void EventSupport::queueEvent($EventObject* event, $Vector* vector) {
	$synchronized(this) {
		if (this->notifiers == nullptr) {
			return;
		}
		if (this->eventQueue == nullptr) {
			$set(this, eventQueue, $new($EventQueue));
		}
		$var($Vector, v, $cast($Vector, $nc(vector)->clone()));
		$nc(this->eventQueue)->enqueue(event, v);
	}
}

EventSupport::EventSupport() {
}

$Class* EventSupport::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"debug", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(EventSupport, debug)},
		{"ctx", "Lcom/sun/jndi/ldap/LdapCtx;", nullptr, $PRIVATE, $field(EventSupport, ctx)},
		{"notifiers", "Ljava/util/Hashtable;", "Ljava/util/Hashtable<Lcom/sun/jndi/ldap/NotifierArgs;Lcom/sun/jndi/ldap/NamingEventNotifier;>;", $PRIVATE, $field(EventSupport, notifiers)},
		{"unsolicited", "Ljava/util/Vector;", "Ljava/util/Vector<Ljavax/naming/ldap/UnsolicitedNotificationListener;>;", $PRIVATE, $field(EventSupport, unsolicited)},
		{"eventQueue", "Lcom/sun/jndi/ldap/EventQueue;", nullptr, $PRIVATE, $field(EventSupport, eventQueue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jndi/ldap/LdapCtx;)V", nullptr, 0, $method(EventSupport, init$, void, $LdapCtx*)},
		{"addNamingListener", "(Ljava/lang/String;ILjavax/naming/event/NamingListener;)V", nullptr, $SYNCHRONIZED, $method(EventSupport, addNamingListener, void, $String*, int32_t, $NamingListener*), "javax.naming.NamingException"},
		{"addNamingListener", "(Ljava/lang/String;Ljava/lang/String;Ljavax/naming/directory/SearchControls;Ljavax/naming/event/NamingListener;)V", nullptr, $SYNCHRONIZED, $method(EventSupport, addNamingListener, void, $String*, $String*, $SearchControls*, $NamingListener*), "javax.naming.NamingException"},
		{"cleanup", "()V", nullptr, $SYNCHRONIZED, $method(EventSupport, cleanup, void)},
		{"fireUnsolicited", "(Ljava/lang/Object;)V", nullptr, $SYNCHRONIZED, $method(EventSupport, fireUnsolicited, void, Object$*)},
		{"hasUnsolicited", "()Z", nullptr, $SYNCHRONIZED, $method(EventSupport, hasUnsolicited, bool)},
		{"queueEvent", "(Ljava/util/EventObject;Ljava/util/Vector;)V", "(Ljava/util/EventObject;Ljava/util/Vector<+Ljavax/naming/event/NamingListener;>;)V", $SYNCHRONIZED, $method(EventSupport, queueEvent, void, $EventObject*, $Vector*)},
		{"removeDeadNotifier", "(Lcom/sun/jndi/ldap/NotifierArgs;)V", nullptr, $SYNCHRONIZED, $method(EventSupport, removeDeadNotifier, void, $NotifierArgs*)},
		{"removeNamingListener", "(Ljavax/naming/event/NamingListener;)V", nullptr, $SYNCHRONIZED, $method(EventSupport, removeNamingListener, void, $NamingListener*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jndi.ldap.EventSupport",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(EventSupport, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(EventSupport);
	});
	return class$;
}

$Class* EventSupport::class$ = nullptr;

			} // ldap
		} // jndi
	} // sun
} // com
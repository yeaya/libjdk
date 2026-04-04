#include <com/sun/jmx/remote/internal/ServerNotifForwarder$NotifForwarderBufferFilter.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder$IdAndFilter.h>
#include <com/sun/jmx/remote/internal/ServerNotifForwarder.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/management/Notification.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/ObjectName.h>
#include <javax/management/remote/TargetedNotification.h>
#include <jcpp.h>

using $ServerNotifForwarder$IdAndFilterArray = $Array<::com::sun::jmx::remote::internal::ServerNotifForwarder$IdAndFilter>;
using $ServerNotifForwarder = ::com::sun::jmx::remote::internal::ServerNotifForwarder;
using $ServerNotifForwarder$IdAndFilter = ::com::sun::jmx::remote::internal::ServerNotifForwarder$IdAndFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Notification = ::javax::management::Notification;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $ObjectName = ::javax::management::ObjectName;
using $TargetedNotification = ::javax::management::remote::TargetedNotification;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ServerNotifForwarder$NotifForwarderBufferFilter::init$($ServerNotifForwarder* this$0) {
	$set(this, this$0, this$0);
}

void ServerNotifForwarder$NotifForwarderBufferFilter::apply($List* targetedNotifs, $ObjectName* source, $Notification* notif) {
	$useLocalObjectStack();
	$var($ServerNotifForwarder$IdAndFilterArray, candidates, nullptr);
	$synchronized(this->this$0->listenerMap) {
		$var($Set, set, $cast($Set, this->this$0->listenerMap->get(source)));
		if (set == nullptr) {
			$nc($ServerNotifForwarder::logger)->debug("bufferFilter"_s, "no listeners for this name"_s);
			return;
		}
		$assign(candidates, $new($ServerNotifForwarder$IdAndFilterArray, $nc(set)->size()));
		set->toArray(candidates);
	}
	{
		$var($ServerNotifForwarder$IdAndFilterArray, arr$, candidates);
		for (int32_t len$ = arr$->length, i$ = 0; i$ < len$; ++i$) {
			$var($ServerNotifForwarder$IdAndFilter, idaf, arr$->get(i$));
			{
				$var($NotificationFilter, nf, $nc(idaf)->getFilter());
				if (nf == nullptr || nf->isNotificationEnabled(notif)) {
					$nc($ServerNotifForwarder::logger)->debug("bufferFilter"_s, "filter matches"_s);
					$var($TargetedNotification, tn, $new($TargetedNotification, notif, $(idaf->getId())));
					if (this->this$0->allowNotificationEmission(source, tn)) {
						$nc(targetedNotifs)->add(tn);
					}
				}
			}
		}
	}
}

ServerNotifForwarder$NotifForwarderBufferFilter::ServerNotifForwarder$NotifForwarderBufferFilter() {
}

$Class* ServerNotifForwarder$NotifForwarderBufferFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/internal/ServerNotifForwarder;", nullptr, $FINAL | $SYNTHETIC, $field(ServerNotifForwarder$NotifForwarderBufferFilter, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/internal/ServerNotifForwarder;)V", nullptr, 0, $method(ServerNotifForwarder$NotifForwarderBufferFilter, init$, void, $ServerNotifForwarder*)},
		{"apply", "(Ljava/util/List;Ljavax/management/ObjectName;Ljavax/management/Notification;)V", "(Ljava/util/List<Ljavax/management/remote/TargetedNotification;>;Ljavax/management/ObjectName;Ljavax/management/Notification;)V", $PUBLIC, $virtualMethod(ServerNotifForwarder$NotifForwarderBufferFilter, apply, void, $List*, $ObjectName*, $Notification*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ServerNotifForwarder$NotifForwarderBufferFilter", "com.sun.jmx.remote.internal.ServerNotifForwarder", "NotifForwarderBufferFilter", $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.jmx.remote.internal.ServerNotifForwarder$NotifForwarderBufferFilter",
		"java.lang.Object",
		"com.sun.jmx.remote.internal.NotificationBufferFilter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.internal.ServerNotifForwarder"
	};
	$loadClass(ServerNotifForwarder$NotifForwarderBufferFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ServerNotifForwarder$NotifForwarderBufferFilter);
	});
	return class$;
}

$Class* ServerNotifForwarder$NotifForwarderBufferFilter::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com
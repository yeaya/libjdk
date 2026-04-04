#include <com/sun/jmx/remote/internal/NotificationBufferFilter.h>
#include <java/util/List.h>
#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Notification = ::javax::management::Notification;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$Class* NotificationBufferFilter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"apply", "(Ljava/util/List;Ljavax/management/ObjectName;Ljavax/management/Notification;)V", "(Ljava/util/List<Ljavax/management/remote/TargetedNotification;>;Ljavax/management/ObjectName;Ljavax/management/Notification;)V", $PUBLIC | $ABSTRACT, $virtualMethod(NotificationBufferFilter, apply, void, $List*, $ObjectName*, $Notification*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.jmx.remote.internal.NotificationBufferFilter",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NotificationBufferFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationBufferFilter);
	});
	return class$;
}

$Class* NotificationBufferFilter::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com
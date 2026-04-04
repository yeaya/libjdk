#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$5.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <javax/management/MBeanServerNotification.h>
#include <javax/management/Notification.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MBeanServerNotification = ::javax::management::MBeanServerNotification;
using $Notification = ::javax::management::Notification;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ArrayNotificationBuffer$5::init$($ArrayNotificationBuffer* this$0) {
	$set(this, this$0, this$0);
}

void ArrayNotificationBuffer$5::handleNotification($Notification* notif, Object$* handback) {
	$init($ArrayNotificationBuffer);
	$nc($ArrayNotificationBuffer::logger)->debug("creationListener"_s, "handleNotification called"_s);
	this->this$0->createdNotification($cast($MBeanServerNotification, notif));
}

ArrayNotificationBuffer$5::ArrayNotificationBuffer$5() {
}

$Class* ArrayNotificationBuffer$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$5, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;)V", nullptr, 0, $method(ArrayNotificationBuffer$5, init$, void, $ArrayNotificationBuffer*)},
		{"handleNotification", "(Ljavax/management/Notification;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ArrayNotificationBuffer$5, handleNotification, void, $Notification*, Object$*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$5", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer$5",
		"java.lang.Object",
		"javax.management.NotificationListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
	};
	$loadClass(ArrayNotificationBuffer$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayNotificationBuffer$5);
	});
	return class$;
}

$Class* ArrayNotificationBuffer$5::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com
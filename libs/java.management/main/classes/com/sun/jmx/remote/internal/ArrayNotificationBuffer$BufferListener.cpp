#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$BufferListener.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$NamedNotification.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <com/sun/jmx/remote/util/ClassLogger.h>
#include <javax/management/Notification.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $ArrayNotificationBuffer$NamedNotification = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer$NamedNotification;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Notification = ::javax::management::Notification;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ArrayNotificationBuffer$BufferListener::init$($ArrayNotificationBuffer* this$0) {
	$set(this, this$0, this$0);
}

void ArrayNotificationBuffer$BufferListener::handleNotification($Notification* notif, Object$* handback) {
	$useLocalObjectStack();
	$init($ArrayNotificationBuffer);
	if ($nc($ArrayNotificationBuffer::logger)->debugOn()) {
		$ArrayNotificationBuffer::logger->debug("BufferListener.handleNotification"_s, $$str({"notif="_s, notif, "; handback="_s, handback}));
	}
	$var($ObjectName, name, $cast($ObjectName, handback));
	this->this$0->addNotification($$new($ArrayNotificationBuffer$NamedNotification, name, notif));
}

ArrayNotificationBuffer$BufferListener::ArrayNotificationBuffer$BufferListener() {
}

$Class* ArrayNotificationBuffer$BufferListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$BufferListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;)V", nullptr, $PRIVATE, $method(ArrayNotificationBuffer$BufferListener, init$, void, $ArrayNotificationBuffer*)},
		{"handleNotification", "(Ljavax/management/Notification;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(ArrayNotificationBuffer$BufferListener, handleNotification, void, $Notification*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$BufferListener", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "BufferListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer$BufferListener",
		"java.lang.Object",
		"javax.management.NotificationListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
	};
	$loadClass(ArrayNotificationBuffer$BufferListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayNotificationBuffer$BufferListener);
	});
	return class$;
}

$Class* ArrayNotificationBuffer$BufferListener::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com
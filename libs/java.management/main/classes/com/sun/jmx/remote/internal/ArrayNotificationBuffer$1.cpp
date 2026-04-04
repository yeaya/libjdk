#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$1.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NotificationFilter.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationFilter = ::javax::management::NotificationFilter;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ArrayNotificationBuffer$1::init$($ArrayNotificationBuffer* this$0, $ObjectName* val$name, $NotificationListener* val$listener, $NotificationFilter* val$filter, Object$* val$handback) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	$set(this, val$listener, val$listener);
	$set(this, val$filter, val$filter);
	$set(this, val$handback, val$handback);
}

$Object* ArrayNotificationBuffer$1::run() {
	$nc(this->this$0->mBeanServer)->addNotificationListener(this->val$name, this->val$listener, this->val$filter, this->val$handback);
	return nullptr;
}

ArrayNotificationBuffer$1::ArrayNotificationBuffer$1() {
}

$Class* ArrayNotificationBuffer$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$1, this$0)},
		{"val$handback", "Ljava/lang/Object;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$1, val$handback)},
		{"val$filter", "Ljavax/management/NotificationFilter;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$1, val$filter)},
		{"val$listener", "Ljavax/management/NotificationListener;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$1, val$listener)},
		{"val$name", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$1, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V", "()V", 0, $method(ArrayNotificationBuffer$1, init$, void, $ArrayNotificationBuffer*, $ObjectName*, $NotificationListener*, $NotificationFilter*, Object$*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ArrayNotificationBuffer$1, run, $Object*), "javax.management.InstanceNotFoundException"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer",
		"addNotificationListener",
		"(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;Ljavax/management/NotificationFilter;Ljava/lang/Object;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer$1",
		"java.lang.Object",
		"java.security.PrivilegedExceptionAction",
		fieldInfos$$,
		methodInfos$$,
		"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer"
	};
	$loadClass(ArrayNotificationBuffer$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayNotificationBuffer$1);
	});
	return class$;
}

$Class* ArrayNotificationBuffer$1::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com
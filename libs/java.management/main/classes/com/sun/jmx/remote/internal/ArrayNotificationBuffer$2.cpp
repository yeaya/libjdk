#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$2.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <javax/management/MBeanServer.h>
#include <javax/management/NotificationListener.h>
#include <javax/management/ObjectName.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationListener = ::javax::management::NotificationListener;
using $ObjectName = ::javax::management::ObjectName;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ArrayNotificationBuffer$2::init$($ArrayNotificationBuffer* this$0, $ObjectName* val$name, $NotificationListener* val$listener) {
	$set(this, this$0, this$0);
	$set(this, val$name, val$name);
	$set(this, val$listener, val$listener);
}

$Object* ArrayNotificationBuffer$2::run() {
	$nc(this->this$0->mBeanServer)->removeNotificationListener(this->val$name, this->val$listener);
	return nullptr;
}

ArrayNotificationBuffer$2::ArrayNotificationBuffer$2() {
}

$Class* ArrayNotificationBuffer$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$2, this$0)},
		{"val$listener", "Ljavax/management/NotificationListener;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$2, val$listener)},
		{"val$name", "Ljavax/management/ObjectName;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$2, val$name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;Ljavax/management/ObjectName;Ljavax/management/NotificationListener;)V", "()V", 0, $method(ArrayNotificationBuffer$2, init$, void, $ArrayNotificationBuffer*, $ObjectName*, $NotificationListener*)},
		{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, $virtualMethod(ArrayNotificationBuffer$2, run, $Object*), "java.lang.Exception"},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer",
		"removeNotificationListener",
		"(Ljavax/management/ObjectName;Ljavax/management/NotificationListener;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer$2",
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
	$loadClass(ArrayNotificationBuffer$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayNotificationBuffer$2);
	});
	return class$;
}

$Class* ArrayNotificationBuffer$2::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com
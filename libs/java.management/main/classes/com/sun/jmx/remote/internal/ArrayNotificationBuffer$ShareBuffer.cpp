#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer$ShareBuffer.h>
#include <com/sun/jmx/remote/internal/ArrayNotificationBuffer.h>
#include <com/sun/jmx/remote/internal/NotificationBuffer.h>
#include <com/sun/jmx/remote/internal/NotificationBufferFilter.h>
#include <javax/management/remote/NotificationResult.h>
#include <jcpp.h>

using $ArrayNotificationBuffer = ::com::sun::jmx::remote::internal::ArrayNotificationBuffer;
using $NotificationBuffer = ::com::sun::jmx::remote::internal::NotificationBuffer;
using $NotificationBufferFilter = ::com::sun::jmx::remote::internal::NotificationBufferFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationResult = ::javax::management::remote::NotificationResult;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

void ArrayNotificationBuffer$ShareBuffer::init$($ArrayNotificationBuffer* this$0, int32_t size) {
	$set(this, this$0, this$0);
	this->size = size;
	this$0->addSharer(this);
}

$NotificationResult* ArrayNotificationBuffer$ShareBuffer::fetchNotifications($NotificationBufferFilter* filter, int64_t startSequenceNumber, int64_t timeout, int32_t maxNotifications) {
	$var($NotificationBuffer, buf, this->this$0);
	return $nc(buf)->fetchNotifications(filter, startSequenceNumber, timeout, maxNotifications);
}

void ArrayNotificationBuffer$ShareBuffer::dispose() {
	this->this$0->removeSharer(this);
}

int32_t ArrayNotificationBuffer$ShareBuffer::getSize() {
	return this->size;
}

ArrayNotificationBuffer$ShareBuffer::ArrayNotificationBuffer$ShareBuffer() {
}

$Class* ArrayNotificationBuffer$ShareBuffer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;", nullptr, $FINAL | $SYNTHETIC, $field(ArrayNotificationBuffer$ShareBuffer, this$0)},
		{"size", "I", nullptr, $PRIVATE | $FINAL, $field(ArrayNotificationBuffer$ShareBuffer, size)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/jmx/remote/internal/ArrayNotificationBuffer;I)V", nullptr, 0, $method(ArrayNotificationBuffer$ShareBuffer, init$, void, $ArrayNotificationBuffer*, int32_t)},
		{"dispose", "()V", nullptr, $PUBLIC, $virtualMethod(ArrayNotificationBuffer$ShareBuffer, dispose, void)},
		{"fetchNotifications", "(Lcom/sun/jmx/remote/internal/NotificationBufferFilter;JJI)Ljavax/management/remote/NotificationResult;", nullptr, $PUBLIC, $virtualMethod(ArrayNotificationBuffer$ShareBuffer, fetchNotifications, $NotificationResult*, $NotificationBufferFilter*, int64_t, int64_t, int32_t), "java.lang.InterruptedException"},
		{"getSize", "()I", nullptr, 0, $virtualMethod(ArrayNotificationBuffer$ShareBuffer, getSize, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.jmx.remote.internal.ArrayNotificationBuffer$ShareBuffer", "com.sun.jmx.remote.internal.ArrayNotificationBuffer", "ShareBuffer", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.sun.jmx.remote.internal.ArrayNotificationBuffer$ShareBuffer",
		"java.lang.Object",
		"com.sun.jmx.remote.internal.NotificationBuffer",
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
	$loadClass(ArrayNotificationBuffer$ShareBuffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ArrayNotificationBuffer$ShareBuffer);
	});
	return class$;
}

$Class* ArrayNotificationBuffer$ShareBuffer::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com
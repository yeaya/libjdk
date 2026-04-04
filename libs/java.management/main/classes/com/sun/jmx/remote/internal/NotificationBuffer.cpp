#include <com/sun/jmx/remote/internal/NotificationBuffer.h>
#include <com/sun/jmx/remote/internal/NotificationBufferFilter.h>
#include <javax/management/remote/NotificationResult.h>
#include <jcpp.h>

using $NotificationBufferFilter = ::com::sun::jmx::remote::internal::NotificationBufferFilter;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NotificationResult = ::javax::management::remote::NotificationResult;

namespace com {
	namespace sun {
		namespace jmx {
			namespace remote {
				namespace internal {

$Class* NotificationBuffer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"dispose", "()V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotificationBuffer, dispose, void)},
		{"fetchNotifications", "(Lcom/sun/jmx/remote/internal/NotificationBufferFilter;JJI)Ljavax/management/remote/NotificationResult;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(NotificationBuffer, fetchNotifications, $NotificationResult*, $NotificationBufferFilter*, int64_t, int64_t, int32_t), "java.lang.InterruptedException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"com.sun.jmx.remote.internal.NotificationBuffer",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(NotificationBuffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NotificationBuffer);
	});
	return class$;
}

$Class* NotificationBuffer::class$ = nullptr;

				} // internal
			} // remote
		} // jmx
	} // sun
} // com
#include <jdk/internal/net/http/MultiExchange$CancelableRef.h>
#include <java/lang/ref/WeakReference.h>
#include <jdk/internal/net/http/MultiExchange.h>
#include <jdk/internal/net/http/common/Cancelable.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WeakReference = ::java::lang::ref::WeakReference;
using $Cancelable = ::jdk::internal::net::http::common::Cancelable;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

void MultiExchange$CancelableRef::init$($Cancelable* cancelable) {
	$set(this, cancelableRef, $new($WeakReference, cancelable));
}

bool MultiExchange$CancelableRef::cancel(bool mayInterruptIfRunning) {
	$var($Cancelable, cancelable, $cast($Cancelable, this->cancelableRef->get()));
	if (cancelable != nullptr) {
		return cancelable->cancel(mayInterruptIfRunning);
	} else {
		return false;
	}
}

MultiExchange$CancelableRef::MultiExchange$CancelableRef() {
}

$Class* MultiExchange$CancelableRef::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cancelableRef", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljdk/internal/net/http/common/Cancelable;>;", $PRIVATE | $FINAL, $field(MultiExchange$CancelableRef, cancelableRef)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/Cancelable;)V", nullptr, 0, $method(MultiExchange$CancelableRef, init$, void, $Cancelable*)},
		{"cancel", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(MultiExchange$CancelableRef, cancel, bool, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.MultiExchange$CancelableRef", "jdk.internal.net.http.MultiExchange", "CancelableRef", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.MultiExchange$CancelableRef",
		"java.lang.Object",
		"jdk.internal.net.http.common.Cancelable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.MultiExchange"
	};
	$loadClass(MultiExchange$CancelableRef, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MultiExchange$CancelableRef);
	});
	return class$;
}

$Class* MultiExchange$CancelableRef::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk
#include <jdk/internal/net/http/HttpClientImpl$DelegatingExecutor.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/RuntimePermission.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/Permission.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/concurrent/Executor.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/function/BooleanSupplier.h>
#include <jdk/internal/net/http/HttpClientImpl.h>
#include <jcpp.h>

using $PermissionArray = $Array<::java::security::Permission>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimePermission = ::java::lang::RuntimePermission;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Executor = ::java::util::concurrent::Executor;
using $ExecutorService = ::java::util::concurrent::ExecutorService;
using $BooleanSupplier = ::java::util::function::BooleanSupplier;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0 : public $PrivilegedAction {
	$class(HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($ExecutorService* service) {
		$set(this, service, service);
	}
	virtual $Object* run() override {
		return HttpClientImpl$DelegatingExecutor::lambda$shutdown$0(service);
	}
	$ExecutorService* service = nullptr;
};
$Class* HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"service", "Ljava/util/concurrent/ExecutorService;", nullptr, $PUBLIC, $field(HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0, service)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/ExecutorService;)V", nullptr, $PUBLIC, $method(HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0, init$, void, $ExecutorService*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0);
	});
	return class$;
}
$Class* HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0::class$ = nullptr;

void HttpClientImpl$DelegatingExecutor::init$($BooleanSupplier* isInSelectorThread, $Executor* delegate) {
	$set(this, isInSelectorThread, isInSelectorThread);
	$set(this, delegate$, delegate);
}

$Executor* HttpClientImpl$DelegatingExecutor::delegate() {
	return this->delegate$;
}

void HttpClientImpl$DelegatingExecutor::execute($Runnable* command) {
	if ($nc(this->isInSelectorThread)->getAsBoolean()) {
		$nc(this->delegate$)->execute(command);
	} else {
		$nc(command)->run();
	}
}

void HttpClientImpl$DelegatingExecutor::shutdown() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	{
		$var($ExecutorService, service, nullptr);
		$var($Executor, patt6494$temp, this->delegate$);
		bool var$0 = $instanceOf($ExecutorService, patt6494$temp);
		if (var$0) {
			$assign(service, $cast($ExecutorService, patt6494$temp));
			var$0 = true;
		}
		if (var$0) {
			$var($PrivilegedAction, action, $new(HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0, service));
			$AccessController::doPrivileged(action, nullptr, $$new($PermissionArray, {$$new($RuntimePermission, "modifyThread"_s)}));
		}
	}
}

$Object* HttpClientImpl$DelegatingExecutor::lambda$shutdown$0($ExecutorService* service) {
	$init(HttpClientImpl$DelegatingExecutor);
	$nc(service)->shutdown();
	return nullptr;
}

HttpClientImpl$DelegatingExecutor::HttpClientImpl$DelegatingExecutor() {
}

$Class* HttpClientImpl$DelegatingExecutor::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0")) {
			return HttpClientImpl$DelegatingExecutor$$Lambda$lambda$shutdown$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"isInSelectorThread", "Ljava/util/function/BooleanSupplier;", nullptr, $PRIVATE | $FINAL, $field(HttpClientImpl$DelegatingExecutor, isInSelectorThread)},
		{"delegate", "Ljava/util/concurrent/Executor;", nullptr, $PRIVATE | $FINAL, $field(HttpClientImpl$DelegatingExecutor, delegate$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/function/BooleanSupplier;Ljava/util/concurrent/Executor;)V", nullptr, 0, $method(HttpClientImpl$DelegatingExecutor, init$, void, $BooleanSupplier*, $Executor*)},
		{"delegate", "()Ljava/util/concurrent/Executor;", nullptr, 0, $method(HttpClientImpl$DelegatingExecutor, delegate, $Executor*)},
		{"execute", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $virtualMethod(HttpClientImpl$DelegatingExecutor, execute, void, $Runnable*)},
		{"lambda$shutdown$0", "(Ljava/util/concurrent/ExecutorService;)Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HttpClientImpl$DelegatingExecutor, lambda$shutdown$0, $Object*, $ExecutorService*)},
		{"shutdown", "()V", nullptr, $PRIVATE, $method(HttpClientImpl$DelegatingExecutor, shutdown, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.HttpClientImpl$DelegatingExecutor", "jdk.internal.net.http.HttpClientImpl", "DelegatingExecutor", $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.HttpClientImpl$DelegatingExecutor",
		"java.lang.Object",
		"java.util.concurrent.Executor",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.HttpClientImpl"
	};
	$loadClass(HttpClientImpl$DelegatingExecutor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpClientImpl$DelegatingExecutor);
	});
	return class$;
}

$Class* HttpClientImpl$DelegatingExecutor::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk
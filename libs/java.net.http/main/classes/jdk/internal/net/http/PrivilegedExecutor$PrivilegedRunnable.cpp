#include <jdk/internal/net/http/PrivilegedExecutor$PrivilegedRunnable.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessControlContext.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <jdk/internal/net/http/PrivilegedExecutor.h>
#include <jcpp.h>

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessControlContext = ::java::security::AccessControlContext;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0 : public $PrivilegedAction {
	$class(PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(PrivilegedExecutor$PrivilegedRunnable* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		return $nc(inst$)->lambda$run$0();
	}
	PrivilegedExecutor$PrivilegedRunnable* inst$ = nullptr;
};
$Class* PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/PrivilegedExecutor$PrivilegedRunnable;)V", nullptr, $PUBLIC, $method(PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0, init$, void, PrivilegedExecutor$PrivilegedRunnable*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0);
	});
	return class$;
}
$Class* PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0::class$ = nullptr;

void PrivilegedExecutor$PrivilegedRunnable::init$($Runnable* r, $AccessControlContext* acc) {
	$set(this, r, r);
	$set(this, acc, acc);
}

void PrivilegedExecutor$PrivilegedRunnable::run() {
	$beforeCallerSensitive();
	$var($PrivilegedAction, pa, $new(PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0, this));
	$AccessController::doPrivileged(pa, this->acc);
}

$Void* PrivilegedExecutor$PrivilegedRunnable::lambda$run$0() {
	$nc(this->r)->run();
	return nullptr;
}

PrivilegedExecutor$PrivilegedRunnable::PrivilegedExecutor$PrivilegedRunnable() {
}

$Class* PrivilegedExecutor$PrivilegedRunnable::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0")) {
			return PrivilegedExecutor$PrivilegedRunnable$$Lambda$lambda$run$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"r", "Ljava/lang/Runnable;", nullptr, $PRIVATE | $FINAL, $field(PrivilegedExecutor$PrivilegedRunnable, r)},
		{"acc", "Ljava/security/AccessControlContext;", nullptr, $PRIVATE | $FINAL, $field(PrivilegedExecutor$PrivilegedRunnable, acc)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;Ljava/security/AccessControlContext;)V", nullptr, 0, $method(PrivilegedExecutor$PrivilegedRunnable, init$, void, $Runnable*, $AccessControlContext*)},
		{"lambda$run$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(PrivilegedExecutor$PrivilegedRunnable, lambda$run$0, $Void*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(PrivilegedExecutor$PrivilegedRunnable, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.PrivilegedExecutor$PrivilegedRunnable", "jdk.internal.net.http.PrivilegedExecutor", "PrivilegedRunnable", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"jdk.internal.net.http.PrivilegedExecutor$PrivilegedRunnable",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.PrivilegedExecutor"
	};
	$loadClass(PrivilegedExecutor$PrivilegedRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PrivilegedExecutor$PrivilegedRunnable);
	});
	return class$;
}

$Class* PrivilegedExecutor$PrivilegedRunnable::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk
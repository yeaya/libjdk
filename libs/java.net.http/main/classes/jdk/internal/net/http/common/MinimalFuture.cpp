#include <jdk/internal/net/http/common/MinimalFuture.h>
#include <java/io/Serializable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/CompletableFuture.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/concurrent/atomic/AtomicLong.h>
#include <java/util/function/BiConsumer.h>
#include <jdk/internal/net/http/common/Cancelable.h>
#include <jdk/internal/net/http/common/MinimalFuture$ExceptionalSupplier.h>
#include <jcpp.h>

#undef TOKENS

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;
using $CompletableFuture = ::java::util::concurrent::CompletableFuture;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $AtomicLong = ::java::util::concurrent::atomic::AtomicLong;
using $BiConsumer = ::java::util::function::BiConsumer;
using $Cancelable = ::jdk::internal::net::http::common::Cancelable;
using $MinimalFuture$ExceptionalSupplier = ::jdk::internal::net::http::common::MinimalFuture$ExceptionalSupplier;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {
				namespace common {

class MinimalFuture$$Lambda$lambda$of$0 : public $BiConsumer {
	$class(MinimalFuture$$Lambda$lambda$of$0, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(MinimalFuture* cf) {
		$set(this, cf, cf);
	}
	virtual void accept(Object$* r, Object$* t) override {
		MinimalFuture::lambda$of$0(cf, r, $cast($Throwable, t));
	}
	MinimalFuture* cf = nullptr;
};
$Class* MinimalFuture$$Lambda$lambda$of$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cf", "Ljdk/internal/net/http/common/MinimalFuture;", nullptr, $PUBLIC, $field(MinimalFuture$$Lambda$lambda$of$0, cf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/common/MinimalFuture;)V", nullptr, $PUBLIC, $method(MinimalFuture$$Lambda$lambda$of$0, init$, void, MinimalFuture*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(MinimalFuture$$Lambda$lambda$of$0, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.common.MinimalFuture$$Lambda$lambda$of$0",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(MinimalFuture$$Lambda$lambda$of$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MinimalFuture$$Lambda$lambda$of$0);
	});
	return class$;
}
$Class* MinimalFuture$$Lambda$lambda$of$0::class$ = nullptr;

$AtomicLong* MinimalFuture::TOKENS = nullptr;

MinimalFuture* MinimalFuture::completedFuture(Object$* value) {
	$init(MinimalFuture);
	$var(MinimalFuture, f, $new(MinimalFuture));
	f->complete(value);
	return f;
}

$CompletableFuture* MinimalFuture::failedFuture($Throwable* ex) {
	$init(MinimalFuture);
	$Objects::requireNonNull(ex);
	$var(MinimalFuture, f, $new(MinimalFuture));
	f->completeExceptionally(ex);
	return f;
}

$CompletableFuture* MinimalFuture::supply($MinimalFuture$ExceptionalSupplier* supplier) {
	$init(MinimalFuture);
	$useLocalObjectStack();
	$var($CompletableFuture, cf, $new(MinimalFuture));
	try {
		$var($Object, value, $nc(supplier)->get());
		cf->complete(value);
	} catch ($Throwable& t) {
		cf->completeExceptionally(t);
	}
	return cf;
}

void MinimalFuture::init$() {
	MinimalFuture::init$(nullptr);
}

void MinimalFuture::init$($Cancelable* cancelable) {
	$CompletableFuture::init$();
	this->id = MinimalFuture::TOKENS->incrementAndGet();
	$set(this, cancelable$, cancelable);
}

MinimalFuture* MinimalFuture::newIncompleteFuture() {
	return $new(MinimalFuture, this->cancelable$);
}

void MinimalFuture::obtrudeValue(Object$* value) {
	$throwNew($UnsupportedOperationException);
}

void MinimalFuture::obtrudeException($Throwable* ex) {
	$throwNew($UnsupportedOperationException);
}

$String* MinimalFuture::toString() {
	$useLocalObjectStack();
	return $str({$($CompletableFuture::toString()), " (id="_s, $$str(this->id), ")"_s});
}

bool MinimalFuture::cancel(bool mayInterruptIfRunning) {
	bool result = false;
	if (this->cancelable$ != nullptr && !isDone()) {
		result = this->cancelable$->cancel(mayInterruptIfRunning);
	}
	return $CompletableFuture::cancel(mayInterruptIfRunning) || result;
}

$Cancelable* MinimalFuture::cancelable() {
	return this->cancelable$;
}

MinimalFuture* MinimalFuture::of($CompletionStage* stage) {
	$init(MinimalFuture);
	$useLocalObjectStack();
	$var($Cancelable, cancelable, $instanceOf(MinimalFuture, stage) ? $cast(MinimalFuture, stage)->cancelable() : ($Cancelable*)nullptr);
	$var(MinimalFuture, cf, $new(MinimalFuture, cancelable));
	$nc(stage)->whenComplete($$new(MinimalFuture$$Lambda$lambda$of$0, cf));
	return cf;
}

void MinimalFuture::complete($CompletableFuture* cf, Object$* result, $Throwable* t) {
	$init(MinimalFuture);
	if (t == nullptr) {
		$nc(cf)->complete(result);
	} else {
		$nc(cf)->completeExceptionally(t);
	}
}

void MinimalFuture::lambda$of$0(MinimalFuture* cf, Object$* r, $Throwable* t) {
	$init(MinimalFuture);
	complete(cf, r, t);
}

void MinimalFuture::clinit$($Class* clazz) {
	$assignStatic(MinimalFuture::TOKENS, $new($AtomicLong));
}

MinimalFuture::MinimalFuture() {
}

$Class* MinimalFuture::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.common.MinimalFuture$$Lambda$lambda$of$0")) {
			return MinimalFuture$$Lambda$lambda$of$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"TOKENS", "Ljava/util/concurrent/atomic/AtomicLong;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MinimalFuture, TOKENS)},
		{"id", "J", nullptr, $PRIVATE | $FINAL, $field(MinimalFuture, id)},
		{"cancelable", "Ljdk/internal/net/http/common/Cancelable;", nullptr, $PRIVATE | $FINAL, $field(MinimalFuture, cancelable$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MinimalFuture, init$, void)},
		{"<init>", "(Ljdk/internal/net/http/common/Cancelable;)V", nullptr, $PUBLIC, $method(MinimalFuture, init$, void, $Cancelable*)},
		{"cancel", "(Z)Z", nullptr, $PUBLIC, $virtualMethod(MinimalFuture, cancel, bool, bool)},
		{"cancelable", "()Ljdk/internal/net/http/common/Cancelable;", nullptr, $PRIVATE, $method(MinimalFuture, cancelable, $Cancelable*)},
		{"complete", "(Ljava/util/concurrent/CompletableFuture;Ljava/lang/Object;Ljava/lang/Throwable;)V", "<U:Ljava/lang/Object;>(Ljava/util/concurrent/CompletableFuture<TU;>;TU;Ljava/lang/Throwable;)V", $PRIVATE | $STATIC, $staticMethod(MinimalFuture, complete, void, $CompletableFuture*, Object$*, $Throwable*)},
		{"completedFuture", "(Ljava/lang/Object;)Ljdk/internal/net/http/common/MinimalFuture;", "<U:Ljava/lang/Object;>(TU;)Ljdk/internal/net/http/common/MinimalFuture<TU;>;", $PUBLIC | $STATIC, $staticMethod(MinimalFuture, completedFuture, MinimalFuture*, Object$*)},
		{"failedFuture", "(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletableFuture;", "<U:Ljava/lang/Object;>(Ljava/lang/Throwable;)Ljava/util/concurrent/CompletableFuture<TU;>;", $PUBLIC | $STATIC, $staticMethod(MinimalFuture, failedFuture, $CompletableFuture*, $Throwable*)},
		{"lambda$of$0", "(Ljdk/internal/net/http/common/MinimalFuture;Ljava/lang/Object;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(MinimalFuture, lambda$of$0, void, MinimalFuture*, Object$*, $Throwable*)},
		{"newIncompleteFuture", "()Ljdk/internal/net/http/common/MinimalFuture;", "<U:Ljava/lang/Object;>()Ljdk/internal/net/http/common/MinimalFuture<TU;>;", $PUBLIC, $virtualMethod(MinimalFuture, newIncompleteFuture, MinimalFuture*)},
		{"obtrudeException", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $virtualMethod(MinimalFuture, obtrudeException, void, $Throwable*)},
		{"obtrudeValue", "(Ljava/lang/Object;)V", "(TT;)V", $PUBLIC, $virtualMethod(MinimalFuture, obtrudeValue, void, Object$*)},
		{"of", "(Ljava/util/concurrent/CompletionStage;)Ljdk/internal/net/http/common/MinimalFuture;", "<U:Ljava/lang/Object;>(Ljava/util/concurrent/CompletionStage<TU;>;)Ljdk/internal/net/http/common/MinimalFuture<TU;>;", $PUBLIC | $STATIC, $staticMethod(MinimalFuture, of, MinimalFuture*, $CompletionStage*)},
		{"supply", "(Ljdk/internal/net/http/common/MinimalFuture$ExceptionalSupplier;)Ljava/util/concurrent/CompletableFuture;", "<U:Ljava/lang/Object;>(Ljdk/internal/net/http/common/MinimalFuture$ExceptionalSupplier<TU;>;)Ljava/util/concurrent/CompletableFuture<TU;>;", $PUBLIC | $STATIC, $staticMethod(MinimalFuture, supply, $CompletableFuture*, $MinimalFuture$ExceptionalSupplier*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(MinimalFuture, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.common.MinimalFuture$ExceptionalSupplier", "jdk.internal.net.http.common.MinimalFuture", "ExceptionalSupplier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"jdk.internal.net.http.common.MinimalFuture",
		"java.util.concurrent.CompletableFuture",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"<T:Ljava/lang/Object;>Ljava/util/concurrent/CompletableFuture<TT;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"jdk.internal.net.http.common.MinimalFuture$ExceptionalSupplier"
	};
	$loadClass(MinimalFuture, name, initialize, &classInfo$$, MinimalFuture::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MinimalFuture));
	});
	return class$;
}

$Class* MinimalFuture::class$ = nullptr;

				} // common
			} // http
		} // net
	} // internal
} // jdk
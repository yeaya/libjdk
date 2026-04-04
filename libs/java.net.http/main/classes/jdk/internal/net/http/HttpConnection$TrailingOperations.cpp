#include <jdk/internal/net/http/HttpConnection$TrailingOperations.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/IdentityHashMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/CompletionStage.h>
#include <java/util/function/BiConsumer.h>
#include <jdk/internal/net/http/HttpConnection.h>
#include <jcpp.h>

#undef TRUE

using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $IdentityHashMap = ::java::util::IdentityHashMap;
using $CompletionStage = ::java::util::concurrent::CompletionStage;
using $BiConsumer = ::java::util::function::BiConsumer;

namespace jdk {
	namespace internal {
		namespace net {
			namespace http {

class HttpConnection$TrailingOperations$$Lambda$lambda$add$0 : public $BiConsumer {
	$class(HttpConnection$TrailingOperations$$Lambda$lambda$add$0, $NO_CLASS_INIT, $BiConsumer)
public:
	void init$(HttpConnection$TrailingOperations* inst, $CompletionStage* cf) {
		$set(this, inst$, inst);
		$set(this, cf, cf);
	}
	virtual void accept(Object$* r, Object$* t) override {
		$nc(inst$)->lambda$add$0(cf, r, $cast($Throwable, t));
	}
	HttpConnection$TrailingOperations* inst$ = nullptr;
	$CompletionStage* cf = nullptr;
};
$Class* HttpConnection$TrailingOperations$$Lambda$lambda$add$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HttpConnection$TrailingOperations$$Lambda$lambda$add$0, inst$)},
		{"cf", "Ljava/util/concurrent/CompletionStage;", nullptr, $PUBLIC, $field(HttpConnection$TrailingOperations$$Lambda$lambda$add$0, cf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljdk/internal/net/http/HttpConnection$TrailingOperations;Ljava/util/concurrent/CompletionStage;)V", nullptr, $PUBLIC, $method(HttpConnection$TrailingOperations$$Lambda$lambda$add$0, init$, void, HttpConnection$TrailingOperations*, $CompletionStage*)},
		{"accept", "(Ljava/lang/Object;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(HttpConnection$TrailingOperations$$Lambda$lambda$add$0, accept, void, Object$*, Object$*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"jdk.internal.net.http.HttpConnection$TrailingOperations$$Lambda$lambda$add$0",
		"java.lang.Object",
		"java.util.function.BiConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HttpConnection$TrailingOperations$$Lambda$lambda$add$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpConnection$TrailingOperations$$Lambda$lambda$add$0);
	});
	return class$;
}
$Class* HttpConnection$TrailingOperations$$Lambda$lambda$add$0::class$ = nullptr;

void HttpConnection$TrailingOperations::init$() {
	$set(this, operations, $new($IdentityHashMap));
}

void HttpConnection$TrailingOperations::add($CompletionStage* cf) {
	$synchronized(this->operations) {
		this->operations->put(cf, $Boolean::TRUE);
		$nc(cf)->whenComplete($$new(HttpConnection$TrailingOperations$$Lambda$lambda$add$0, this, cf));
	}
}

bool HttpConnection$TrailingOperations::remove($CompletionStage* cf) {
	$synchronized(this->operations) {
		return $$sure($Boolean, this->operations->remove(cf))->booleanValue();
	}
}

void HttpConnection$TrailingOperations::lambda$add$0($CompletionStage* cf, Object$* r, $Throwable* t) {
	remove(cf);
}

HttpConnection$TrailingOperations::HttpConnection$TrailingOperations() {
}

$Class* HttpConnection$TrailingOperations::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("jdk.internal.net.http.HttpConnection$TrailingOperations$$Lambda$lambda$add$0")) {
			return HttpConnection$TrailingOperations$$Lambda$lambda$add$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"operations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/util/concurrent/CompletionStage<*>;Ljava/lang/Boolean;>;", $PRIVATE | $FINAL, $field(HttpConnection$TrailingOperations, operations)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(HttpConnection$TrailingOperations, init$, void)},
		{"add", "(Ljava/util/concurrent/CompletionStage;)V", "(Ljava/util/concurrent/CompletionStage<*>;)V", 0, $method(HttpConnection$TrailingOperations, add, void, $CompletionStage*)},
		{"lambda$add$0", "(Ljava/util/concurrent/CompletionStage;Ljava/lang/Object;Ljava/lang/Throwable;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(HttpConnection$TrailingOperations, lambda$add$0, void, $CompletionStage*, Object$*, $Throwable*)},
		{"remove", "(Ljava/util/concurrent/CompletionStage;)Z", "(Ljava/util/concurrent/CompletionStage<*>;)Z", 0, $method(HttpConnection$TrailingOperations, remove, bool, $CompletionStage*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"jdk.internal.net.http.HttpConnection$TrailingOperations", "jdk.internal.net.http.HttpConnection", "TrailingOperations", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"jdk.internal.net.http.HttpConnection$TrailingOperations",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"jdk.internal.net.http.HttpConnection"
	};
	$loadClass(HttpConnection$TrailingOperations, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HttpConnection$TrailingOperations);
	});
	return class$;
}

$Class* HttpConnection$TrailingOperations::class$ = nullptr;

			} // http
		} // net
	} // internal
} // jdk
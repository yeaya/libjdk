#include <com/sun/tools/sjavac/comp/PooledSjavac.h>
#include <com/sun/tools/javac/main/Main$Result.h>
#include <com/sun/tools/sjavac/Log.h>
#include <com/sun/tools/sjavac/server/Sjavac.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/List.h>
#include <java/util/Objects.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutorService.h>
#include <java/util/concurrent/Executors.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/TimeUnit.h>
#include <jcpp.h>

#undef SECONDS

using $Main$Result = ::com::sun::tools::javac::main::Main$Result;
using $Log = ::com::sun::tools::sjavac::Log;
using $Sjavac = ::com::sun::tools::sjavac::server::Sjavac;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Objects = ::java::util::Objects;
using $Callable = ::java::util::concurrent::Callable;
using $Executors = ::java::util::concurrent::Executors;
using $TimeUnit = ::java::util::concurrent::TimeUnit;

namespace com {
	namespace sun {
		namespace tools {
			namespace sjavac {
				namespace comp {

class PooledSjavac$$Lambda$lambda$compile$0 : public $Callable {
	$class(PooledSjavac$$Lambda$lambda$compile$0, $NO_CLASS_INIT, $Callable)
public:
	void init$(PooledSjavac* inst, $Log* log, $StringArray* args) {
		$set(this, inst$, inst);
		$set(this, log, log);
		$set(this, args, args);
	}
	virtual $Object* call() override {
		 return $of($nc(inst$)->lambda$compile$0(log, args));
	}
	PooledSjavac* inst$ = nullptr;
	$Log* log = nullptr;
	$StringArray* args = nullptr;
};
$Class* PooledSjavac$$Lambda$lambda$compile$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(PooledSjavac$$Lambda$lambda$compile$0, inst$)},
		{"log", "Lcom/sun/tools/sjavac/Log;", nullptr, $PUBLIC, $field(PooledSjavac$$Lambda$lambda$compile$0, log)},
		{"args", "[Ljava/lang/String;", nullptr, $PUBLIC, $field(PooledSjavac$$Lambda$lambda$compile$0, args)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/comp/PooledSjavac;Lcom/sun/tools/sjavac/Log;[Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PooledSjavac$$Lambda$lambda$compile$0, init$, void, PooledSjavac*, $Log*, $StringArray*)},
		{"call", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(PooledSjavac$$Lambda$lambda$compile$0, call, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"com.sun.tools.sjavac.comp.PooledSjavac$$Lambda$lambda$compile$0",
		"java.lang.Object",
		"java.util.concurrent.Callable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PooledSjavac$$Lambda$lambda$compile$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PooledSjavac$$Lambda$lambda$compile$0);
	});
	return class$;
}
$Class* PooledSjavac$$Lambda$lambda$compile$0::class$ = nullptr;

void PooledSjavac::init$($Sjavac* delegate, int32_t poolsize) {
	$Objects::requireNonNull(delegate);
	$set(this, delegate, delegate);
	$set(this, pool, $Executors::newFixedThreadPool(poolsize));
}

$Main$Result* PooledSjavac::compile($StringArray* args) {
	$useLocalObjectStack();
	$var($Log, log, $Log::get());
	try {
		return $cast($Main$Result, $$nc($nc(this->pool)->submit($$new(PooledSjavac$$Lambda$lambda$compile$0, this, log, args)))->get());
	} catch ($Exception& e) {
		e->printStackTrace();
		$throwNew($RuntimeException, "Error during compile"_s, e);
	}
	$shouldNotReachHere();
}

void PooledSjavac::shutdown() {
	$Log::debug("Shutting down PooledSjavac"_s);
	$nc(this->pool)->shutdown();
	try {
		$init($TimeUnit);
		if (!this->pool->awaitTermination(60, $TimeUnit::SECONDS)) {
			this->pool->shutdownNow();
			if (!this->pool->awaitTermination(60, $TimeUnit::SECONDS)) {
				$Log::error("ThreadPool did not terminate"_s);
			}
		}
	} catch ($InterruptedException& ie) {
		this->pool->shutdownNow();
		$($Thread::currentThread())->interrupt();
	}
	$nc(this->delegate)->shutdown();
}

$Main$Result* PooledSjavac::lambda$compile$0($Log* log, $StringArray* args) {
	$Log::setLogForCurrentThread(log);
	return $nc(this->delegate)->compile(args);
}

PooledSjavac::PooledSjavac() {
}

$Class* PooledSjavac::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("com.sun.tools.sjavac.comp.PooledSjavac$$Lambda$lambda$compile$0")) {
			return PooledSjavac$$Lambda$lambda$compile$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"delegate", "Lcom/sun/tools/sjavac/server/Sjavac;", nullptr, $FINAL, $field(PooledSjavac, delegate)},
		{"pool", "Ljava/util/concurrent/ExecutorService;", nullptr, $FINAL, $field(PooledSjavac, pool)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/sun/tools/sjavac/server/Sjavac;I)V", nullptr, $PUBLIC, $method(PooledSjavac, init$, void, $Sjavac*, int32_t)},
		{"compile", "([Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PUBLIC, $virtualMethod(PooledSjavac, compile, $Main$Result*, $StringArray*)},
		{"lambda$compile$0", "(Lcom/sun/tools/sjavac/Log;[Ljava/lang/String;)Lcom/sun/tools/javac/main/Main$Result;", nullptr, $PRIVATE | $SYNTHETIC, $method(PooledSjavac, lambda$compile$0, $Main$Result*, $Log*, $StringArray*), "java.lang.Exception"},
		{"shutdown", "()V", nullptr, $PUBLIC, $virtualMethod(PooledSjavac, shutdown, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.tools.sjavac.comp.PooledSjavac",
		"java.lang.Object",
		"com.sun.tools.sjavac.server.Sjavac",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PooledSjavac, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(PooledSjavac);
	});
	return class$;
}

$Class* PooledSjavac::class$ = nullptr;

				} // comp
			} // sjavac
		} // tools
	} // sun
} // com
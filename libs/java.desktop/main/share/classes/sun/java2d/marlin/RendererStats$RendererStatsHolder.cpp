#include <sun/java2d/marlin/RendererStats$RendererStatsHolder.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/Cleaner$Cleanable.h>
#include <java/lang/ref/Cleaner.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Iterator.h>
#include <java/util/concurrent/ConcurrentLinkedQueue.h>
#include <jdk/internal/ref/CleanerFactory.h>
#include <sun/java2d/marlin/MarlinUtils.h>
#include <sun/java2d/marlin/RendererStats$RendererStatsHolder$1.h>
#include <sun/java2d/marlin/RendererStats.h>
#include <jcpp.h>

#undef SINGLETON

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Iterator = ::java::util::Iterator;
using $ConcurrentLinkedQueue = ::java::util::concurrent::ConcurrentLinkedQueue;
using $CleanerFactory = ::jdk::internal::ref::CleanerFactory;
using $MarlinUtils = ::sun::java2d::marlin::MarlinUtils;
using $RendererStats = ::sun::java2d::marlin::RendererStats;
using $RendererStats$RendererStatsHolder$1 = ::sun::java2d::marlin::RendererStats$RendererStatsHolder$1;

namespace sun {
	namespace java2d {
		namespace marlin {

class RendererStats$RendererStatsHolder$$Lambda$lambda$new$0 : public $PrivilegedAction {
	$class(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(RendererStats$RendererStatsHolder* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		return $nc(inst$)->lambda$new$0();
	}
	RendererStats$RendererStatsHolder* inst$ = nullptr;
};
$Class* RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/marlin/RendererStats$RendererStatsHolder;)V", nullptr, $PUBLIC, $method(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0, init$, void, RendererStats$RendererStatsHolder*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.java2d.marlin.RendererStats$RendererStatsHolder$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::class$ = nullptr;

class RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1 : public $Runnable {
	$class(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(RendererStats$RendererStatsHolder* inst, $RendererStats* stats) {
		$set(this, inst$, inst);
		$set(this, stats, stats);
	}
	virtual void run() override {
		$nc(inst$)->lambda$add$1(stats);
	}
	RendererStats$RendererStatsHolder* inst$ = nullptr;
	$RendererStats* stats = nullptr;
};
$Class* RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, inst$)},
		{"stats", "Lsun/java2d/marlin/RendererStats;", nullptr, $PUBLIC, $field(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, stats)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/java2d/marlin/RendererStats$RendererStatsHolder;Lsun/java2d/marlin/RendererStats;)V", nullptr, $PUBLIC, $method(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, init$, void, RendererStats$RendererStatsHolder*, $RendererStats*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.java2d.marlin.RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1);
	});
	return class$;
}
$Class* RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::class$ = nullptr;

$volatile(RendererStats$RendererStatsHolder*) RendererStats$RendererStatsHolder::SINGLETON = nullptr;

RendererStats$RendererStatsHolder* RendererStats$RendererStatsHolder::getInstance() {
	$init(RendererStats$RendererStatsHolder);
	$synchronized(class$) {
		if (RendererStats$RendererStatsHolder::SINGLETON == nullptr) {
			$assignStatic(RendererStats$RendererStatsHolder::SINGLETON, $new(RendererStats$RendererStatsHolder));
		}
		return RendererStats$RendererStatsHolder::SINGLETON;
	}
}

void RendererStats$RendererStatsHolder::dumpStats() {
	$init(RendererStats$RendererStatsHolder);
	if (RendererStats$RendererStatsHolder::SINGLETON != nullptr) {
		$nc(RendererStats$RendererStatsHolder::SINGLETON)->dump();
	}
}

void RendererStats$RendererStatsHolder::init$() {
	$beforeCallerSensitive();
	$set(this, allStats, $new($ConcurrentLinkedQueue));
	$AccessController::doPrivileged($cast($PrivilegedAction, $$new(RendererStats$RendererStatsHolder$$Lambda$lambda$new$0, this)));
}

void RendererStats$RendererStatsHolder::add(Object$* parent, $RendererStats* stats) {
	$useLocalObjectStack();
	this->allStats->add(stats);
	$$nc($CleanerFactory::cleaner())->register$(parent, $$new(RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1, this, stats));
}

void RendererStats$RendererStatsHolder::remove($RendererStats* stats) {
	$nc(stats)->dump();
	this->allStats->remove(stats);
}

void RendererStats$RendererStatsHolder::dump() {
	$useLocalObjectStack();
	$var($Iterator, i$, this->allStats->iterator());
	for (; $nc(i$)->hasNext();) {
		$var($RendererStats, stats, $cast($RendererStats, i$->next()));
		{
			$nc(stats)->dump();
		}
	}
}

void RendererStats$RendererStatsHolder::lambda$add$1($RendererStats* stats) {
	remove(stats);
}

$Void* RendererStats$RendererStatsHolder::lambda$new$0() {
	$useLocalObjectStack();
	$var($ThreadGroup, var$0, $MarlinUtils::getRootThreadGroup());
	$var($Thread, hook, $new($Thread, var$0, $$new($RendererStats$RendererStatsHolder$1, this), "MarlinStatsHook"_s));
	hook->setContextClassLoader(nullptr);
	$$nc($Runtime::getRuntime())->addShutdownHook(hook);
	;
	return nullptr;
}

void RendererStats$RendererStatsHolder::clinit$($Class* clazz) {
	$assignStatic(RendererStats$RendererStatsHolder::SINGLETON, nullptr);
}

RendererStats$RendererStatsHolder::RendererStats$RendererStatsHolder() {
}

$Class* RendererStats$RendererStatsHolder::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.java2d.marlin.RendererStats$RendererStatsHolder$$Lambda$lambda$new$0")) {
			return RendererStats$RendererStatsHolder$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals("sun.java2d.marlin.RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1")) {
			return RendererStats$RendererStatsHolder$$Lambda$lambda$add$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"SINGLETON", "Lsun/java2d/marlin/RendererStats$RendererStatsHolder;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(RendererStats$RendererStatsHolder, SINGLETON)},
		{"allStats", "Ljava/util/concurrent/ConcurrentLinkedQueue;", "Ljava/util/concurrent/ConcurrentLinkedQueue<Lsun/java2d/marlin/RendererStats;>;", $PRIVATE | $FINAL, $field(RendererStats$RendererStatsHolder, allStats)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RendererStats$RendererStatsHolder, init$, void)},
		{"add", "(Ljava/lang/Object;Lsun/java2d/marlin/RendererStats;)V", nullptr, 0, $method(RendererStats$RendererStatsHolder, add, void, Object$*, $RendererStats*)},
		{"dump", "()V", nullptr, 0, $method(RendererStats$RendererStatsHolder, dump, void)},
		{"dumpStats", "()V", nullptr, $STATIC, $staticMethod(RendererStats$RendererStatsHolder, dumpStats, void)},
		{"getInstance", "()Lsun/java2d/marlin/RendererStats$RendererStatsHolder;", nullptr, $STATIC | $SYNCHRONIZED, $staticMethod(RendererStats$RendererStatsHolder, getInstance, RendererStats$RendererStatsHolder*)},
		{"lambda$add$1", "(Lsun/java2d/marlin/RendererStats;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(RendererStats$RendererStatsHolder, lambda$add$1, void, $RendererStats*)},
		{"lambda$new$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(RendererStats$RendererStatsHolder, lambda$new$0, $Void*)},
		{"remove", "(Lsun/java2d/marlin/RendererStats;)V", nullptr, 0, $method(RendererStats$RendererStatsHolder, remove, void, $RendererStats*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.java2d.marlin.RendererStats$RendererStatsHolder", "sun.java2d.marlin.RendererStats", "RendererStatsHolder", $STATIC | $FINAL},
		{"sun.java2d.marlin.RendererStats$RendererStatsHolder$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.java2d.marlin.RendererStats$RendererStatsHolder",
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
		"sun.java2d.marlin.RendererStats"
	};
	$loadClass(RendererStats$RendererStatsHolder, name, initialize, &classInfo$$, RendererStats$RendererStatsHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(RendererStats$RendererStatsHolder);
	});
	return class$;
}

$Class* RendererStats$RendererStatsHolder::class$ = nullptr;

		} // marlin
	} // java2d
} // sun
#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker.h>
#include <java/io/Serializable.h>
#include <java/lang/Error.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/Runtime.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/List.h>
#include <java/util/concurrent/AbstractExecutorService.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/Future.h>
#include <java/util/concurrent/LinkedBlockingQueue.h>
#include <java/util/concurrent/RejectedExecutionException.h>
#include <java/util/concurrent/ThreadPoolExecutor.h>
#include <java/util/concurrent/TimeUnit.h>
#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker$1.h>
#include <sun/awt/shell/Win32ShellFolderManager2$ComInvoker$2.h>
#include <sun/awt/shell/Win32ShellFolderManager2.h>
#include <sun/awt/util/ThreadGroupUtils.h>
#include <jcpp.h>

#undef DAYS
#undef MAX_PRIORITY

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $Runtime = ::java::lang::Runtime;
using $RuntimeException = ::java::lang::RuntimeException;
using $Void = ::java::lang::Void;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $Future = ::java::util::concurrent::Future;
using $LinkedBlockingQueue = ::java::util::concurrent::LinkedBlockingQueue;
using $RejectedExecutionException = ::java::util::concurrent::RejectedExecutionException;
using $ThreadPoolExecutor = ::java::util::concurrent::ThreadPoolExecutor;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $Win32ShellFolderManager2$ComInvoker$1 = ::sun::awt::shell::Win32ShellFolderManager2$ComInvoker$1;
using $Win32ShellFolderManager2$ComInvoker$2 = ::sun::awt::shell::Win32ShellFolderManager2$ComInvoker$2;
using $ThreadGroupUtils = ::sun::awt::util::ThreadGroupUtils;

namespace sun {
	namespace awt {
		namespace shell {

class Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1 : public $Runnable {
	$class(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(Win32ShellFolderManager2$ComInvoker* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	Win32ShellFolderManager2$ComInvoker* inst$ = nullptr;
};
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;)V", nullptr, $PUBLIC, $method(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1, init$, void, Win32ShellFolderManager2$ComInvoker*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1);
	});
	return class$;
}
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::class$ = nullptr;

class Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1 : public $PrivilegedAction {
	$class(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Runnable* shutdownHook) {
		$set(this, shutdownHook, shutdownHook);
	}
	virtual $Object* run() override {
		 return Win32ShellFolderManager2$ComInvoker::lambda$new$2(shutdownHook);
	}
	$Runnable* shutdownHook = nullptr;
};
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"shutdownHook", "Ljava/lang/Runnable;", nullptr, $PUBLIC, $field(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1, shutdownHook)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1, init$, void, $Runnable*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1);
	});
	return class$;
}
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::class$ = nullptr;

class Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2 : public $PrivilegedAction {
	$class(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$($Runnable* comRun) {
		$set(this, comRun, comRun);
	}
	virtual $Object* run() override {
		 return Win32ShellFolderManager2$ComInvoker::lambda$newThread$3(comRun);
	}
	$Runnable* comRun = nullptr;
};
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"comRun", "Ljava/lang/Runnable;", nullptr, $PUBLIC, $field(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2, comRun)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC, $method(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2, init$, void, $Runnable*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2);
	});
	return class$;
}
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::class$ = nullptr;

class Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3 : public $PrivilegedAction {
	$class(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$(Win32ShellFolderManager2$ComInvoker* inst) {
		$set(this, inst$, inst);
	}
	virtual $Object* run() override {
		 return $nc(inst$)->lambda$new$0();
	}
	Win32ShellFolderManager2$ComInvoker* inst$ = nullptr;
};
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/awt/shell/Win32ShellFolderManager2$ComInvoker;)V", nullptr, $PUBLIC, $method(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3, init$, void, Win32ShellFolderManager2$ComInvoker*)},
		{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3, run, $Object*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3",
		"java.lang.Object",
		"java.security.PrivilegedAction",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3);
	});
	return class$;
}
$Class* Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::class$ = nullptr;

void Win32ShellFolderManager2$ComInvoker::finalize() {
	this->$ThreadPoolExecutor::finalize();
}

$String* Win32ShellFolderManager2$ComInvoker::toString() {
	 return this->$ThreadPoolExecutor::toString();
}

int32_t Win32ShellFolderManager2$ComInvoker::hashCode() {
	 return this->$ThreadPoolExecutor::hashCode();
}

bool Win32ShellFolderManager2$ComInvoker::equals(Object$* arg0) {
	 return this->$ThreadPoolExecutor::equals(arg0);
}

$Object* Win32ShellFolderManager2$ComInvoker::clone() {
	 return this->$ThreadPoolExecutor::clone();
}

$Thread* Win32ShellFolderManager2$ComInvoker::comThread = nullptr;

void Win32ShellFolderManager2$ComInvoker::init$() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$init($TimeUnit);
	$ThreadPoolExecutor::init$(1, 1, 0, $TimeUnit::DAYS, $$new($LinkedBlockingQueue));
	allowCoreThreadTimeOut(false);
	setThreadFactory(this);
	$var($Runnable, shutdownHook, $new(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1, this));
	$AccessController::doPrivileged($cast($PrivilegedAction, $$new(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1, shutdownHook)));
}

$Thread* Win32ShellFolderManager2$ComInvoker::newThread($Runnable* task) {
	$synchronized(this) {
		$useLocalObjectStack();
		$beforeCallerSensitive();
		$var($Runnable, comRun, $new($Win32ShellFolderManager2$ComInvoker$1, this, task));
		$assignStatic(Win32ShellFolderManager2$ComInvoker::comThread, $cast($Thread, $AccessController::doPrivileged($cast($PrivilegedAction, $$new(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2, comRun)))));
		return Win32ShellFolderManager2$ComInvoker::comThread;
	}
}

$Object* Win32ShellFolderManager2$ComInvoker::invoke($Callable* task) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	if ($Thread::currentThread() == Win32ShellFolderManager2$ComInvoker::comThread) {
		return $nc(task)->call();
	} else {
		$var($Future, future, nullptr);
		try {
			$assign(future, submit(task));
		} catch ($RejectedExecutionException& e) {
			$throwNew($InterruptedException, $(e->getMessage()));
		}
		try {
			return $nc(future)->get();
		} catch ($InterruptedException& e) {
			$AccessController::doPrivileged($$new($Win32ShellFolderManager2$ComInvoker$2, this, future));
			$throw(e);
		} catch ($ExecutionException& e) {
			$var($Throwable, cause, e->getCause());
			if ($instanceOf($Exception, cause)) {
				$throw($cast($Exception, cause));
			}
			if ($instanceOf($Error, cause)) {
				$throw($cast($Error, cause));
			}
			$throwNew($RuntimeException, "Unexpected error"_s, cause);
		}
	}
	$shouldNotReachHere();
}

$Thread* Win32ShellFolderManager2$ComInvoker::lambda$newThread$3($Runnable* comRun) {
	$init(Win32ShellFolderManager2$ComInvoker);
	$useLocalObjectStack();
	$var($String, name, "Swing-Shell"_s);
	$var($Thread, thread, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), comRun, name, 0, false));
	thread->setDaemon(true);
	thread->setPriority($Thread::MAX_PRIORITY);
	return thread;
}

$Void* Win32ShellFolderManager2$ComInvoker::lambda$new$2($Runnable* shutdownHook) {
	$init(Win32ShellFolderManager2$ComInvoker);
	$useLocalObjectStack();
	$var($Thread, t, $new($Thread, $($ThreadGroupUtils::getRootThreadGroup()), shutdownHook, "ShellFolder"_s, 0, false));
	$$nc($Runtime::getRuntime())->addShutdownHook(t);
	return nullptr;
}

void Win32ShellFolderManager2$ComInvoker::lambda$new$1() {
	$beforeCallerSensitive();
	$AccessController::doPrivileged($cast($PrivilegedAction, $$new(Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3, this)));
}

$Void* Win32ShellFolderManager2$ComInvoker::lambda$new$0() {
	shutdownNow();
	return nullptr;
}

Win32ShellFolderManager2$ComInvoker::Win32ShellFolderManager2$ComInvoker() {
}

$Class* Win32ShellFolderManager2$ComInvoker::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1")) {
			return Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$1::load$(name, initialize);
		}
		if (name->equals("sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1")) {
			return Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$2$1::load$(name, initialize);
		}
		if (name->equals("sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2")) {
			return Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$newThread$3$2::load$(name, initialize);
		}
		if (name->equals("sun.awt.shell.Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3")) {
			return Win32ShellFolderManager2$ComInvoker$$Lambda$lambda$new$0$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"comThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(Win32ShellFolderManager2$ComInvoker, comThread)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PRIVATE, $method(Win32ShellFolderManager2$ComInvoker, init$, void)},
		{"invoke", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $PUBLIC, $virtualMethod(Win32ShellFolderManager2$ComInvoker, invoke, $Object*, $Callable*), "java.lang.Exception"},
		{"lambda$new$0", "()Ljava/lang/Void;", nullptr, $PRIVATE | $SYNTHETIC, $method(Win32ShellFolderManager2$ComInvoker, lambda$new$0, $Void*)},
		{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(Win32ShellFolderManager2$ComInvoker, lambda$new$1, void)},
		{"lambda$new$2", "(Ljava/lang/Runnable;)Ljava/lang/Void;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Win32ShellFolderManager2$ComInvoker, lambda$new$2, $Void*, $Runnable*)},
		{"lambda$newThread$3", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(Win32ShellFolderManager2$ComInvoker, lambda$newThread$3, $Thread*, $Runnable*)},
		{"newThread", "(Ljava/lang/Runnable;)Ljava/lang/Thread;", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(Win32ShellFolderManager2$ComInvoker, newThread, $Thread*, $Runnable*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker", "sun.awt.shell.Win32ShellFolderManager2", "ComInvoker", $PRIVATE | $STATIC},
		{"sun.awt.shell.ShellFolder$Invoker", "sun.awt.shell.ShellFolder", "Invoker", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$2", nullptr, nullptr, 0},
		{"sun.awt.shell.Win32ShellFolderManager2$ComInvoker$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.shell.Win32ShellFolderManager2$ComInvoker",
		"java.util.concurrent.ThreadPoolExecutor",
		"java.util.concurrent.ThreadFactory,sun.awt.shell.ShellFolder$Invoker",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.awt.shell.Win32ShellFolderManager2"
	};
	$loadClass(Win32ShellFolderManager2$ComInvoker, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Win32ShellFolderManager2$ComInvoker));
	});
	return class$;
}

$Class* Win32ShellFolderManager2$ComInvoker::class$ = nullptr;

		} // shell
	} // awt
} // sun
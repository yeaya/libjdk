#include <javax/swing/text/LayoutQueue.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/ThreadGroup.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Vector.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

#undef DEFAULT_QUEUE
#undef MIN_PRIORITY

using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $ThreadGroup = ::java::lang::ThreadGroup;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Vector = ::java::util::Vector;
using $AppContext = ::sun::awt::AppContext;

namespace javax {
	namespace swing {
		namespace text {

class LayoutQueue$$Lambda$lambda$addTask$0 : public $Runnable {
	$class(LayoutQueue$$Lambda$lambda$addTask$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(LayoutQueue* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$addTask$0();
	}
	LayoutQueue* inst$ = nullptr;
};
$Class* LayoutQueue$$Lambda$lambda$addTask$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(LayoutQueue$$Lambda$lambda$addTask$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/LayoutQueue;)V", nullptr, $PUBLIC, $method(LayoutQueue$$Lambda$lambda$addTask$0, init$, void, LayoutQueue*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LayoutQueue$$Lambda$lambda$addTask$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"javax.swing.text.LayoutQueue$$Lambda$lambda$addTask$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LayoutQueue$$Lambda$lambda$addTask$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LayoutQueue$$Lambda$lambda$addTask$0);
	});
	return class$;
}
$Class* LayoutQueue$$Lambda$lambda$addTask$0::class$ = nullptr;

$Object* LayoutQueue::DEFAULT_QUEUE = nullptr;

void LayoutQueue::init$() {
	$set(this, tasks, $new($Vector));
}

LayoutQueue* LayoutQueue::getDefaultQueue() {
	$init(LayoutQueue);
	$useLocalObjectStack();
	$var($AppContext, ac, $AppContext::getAppContext());
	$synchronized(LayoutQueue::DEFAULT_QUEUE) {
		$var(LayoutQueue, defaultQueue, $cast(LayoutQueue, $nc(ac)->get(LayoutQueue::DEFAULT_QUEUE)));
		if (defaultQueue == nullptr) {
			$assign(defaultQueue, $new(LayoutQueue));
			ac->put(LayoutQueue::DEFAULT_QUEUE, defaultQueue);
		}
		return defaultQueue;
	}
}

void LayoutQueue::setDefaultQueue(LayoutQueue* q) {
	$init(LayoutQueue);
	$synchronized(LayoutQueue::DEFAULT_QUEUE) {
		$$nc($AppContext::getAppContext())->put(LayoutQueue::DEFAULT_QUEUE, q);
	}
}

void LayoutQueue::addTask($Runnable* task) {
	$synchronized(this) {
		if (this->worker == nullptr) {
			$var($Runnable, workerRunnable, $new(LayoutQueue$$Lambda$lambda$addTask$0, this));
			$set(this, worker, $new($Thread, nullptr, workerRunnable, "text-layout"_s, 0, false));
			this->worker->setPriority($Thread::MIN_PRIORITY);
			this->worker->start();
		}
		$nc(this->tasks)->addElement(task);
		$of(this)->notifyAll();
	}
}

$Runnable* LayoutQueue::waitForWork() {
	$synchronized(this) {
		while ($nc(this->tasks)->size() == 0) {
			try {
				$of(this)->wait();
			} catch ($InterruptedException& ie) {
				return nullptr;
			}
		}
		$var($Runnable, work, $cast($Runnable, this->tasks->firstElement()));
		this->tasks->removeElementAt(0);
		return work;
	}
}

void LayoutQueue::lambda$addTask$0() {
	$var($Runnable, work, nullptr);
	do {
		$assign(work, waitForWork());
		if (work != nullptr) {
			work->run();
		}
	} while (work != nullptr);
}

void LayoutQueue::clinit$($Class* clazz) {
	$assignStatic(LayoutQueue::DEFAULT_QUEUE, $new($Object));
}

LayoutQueue::LayoutQueue() {
}

$Class* LayoutQueue::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("javax.swing.text.LayoutQueue$$Lambda$lambda$addTask$0")) {
			return LayoutQueue$$Lambda$lambda$addTask$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_QUEUE", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LayoutQueue, DEFAULT_QUEUE)},
		{"tasks", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/lang/Runnable;>;", $PRIVATE, $field(LayoutQueue, tasks)},
		{"worker", "Ljava/lang/Thread;", nullptr, $PRIVATE, $field(LayoutQueue, worker)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LayoutQueue, init$, void)},
		{"addTask", "(Ljava/lang/Runnable;)V", nullptr, $PUBLIC | $SYNCHRONIZED, $virtualMethod(LayoutQueue, addTask, void, $Runnable*)},
		{"getDefaultQueue", "()Ljavax/swing/text/LayoutQueue;", nullptr, $PUBLIC | $STATIC, $staticMethod(LayoutQueue, getDefaultQueue, LayoutQueue*)},
		{"lambda$addTask$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(LayoutQueue, lambda$addTask$0, void)},
		{"setDefaultQueue", "(Ljavax/swing/text/LayoutQueue;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LayoutQueue, setDefaultQueue, void, LayoutQueue*)},
		{"waitForWork", "()Ljava/lang/Runnable;", nullptr, $PROTECTED | $SYNCHRONIZED, $virtualMethod(LayoutQueue, waitForWork, $Runnable*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.text.LayoutQueue",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LayoutQueue, name, initialize, &classInfo$$, LayoutQueue::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LayoutQueue);
	});
	return class$;
}

$Class* LayoutQueue::class$ = nullptr;

		} // text
	} // swing
} // javax
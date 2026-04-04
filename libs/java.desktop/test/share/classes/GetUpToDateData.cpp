#include <GetUpToDateData.h>
#include <GetUpToDateData$1.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/event/AWTEventListener.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/EventListener.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/event/EventListenerList.h>
#include <jcpp.h>

#undef SECONDS

using $GetUpToDateData$1 = ::GetUpToDateData$1;
using $AWTEventListenerArray = $Array<::java::awt::event::AWTEventListener>;
using $AWTEvent = ::java::awt::AWTEvent;
using $AWTEventListener = ::java::awt::event::AWTEventListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $EventListener = ::java::util::EventListener;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $EventListenerList = ::javax::swing::event::EventListenerList;

class GetUpToDateData$$Lambda$lambda$static$0 : public $AWTEventListener {
	$class(GetUpToDateData$$Lambda$lambda$static$0, $NO_CLASS_INIT, $AWTEventListener)
public:
	void init$() {
	}
	virtual void eventDispatched($AWTEvent* event) override {
		GetUpToDateData::lambda$static$0(event);
	}
};
$Class* GetUpToDateData$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetUpToDateData$$Lambda$lambda$static$0, init$, void)},
		{"eventDispatched", "(Ljava/awt/AWTEvent;)V", nullptr, $PUBLIC, $virtualMethod(GetUpToDateData$$Lambda$lambda$static$0, eventDispatched, void, $AWTEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"GetUpToDateData$$Lambda$lambda$static$0",
		"java.lang.Object",
		"java.awt.event.AWTEventListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(GetUpToDateData$$Lambda$lambda$static$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetUpToDateData$$Lambda$lambda$static$0);
	});
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$static$0::class$ = nullptr;

class GetUpToDateData$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(GetUpToDateData$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		GetUpToDateData::lambda$main$1();
	}
};
$Class* GetUpToDateData$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetUpToDateData$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetUpToDateData$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"GetUpToDateData$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(GetUpToDateData$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetUpToDateData$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$main$1$1::class$ = nullptr;

class GetUpToDateData$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(GetUpToDateData$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		GetUpToDateData::lambda$main$2();
	}
};
$Class* GetUpToDateData$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetUpToDateData$$Lambda$lambda$main$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetUpToDateData$$Lambda$lambda$main$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"GetUpToDateData$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(GetUpToDateData$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetUpToDateData$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$main$2$2::class$ = nullptr;

class GetUpToDateData$$Lambda$lambda$main$3$3 : public $Runnable {
	$class(GetUpToDateData$$Lambda$lambda$main$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$($CountDownLatch* go) {
		$set(this, go, go);
	}
	virtual void run() override {
		GetUpToDateData::lambda$main$3(go);
	}
	$CountDownLatch* go = nullptr;
};
$Class* GetUpToDateData$$Lambda$lambda$main$3$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"go", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PUBLIC, $field(GetUpToDateData$$Lambda$lambda$main$3$3, go)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(GetUpToDateData$$Lambda$lambda$main$3$3, init$, void, $CountDownLatch*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetUpToDateData$$Lambda$lambda$main$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"GetUpToDateData$$Lambda$lambda$main$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GetUpToDateData$$Lambda$lambda$main$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetUpToDateData$$Lambda$lambda$main$3$3);
	});
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$main$3$3::class$ = nullptr;

class GetUpToDateData$$Lambda$lambda$main$4$4 : public $Runnable {
	$class(GetUpToDateData$$Lambda$lambda$main$4$4, $NO_CLASS_INIT, $Runnable)
public:
	void init$($CountDownLatch* go) {
		$set(this, go, go);
	}
	virtual void run() override {
		GetUpToDateData::lambda$main$4(go);
	}
	$CountDownLatch* go = nullptr;
};
$Class* GetUpToDateData$$Lambda$lambda$main$4$4::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"go", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PUBLIC, $field(GetUpToDateData$$Lambda$lambda$main$4$4, go)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(GetUpToDateData$$Lambda$lambda$main$4$4, init$, void, $CountDownLatch*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetUpToDateData$$Lambda$lambda$main$4$4, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"GetUpToDateData$$Lambda$lambda$main$4$4",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GetUpToDateData$$Lambda$lambda$main$4$4, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetUpToDateData$$Lambda$lambda$main$4$4);
	});
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$main$4$4::class$ = nullptr;

class GetUpToDateData$$Lambda$lambda$main$5$5 : public $Runnable {
	$class(GetUpToDateData$$Lambda$lambda$main$5$5, $NO_CLASS_INIT, $Runnable)
public:
	void init$($CountDownLatch* go) {
		$set(this, go, go);
	}
	virtual void run() override {
		GetUpToDateData::lambda$main$5(go);
	}
	$CountDownLatch* go = nullptr;
};
$Class* GetUpToDateData$$Lambda$lambda$main$5$5::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"go", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PUBLIC, $field(GetUpToDateData$$Lambda$lambda$main$5$5, go)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PUBLIC, $method(GetUpToDateData$$Lambda$lambda$main$5$5, init$, void, $CountDownLatch*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(GetUpToDateData$$Lambda$lambda$main$5$5, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"GetUpToDateData$$Lambda$lambda$main$5$5",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(GetUpToDateData$$Lambda$lambda$main$5$5, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(GetUpToDateData$$Lambda$lambda$main$5$5);
	});
	return class$;
}
$Class* GetUpToDateData$$Lambda$lambda$main$5$5::class$ = nullptr;

$EventListenerList* GetUpToDateData::listeners = nullptr;
$EventListener* GetUpToDateData::o1 = nullptr;
$AWTEventListener* GetUpToDateData::o2 = nullptr;

void GetUpToDateData::init$() {
}

void GetUpToDateData::main($StringArray* args) {
	$init(GetUpToDateData);
	$useLocalObjectStack();
	$var($CountDownLatch, go, $new($CountDownLatch, 3));
	$var($Thread, t1, $new($Thread, $$new(GetUpToDateData$$Lambda$lambda$main$1$1)));
	$var($Thread, t2, $new($Thread, $$new(GetUpToDateData$$Lambda$lambda$main$2$2)));
	$var($Thread, t3, $new($Thread, $$new(GetUpToDateData$$Lambda$lambda$main$3$3, go)));
	$var($Thread, t4, $new($Thread, $$new(GetUpToDateData$$Lambda$lambda$main$4$4, go)));
	$var($Thread, t5, $new($Thread, $$new(GetUpToDateData$$Lambda$lambda$main$5$5, go)));
	t1->setDaemon(true);
	t2->setDaemon(true);
	t3->setDaemon(true);
	t4->setDaemon(true);
	t5->setDaemon(true);
	t1->start();
	t2->start();
	t3->start();
	t4->start();
	t5->start();
	$init($TimeUnit);
	if (!go->await(10, $TimeUnit::SECONDS)) {
		$throwNew($RuntimeException, "The test hangs"_s);
	}
}

void GetUpToDateData::lambda$main$5($CountDownLatch* go) {
	$init(GetUpToDateData);
	$useLocalObjectStack();
	while (true) {
		$load($AWTEventListener);
		bool var$0 = $nc(($$cast($AWTEventListenerArray, GetUpToDateData::listeners->getListeners($AWTEventListener::class$))))->length != 1;
		if (!(var$0 || $nc(($$cast($AWTEventListenerArray, GetUpToDateData::listeners->getListeners($AWTEventListener::class$))))->get(0) != GetUpToDateData::o2)) {
			break;
		}
		{
		}
	}
	$nc(go)->countDown();
}

void GetUpToDateData::lambda$main$4($CountDownLatch* go) {
	$init(GetUpToDateData);
	$useLocalObjectStack();
	while (true) {
		$load($EventListener);
		bool var$0 = $nc($(GetUpToDateData::listeners->getListeners($EventListener::class$)))->length != 1;
		if (!(var$0 || $nc($(GetUpToDateData::listeners->getListeners($EventListener::class$)))->get(0) != GetUpToDateData::o1)) {
			break;
		}
		{
		}
	}
	$nc(go)->countDown();
}

void GetUpToDateData::lambda$main$3($CountDownLatch* go) {
	$init(GetUpToDateData);
	while (GetUpToDateData::listeners->getListenerCount() != 2) {
	}
	$nc(go)->countDown();
}

void GetUpToDateData::lambda$main$2() {
	$init(GetUpToDateData);
	try {
		$Thread::sleep(2000);
	} catch ($InterruptedException& e) {
	}
	$load($AWTEventListener);
	GetUpToDateData::listeners->add($AWTEventListener::class$, GetUpToDateData::o2);
}

void GetUpToDateData::lambda$main$1() {
	$init(GetUpToDateData);
	try {
		$Thread::sleep(2000);
	} catch ($InterruptedException& e) {
	}
	$load($EventListener);
	GetUpToDateData::listeners->add($EventListener::class$, GetUpToDateData::o1);
}

void GetUpToDateData::lambda$static$0($AWTEvent* event) {
	$init(GetUpToDateData);
}

void GetUpToDateData::clinit$($Class* clazz) {
	$assignStatic(GetUpToDateData::listeners, $new($EventListenerList));
	$assignStatic(GetUpToDateData::o1, $new($GetUpToDateData$1));
	$assignStatic(GetUpToDateData::o2, $new(GetUpToDateData$$Lambda$lambda$static$0));
}

GetUpToDateData::GetUpToDateData() {
}

$Class* GetUpToDateData::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("GetUpToDateData$$Lambda$lambda$static$0")) {
			return GetUpToDateData$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals("GetUpToDateData$$Lambda$lambda$main$1$1")) {
			return GetUpToDateData$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("GetUpToDateData$$Lambda$lambda$main$2$2")) {
			return GetUpToDateData$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals("GetUpToDateData$$Lambda$lambda$main$3$3")) {
			return GetUpToDateData$$Lambda$lambda$main$3$3::load$(name, initialize);
		}
		if (name->equals("GetUpToDateData$$Lambda$lambda$main$4$4")) {
			return GetUpToDateData$$Lambda$lambda$main$4$4::load$(name, initialize);
		}
		if (name->equals("GetUpToDateData$$Lambda$lambda$main$5$5")) {
			return GetUpToDateData$$Lambda$lambda$main$5$5::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"listeners", "Ljavax/swing/event/EventListenerList;", nullptr, $STATIC | $FINAL, $staticField(GetUpToDateData, listeners)},
		{"o1", "Ljava/util/EventListener;", nullptr, $STATIC | $FINAL, $staticField(GetUpToDateData, o1)},
		{"o2", "Ljava/awt/event/AWTEventListener;", nullptr, $STATIC | $FINAL, $staticField(GetUpToDateData, o2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(GetUpToDateData, init$, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GetUpToDateData, lambda$main$1, void)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GetUpToDateData, lambda$main$2, void)},
		{"lambda$main$3", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GetUpToDateData, lambda$main$3, void, $CountDownLatch*)},
		{"lambda$main$4", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GetUpToDateData, lambda$main$4, void, $CountDownLatch*)},
		{"lambda$main$5", "(Ljava/util/concurrent/CountDownLatch;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GetUpToDateData, lambda$main$5, void, $CountDownLatch*)},
		{"lambda$static$0", "(Ljava/awt/AWTEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GetUpToDateData, lambda$static$0, void, $AWTEvent*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(GetUpToDateData, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"GetUpToDateData$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"GetUpToDateData",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"GetUpToDateData$1"
	};
	$loadClass(GetUpToDateData, name, initialize, &classInfo$$, GetUpToDateData::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(GetUpToDateData);
	});
	return class$;
}

$Class* GetUpToDateData::class$ = nullptr;
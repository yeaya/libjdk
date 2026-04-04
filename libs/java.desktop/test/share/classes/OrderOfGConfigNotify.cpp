#include <OrderOfGConfigNotify.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $EventQueue = ::java::awt::EventQueue;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;

class OrderOfGConfigNotify$$Lambda$lambda$main$2 : public $Runnable {
	$class(OrderOfGConfigNotify$$Lambda$lambda$main$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		OrderOfGConfigNotify::lambda$main$2();
	}
};
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OrderOfGConfigNotify$$Lambda$lambda$main$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(OrderOfGConfigNotify$$Lambda$lambda$main$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"OrderOfGConfigNotify$$Lambda$lambda$main$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(OrderOfGConfigNotify$$Lambda$lambda$main$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OrderOfGConfigNotify$$Lambda$lambda$main$2);
	});
	return class$;
}
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$2::class$ = nullptr;

class OrderOfGConfigNotify$$Lambda$lambda$main$0$1 : public $PropertyChangeListener {
	$class(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$($AtomicBoolean* childCalled, $AtomicBoolean* parentCalled, $JPanel* parent) {
		$set(this, childCalled, childCalled);
		$set(this, parentCalled, parentCalled);
		$set(this, parent, parent);
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		OrderOfGConfigNotify::lambda$main$0(childCalled, parentCalled, parent, evt);
	}
	$AtomicBoolean* childCalled = nullptr;
	$AtomicBoolean* parentCalled = nullptr;
	$JPanel* parent = nullptr;
};
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$0$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"childCalled", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, childCalled)},
		{"parentCalled", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, parentCalled)},
		{"parent", "Ljavax/swing/JPanel;", nullptr, $PUBLIC, $field(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, parent)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicBoolean;Ljava/util/concurrent/atomic/AtomicBoolean;Ljavax/swing/JPanel;)V", nullptr, $PUBLIC, $method(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, init$, void, $AtomicBoolean*, $AtomicBoolean*, $JPanel*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"OrderOfGConfigNotify$$Lambda$lambda$main$0$1",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OrderOfGConfigNotify$$Lambda$lambda$main$0$1);
	});
	return class$;
}
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$0$1::class$ = nullptr;

class OrderOfGConfigNotify$$Lambda$lambda$main$1$2 : public $PropertyChangeListener {
	$class(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$($AtomicBoolean* childCalled, $JPanel* child) {
		$set(this, childCalled, childCalled);
		$set(this, child, child);
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		OrderOfGConfigNotify::lambda$main$1(childCalled, child, evt);
	}
	$AtomicBoolean* childCalled = nullptr;
	$JPanel* child = nullptr;
};
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$1$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"childCalled", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PUBLIC, $field(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, childCalled)},
		{"child", "Ljavax/swing/JPanel;", nullptr, $PUBLIC, $field(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, child)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/concurrent/atomic/AtomicBoolean;Ljavax/swing/JPanel;)V", nullptr, $PUBLIC, $method(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, init$, void, $AtomicBoolean*, $JPanel*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"OrderOfGConfigNotify$$Lambda$lambda$main$1$2",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(OrderOfGConfigNotify$$Lambda$lambda$main$1$2);
	});
	return class$;
}
$Class* OrderOfGConfigNotify$$Lambda$lambda$main$1$2::class$ = nullptr;

$String* OrderOfGConfigNotify::name = nullptr;

void OrderOfGConfigNotify::init$() {
}

void OrderOfGConfigNotify::main($StringArray* args) {
	$init(OrderOfGConfigNotify);
	$EventQueue::invokeAndWait($$new(OrderOfGConfigNotify$$Lambda$lambda$main$2));
}

void OrderOfGConfigNotify::lambda$main$2() {
	$init(OrderOfGConfigNotify);
	$useLocalObjectStack();
	$var($AtomicBoolean, parentCalled, $new($AtomicBoolean, false));
	$var($AtomicBoolean, childCalled, $new($AtomicBoolean, false));
	$var($JFrame, frame, $new($JFrame));
	$var($JPanel, parent, $new($JPanel));
	parent->addPropertyChangeListener($$new(OrderOfGConfigNotify$$Lambda$lambda$main$0$1, childCalled, parentCalled, parent));
	$var($JPanel, child, $new($JPanel));
	child->addPropertyChangeListener($$new(OrderOfGConfigNotify$$Lambda$lambda$main$1$2, childCalled, child));
	parent->add(child);
	frame->add(parent);
	bool var$0 = !parentCalled->get();
	if (var$0 || !childCalled->get()) {
		$throwNew($RuntimeException, "Property listener was not called"_s);
	}
}

void OrderOfGConfigNotify::lambda$main$1($AtomicBoolean* childCalled, $JPanel* child, $PropertyChangeEvent* evt) {
	$init(OrderOfGConfigNotify);
	if (!$$nc($nc(evt)->getPropertyName())->equals(OrderOfGConfigNotify::name)) {
		return;
	}
	$nc(childCalled)->set(true);
	if ($nc(child)->getGraphicsConfiguration() == nullptr) {
		$throwNew($RuntimeException, "GraphicsConfiguration is null"_s);
	}
}

void OrderOfGConfigNotify::lambda$main$0($AtomicBoolean* childCalled, $AtomicBoolean* parentCalled, $JPanel* parent, $PropertyChangeEvent* evt) {
	$init(OrderOfGConfigNotify);
	if (!$$nc($nc(evt)->getPropertyName())->equals(OrderOfGConfigNotify::name)) {
		return;
	}
	if (!$nc(childCalled)->get()) {
		$throwNew($RuntimeException, "Parent is called/child is not"_s);
	}
	$nc(parentCalled)->set(true);
	if ($nc(parent)->getGraphicsConfiguration() == nullptr) {
		$throwNew($RuntimeException, "GraphicsConfiguration is null"_s);
	}
}

void OrderOfGConfigNotify::clinit$($Class* clazz) {
	$assignStatic(OrderOfGConfigNotify::name, "graphicsConfiguration"_s);
}

OrderOfGConfigNotify::OrderOfGConfigNotify() {
}

$Class* OrderOfGConfigNotify::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("OrderOfGConfigNotify$$Lambda$lambda$main$2")) {
			return OrderOfGConfigNotify$$Lambda$lambda$main$2::load$(name, initialize);
		}
		if (name->equals("OrderOfGConfigNotify$$Lambda$lambda$main$0$1")) {
			return OrderOfGConfigNotify$$Lambda$lambda$main$0$1::load$(name, initialize);
		}
		if (name->equals("OrderOfGConfigNotify$$Lambda$lambda$main$1$2")) {
			return OrderOfGConfigNotify$$Lambda$lambda$main$1$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(OrderOfGConfigNotify, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(OrderOfGConfigNotify, init$, void)},
		{"lambda$main$0", "(Ljava/util/concurrent/atomic/AtomicBoolean;Ljava/util/concurrent/atomic/AtomicBoolean;Ljavax/swing/JPanel;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(OrderOfGConfigNotify, lambda$main$0, void, $AtomicBoolean*, $AtomicBoolean*, $JPanel*, $PropertyChangeEvent*)},
		{"lambda$main$1", "(Ljava/util/concurrent/atomic/AtomicBoolean;Ljavax/swing/JPanel;Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(OrderOfGConfigNotify, lambda$main$1, void, $AtomicBoolean*, $JPanel*, $PropertyChangeEvent*)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(OrderOfGConfigNotify, lambda$main$2, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(OrderOfGConfigNotify, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"OrderOfGConfigNotify",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(OrderOfGConfigNotify, name, initialize, &classInfo$$, OrderOfGConfigNotify::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(OrderOfGConfigNotify);
	});
	return class$;
}

$Class* OrderOfGConfigNotify::class$ = nullptr;
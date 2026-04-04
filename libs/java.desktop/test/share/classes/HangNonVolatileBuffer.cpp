#include <HangNonVolatileBuffer.h>
#include <java/awt/Component.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class HangNonVolatileBuffer$$Lambda$lambda$main$0 : public $Runnable {
	$class(HangNonVolatileBuffer$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HangNonVolatileBuffer::lambda$main$0();
	}
};
$Class* HangNonVolatileBuffer$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HangNonVolatileBuffer$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HangNonVolatileBuffer$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HangNonVolatileBuffer$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HangNonVolatileBuffer$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HangNonVolatileBuffer$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* HangNonVolatileBuffer$$Lambda$lambda$main$0::class$ = nullptr;

class HangNonVolatileBuffer$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(HangNonVolatileBuffer$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		HangNonVolatileBuffer::lambda$main$1();
	}
};
$Class* HangNonVolatileBuffer$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HangNonVolatileBuffer$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HangNonVolatileBuffer$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HangNonVolatileBuffer$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(HangNonVolatileBuffer$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HangNonVolatileBuffer$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* HangNonVolatileBuffer$$Lambda$lambda$main$1$1::class$ = nullptr;

class HangNonVolatileBuffer$$Lambda$dispose$2 : public $Runnable {
	$class(HangNonVolatileBuffer$$Lambda$dispose$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* HangNonVolatileBuffer$$Lambda$dispose$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(HangNonVolatileBuffer$$Lambda$dispose$2, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(HangNonVolatileBuffer$$Lambda$dispose$2, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(HangNonVolatileBuffer$$Lambda$dispose$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"HangNonVolatileBuffer$$Lambda$dispose$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HangNonVolatileBuffer$$Lambda$dispose$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HangNonVolatileBuffer$$Lambda$dispose$2);
	});
	return class$;
}
$Class* HangNonVolatileBuffer$$Lambda$dispose$2::class$ = nullptr;

$JFrame* HangNonVolatileBuffer::f = nullptr;

void HangNonVolatileBuffer::init$() {
}

void HangNonVolatileBuffer::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new(HangNonVolatileBuffer$$Lambda$lambda$main$0));
	$SwingUtilities::invokeAndWait($$new(HangNonVolatileBuffer$$Lambda$lambda$main$1$1));
	$Thread::sleep(1000);
	$init(HangNonVolatileBuffer);
	$SwingUtilities::invokeAndWait($$new(HangNonVolatileBuffer$$Lambda$dispose$2, $nc(HangNonVolatileBuffer::f)));
}

void HangNonVolatileBuffer::lambda$main$1() {
}

void HangNonVolatileBuffer::lambda$main$0() {
	$init(HangNonVolatileBuffer);
	$assignStatic(HangNonVolatileBuffer::f, $new($JFrame, "JFrame"_s));
	HangNonVolatileBuffer::f->setSize(300, 300);
	$nc(HangNonVolatileBuffer::f)->setLocationRelativeTo(nullptr);
	$nc(HangNonVolatileBuffer::f)->setVisible(true);
}

HangNonVolatileBuffer::HangNonVolatileBuffer() {
}

$Class* HangNonVolatileBuffer::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("HangNonVolatileBuffer$$Lambda$lambda$main$0")) {
			return HangNonVolatileBuffer$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("HangNonVolatileBuffer$$Lambda$lambda$main$1$1")) {
			return HangNonVolatileBuffer$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("HangNonVolatileBuffer$$Lambda$dispose$2")) {
			return HangNonVolatileBuffer$$Lambda$dispose$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(HangNonVolatileBuffer, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(HangNonVolatileBuffer, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HangNonVolatileBuffer, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(HangNonVolatileBuffer, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(HangNonVolatileBuffer, main, void, $StringArray*), "java.lang.reflect.InvocationTargetException,java.lang.InterruptedException"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"HangNonVolatileBuffer",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(HangNonVolatileBuffer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(HangNonVolatileBuffer);
	});
	return class$;
}

$Class* HangNonVolatileBuffer::class$ = nullptr;
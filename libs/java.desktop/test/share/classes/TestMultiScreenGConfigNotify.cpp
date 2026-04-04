#include <TestMultiScreenGConfigNotify.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Window.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/beans/PropertyChangeListener.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $PropertyChangeListener = ::java::beans::PropertyChangeListener;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestMultiScreenGConfigNotify$$Lambda$lambda$main$1 : public $Runnable {
	$class(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($GraphicsConfiguration* gc, $GraphicsConfiguration* gc2) {
		$set(this, gc, gc);
		$set(this, gc2, gc2);
	}
	virtual void run() override {
		TestMultiScreenGConfigNotify::lambda$main$1(gc, gc2);
	}
	$GraphicsConfiguration* gc = nullptr;
	$GraphicsConfiguration* gc2 = nullptr;
};
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"gc", "Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $field(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, gc)},
		{"gc2", "Ljava/awt/GraphicsConfiguration;", nullptr, $PUBLIC, $field(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, gc2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/GraphicsConfiguration;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PUBLIC, $method(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, init$, void, $GraphicsConfiguration*, $GraphicsConfiguration*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestMultiScreenGConfigNotify$$Lambda$lambda$main$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1);
	});
	return class$;
}
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::class$ = nullptr;

class TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1 : public $Runnable {
	$class(TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestMultiScreenGConfigNotify::lambda$main$2();
	}
};
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1);
	});
	return class$;
}
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1::class$ = nullptr;

class TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2 : public $PropertyChangeListener {
	$class(TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2, $NO_CLASS_INIT, $PropertyChangeListener)
public:
	void init$() {
	}
	virtual void propertyChange($PropertyChangeEvent* evt) override {
		TestMultiScreenGConfigNotify::lambda$main$0(evt);
	}
};
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2, init$, void)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2);
	});
	return class$;
}
$Class* TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2::class$ = nullptr;

$JFrame* TestMultiScreenGConfigNotify::f = nullptr;
$StringArray* TestMultiScreenGConfigNotify::propName = nullptr;
int32_t TestMultiScreenGConfigNotify::propCount = 0;
bool TestMultiScreenGConfigNotify::result = false;

void TestMultiScreenGConfigNotify::init$() {
}

void TestMultiScreenGConfigNotify::main($StringArray* args) {
	$init(TestMultiScreenGConfigNotify);
	$useLocalObjectStack();
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDeviceArray, gds, $nc(ge)->getScreenDevices());
	if ($nc(gds)->length < 2) {
		return;
	}
	$var($GraphicsConfiguration, gc, $nc(gds->get(0))->getDefaultConfiguration());
	$var($GraphicsConfiguration, gc2, $nc(gds->get(1))->getDefaultConfiguration());
	$assignStatic(TestMultiScreenGConfigNotify::propName, $new($StringArray, 10));
	$SwingUtilities::invokeAndWait($$new(TestMultiScreenGConfigNotify$$Lambda$lambda$main$1, gc, gc2));
	$Thread::sleep(1000);
	for (int32_t i = 0; i < TestMultiScreenGConfigNotify::propCount; ++i) {
		if ($nc($nc(TestMultiScreenGConfigNotify::propName)->get(i))->equals("graphicsConfiguration"_s)) {
			TestMultiScreenGConfigNotify::result = true;
		}
	}
	$SwingUtilities::invokeAndWait($$new(TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1));
	if (!TestMultiScreenGConfigNotify::result) {
		$throwNew($RuntimeException, "graphicsConfiguration notification not sent"_s);
	}
}

void TestMultiScreenGConfigNotify::lambda$main$2() {
	$init(TestMultiScreenGConfigNotify);
	$nc(TestMultiScreenGConfigNotify::f)->dispose();
}

void TestMultiScreenGConfigNotify::lambda$main$1($GraphicsConfiguration* gc, $GraphicsConfiguration* gc2) {
	$init(TestMultiScreenGConfigNotify);
	$useLocalObjectStack();
	$assignStatic(TestMultiScreenGConfigNotify::f, $new($JFrame));
	TestMultiScreenGConfigNotify::f->setSize(300, 300);
	int32_t var$0 = $nc($($nc(gc)->getBounds()))->x;
	int32_t var$1 = $nc($(gc->getBounds()))->y;
	int32_t var$2 = $nc(TestMultiScreenGConfigNotify::f)->getWidth();
	$nc(TestMultiScreenGConfigNotify::f)->setBounds(var$0, var$1, var$2, TestMultiScreenGConfigNotify::f->getHeight());
	$nc(TestMultiScreenGConfigNotify::f)->setVisible(true);
	$nc(TestMultiScreenGConfigNotify::f)->addPropertyChangeListener($$new(TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2));
	try {
		$Thread::sleep(2000);
	} catch ($InterruptedException& ex) {
	}
	int32_t var$3 = $nc($($nc(gc2)->getBounds()))->x;
	int32_t var$4 = $nc($(gc2->getBounds()))->y;
	int32_t var$5 = $nc(TestMultiScreenGConfigNotify::f)->getWidth();
	$nc(TestMultiScreenGConfigNotify::f)->setBounds(var$3, var$4, var$5, TestMultiScreenGConfigNotify::f->getHeight());
}

void TestMultiScreenGConfigNotify::lambda$main$0($PropertyChangeEvent* evt) {
	$init(TestMultiScreenGConfigNotify);
	$useLocalObjectStack();
	$var($String, name, $nc(evt)->getPropertyName());
	$nc($System::out)->println($$str({"propertyChange "_s, name}));
	$nc(TestMultiScreenGConfigNotify::propName)->set(TestMultiScreenGConfigNotify::propCount, name);
	++TestMultiScreenGConfigNotify::propCount;
}

void TestMultiScreenGConfigNotify::clinit$($Class* clazz) {
	TestMultiScreenGConfigNotify::propCount = 0;
	TestMultiScreenGConfigNotify::result = false;
}

TestMultiScreenGConfigNotify::TestMultiScreenGConfigNotify() {
}

$Class* TestMultiScreenGConfigNotify::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestMultiScreenGConfigNotify$$Lambda$lambda$main$1")) {
			return TestMultiScreenGConfigNotify$$Lambda$lambda$main$1::load$(name, initialize);
		}
		if (name->equals("TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1")) {
			return TestMultiScreenGConfigNotify$$Lambda$lambda$main$2$1::load$(name, initialize);
		}
		if (name->equals("TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2")) {
			return TestMultiScreenGConfigNotify$$Lambda$lambda$main$0$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(TestMultiScreenGConfigNotify, f)},
		{"propName", "[Ljava/lang/String;", nullptr, $STATIC, $staticField(TestMultiScreenGConfigNotify, propName)},
		{"propCount", "I", nullptr, $STATIC, $staticField(TestMultiScreenGConfigNotify, propCount)},
		{"result", "Z", nullptr, $STATIC, $staticField(TestMultiScreenGConfigNotify, result)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestMultiScreenGConfigNotify, init$, void)},
		{"lambda$main$0", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestMultiScreenGConfigNotify, lambda$main$0, void, $PropertyChangeEvent*)},
		{"lambda$main$1", "(Ljava/awt/GraphicsConfiguration;Ljava/awt/GraphicsConfiguration;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestMultiScreenGConfigNotify, lambda$main$1, void, $GraphicsConfiguration*, $GraphicsConfiguration*)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestMultiScreenGConfigNotify, lambda$main$2, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestMultiScreenGConfigNotify, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestMultiScreenGConfigNotify",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestMultiScreenGConfigNotify, name, initialize, &classInfo$$, TestMultiScreenGConfigNotify::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestMultiScreenGConfigNotify);
	});
	return class$;
}

$Class* TestMultiScreenGConfigNotify::class$ = nullptr;
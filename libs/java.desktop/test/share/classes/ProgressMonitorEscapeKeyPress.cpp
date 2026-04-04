#include <ProgressMonitorEscapeKeyPress.h>
#include <ProgressMonitorEscapeKeyPress$1.h>
#include <ProgressMonitorEscapeKeyPress$2.h>
#include <TestThread.h>
#include <java/awt/Component.h>
#include <java/awt/EventQueue.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/ProgressMonitor.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $ProgressMonitorEscapeKeyPress$1 = ::ProgressMonitorEscapeKeyPress$1;
using $ProgressMonitorEscapeKeyPress$2 = ::ProgressMonitorEscapeKeyPress$2;
using $TestThread = ::TestThread;
using $EventQueue = ::java::awt::EventQueue;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $ProgressMonitor = ::javax::swing::ProgressMonitor;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0 : public $Runnable {
	$class(ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		ProgressMonitorEscapeKeyPress::lambda$disposeTestUI$0();
	}
};
$Class* ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0);
	});
	return class$;
}
$Class* ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0::class$ = nullptr;

$ProgressMonitor* ProgressMonitorEscapeKeyPress::monitor = nullptr;
int32_t ProgressMonitorEscapeKeyPress::counter = 0;
$TestThread* ProgressMonitorEscapeKeyPress::robotThread = nullptr;
$JFrame* ProgressMonitorEscapeKeyPress::frame = nullptr;

void ProgressMonitorEscapeKeyPress::init$() {
}

void ProgressMonitorEscapeKeyPress::main($StringArray* args) {
	$init(ProgressMonitorEscapeKeyPress);
	$useLocalObjectStack();
	createTestUI();
	$assignStatic(ProgressMonitorEscapeKeyPress::monitor, $new($ProgressMonitor, ProgressMonitorEscapeKeyPress::frame, "Progress"_s, nullptr, 0, 100));
	$assignStatic(ProgressMonitorEscapeKeyPress::robotThread, $new($TestThread));
	ProgressMonitorEscapeKeyPress::robotThread->start();
	for (ProgressMonitorEscapeKeyPress::counter = 0; ProgressMonitorEscapeKeyPress::counter <= 100; ProgressMonitorEscapeKeyPress::counter += 10) {
		$Thread::sleep(1000);
		$EventQueue::invokeAndWait($$new($ProgressMonitorEscapeKeyPress$1));
		if ($nc(ProgressMonitorEscapeKeyPress::monitor)->isCanceled()) {
			break;
		}
	}
	disposeTestUI();
	if (ProgressMonitorEscapeKeyPress::counter >= $nc(ProgressMonitorEscapeKeyPress::monitor)->getMaximum()) {
		$throwNew($RuntimeException, "Escape key did not cancel the ProgressMonitor"_s);
	}
}

void ProgressMonitorEscapeKeyPress::createTestUI() {
	$init(ProgressMonitorEscapeKeyPress);
	$SwingUtilities::invokeAndWait($$new($ProgressMonitorEscapeKeyPress$2));
}

void ProgressMonitorEscapeKeyPress::disposeTestUI() {
	$init(ProgressMonitorEscapeKeyPress);
	$SwingUtilities::invokeAndWait($$new(ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0));
}

void ProgressMonitorEscapeKeyPress::lambda$disposeTestUI$0() {
	$init(ProgressMonitorEscapeKeyPress);
	$nc(ProgressMonitorEscapeKeyPress::frame)->dispose();
}

void ProgressMonitorEscapeKeyPress::clinit$($Class* clazz) {
	ProgressMonitorEscapeKeyPress::counter = 0;
}

ProgressMonitorEscapeKeyPress::ProgressMonitorEscapeKeyPress() {
}

$Class* ProgressMonitorEscapeKeyPress::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0")) {
			return ProgressMonitorEscapeKeyPress$$Lambda$lambda$disposeTestUI$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"monitor", "Ljavax/swing/ProgressMonitor;", nullptr, $STATIC, $staticField(ProgressMonitorEscapeKeyPress, monitor)},
		{"counter", "I", nullptr, $STATIC, $staticField(ProgressMonitorEscapeKeyPress, counter)},
		{"robotThread", "LTestThread;", nullptr, $STATIC, $staticField(ProgressMonitorEscapeKeyPress, robotThread)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(ProgressMonitorEscapeKeyPress, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ProgressMonitorEscapeKeyPress, init$, void)},
		{"createTestUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ProgressMonitorEscapeKeyPress, createTestUI, void), "java.lang.Exception"},
		{"disposeTestUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ProgressMonitorEscapeKeyPress, disposeTestUI, void), "java.lang.Exception"},
		{"lambda$disposeTestUI$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(ProgressMonitorEscapeKeyPress, lambda$disposeTestUI$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(ProgressMonitorEscapeKeyPress, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"ProgressMonitorEscapeKeyPress$2", nullptr, nullptr, 0},
		{"ProgressMonitorEscapeKeyPress$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"ProgressMonitorEscapeKeyPress",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"ProgressMonitorEscapeKeyPress$2,ProgressMonitorEscapeKeyPress$1"
	};
	$loadClass(ProgressMonitorEscapeKeyPress, name, initialize, &classInfo$$, ProgressMonitorEscapeKeyPress::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ProgressMonitorEscapeKeyPress);
	});
	return class$;
}

$Class* ProgressMonitorEscapeKeyPress::class$ = nullptr;
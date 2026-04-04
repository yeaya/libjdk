#include <TestTitledBorderLeak.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/ref/WeakReference.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/border/TitledBorder.h>
#include <jcpp.h>

#undef GC_ATTEMPTS
#undef TOTAL_TITLEDBORDER

using $JFrameArray = $Array<::javax::swing::JFrame>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $WeakReference = ::java::lang::ref::WeakReference;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $TitledBorder = ::javax::swing::border::TitledBorder;

class TestTitledBorderLeak$$Lambda$lambda$main$0 : public $Runnable {
	$class(TestTitledBorderLeak$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JFrameArray* frame) {
		$set(this, frame, frame);
	}
	virtual void run() override {
		TestTitledBorderLeak::lambda$main$0(frame);
	}
	$JFrameArray* frame = nullptr;
};
$Class* TestTitledBorderLeak$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "[Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(TestTitledBorderLeak$$Lambda$lambda$main$0, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(TestTitledBorderLeak$$Lambda$lambda$main$0, init$, void, $JFrameArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTitledBorderLeak$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTitledBorderLeak$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTitledBorderLeak$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTitledBorderLeak$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* TestTitledBorderLeak$$Lambda$lambda$main$0::class$ = nullptr;

class TestTitledBorderLeak$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(TestTitledBorderLeak$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JFrameArray* frame) {
		$set(this, frame, frame);
	}
	virtual void run() override {
		TestTitledBorderLeak::lambda$main$1(frame);
	}
	$JFrameArray* frame = nullptr;
};
$Class* TestTitledBorderLeak$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "[Ljavax/swing/JFrame;", nullptr, $PUBLIC, $field(TestTitledBorderLeak$$Lambda$lambda$main$1$1, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "([Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(TestTitledBorderLeak$$Lambda$lambda$main$1$1, init$, void, $JFrameArray*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestTitledBorderLeak$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestTitledBorderLeak$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTitledBorderLeak$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestTitledBorderLeak$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* TestTitledBorderLeak$$Lambda$lambda$main$1$1::class$ = nullptr;

$ArrayList* TestTitledBorderLeak::weakRefArrTB = nullptr;

void TestTitledBorderLeak::init$() {
}

void TestTitledBorderLeak::main($StringArray* args) {
	$init(TestTitledBorderLeak);
	$useLocalObjectStack();
	$var($JFrameArray, frame, $new($JFrameArray, TestTitledBorderLeak::TOTAL_TITLEDBORDER));
	$SwingUtilities::invokeAndWait($$new(TestTitledBorderLeak$$Lambda$lambda$main$0, frame));
	if (TestTitledBorderLeak::TOTAL_TITLEDBORDER != $nc(TestTitledBorderLeak::weakRefArrTB)->size()) {
		$nc($System::err)->println("TOTAL_TITLEDBORDER != weakRefArrTB.size()"_s);
	}
	$Thread::sleep(3000);
	$SwingUtilities::invokeAndWait($$new(TestTitledBorderLeak$$Lambda$lambda$main$1$1, frame));
	$Thread::sleep(3000);
	attemptGCTitledBorder();
	if (TestTitledBorderLeak::TOTAL_TITLEDBORDER != getCleanedUpTitledBorderCount()) {
		$throwNew($RuntimeException, $$str({"Expected Total TitledBorder to be freed : "_s, $$str(TestTitledBorderLeak::TOTAL_TITLEDBORDER), " Freed "_s, $$str(getCleanedUpTitledBorderCount())}));
	}
	$nc($System::out)->println("OK"_s);
}

void TestTitledBorderLeak::attemptGCTitledBorder() {
	$init(TestTitledBorderLeak);
	for (int32_t i = 0; i < TestTitledBorderLeak::GC_ATTEMPTS; ++i) {
		$System::gc();
		$System::runFinalization();
		if (getCleanedUpTitledBorderCount() == TestTitledBorderLeak::TOTAL_TITLEDBORDER) {
			break;
		}
		try {
			$Thread::sleep(500);
		} catch ($InterruptedException& e) {
			$nc($System::err)->println("InterruptedException occurred during Thread.sleep()"_s);
		}
	}
}

int32_t TestTitledBorderLeak::getCleanedUpTitledBorderCount() {
	$init(TestTitledBorderLeak);
	$useLocalObjectStack();
	int32_t count = 0;
	{
		$var($Iterator, i$, $nc(TestTitledBorderLeak::weakRefArrTB)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($WeakReference, ref, $cast($WeakReference, i$->next()));
			if ($nc(ref)->get() == nullptr) {
				++count;
			}
		}
	}
	return count;
}

void TestTitledBorderLeak::lambda$main$1($JFrameArray* frame) {
	$init(TestTitledBorderLeak);
	for (int32_t i = 0; i < TestTitledBorderLeak::TOTAL_TITLEDBORDER; ++i) {
		$nc($nc(frame)->get(i))->dispose();
		frame->set(i, nullptr);
	}
}

void TestTitledBorderLeak::lambda$main$0($JFrameArray* frame) {
	$init(TestTitledBorderLeak);
	$useLocalObjectStack();
	for (int32_t i = 0; i < TestTitledBorderLeak::TOTAL_TITLEDBORDER; ++i) {
		$var($TitledBorder, tb, $new($TitledBorder, ""_s));
		$nc(TestTitledBorderLeak::weakRefArrTB)->add(i, $$new($WeakReference, tb));
		$var($JLabel, label, $new($JLabel, "TitledBorder"_s));
		label->setBorder(tb);
		$nc(frame)->set(i, $$new($JFrame, "Borders"_s));
		$var($JPanel, panel, $new($JPanel));
		panel->add(label);
		$nc(frame->get(i))->setContentPane(panel);
		$nc(frame->get(i))->setVisible(true);
	}
}

void TestTitledBorderLeak::clinit$($Class* clazz) {
	$assignStatic(TestTitledBorderLeak::weakRefArrTB, $new($ArrayList, TestTitledBorderLeak::TOTAL_TITLEDBORDER));
}

TestTitledBorderLeak::TestTitledBorderLeak() {
}

$Class* TestTitledBorderLeak::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestTitledBorderLeak$$Lambda$lambda$main$0")) {
			return TestTitledBorderLeak$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("TestTitledBorderLeak$$Lambda$lambda$main$1$1")) {
			return TestTitledBorderLeak$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"TOTAL_TITLEDBORDER", "I", nullptr, $STATIC | $FINAL, $constField(TestTitledBorderLeak, TOTAL_TITLEDBORDER)},
		{"GC_ATTEMPTS", "I", nullptr, $STATIC | $FINAL, $constField(TestTitledBorderLeak, GC_ATTEMPTS)},
		{"weakRefArrTB", "Ljava/util/ArrayList;", "Ljava/util/ArrayList<Ljava/lang/ref/WeakReference<Ljavax/swing/border/TitledBorder;>;>;", $STATIC, $staticField(TestTitledBorderLeak, weakRefArrTB)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestTitledBorderLeak, init$, void)},
		{"attemptGCTitledBorder", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestTitledBorderLeak, attemptGCTitledBorder, void)},
		{"getCleanedUpTitledBorderCount", "()I", nullptr, $PRIVATE | $STATIC, $staticMethod(TestTitledBorderLeak, getCleanedUpTitledBorderCount, int32_t)},
		{"lambda$main$0", "([Ljavax/swing/JFrame;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTitledBorderLeak, lambda$main$0, void, $JFrameArray*)},
		{"lambda$main$1", "([Ljavax/swing/JFrame;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(TestTitledBorderLeak, lambda$main$1, void, $JFrameArray*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestTitledBorderLeak, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestTitledBorderLeak",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestTitledBorderLeak, name, initialize, &classInfo$$, TestTitledBorderLeak::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestTitledBorderLeak);
	});
	return class$;
}

$Class* TestTitledBorderLeak::class$ = nullptr;
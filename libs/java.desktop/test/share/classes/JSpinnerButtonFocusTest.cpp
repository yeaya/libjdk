#include <JSpinnerButtonFocusTest.h>
#include <JSpinnerButtonFocusTest$1.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Container.h>
#include <java/awt/ContainerOrderFocusTraversalPolicy.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/FocusListener.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef LF
#undef MINUTES
#undef NORTH
#undef SOUTH

using $JSpinnerButtonFocusTest$1 = ::JSpinnerButtonFocusTest$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $BorderLayout = ::java::awt::BorderLayout;
using $ContainerOrderFocusTraversalPolicy = ::java::awt::ContainerOrderFocusTraversalPolicy;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

class JSpinnerButtonFocusTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(JSpinnerButtonFocusTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JSpinnerButtonFocusTest::lambda$main$0();
	}
};
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JSpinnerButtonFocusTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JSpinnerButtonFocusTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JSpinnerButtonFocusTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JSpinnerButtonFocusTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSpinnerButtonFocusTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$0::class$ = nullptr;

class JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JSpinnerButtonFocusTest::lambda$main$1();
	}
};
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JSpinnerButtonFocusTest::lambda$main$2();
	}
};
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2::class$ = nullptr;

class JSpinnerButtonFocusTest$$Lambda$dispose$3 : public $Runnable {
	$class(JSpinnerButtonFocusTest$$Lambda$dispose$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* JSpinnerButtonFocusTest$$Lambda$dispose$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(JSpinnerButtonFocusTest$$Lambda$dispose$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(JSpinnerButtonFocusTest$$Lambda$dispose$3, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JSpinnerButtonFocusTest$$Lambda$dispose$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JSpinnerButtonFocusTest$$Lambda$dispose$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JSpinnerButtonFocusTest$$Lambda$dispose$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSpinnerButtonFocusTest$$Lambda$dispose$3);
	});
	return class$;
}
$Class* JSpinnerButtonFocusTest$$Lambda$dispose$3::class$ = nullptr;

$JFrame* JSpinnerButtonFocusTest::frame = nullptr;
$Robot* JSpinnerButtonFocusTest::robot = nullptr;
$JSpinner* JSpinnerButtonFocusTest::spinner1 = nullptr;
$JSpinner* JSpinnerButtonFocusTest::spinner2 = nullptr;
$JSpinner$DefaultEditor* JSpinnerButtonFocusTest::editor1 = nullptr;
$JSpinner$DefaultEditor* JSpinnerButtonFocusTest::editor2 = nullptr;
$volatile(bool) JSpinnerButtonFocusTest::isJTextFieldFocused = false;
$volatile($CountDownLatch*) JSpinnerButtonFocusTest::latch1 = nullptr;

void JSpinnerButtonFocusTest::init$() {
}

void JSpinnerButtonFocusTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, LF, arr$->get(i$));
		{
			$init(JSpinnerButtonFocusTest);
			$assignStatic(JSpinnerButtonFocusTest::latch1, $new($CountDownLatch, 1));
			$var($Throwable, var$0, nullptr);
			try {
				$UIManager::setLookAndFeel($($nc(LF)->getClassName()));
				$assignStatic(JSpinnerButtonFocusTest::robot, $new($Robot));
				JSpinnerButtonFocusTest::robot->setAutoDelay(50);
				$SwingUtilities::invokeAndWait($$new(JSpinnerButtonFocusTest$$Lambda$lambda$main$0));
				$nc(JSpinnerButtonFocusTest::robot)->waitForIdle();
				$$nc($nc(JSpinnerButtonFocusTest::editor1)->getTextField())->addFocusListener($$new($JSpinnerButtonFocusTest$1));
				$SwingUtilities::invokeAndWait($$new(JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1));
				$init($TimeUnit);
				if (!$nc(JSpinnerButtonFocusTest::latch1)->await(15, $TimeUnit::MINUTES)) {
					$throwNew($RuntimeException, $$str({$(LF->getClassName()), ": Timeout waiting for editor1 to gain focus."_s}));
				}
				$nc(JSpinnerButtonFocusTest::robot)->waitForIdle();
				$SwingUtilities::invokeAndWait($$new(JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2));
				if (!JSpinnerButtonFocusTest::isJTextFieldFocused) {
					$throwNew($RuntimeException, $$str({$(LF->getClassName()), ": Spinner\'s Text Field doesn\'t have focus "_s}));
				}
			} catch ($Throwable& var$1) {
				$assign(var$0, var$1);
			} /*finally*/ {
				if (JSpinnerButtonFocusTest::frame != nullptr) {
					$SwingUtilities::invokeAndWait($$new(JSpinnerButtonFocusTest$$Lambda$dispose$3, JSpinnerButtonFocusTest::frame));
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
}

void JSpinnerButtonFocusTest::lambda$main$2() {
	$init(JSpinnerButtonFocusTest);
	JSpinnerButtonFocusTest::isJTextFieldFocused = $$nc($nc(JSpinnerButtonFocusTest::editor2)->getTextField())->isFocusOwner();
}

void JSpinnerButtonFocusTest::lambda$main$1() {
	$init(JSpinnerButtonFocusTest);
	$$nc($nc(JSpinnerButtonFocusTest::editor1)->getTextField())->requestFocusInWindow();
}

void JSpinnerButtonFocusTest::lambda$main$0() {
	$useLocalObjectStack();
	$init(JSpinnerButtonFocusTest);
	$assignStatic(JSpinnerButtonFocusTest::frame, $new($JFrame));
	$assignStatic(JSpinnerButtonFocusTest::spinner1, $new($JSpinner));
	$assignStatic(JSpinnerButtonFocusTest::spinner2, $new($JSpinner));
	JSpinnerButtonFocusTest::frame->setLayout($$new($BorderLayout));
	$$nc($nc(JSpinnerButtonFocusTest::frame)->getContentPane())->add(JSpinnerButtonFocusTest::spinner1, $BorderLayout::NORTH);
	$$nc($nc(JSpinnerButtonFocusTest::frame)->getContentPane())->add(JSpinnerButtonFocusTest::spinner2, $BorderLayout::SOUTH);
	$assignStatic(JSpinnerButtonFocusTest::editor1, $cast($JSpinner$DefaultEditor, $nc(JSpinnerButtonFocusTest::spinner1)->getEditor()));
	$nc(JSpinnerButtonFocusTest::editor1)->setFocusable(false);
	$nc(JSpinnerButtonFocusTest::spinner1)->setFocusable(false);
	$assignStatic(JSpinnerButtonFocusTest::editor2, $cast($JSpinner$DefaultEditor, $nc(JSpinnerButtonFocusTest::spinner2)->getEditor()));
	$nc(JSpinnerButtonFocusTest::editor2)->setFocusable(false);
	$nc(JSpinnerButtonFocusTest::spinner2)->setFocusable(false);
	$nc(JSpinnerButtonFocusTest::frame)->setFocusTraversalPolicy($$new($ContainerOrderFocusTraversalPolicy));
	$nc(JSpinnerButtonFocusTest::frame)->setFocusTraversalPolicyProvider(true);
	$nc(JSpinnerButtonFocusTest::frame)->setAlwaysOnTop(true);
	$nc(JSpinnerButtonFocusTest::frame)->pack();
	$nc(JSpinnerButtonFocusTest::frame)->setVisible(true);
}

JSpinnerButtonFocusTest::JSpinnerButtonFocusTest() {
}

$Class* JSpinnerButtonFocusTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JSpinnerButtonFocusTest$$Lambda$lambda$main$0")) {
			return JSpinnerButtonFocusTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1")) {
			return JSpinnerButtonFocusTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2")) {
			return JSpinnerButtonFocusTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
		if (name->equals("JSpinnerButtonFocusTest$$Lambda$dispose$3")) {
			return JSpinnerButtonFocusTest$$Lambda$dispose$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, frame)},
		{"robot", "Ljava/awt/Robot;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, robot)},
		{"spinner1", "Ljavax/swing/JSpinner;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, spinner1)},
		{"spinner2", "Ljavax/swing/JSpinner;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, spinner2)},
		{"editor1", "Ljavax/swing/JSpinner$DefaultEditor;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, editor1)},
		{"editor2", "Ljavax/swing/JSpinner$DefaultEditor;", nullptr, $STATIC, $staticField(JSpinnerButtonFocusTest, editor2)},
		{"isJTextFieldFocused", "Z", nullptr, $STATIC | $VOLATILE, $staticField(JSpinnerButtonFocusTest, isJTextFieldFocused)},
		{"latch1", "Ljava/util/concurrent/CountDownLatch;", nullptr, $STATIC | $VOLATILE, $staticField(JSpinnerButtonFocusTest, latch1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JSpinnerButtonFocusTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JSpinnerButtonFocusTest, lambda$main$0, void)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JSpinnerButtonFocusTest, lambda$main$1, void)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JSpinnerButtonFocusTest, lambda$main$2, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JSpinnerButtonFocusTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JSpinnerButtonFocusTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JSpinnerButtonFocusTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JSpinnerButtonFocusTest$1"
	};
	$loadClass(JSpinnerButtonFocusTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JSpinnerButtonFocusTest);
	});
	return class$;
}

$Class* JSpinnerButtonFocusTest::class$ = nullptr;
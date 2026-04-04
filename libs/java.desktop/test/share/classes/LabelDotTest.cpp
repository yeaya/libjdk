#include <LabelDotTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/function/IntConsumer.h>
#include <java/util/stream/IntStream.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JMenu.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingConstants.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BOTH
#undef CENTER
#undef EXIT_ON_CLOSE
#undef REMAINDER

using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $IntConsumer = ::java::util::function::IntConsumer;
using $IntStream = ::java::util::stream::IntStream;
using $JFrame = ::javax::swing::JFrame;
using $JLabel = ::javax::swing::JLabel;
using $JMenu = ::javax::swing::JMenu;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JPanel = ::javax::swing::JPanel;
using $SwingConstants = ::javax::swing::SwingConstants;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class LabelDotTest$$Lambda$lambda$runTest$1 : public $IntConsumer {
	$class(LabelDotTest$$Lambda$lambda$runTest$1, $NO_CLASS_INIT, $IntConsumer)
public:
	void init$($Robot* robot) {
		$set(this, robot, robot);
	}
	virtual void accept(int32_t i) override {
		LabelDotTest::lambda$runTest$1(robot, i);
	}
	$Robot* robot = nullptr;
};
$Class* LabelDotTest$$Lambda$lambda$runTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"robot", "Ljava/awt/Robot;", nullptr, $PUBLIC, $field(LabelDotTest$$Lambda$lambda$runTest$1, robot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Robot;)V", nullptr, $PUBLIC, $method(LabelDotTest$$Lambda$lambda$runTest$1, init$, void, $Robot*)},
		{"accept", "(I)V", nullptr, $PUBLIC, $virtualMethod(LabelDotTest$$Lambda$lambda$runTest$1, accept, void, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"LabelDotTest$$Lambda$lambda$runTest$1",
		"java.lang.Object",
		"java.util.function.IntConsumer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LabelDotTest$$Lambda$lambda$runTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LabelDotTest$$Lambda$lambda$runTest$1);
	});
	return class$;
}
$Class* LabelDotTest$$Lambda$lambda$runTest$1::class$ = nullptr;

class LabelDotTest$$Lambda$lambda$main$2$1 : public $Runnable {
	$class(LabelDotTest$$Lambda$lambda$main$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		LabelDotTest::lambda$main$2();
	}
};
$Class* LabelDotTest$$Lambda$lambda$main$2$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LabelDotTest$$Lambda$lambda$main$2$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LabelDotTest$$Lambda$lambda$main$2$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"LabelDotTest$$Lambda$lambda$main$2$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(LabelDotTest$$Lambda$lambda$main$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LabelDotTest$$Lambda$lambda$main$2$1);
	});
	return class$;
}
$Class* LabelDotTest$$Lambda$lambda$main$2$1::class$ = nullptr;

class LabelDotTest$$Lambda$lambda$main$3$2 : public $Runnable {
	$class(LabelDotTest$$Lambda$lambda$main$3$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		LabelDotTest::lambda$main$3();
	}
};
$Class* LabelDotTest$$Lambda$lambda$main$3$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LabelDotTest$$Lambda$lambda$main$3$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LabelDotTest$$Lambda$lambda$main$3$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"LabelDotTest$$Lambda$lambda$main$3$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(LabelDotTest$$Lambda$lambda$main$3$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LabelDotTest$$Lambda$lambda$main$3$2);
	});
	return class$;
}
$Class* LabelDotTest$$Lambda$lambda$main$3$2::class$ = nullptr;

class LabelDotTest$$Lambda$lambda$runTest$0$3 : public $Runnable {
	$class(LabelDotTest$$Lambda$lambda$runTest$0$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		LabelDotTest::lambda$runTest$0();
	}
};
$Class* LabelDotTest$$Lambda$lambda$runTest$0$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LabelDotTest$$Lambda$lambda$runTest$0$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(LabelDotTest$$Lambda$lambda$runTest$0$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"LabelDotTest$$Lambda$lambda$runTest$0$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(LabelDotTest$$Lambda$lambda$runTest$0$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(LabelDotTest$$Lambda$lambda$runTest$0$3);
	});
	return class$;
}
$Class* LabelDotTest$$Lambda$lambda$runTest$0$3::class$ = nullptr;

$String* LabelDotTest::longText = nullptr;
$String* LabelDotTest::shortText = nullptr;
$JFrame* LabelDotTest::frame = nullptr;
$JLabel* LabelDotTest::label = nullptr;
$JMenu* LabelDotTest::menu = nullptr;
$volatile(bool) LabelDotTest::isException = false;

void LabelDotTest::init$() {
}

void LabelDotTest::createUI() {
	$init(LabelDotTest);
	$useLocalObjectStack();
	$nc($System::out)->println("BEFORE CREATION"_s);
	$assignStatic(LabelDotTest::frame, $new($JFrame));
	LabelDotTest::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(LabelDotTest::frame)->setSize($$new($Dimension, 50, 150));
	$nc(LabelDotTest::frame)->setLocationRelativeTo(nullptr);
	$nc(LabelDotTest::frame)->setLayout($$new($GridBagLayout));
	$var($GridBagConstraints, c, $new($GridBagConstraints));
	c->fill = $GridBagConstraints::BOTH;
	c->weightx = 1.0;
	c->weighty = 0.0;
	c->gridwidth = $GridBagConstraints::REMAINDER;
	$var($JMenuBar, menuBar, $new($JMenuBar));
	$assignStatic(LabelDotTest::menu, $new($JMenu, "Menu"_s));
	menuBar->add(LabelDotTest::menu);
	$nc(LabelDotTest::frame)->add(menuBar, c);
	$nc(LabelDotTest::frame)->add($$new($JLabel, "Title"_s, $SwingConstants::CENTER), c);
	c->weighty = 1.0;
	$nc(LabelDotTest::frame)->add($$new($JPanel, $$new($GridBagLayout)), c);
	c->weighty = 0.0;
	$assignStatic(LabelDotTest::label, $new($JLabel, LabelDotTest::shortText));
	$nc(LabelDotTest::frame)->add(LabelDotTest::label, c);
	$nc(LabelDotTest::frame)->setVisible(true);
}

void LabelDotTest::runTest(int32_t iterations) {
	$init(LabelDotTest);
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	$$nc($IntStream::range(0, iterations))->forEach($$new(LabelDotTest$$Lambda$lambda$runTest$1, robot));
}

void LabelDotTest::main($StringArray* args) {
	$init(LabelDotTest);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new(LabelDotTest$$Lambda$lambda$main$2$1));
		runTest(50);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (LabelDotTest::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(LabelDotTest$$Lambda$lambda$main$3$2));
		}
		if (LabelDotTest::isException) {
			$throwNew($RuntimeException, "Size of Menu bar is not correct."_s);
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void LabelDotTest::lambda$main$3() {
	$init(LabelDotTest);
	$nc(LabelDotTest::frame)->dispose();
}

void LabelDotTest::lambda$main$2() {
	$init(LabelDotTest);
	createUI();
}

void LabelDotTest::lambda$runTest$1($Robot* robot, int32_t i) {
	$init(LabelDotTest);
	$SwingUtilities::invokeLater($$new(LabelDotTest$$Lambda$lambda$runTest$0$3));
	$nc(robot)->waitForIdle();
}

void LabelDotTest::lambda$runTest$0() {
	$init(LabelDotTest);
	$useLocalObjectStack();
	if ($$nc($nc(LabelDotTest::label)->getText())->equals(LabelDotTest::shortText)) {
		$nc(LabelDotTest::label)->setText(LabelDotTest::longText);
	} else {
		$nc(LabelDotTest::label)->setText(LabelDotTest::shortText);
	}
	bool var$0 = $nc($($nc(LabelDotTest::menu)->getMinimumSize()))->height == 1;
	LabelDotTest::isException = (var$0 && !$$nc(LabelDotTest::menu->getMinimumSize())->equals($(LabelDotTest::menu->getPreferredSize()))) || LabelDotTest::isException;
}

void LabelDotTest::clinit$($Class* clazz) {
	$assignStatic(LabelDotTest::longText, "show a very long text to have it automatically shortened"_s);
	$assignStatic(LabelDotTest::shortText, "show short text"_s);
	LabelDotTest::isException = false;
}

LabelDotTest::LabelDotTest() {
}

$Class* LabelDotTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("LabelDotTest$$Lambda$lambda$runTest$1")) {
			return LabelDotTest$$Lambda$lambda$runTest$1::load$(name, initialize);
		}
		if (name->equals("LabelDotTest$$Lambda$lambda$main$2$1")) {
			return LabelDotTest$$Lambda$lambda$main$2$1::load$(name, initialize);
		}
		if (name->equals("LabelDotTest$$Lambda$lambda$main$3$2")) {
			return LabelDotTest$$Lambda$lambda$main$3$2::load$(name, initialize);
		}
		if (name->equals("LabelDotTest$$Lambda$lambda$runTest$0$3")) {
			return LabelDotTest$$Lambda$lambda$runTest$0$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"longText", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LabelDotTest, longText)},
		{"shortText", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(LabelDotTest, shortText)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(LabelDotTest, frame)},
		{"label", "Ljavax/swing/JLabel;", nullptr, $PRIVATE | $STATIC, $staticField(LabelDotTest, label)},
		{"menu", "Ljavax/swing/JMenu;", nullptr, $PRIVATE | $STATIC, $staticField(LabelDotTest, menu)},
		{"isException", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(LabelDotTest, isException)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(LabelDotTest, init$, void)},
		{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(LabelDotTest, createUI, void)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LabelDotTest, lambda$main$2, void)},
		{"lambda$main$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LabelDotTest, lambda$main$3, void)},
		{"lambda$runTest$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LabelDotTest, lambda$runTest$0, void)},
		{"lambda$runTest$1", "(Ljava/awt/Robot;I)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(LabelDotTest, lambda$runTest$1, void, $Robot*, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(LabelDotTest, main, void, $StringArray*), "java.lang.Exception"},
		{"runTest", "(I)V", nullptr, $PRIVATE | $STATIC, $staticMethod(LabelDotTest, runTest, void, int32_t), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"LabelDotTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(LabelDotTest, name, initialize, &classInfo$$, LabelDotTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(LabelDotTest);
	});
	return class$;
}

$Class* LabelDotTest::class$ = nullptr;
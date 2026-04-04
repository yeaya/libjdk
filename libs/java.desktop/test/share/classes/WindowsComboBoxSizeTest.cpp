#include <WindowsComboBoxSizeTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $FlowLayout = ::java::awt::FlowLayout;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class WindowsComboBoxSizeTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(WindowsComboBoxSizeTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		WindowsComboBoxSizeTest::lambda$main$0();
	}
};
$Class* WindowsComboBoxSizeTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsComboBoxSizeTest$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsComboBoxSizeTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"WindowsComboBoxSizeTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsComboBoxSizeTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsComboBoxSizeTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* WindowsComboBoxSizeTest$$Lambda$lambda$main$0::class$ = nullptr;

class WindowsComboBoxSizeTest$$Lambda$dispose$1 : public $Runnable {
	$class(WindowsComboBoxSizeTest$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* WindowsComboBoxSizeTest$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(WindowsComboBoxSizeTest$$Lambda$dispose$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(WindowsComboBoxSizeTest$$Lambda$dispose$1, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsComboBoxSizeTest$$Lambda$dispose$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"WindowsComboBoxSizeTest$$Lambda$dispose$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowsComboBoxSizeTest$$Lambda$dispose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsComboBoxSizeTest$$Lambda$dispose$1);
	});
	return class$;
}
$Class* WindowsComboBoxSizeTest$$Lambda$dispose$1::class$ = nullptr;

class WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2 : public $Runnable {
	$class(WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		WindowsComboBoxSizeTest::lambda$test$1();
	}
};
$Class* WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2);
	});
	return class$;
}
$Class* WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2::class$ = nullptr;

$JTextField* WindowsComboBoxSizeTest::textField = nullptr;
$JComboBox* WindowsComboBoxSizeTest::comboBox = nullptr;
$JComboBox* WindowsComboBoxSizeTest::comboBoxEd = nullptr;
$JFrame* WindowsComboBoxSizeTest::frame = nullptr;

void WindowsComboBoxSizeTest::init$() {
}

void WindowsComboBoxSizeTest::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($($UIManager::getSystemLookAndFeelClassName()));
	$SwingUtilities::invokeAndWait($$new(WindowsComboBoxSizeTest$$Lambda$lambda$main$0));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$var($Throwable, var$0, nullptr);
	try {
		test();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init(WindowsComboBoxSizeTest);
		$SwingUtilities::invokeLater($$new(WindowsComboBoxSizeTest$$Lambda$dispose$1, $nc(WindowsComboBoxSizeTest::frame)));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void WindowsComboBoxSizeTest::test() {
	$SwingUtilities::invokeAndWait($$new(WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2));
}

void WindowsComboBoxSizeTest::lambda$test$1() {
	$useLocalObjectStack();
	$init(WindowsComboBoxSizeTest);
	int32_t expected = $nc($($nc(WindowsComboBoxSizeTest::textField)->getSize()))->height;
	if ($nc($($nc(WindowsComboBoxSizeTest::comboBox)->getSize()))->height != expected) {
		$throwNew($RuntimeException, $$str({"Wrong non-editable JComboBox height "_s, $$str($nc($($nc(WindowsComboBoxSizeTest::comboBox)->getSize()))->height), " expected "_s, $$str(expected)}));
	}
	if ($nc($($nc(WindowsComboBoxSizeTest::comboBoxEd)->getSize()))->height != expected) {
		$throwNew($RuntimeException, $$str({"Wrong editable JComboBox height "_s, $$str($nc($($nc(WindowsComboBoxSizeTest::comboBoxEd)->getSize()))->height), " expected "_s, $$str(expected)}));
	}
}

void WindowsComboBoxSizeTest::lambda$main$0() {
	$useLocalObjectStack();
	$init(WindowsComboBoxSizeTest);
	$assignStatic(WindowsComboBoxSizeTest::frame, $new($JFrame));
	$$nc(WindowsComboBoxSizeTest::frame->getContentPane())->setLayout($$new($FlowLayout));
	$assignStatic(WindowsComboBoxSizeTest::textField, $new($JTextField, "item 1"_s));
	$$nc($nc(WindowsComboBoxSizeTest::frame)->getContentPane())->add(WindowsComboBoxSizeTest::textField);
	$assignStatic(WindowsComboBoxSizeTest::comboBox, $new($JComboBox, $$new($StringArray, {
		"item 1"_s,
		"item 2"_s,
		"item 3"_s
	})));
	$$nc($nc(WindowsComboBoxSizeTest::frame)->getContentPane())->add(WindowsComboBoxSizeTest::comboBox);
	$assignStatic(WindowsComboBoxSizeTest::comboBoxEd, $new($JComboBox, $$new($StringArray, {
		"item 1"_s,
		"item 2"_s,
		"item 3"_s
	})));
	WindowsComboBoxSizeTest::comboBoxEd->setEditable(true);
	$$nc($nc(WindowsComboBoxSizeTest::frame)->getContentPane())->add(WindowsComboBoxSizeTest::comboBoxEd);
	$nc(WindowsComboBoxSizeTest::frame)->pack();
	$nc(WindowsComboBoxSizeTest::frame)->setVisible(true);
}

WindowsComboBoxSizeTest::WindowsComboBoxSizeTest() {
}

$Class* WindowsComboBoxSizeTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("WindowsComboBoxSizeTest$$Lambda$lambda$main$0")) {
			return WindowsComboBoxSizeTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("WindowsComboBoxSizeTest$$Lambda$dispose$1")) {
			return WindowsComboBoxSizeTest$$Lambda$dispose$1::load$(name, initialize);
		}
		if (name->equals("WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2")) {
			return WindowsComboBoxSizeTest$$Lambda$lambda$test$1$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"textField", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsComboBoxSizeTest, textField)},
		{"comboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(WindowsComboBoxSizeTest, comboBox)},
		{"comboBoxEd", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(WindowsComboBoxSizeTest, comboBoxEd)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(WindowsComboBoxSizeTest, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(WindowsComboBoxSizeTest, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsComboBoxSizeTest, lambda$main$0, void)},
		{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(WindowsComboBoxSizeTest, lambda$test$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(WindowsComboBoxSizeTest, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(WindowsComboBoxSizeTest, test, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"WindowsComboBoxSizeTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WindowsComboBoxSizeTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(WindowsComboBoxSizeTest);
	});
	return class$;
}

$Class* WindowsComboBoxSizeTest::class$ = nullptr;
#include <FPMethodCalledTest.h>
#include <FPMethodCalledTest$1.h>
#include <FPMethodCalledTest$10.h>
#include <FPMethodCalledTest$2.h>
#include <FPMethodCalledTest$3.h>
#include <FPMethodCalledTest$4.h>
#include <FPMethodCalledTest$5.h>
#include <FPMethodCalledTest$6.h>
#include <FPMethodCalledTest$7.h>
#include <FPMethodCalledTest$8.h>
#include <FPMethodCalledTest$9.h>
#include <FPMethodCalledTest$Resultable.h>
#include <FPMethodCalledTest$Test.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
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
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JPasswordField.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/TextUI.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef TESTS

using $FPMethodCalledTest$1 = ::FPMethodCalledTest$1;
using $FPMethodCalledTest$10 = ::FPMethodCalledTest$10;
using $FPMethodCalledTest$2 = ::FPMethodCalledTest$2;
using $FPMethodCalledTest$3 = ::FPMethodCalledTest$3;
using $FPMethodCalledTest$4 = ::FPMethodCalledTest$4;
using $FPMethodCalledTest$5 = ::FPMethodCalledTest$5;
using $FPMethodCalledTest$6 = ::FPMethodCalledTest$6;
using $FPMethodCalledTest$7 = ::FPMethodCalledTest$7;
using $FPMethodCalledTest$8 = ::FPMethodCalledTest$8;
using $FPMethodCalledTest$9 = ::FPMethodCalledTest$9;
using $FPMethodCalledTest$Resultable = ::FPMethodCalledTest$Resultable;
using $FPMethodCalledTest$Test = ::FPMethodCalledTest$Test;
using $FPMethodCalledTest$TestArray = $Array<FPMethodCalledTest$Test>;
using $FlowLayout = ::java::awt::FlowLayout;
using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JPasswordField = ::javax::swing::JPasswordField;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

class FPMethodCalledTest$$Lambda$lambda$test$0 : public $Runnable {
	$class(FPMethodCalledTest$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($FPMethodCalledTest$Test* test) {
		$set(this, test, test);
	}
	virtual void run() override {
		FPMethodCalledTest::lambda$test$0(test);
	}
	$FPMethodCalledTest$Test* test = nullptr;
};
$Class* FPMethodCalledTest$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"test", "LFPMethodCalledTest$Test;", nullptr, $PUBLIC, $field(FPMethodCalledTest$$Lambda$lambda$test$0, test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LFPMethodCalledTest$Test;)V", nullptr, $PUBLIC, $method(FPMethodCalledTest$$Lambda$lambda$test$0, init$, void, $FPMethodCalledTest$Test*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FPMethodCalledTest$$Lambda$lambda$test$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FPMethodCalledTest$$Lambda$lambda$test$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FPMethodCalledTest$$Lambda$lambda$test$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest$$Lambda$lambda$test$0);
	});
	return class$;
}
$Class* FPMethodCalledTest$$Lambda$lambda$test$0::class$ = nullptr;

class FPMethodCalledTest$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(FPMethodCalledTest$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		FPMethodCalledTest::lambda$test$1();
	}
};
$Class* FPMethodCalledTest$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FPMethodCalledTest$$Lambda$lambda$test$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FPMethodCalledTest$$Lambda$lambda$test$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FPMethodCalledTest$$Lambda$lambda$test$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(FPMethodCalledTest$$Lambda$lambda$test$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest$$Lambda$lambda$test$1$1);
	});
	return class$;
}
$Class* FPMethodCalledTest$$Lambda$lambda$test$1$1::class$ = nullptr;

class FPMethodCalledTest$$Lambda$lambda$test$2$2 : public $Runnable {
	$class(FPMethodCalledTest$$Lambda$lambda$test$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($FPMethodCalledTest$Test* test) {
		$set(this, test, test);
	}
	virtual void run() override {
		FPMethodCalledTest::lambda$test$2(test);
	}
	$FPMethodCalledTest$Test* test = nullptr;
};
$Class* FPMethodCalledTest$$Lambda$lambda$test$2$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"test", "LFPMethodCalledTest$Test;", nullptr, $PUBLIC, $field(FPMethodCalledTest$$Lambda$lambda$test$2$2, test)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LFPMethodCalledTest$Test;)V", nullptr, $PUBLIC, $method(FPMethodCalledTest$$Lambda$lambda$test$2$2, init$, void, $FPMethodCalledTest$Test*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FPMethodCalledTest$$Lambda$lambda$test$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FPMethodCalledTest$$Lambda$lambda$test$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(FPMethodCalledTest$$Lambda$lambda$test$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest$$Lambda$lambda$test$2$2);
	});
	return class$;
}
$Class* FPMethodCalledTest$$Lambda$lambda$test$2$2::class$ = nullptr;

class FPMethodCalledTest$$Lambda$lambda$test$3$3 : public $Runnable {
	$class(FPMethodCalledTest$$Lambda$lambda$test$3$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		FPMethodCalledTest::lambda$test$3();
	}
};
$Class* FPMethodCalledTest$$Lambda$lambda$test$3$3::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FPMethodCalledTest$$Lambda$lambda$test$3$3, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(FPMethodCalledTest$$Lambda$lambda$test$3$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"FPMethodCalledTest$$Lambda$lambda$test$3$3",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(FPMethodCalledTest$$Lambda$lambda$test$3$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest$$Lambda$lambda$test$3$3);
	});
	return class$;
}
$Class* FPMethodCalledTest$$Lambda$lambda$test$3$3::class$ = nullptr;

$JFrame* FPMethodCalledTest::frame = nullptr;
$JTextField* FPMethodCalledTest::textField = nullptr;
$FPMethodCalledTest$TestArray* FPMethodCalledTest::TESTS = nullptr;

void FPMethodCalledTest::init$() {
}

void FPMethodCalledTest::main($StringArray* args) {
	$init(FPMethodCalledTest);
	$useLocalObjectStack();
	$var($FPMethodCalledTest$TestArray, arr$, FPMethodCalledTest::TESTS);
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($FPMethodCalledTest$Test, test, arr$->get(i$));
		{
			FPMethodCalledTest::test(test);
		}
	}
}

void FPMethodCalledTest::test($FPMethodCalledTest$Test* test) {
	$init(FPMethodCalledTest);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$var($Robot, robot, $new($Robot));
		robot->setAutoDelay(50);
		$SwingUtilities::invokeAndWait($$new(FPMethodCalledTest$$Lambda$lambda$test$0, test));
		robot->waitForIdle();
		$SwingUtilities::invokeAndWait($$new(FPMethodCalledTest$$Lambda$lambda$test$1$1));
		robot->waitForIdle();
		$SwingUtilities::invokeAndWait($$new(FPMethodCalledTest$$Lambda$lambda$test$2$2, test));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$SwingUtilities::invokeAndWait($$new(FPMethodCalledTest$$Lambda$lambda$test$3$3));
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void FPMethodCalledTest::createAndShowGUI($FPMethodCalledTest$Test* test) {
	$init(FPMethodCalledTest);
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($$new($MetalLookAndFeel));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$assignStatic(FPMethodCalledTest::frame, $new($JFrame));
	FPMethodCalledTest::frame->setSize(300, 300);
	$nc(FPMethodCalledTest::frame)->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($JPanel, panel, $new($JPanel, $$new($FlowLayout)));
	$var($String, text, "AAAAAAA"_s);
	$assignStatic(FPMethodCalledTest::textField, $nc(test)->isPasswordField() ? $cast($JTextField, $new($JPasswordField, text)) : $new($JTextField, text));
	$nc(FPMethodCalledTest::textField)->setUI($$new($FPMethodCalledTest$1, test));
	panel->add(FPMethodCalledTest::textField);
	$$nc($nc(FPMethodCalledTest::frame)->getContentPane())->add(panel);
	$nc(FPMethodCalledTest::frame)->setVisible(true);
}

void FPMethodCalledTest::lambda$test$3() {
	$init(FPMethodCalledTest);
	if (FPMethodCalledTest::frame != nullptr) {
		FPMethodCalledTest::frame->dispose();
	}
}

void FPMethodCalledTest::lambda$test$2($FPMethodCalledTest$Test* test) {
	$init(FPMethodCalledTest);
	$useLocalObjectStack();
	$var($FPMethodCalledTest$Resultable, resultable, $nc(test)->resultable);
	if (!$nc(resultable)->getResult()) {
		$throwNew($RuntimeException, $$str({"Test fails for: "_s, resultable}));
	}
}

void FPMethodCalledTest::lambda$test$1() {
	$init(FPMethodCalledTest);
	$nc(FPMethodCalledTest::textField)->select(1, 3);
}

void FPMethodCalledTest::lambda$test$0($FPMethodCalledTest$Test* test) {
	$init(FPMethodCalledTest);
	createAndShowGUI(test);
}

void FPMethodCalledTest::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(FPMethodCalledTest::TESTS, $new($FPMethodCalledTest$TestArray, {
		$$new($FPMethodCalledTest$2),
		$$new($FPMethodCalledTest$3),
		$$new($FPMethodCalledTest$4),
		$$new($FPMethodCalledTest$5),
		$$new($FPMethodCalledTest$6),
		$$new($FPMethodCalledTest$7),
		$$new($FPMethodCalledTest$8, true),
		$$new($FPMethodCalledTest$9, true),
		$$new($FPMethodCalledTest$10, true)
	}));
}

FPMethodCalledTest::FPMethodCalledTest() {
}

$Class* FPMethodCalledTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("FPMethodCalledTest$$Lambda$lambda$test$0")) {
			return FPMethodCalledTest$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals("FPMethodCalledTest$$Lambda$lambda$test$1$1")) {
			return FPMethodCalledTest$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
		if (name->equals("FPMethodCalledTest$$Lambda$lambda$test$2$2")) {
			return FPMethodCalledTest$$Lambda$lambda$test$2$2::load$(name, initialize);
		}
		if (name->equals("FPMethodCalledTest$$Lambda$lambda$test$3$3")) {
			return FPMethodCalledTest$$Lambda$lambda$test$3$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(FPMethodCalledTest, frame)},
		{"textField", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(FPMethodCalledTest, textField)},
		{"TESTS", "[LFPMethodCalledTest$Test;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(FPMethodCalledTest, TESTS)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(FPMethodCalledTest, init$, void)},
		{"createAndShowGUI", "(LFPMethodCalledTest$Test;)V", nullptr, $STATIC, $staticMethod(FPMethodCalledTest, createAndShowGUI, void, $FPMethodCalledTest$Test*)},
		{"lambda$test$0", "(LFPMethodCalledTest$Test;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FPMethodCalledTest, lambda$test$0, void, $FPMethodCalledTest$Test*)},
		{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FPMethodCalledTest, lambda$test$1, void)},
		{"lambda$test$2", "(LFPMethodCalledTest$Test;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FPMethodCalledTest, lambda$test$2, void, $FPMethodCalledTest$Test*)},
		{"lambda$test$3", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(FPMethodCalledTest, lambda$test$3, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(FPMethodCalledTest, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(LFPMethodCalledTest$Test;)V", nullptr, $STATIC, $staticMethod(FPMethodCalledTest, test, void, $FPMethodCalledTest$Test*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"FPMethodCalledTest$PasswordViewMixedAPI", "FPMethodCalledTest", "PasswordViewMixedAPI", $STATIC},
		{"FPMethodCalledTest$PasswordViewFPAPI", "FPMethodCalledTest", "PasswordViewFPAPI", $STATIC},
		{"FPMethodCalledTest$PasswordViewINTAPI", "FPMethodCalledTest", "PasswordViewINTAPI", $STATIC},
		{"FPMethodCalledTest$WrappedPlainViewMixedAPI", "FPMethodCalledTest", "WrappedPlainViewMixedAPI", $STATIC},
		{"FPMethodCalledTest$WrappedPlainViewFPAPI", "FPMethodCalledTest", "WrappedPlainViewFPAPI", $STATIC},
		{"FPMethodCalledTest$WrappedPlainViewINTAPI", "FPMethodCalledTest", "WrappedPlainViewINTAPI", $STATIC},
		{"FPMethodCalledTest$PlainViewMixedAPI", "FPMethodCalledTest", "PlainViewMixedAPI", $STATIC},
		{"FPMethodCalledTest$PlainViewFPAPI", "FPMethodCalledTest", "PlainViewFPAPI", $STATIC},
		{"FPMethodCalledTest$PlainViewINTAPI", "FPMethodCalledTest", "PlainViewINTAPI", $STATIC},
		{"FPMethodCalledTest$Test", "FPMethodCalledTest", "Test", $STATIC | $ABSTRACT},
		{"FPMethodCalledTest$Resultable", "FPMethodCalledTest", "Resultable", $STATIC | $INTERFACE | $ABSTRACT},
		{"FPMethodCalledTest$10", nullptr, nullptr, 0},
		{"FPMethodCalledTest$9", nullptr, nullptr, 0},
		{"FPMethodCalledTest$8", nullptr, nullptr, 0},
		{"FPMethodCalledTest$7", nullptr, nullptr, 0},
		{"FPMethodCalledTest$6", nullptr, nullptr, 0},
		{"FPMethodCalledTest$5", nullptr, nullptr, 0},
		{"FPMethodCalledTest$4", nullptr, nullptr, 0},
		{"FPMethodCalledTest$3", nullptr, nullptr, 0},
		{"FPMethodCalledTest$2", nullptr, nullptr, 0},
		{"FPMethodCalledTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"FPMethodCalledTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"FPMethodCalledTest$PasswordViewMixedAPI,FPMethodCalledTest$PasswordViewFPAPI,FPMethodCalledTest$PasswordViewINTAPI,FPMethodCalledTest$WrappedPlainViewMixedAPI,FPMethodCalledTest$WrappedPlainViewFPAPI,FPMethodCalledTest$WrappedPlainViewINTAPI,FPMethodCalledTest$PlainViewMixedAPI,FPMethodCalledTest$PlainViewFPAPI,FPMethodCalledTest$PlainViewINTAPI,FPMethodCalledTest$Test,FPMethodCalledTest$Resultable,FPMethodCalledTest$10,FPMethodCalledTest$9,FPMethodCalledTest$8,FPMethodCalledTest$7,FPMethodCalledTest$6,FPMethodCalledTest$5,FPMethodCalledTest$4,FPMethodCalledTest$3,FPMethodCalledTest$2,FPMethodCalledTest$1"
	};
	$loadClass(FPMethodCalledTest, name, initialize, &classInfo$$, FPMethodCalledTest::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(FPMethodCalledTest);
	});
	return class$;
}

$Class* FPMethodCalledTest::class$ = nullptr;
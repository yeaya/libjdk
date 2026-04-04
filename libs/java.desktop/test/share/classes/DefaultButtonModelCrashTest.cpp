#include <DefaultButtonModelCrashTest.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/DefaultButtonModel.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef NORTH
#undef VK_TAB

using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ButtonModel = ::javax::swing::ButtonModel;
using $DefaultButtonModel = ::javax::swing::DefaultButtonModel;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class DefaultButtonModelCrashTest$$Lambda$lambda$new$0 : public $Runnable {
	$class(DefaultButtonModelCrashTest$$Lambda$lambda$new$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$(DefaultButtonModelCrashTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$0();
	}
	DefaultButtonModelCrashTest* inst$ = nullptr;
};
$Class* DefaultButtonModelCrashTest$$Lambda$lambda$new$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DefaultButtonModelCrashTest$$Lambda$lambda$new$0, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LDefaultButtonModelCrashTest;)V", nullptr, $PUBLIC, $method(DefaultButtonModelCrashTest$$Lambda$lambda$new$0, init$, void, DefaultButtonModelCrashTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultButtonModelCrashTest$$Lambda$lambda$new$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultButtonModelCrashTest$$Lambda$lambda$new$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultButtonModelCrashTest$$Lambda$lambda$new$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultButtonModelCrashTest$$Lambda$lambda$new$0);
	});
	return class$;
}
$Class* DefaultButtonModelCrashTest$$Lambda$lambda$new$0::class$ = nullptr;

class DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1 : public $Runnable {
	$class(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(DefaultButtonModelCrashTest* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->lambda$new$1();
	}
	DefaultButtonModelCrashTest* inst$ = nullptr;
};
$Class* DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(LDefaultButtonModelCrashTest;)V", nullptr, $PUBLIC, $method(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1, init$, void, DefaultButtonModelCrashTest*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1);
	});
	return class$;
}
$Class* DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::class$ = nullptr;

void DefaultButtonModelCrashTest::main($StringArray* args) {
	$new(DefaultButtonModelCrashTest);
}

void DefaultButtonModelCrashTest::init$() {
	$useLocalObjectStack();
	$set(this, frame, nullptr);
	$set(this, p, nullptr);
	$var($Throwable, var$0, nullptr);
	try {
		$var($Robot, robot, $new($Robot));
		robot->setAutoDelay(200);
		$SwingUtilities::invokeAndWait($$new(DefaultButtonModelCrashTest$$Lambda$lambda$new$0, this));
		robot->waitForIdle();
		robot->keyPress($KeyEvent::VK_TAB);
		robot->keyRelease($KeyEvent::VK_TAB);
		robot->delay(100);
		robot->keyPress($KeyEvent::VK_TAB);
		robot->keyRelease($KeyEvent::VK_TAB);
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (this->frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1, this));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void DefaultButtonModelCrashTest::go() {
	$useLocalObjectStack();
	$set(this, frame, $new($JFrame));
	this->frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$var($Container, contentPane, $nc(this->frame)->getContentPane());
	$var($ButtonModel, model, $new($DefaultButtonModel));
	$var($JCheckBox, check, $new($JCheckBox, "a bit broken"_s));
	check->setModel(model);
	$set(this, panel, $new($JPanel, $$new($BorderLayout)));
	this->panel->add($$new($JTextField, "Press Tab (twice?)"_s), $BorderLayout::NORTH);
	$nc(this->panel)->add(check);
	$nc(contentPane)->add(this->panel);
	$nc(this->frame)->setLocationRelativeTo(nullptr);
	$nc(this->frame)->pack();
	$nc(this->frame)->setVisible(true);
}

void DefaultButtonModelCrashTest::lambda$new$1() {
	$nc(this->frame)->dispose();
}

void DefaultButtonModelCrashTest::lambda$new$0() {
	go();
}

DefaultButtonModelCrashTest::DefaultButtonModelCrashTest() {
}

$Class* DefaultButtonModelCrashTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DefaultButtonModelCrashTest$$Lambda$lambda$new$0")) {
			return DefaultButtonModelCrashTest$$Lambda$lambda$new$0::load$(name, initialize);
		}
		if (name->equals("DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1")) {
			return DefaultButtonModelCrashTest$$Lambda$lambda$new$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(DefaultButtonModelCrashTest, frame)},
		{"panel", "Ljavax/swing/JPanel;", nullptr, $PRIVATE, $field(DefaultButtonModelCrashTest, panel)},
		{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $VOLATILE, $field(DefaultButtonModelCrashTest, p)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultButtonModelCrashTest, init$, void), "java.lang.Exception"},
		{"go", "()V", nullptr, $PRIVATE, $method(DefaultButtonModelCrashTest, go, void)},
		{"lambda$new$0", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(DefaultButtonModelCrashTest, lambda$new$0, void)},
		{"lambda$new$1", "()V", nullptr, $PRIVATE | $SYNTHETIC, $method(DefaultButtonModelCrashTest, lambda$new$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DefaultButtonModelCrashTest, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DefaultButtonModelCrashTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DefaultButtonModelCrashTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultButtonModelCrashTest);
	});
	return class$;
}

$Class* DefaultButtonModelCrashTest::class$ = nullptr;
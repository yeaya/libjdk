#include <TestButtonGroupFocusTraversal.h>
#include <TestButtonGroupFocusTraversal$1.h>
#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JCheckBox.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JRadioButton.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef VK_DOWN
#undef VK_LEFT
#undef VK_RIGHT
#undef VK_SHIFT
#undef VK_TAB
#undef VK_UP

using $TestButtonGroupFocusTraversal$1 = ::TestButtonGroupFocusTraversal$1;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Component = ::java::awt::Component;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JCheckBox = ::javax::swing::JCheckBox;
using $JComponent = ::javax::swing::JComponent;
using $JFrame = ::javax::swing::JFrame;
using $JRadioButton = ::javax::swing::JRadioButton;
using $JTextField = ::javax::swing::JTextField;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

class TestButtonGroupFocusTraversal$$Lambda$requestFocus : public $Runnable {
	$class(TestButtonGroupFocusTraversal$$Lambda$requestFocus, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JComponent* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->requestFocus();
	}
	$JComponent* inst$ = nullptr;
};
$Class* TestButtonGroupFocusTraversal$$Lambda$requestFocus::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestButtonGroupFocusTraversal$$Lambda$requestFocus, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $method(TestButtonGroupFocusTraversal$$Lambda$requestFocus, init$, void, $JComponent*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestButtonGroupFocusTraversal$$Lambda$requestFocus, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestButtonGroupFocusTraversal$$Lambda$requestFocus",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestButtonGroupFocusTraversal$$Lambda$requestFocus, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestButtonGroupFocusTraversal$$Lambda$requestFocus);
	});
	return class$;
}
$Class* TestButtonGroupFocusTraversal$$Lambda$requestFocus::class$ = nullptr;

class TestButtonGroupFocusTraversal$$Lambda$dispose$1 : public $Runnable {
	$class(TestButtonGroupFocusTraversal$$Lambda$dispose$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* TestButtonGroupFocusTraversal$$Lambda$dispose$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(TestButtonGroupFocusTraversal$$Lambda$dispose$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(TestButtonGroupFocusTraversal$$Lambda$dispose$1, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestButtonGroupFocusTraversal$$Lambda$dispose$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestButtonGroupFocusTraversal$$Lambda$dispose$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TestButtonGroupFocusTraversal$$Lambda$dispose$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestButtonGroupFocusTraversal$$Lambda$dispose$1);
	});
	return class$;
}
$Class* TestButtonGroupFocusTraversal$$Lambda$dispose$1::class$ = nullptr;

$JFrame* TestButtonGroupFocusTraversal::frame = nullptr;
$JTextField* TestButtonGroupFocusTraversal::textFieldFirst = nullptr;
$JTextField* TestButtonGroupFocusTraversal::textFieldLast = nullptr;
$JToggleButton* TestButtonGroupFocusTraversal::toggleButton1 = nullptr;
$JToggleButton* TestButtonGroupFocusTraversal::toggleButton2 = nullptr;
$JCheckBox* TestButtonGroupFocusTraversal::checkBox1 = nullptr;
$JCheckBox* TestButtonGroupFocusTraversal::checkBox2 = nullptr;
bool TestButtonGroupFocusTraversal::toggleButtonActionPerformed = false;
bool TestButtonGroupFocusTraversal::checkboxActionPerformed = false;
$JRadioButton* TestButtonGroupFocusTraversal::radioButton1 = nullptr;
$JRadioButton* TestButtonGroupFocusTraversal::radioButton2 = nullptr;
$Robot* TestButtonGroupFocusTraversal::robot = nullptr;

void TestButtonGroupFocusTraversal::init$() {
}

void TestButtonGroupFocusTraversal::blockTillDisplayed($Component* comp) {
	$var($Point, p, nullptr);
	while (p == nullptr) {
		try {
			$assign(p, $nc(comp)->getLocationOnScreen());
		} catch ($IllegalStateException& e) {
			try {
				$Thread::sleep(500);
			} catch ($InterruptedException& ie) {
			}
		}
	}
}

void TestButtonGroupFocusTraversal::createUI() {
	$SwingUtilities::invokeAndWait($$new($TestButtonGroupFocusTraversal$1));
}

void TestButtonGroupFocusTraversal::pressKey($ints* keys) {
	int32_t num = $nc(keys)->length;
	for (int32_t i = 0; i < num; ++i) {
		$init(TestButtonGroupFocusTraversal);
		$nc(TestButtonGroupFocusTraversal::robot)->keyPress(keys->get(i));
	}
	for (int32_t i = num; i > 0; --i) {
		$init(TestButtonGroupFocusTraversal);
		$nc(TestButtonGroupFocusTraversal::robot)->keyRelease(keys->get(i - 1));
	}
	$init(TestButtonGroupFocusTraversal);
	$nc(TestButtonGroupFocusTraversal::robot)->waitForIdle();
	$nc(TestButtonGroupFocusTraversal::robot)->delay(200);
}

void TestButtonGroupFocusTraversal::checkFocusedComponent($Component* component) {
	$useLocalObjectStack();
	$var($Component, focusedComponent, $$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner());
	if (!$nc(focusedComponent)->equals(component)) {
		$nc($System::out)->println(component);
		$System::out->println(focusedComponent);
		$throwNew($RuntimeException, "Wrong Component Selected"_s);
	}
}

void TestButtonGroupFocusTraversal::checkToggleButtonActionPerformed() {
	$init(TestButtonGroupFocusTraversal);
	if (TestButtonGroupFocusTraversal::toggleButtonActionPerformed) {
		$throwNew($RuntimeException, "Toggle Button Action should not beperformed"_s);
	}
}

void TestButtonGroupFocusTraversal::checkCheckboxActionPerformed() {
	$init(TestButtonGroupFocusTraversal);
	if (TestButtonGroupFocusTraversal::toggleButtonActionPerformed) {
		$throwNew($RuntimeException, "Checkbox Action should not beperformed"_s);
	}
}

void TestButtonGroupFocusTraversal::main($StringArray* args) {
	$useLocalObjectStack();
	$init(TestButtonGroupFocusTraversal);
	$assignStatic(TestButtonGroupFocusTraversal::robot, $new($Robot));
	TestButtonGroupFocusTraversal::robot->setAutoDelay(100);
	$var($UIManager$LookAndFeelInfoArray, infos, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, infos);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
			{
				$UIManager::setLookAndFeel($($nc(info)->getClassName()));
				$nc($System::out)->println($(info->getClassName()));
				$var($Throwable, var$0, nullptr);
				try {
					createUI();
					$nc(TestButtonGroupFocusTraversal::robot)->waitForIdle();
					$nc(TestButtonGroupFocusTraversal::robot)->delay(200);
					blockTillDisplayed(TestButtonGroupFocusTraversal::frame);
					$SwingUtilities::invokeAndWait($$new(TestButtonGroupFocusTraversal$$Lambda$requestFocus, $nc(TestButtonGroupFocusTraversal::textFieldFirst)));
					if (!$nc(TestButtonGroupFocusTraversal::textFieldFirst)->equals($($$nc($KeyboardFocusManager::getCurrentKeyboardFocusManager())->getFocusOwner()))) {
						try {
							$Thread::sleep(100);
						} catch ($InterruptedException& e) {
							e->printStackTrace();
						}
						$SwingUtilities::invokeAndWait($$new(TestButtonGroupFocusTraversal$$Lambda$requestFocus, $nc(TestButtonGroupFocusTraversal::textFieldFirst)));
					}
					$nc(TestButtonGroupFocusTraversal::robot)->waitForIdle();
					$nc(TestButtonGroupFocusTraversal::robot)->delay(200);
					pressKey($$new($ints, {$KeyEvent::VK_TAB}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton2);
					pressKey($$new($ints, {$KeyEvent::VK_TAB}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton2);
					pressKey($$new($ints, {$KeyEvent::VK_TAB}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox2);
					pressKey($$new($ints, {$KeyEvent::VK_TAB}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::textFieldLast);
					pressKey($$new($ints, {
						$KeyEvent::VK_SHIFT,
						$KeyEvent::VK_TAB
					}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox2);
					pressKey($$new($ints, {
						$KeyEvent::VK_SHIFT,
						$KeyEvent::VK_TAB
					}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton2);
					pressKey($$new($ints, {
						$KeyEvent::VK_SHIFT,
						$KeyEvent::VK_TAB
					}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton2);
					pressKey($$new($ints, {
						$KeyEvent::VK_SHIFT,
						$KeyEvent::VK_TAB
					}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::textFieldFirst);
					pressKey($$new($ints, {$KeyEvent::VK_TAB}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton2);
					pressKey($$new($ints, {$KeyEvent::VK_LEFT}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton1);
					checkToggleButtonActionPerformed();
					pressKey($$new($ints, {$KeyEvent::VK_RIGHT}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton2);
					checkToggleButtonActionPerformed();
					pressKey($$new($ints, {$KeyEvent::VK_UP}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton1);
					checkToggleButtonActionPerformed();
					pressKey($$new($ints, {$KeyEvent::VK_DOWN}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::toggleButton2);
					checkToggleButtonActionPerformed();
					pressKey($$new($ints, {$KeyEvent::VK_TAB}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton2);
					pressKey($$new($ints, {$KeyEvent::VK_LEFT}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton1);
					pressKey($$new($ints, {$KeyEvent::VK_RIGHT}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton2);
					pressKey($$new($ints, {$KeyEvent::VK_UP}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton1);
					pressKey($$new($ints, {$KeyEvent::VK_DOWN}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::radioButton2);
					pressKey($$new($ints, {$KeyEvent::VK_TAB}));
					checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox2);
					pressKey($$new($ints, {$KeyEvent::VK_LEFT}));
					checkCheckboxActionPerformed();
					checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox1);
					pressKey($$new($ints, {$KeyEvent::VK_RIGHT}));
					checkCheckboxActionPerformed();
					checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox2);
					pressKey($$new($ints, {$KeyEvent::VK_UP}));
					checkCheckboxActionPerformed();
					checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox1);
					pressKey($$new($ints, {$KeyEvent::VK_DOWN}));
					checkCheckboxActionPerformed();
					checkFocusedComponent(TestButtonGroupFocusTraversal::checkBox2);
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					if (TestButtonGroupFocusTraversal::frame != nullptr) {
						$SwingUtilities::invokeAndWait($$new(TestButtonGroupFocusTraversal$$Lambda$dispose$1, TestButtonGroupFocusTraversal::frame));
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

TestButtonGroupFocusTraversal::TestButtonGroupFocusTraversal() {
}

$Class* TestButtonGroupFocusTraversal::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestButtonGroupFocusTraversal$$Lambda$requestFocus")) {
			return TestButtonGroupFocusTraversal$$Lambda$requestFocus::load$(name, initialize);
		}
		if (name->equals("TestButtonGroupFocusTraversal$$Lambda$dispose$1")) {
			return TestButtonGroupFocusTraversal$$Lambda$dispose$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, frame)},
		{"textFieldFirst", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, textFieldFirst)},
		{"textFieldLast", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, textFieldLast)},
		{"toggleButton1", "Ljavax/swing/JToggleButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, toggleButton1)},
		{"toggleButton2", "Ljavax/swing/JToggleButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, toggleButton2)},
		{"checkBox1", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, checkBox1)},
		{"checkBox2", "Ljavax/swing/JCheckBox;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, checkBox2)},
		{"toggleButtonActionPerformed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, toggleButtonActionPerformed)},
		{"checkboxActionPerformed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, checkboxActionPerformed)},
		{"radioButton1", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, radioButton1)},
		{"radioButton2", "Ljavax/swing/JRadioButton;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, radioButton2)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(TestButtonGroupFocusTraversal, robot)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestButtonGroupFocusTraversal, init$, void)},
		{"blockTillDisplayed", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestButtonGroupFocusTraversal, blockTillDisplayed, void, $Component*)},
		{"checkCheckboxActionPerformed", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestButtonGroupFocusTraversal, checkCheckboxActionPerformed, void)},
		{"checkFocusedComponent", "(Ljava/awt/Component;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestButtonGroupFocusTraversal, checkFocusedComponent, void, $Component*)},
		{"checkToggleButtonActionPerformed", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestButtonGroupFocusTraversal, checkToggleButtonActionPerformed, void)},
		{"createUI", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestButtonGroupFocusTraversal, createUI, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestButtonGroupFocusTraversal, main, void, $StringArray*), "java.lang.Exception"},
		{"pressKey", "([I)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(TestButtonGroupFocusTraversal, pressKey, void, $ints*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestButtonGroupFocusTraversal$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestButtonGroupFocusTraversal",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestButtonGroupFocusTraversal$1,TestButtonGroupFocusTraversal$1$4,TestButtonGroupFocusTraversal$1$3,TestButtonGroupFocusTraversal$1$2,TestButtonGroupFocusTraversal$1$1"
	};
	$loadClass(TestButtonGroupFocusTraversal, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestButtonGroupFocusTraversal);
	});
	return class$;
}

$Class* TestButtonGroupFocusTraversal::class$ = nullptr;
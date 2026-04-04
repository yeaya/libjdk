#include <Test6541987.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Error.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JColorChooser.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BLACK
#undef VK_0
#undef VK_1
#undef VK_ALT
#undef VK_ESCAPE
#undef VK_H
#undef VK_TAB

using $WindowArray = $Array<::java::awt::Window>;
using $Color = ::java::awt::Color;
using $Component = ::java::awt::Component;
using $Robot = ::java::awt::Robot;
using $Window = ::java::awt::Window;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JColorChooser = ::javax::swing::JColorChooser;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class Test6541987$$Lambda$dispose : public $Runnable {
	$class(Test6541987$$Lambda$dispose, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Window* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->dispose();
	}
	$Window* inst$ = nullptr;
};
$Class* Test6541987$$Lambda$dispose::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(Test6541987$$Lambda$dispose, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Window;)V", nullptr, $PUBLIC, $method(Test6541987$$Lambda$dispose, init$, void, $Window*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6541987$$Lambda$dispose, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"Test6541987$$Lambda$dispose",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test6541987$$Lambda$dispose, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6541987$$Lambda$dispose);
	});
	return class$;
}
$Class* Test6541987$$Lambda$dispose::class$ = nullptr;

$Robot* Test6541987::robot = nullptr;
$JFrame* Test6541987::frame = nullptr;

void Test6541987::init$() {
}

void Test6541987::main($StringArray* args) {
	$init(Test6541987);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$assignStatic(Test6541987::robot, $new($Robot));
		Test6541987::robot->setAutoDelay(100);
		start();
		click($$new($ints, {$KeyEvent::VK_ESCAPE}));
		$nc(Test6541987::robot)->waitForIdle();
		start();
		click($$new($ints, {$KeyEvent::VK_1}));
		click($$new($ints, {$KeyEvent::VK_0}));
		click($$new($ints, {$KeyEvent::VK_ESCAPE}));
		click($$new($ints, {$KeyEvent::VK_ESCAPE}));
		$nc(Test6541987::robot)->waitForIdle();
		$nc(Test6541987::robot)->delay(500);
		{
			$var($WindowArray, arr$, $Window::getWindows());
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Window, window, arr$->get(i$));
				if ($nc(window)->isVisible()) {
					$throwNew($Error, $$str({"found visible window: "_s, $(window->getName())}));
				}
			}
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (Test6541987::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(Test6541987$$Lambda$dispose, Test6541987::frame));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void Test6541987::start() {
	$init(Test6541987);
	$useLocalObjectStack();
	$SwingUtilities::invokeLater($$new(Test6541987));
	click($$new($ints, {
		$KeyEvent::VK_ALT,
		$KeyEvent::VK_H
	}));
	click($$new($ints, {$KeyEvent::VK_TAB}));
	click($$new($ints, {$KeyEvent::VK_TAB}));
	click($$new($ints, {$KeyEvent::VK_TAB}));
	click($$new($ints, {$KeyEvent::VK_TAB}));
}

void Test6541987::click($ints* keys) {
	$init(Test6541987);
	$useLocalObjectStack();
	$nc(Test6541987::robot)->waitForIdle();
	{
		$var($ints, arr$, keys);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t key = arr$->get(i$);
			{
				$nc(Test6541987::robot)->keyPress(key);
			}
		}
	}
	{
		$var($ints, arr$, keys);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t key = arr$->get(i$);
			{
				$nc(Test6541987::robot)->keyRelease(key);
			}
		}
	}
}

void Test6541987::run() {
	$useLocalObjectStack();
	$var($String, title, $of(this)->getClass()->getName());
	$assignStatic(Test6541987::frame, $new($JFrame, title));
	Test6541987::frame->setLocationRelativeTo(nullptr);
	$nc(Test6541987::frame)->setVisible(true);
	$init($Color);
	$var($Color, color, $JColorChooser::showDialog(Test6541987::frame, title, $Color::BLACK));
	if (color != nullptr) {
		$throwNew($Error, $$str({"unexpected color: "_s, color}));
	}
	$nc(Test6541987::frame)->setVisible(false);
	$nc(Test6541987::frame)->dispose();
}

Test6541987::Test6541987() {
}

$Class* Test6541987::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("Test6541987$$Lambda$dispose")) {
			return Test6541987$$Lambda$dispose::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(Test6541987, robot)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Test6541987, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6541987, init$, void)},
		{"click", "([I)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(Test6541987, click, void, $ints*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6541987, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test6541987, run, void)},
		{"start", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(Test6541987, start, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6541987",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test6541987, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6541987);
	});
	return class$;
}

$Class* Test6541987::class$ = nullptr;
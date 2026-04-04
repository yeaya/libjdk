#include <Test6325652.h>
#include <SwingTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Error.h>
#include <javax/swing/JDesktopPane.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JTextArea.h>
#include <jcpp.h>

#undef HEIGHT
#undef VK_CONTROL
#undef VK_F5
#undef VK_F6
#undef VK_F9
#undef WIDTH

using $SwingTest = ::SwingTest;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JDesktopPane = ::javax::swing::JDesktopPane;
using $JFrame = ::javax::swing::JFrame;
using $JInternalFrame = ::javax::swing::JInternalFrame;
using $JTextArea = ::javax::swing::JTextArea;

$Robot* Test6325652::robot = nullptr;

void Test6325652::main($StringArray* args) {
	$load(Test6325652);
	$SwingTest::start(Test6325652::class$);
}

void Test6325652::init$($JFrame* frame) {
	$useLocalObjectStack();
	$var($JDesktopPane, desktop, $new($JDesktopPane));
	desktop->add($(create(0)));
	desktop->add($set(this, internal, create(1)));
	$nc(frame)->add(desktop);
}

void Test6325652::select() {
	$nc(this->internal)->setSelected(true);
}

void Test6325652::stepFirst() {
	$init(Test6325652);
	$assignStatic(Test6325652::robot, $new($Robot));
	Test6325652::robot->setAutoDelay(50);
	click($$new($ints, {
		$KeyEvent::VK_CONTROL,
		$KeyEvent::VK_F9
	}));
}

void Test6325652::stepFirstValidate() {
	if (!$nc(this->internal)->isIcon()) {
		$throwNew($Error, "frame should be an icon"_s);
	}
}

void Test6325652::stepSecond() {
	$useLocalObjectStack();
	click($$new($ints, {
		$KeyEvent::VK_CONTROL,
		$KeyEvent::VK_F6
	}));
	click($$new($ints, {
		$KeyEvent::VK_CONTROL,
		$KeyEvent::VK_F5
	}));
}

void Test6325652::stepSecondValidate() {
	if ($nc(this->internal)->isIcon()) {
		$throwNew($Error, "frame should not be an icon"_s);
	}
}

void Test6325652::click($ints* keys) {
	$useLocalObjectStack();
	{
		$var($ints, arr$, keys);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t key = arr$->get(i$);
			{
				$init(Test6325652);
				$nc(Test6325652::robot)->keyPress(key);
			}
		}
	}
	{
		$var($ints, arr$, keys);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			int32_t key = arr$->get(i$);
			{
				$init(Test6325652);
				$nc(Test6325652::robot)->keyRelease(key);
			}
		}
	}
}

$JInternalFrame* Test6325652::create(int32_t index) {
	$useLocalObjectStack();
	$var($String, text, $str({"test"_s, $$str(index)}));
	index = index * 3 + 1;
	$var($JInternalFrame, internal, $new($JInternalFrame, text, true, true, true, true));
	$$nc(internal->getContentPane())->add($$new($JTextArea, text));
	internal->setBounds(10 * index, 10 * index, Test6325652::WIDTH, Test6325652::HEIGHT);
	internal->setVisible(true);
	return internal;
}

Test6325652::Test6325652() {
}

$Class* Test6325652::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"WIDTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6325652, WIDTH)},
		{"HEIGHT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Test6325652, HEIGHT)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(Test6325652, robot)},
		{"internal", "Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE, $field(Test6325652, internal)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFrame;)V", nullptr, $PUBLIC, $method(Test6325652, init$, void, $JFrame*)},
		{"click", "([I)V", nullptr, $PRIVATE | $STATIC | $TRANSIENT, $staticMethod(Test6325652, click, void, $ints*)},
		{"create", "(I)Ljavax/swing/JInternalFrame;", nullptr, $PRIVATE | $STATIC, $staticMethod(Test6325652, create, $JInternalFrame*, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6325652, main, void, $StringArray*), "java.lang.Throwable"},
		{"select", "()V", nullptr, $PUBLIC, $virtualMethod(Test6325652, select, void), "java.beans.PropertyVetoException"},
		{"stepFirst", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6325652, stepFirst, void), "java.awt.AWTException"},
		{"stepFirstValidate", "()V", nullptr, $PUBLIC, $virtualMethod(Test6325652, stepFirstValidate, void)},
		{"stepSecond", "()V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6325652, stepSecond, void)},
		{"stepSecondValidate", "()V", nullptr, $PUBLIC, $virtualMethod(Test6325652, stepSecondValidate, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6325652",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test6325652, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6325652);
	});
	return class$;
}

$Class* Test6325652::class$ = nullptr;
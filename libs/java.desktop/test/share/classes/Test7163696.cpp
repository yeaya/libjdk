#include <Test7163696.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Error.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef AUTO
#undef BUTTON1_MASK
#undef HORIZONTAL

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $Dimension = ::java::awt::Dimension;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JScrollBar = ::javax::swing::JScrollBar;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

bool Test7163696::AUTO = false;

void Test7163696::init$() {
}

void Test7163696::main($StringArray* args) {
	$init(Test7163696);
	$$new(Test7163696)->test();
}

void Test7163696::test() {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, info, arr$->get(i$));
			{
				$UIManager::setLookAndFeel($($nc(info)->getClassName()));
				$SwingUtilities::invokeAndWait(this);
				robot->waitForIdle();
				$Thread::sleep(1000);
				$var($Point, point, $nc(this->bar)->getLocation());
				$SwingUtilities::convertPointToScreen(point, this->bar);
				$nc(point)->x += $nc(this->bar)->getWidth() >> 2;
				point->y += $nc(this->bar)->getHeight() >> 1;
				robot->mouseMove(point->x, point->y);
				robot->mousePress($InputEvent::BUTTON1_MASK);
				robot->mouseRelease($InputEvent::BUTTON1_MASK);
				robot->waitForIdle();
				$Thread::sleep(1000);
				$SwingUtilities::invokeAndWait(this);
				if (this->bar != nullptr) {
					$set(this, bar, nullptr);
					if (Test7163696::AUTO) {
						$throwNew($Error, "TEST FAILED"_s);
					}
				}
			}
		}
	}
}

void Test7163696::run() {
	$useLocalObjectStack();
	if (this->bar == nullptr) {
		$set(this, bar, $new($JScrollBar, $JScrollBar::HORIZONTAL, 50, 10, 0, 100));
		this->bar->setPreferredSize($$new($Dimension, 400, 20));
		$var($JFrame, frame, $new($JFrame));
		frame->add(this->bar);
		frame->pack();
		frame->setVisible(true);
	} else if (40 != this->bar->getValue()) {
		$nc($System::out)->println($$str({"name = "_s, $($$nc($UIManager::getLookAndFeel())->getName())}));
		$System::out->println($$str({"value = "_s, $$str($nc(this->bar)->getValue())}));
	} else {
		$$nc($SwingUtilities::getWindowAncestor(this->bar))->dispose();
		$set(this, bar, nullptr);
	}
}

void Test7163696::clinit$($Class* clazz) {
	Test7163696::AUTO = nullptr != $System::getProperty("test.src"_s, nullptr);
}

Test7163696::Test7163696() {
}

$Class* Test7163696::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"AUTO", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test7163696, AUTO)},
		{"bar", "Ljavax/swing/JScrollBar;", nullptr, $PRIVATE, $field(Test7163696, bar)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test7163696, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test7163696, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test7163696, run, void)},
		{"test", "()V", nullptr, $PRIVATE, $method(Test7163696, test, void), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test7163696",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Test7163696, name, initialize, &classInfo$$, Test7163696::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Test7163696);
	});
	return class$;
}

$Class* Test7163696::class$ = nullptr;
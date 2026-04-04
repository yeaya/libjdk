#include <bug5012888.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Container.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/Error.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef NORTH
#undef SOUTH

using $BorderLayout = ::java::awt::BorderLayout;
using $Container = ::java::awt::Container;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;

void bug5012888::init$() {
	$useLocalObjectStack();
	$JFrame::init$();
	$set(this, spinner1, $new($JSpinner, $$new($SpinnerNumberModel, 0, -1000, 1000, 1)));
	$set(this, spinner2, $new($JSpinner, $$new($SpinnerNumberModel, 1, -1000, 1000, 1)));
	$var($Container, pane, getContentPane());
	$nc(pane)->setLayout($$new($BorderLayout));
	pane->add(this->spinner1, $BorderLayout::NORTH);
	pane->add(this->spinner2, $BorderLayout::SOUTH);
}

void bug5012888::doTest() {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$var($Point, p, $nc(this->spinner2)->getLocationOnScreen());
	$var($Rectangle, rect, $nc(this->spinner2)->getBounds());
	robot->mouseMove($nc(p)->x + $nc(rect)->width - 5, $nc(p)->y + 5);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	$Thread::sleep(1000);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	if ($$sure($Integer, $nc(this->spinner2)->getValue())->intValue() == 1) {
		$throwNew($Error, "Spinner value should be more than 1"_s);
	}
}

void bug5012888::main($StringArray* argv) {
	$init(bug5012888);
	$var(bug5012888, b, $new(bug5012888));
	b->setBounds(0, 0, 100, 100);
	b->setVisible(true);
	b->doTest();
}

bug5012888::bug5012888() {
}

$Class* bug5012888::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"spinner1", "Ljavax/swing/JSpinner;", nullptr, 0, $field(bug5012888, spinner1)},
		{"spinner2", "Ljavax/swing/JSpinner;", nullptr, 0, $field(bug5012888, spinner2)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug5012888, init$, void)},
		{"doTest", "()V", nullptr, $PUBLIC, $virtualMethod(bug5012888, doTest, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug5012888, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug5012888",
		"javax.swing.JFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug5012888, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug5012888));
	});
	return class$;
}

$Class* bug5012888::class$ = nullptr;
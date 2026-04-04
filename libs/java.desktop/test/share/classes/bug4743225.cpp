#include <bug4743225.h>
#include <bug4743225$1.h>
#include <bug4743225$2.h>
#include <bug4743225$3.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/lang/AssertionError.h>
#include <javax/accessibility/Accessible.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/basic/BasicComboPopup.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef EXIT_ON_CLOSE

using $bug4743225$1 = ::bug4743225$1;
using $bug4743225$2 = ::bug4743225$2;
using $bug4743225$3 = ::bug4743225$3;
using $Component = ::java::awt::Component;
using $FlowLayout = ::java::awt::FlowLayout;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $BasicComboPopup = ::javax::swing::plaf::basic::BasicComboPopup;

$JComboBox* bug4743225::cb = nullptr;
$volatile(bool) bug4743225::flag = false;

void bug4743225::init$() {
	$useLocalObjectStack();
	$JFrame::init$();
	setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	setLayout($$new($FlowLayout));
	$assignStatic(bug4743225::cb, $new($JComboBox, $$new($ObjectArray, {
		"one"_s,
		"two"_s,
		"three"_s
	})));
	bug4743225::cb->addPopupMenuListener($$new($bug4743225$1, this));
	add(bug4743225::cb);
	pack();
	setLocationRelativeTo(nullptr);
}

$BasicComboPopup* bug4743225::getPopup() {
	$init(bug4743225);
	$useLocalObjectStack();
	$var($AccessibleContext, c, $nc(bug4743225::cb)->getAccessibleContext());
	for (int32_t i = 0; i < $nc(c)->getAccessibleChildrenCount(); ++i) {
		if ($instanceOf($BasicComboPopup, $(c->getAccessibleChild(i)))) {
			return $cast($BasicComboPopup, c->getAccessibleChild(i));
		}
	}
	$throwNew($AssertionError, $of("No BasicComboPopup found"_s));
}

void bug4743225::main($StringArray* args) {
	$init(bug4743225);
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(100);
	$SwingUtilities::invokeAndWait($$new($bug4743225$2));
	robot->waitForIdle();
	$var($Point, point, $nc(bug4743225::cb)->getLocationOnScreen());
	robot->mouseMove($nc(point)->x + 10, $nc(point)->y + 10);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug4743225$3));
	if (!bug4743225::flag) {
		$throwNew($RuntimeException, "The ComboBox popup wasn\'t correctly updated"_s);
	}
}

bug4743225::bug4743225() {
}

$Class* bug4743225::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"cb", "Ljavax/swing/JComboBox;", nullptr, $PRIVATE | $STATIC, $staticField(bug4743225, cb)},
		{"flag", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug4743225, flag)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4743225, init$, void)},
		{"getPopup", "()Ljavax/swing/plaf/basic/BasicComboPopup;", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4743225, getPopup, $BasicComboPopup*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $TRANSIENT, $staticMethod(bug4743225, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4743225$3", nullptr, nullptr, 0},
		{"bug4743225$2", nullptr, nullptr, 0},
		{"bug4743225$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4743225",
		"javax.swing.JFrame",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4743225$3,bug4743225$2,bug4743225$1"
	};
	$loadClass(bug4743225, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4743225));
	});
	return class$;
}

$Class* bug4743225::class$ = nullptr;
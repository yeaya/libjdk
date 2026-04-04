#include <Test8013370.h>
#include <Test8013370$1.h>
#include <Test8013370$2.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/lang/Error.h>
#include <javax/swing/Action.h>
#include <javax/swing/ActionMap.h>
#include <javax/swing/InputMap.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JMenuBar.h>
#include <javax/swing/JMenuItem.h>
#include <javax/swing/KeyStroke.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef VK_A
#undef VK_CONTROL

using $Test8013370$1 = ::Test8013370$1;
using $Test8013370$2 = ::Test8013370$2;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InputMap = ::javax::swing::InputMap;
using $JFrame = ::javax::swing::JFrame;
using $JMenuBar = ::javax::swing::JMenuBar;
using $JMenuItem = ::javax::swing::JMenuItem;
using $KeyStroke = ::javax::swing::KeyStroke;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void Test8013370::init$() {
}

void Test8013370::main($StringArray* args) {
	$init(Test8013370);
	$useLocalObjectStack();
	$var(Test8013370, task, $new(Test8013370));
	$SwingUtilities::invokeAndWait(task);
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	robot->keyPress($KeyEvent::VK_CONTROL);
	robot->keyRelease($KeyEvent::VK_CONTROL);
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait(task);
	task->validate();
}

void Test8013370::run() {
	$useLocalObjectStack();
	if (this->frame == nullptr) {
		$var($JMenuBar, menu, $new($Test8013370$1, this));
		menu->add($$new($JMenuItem, "Menu"_s));
		$var($InputMap, map, menu->getInputMap(2));
		for (int32_t i = 0; i < 9; ++i) {
			$var($String, name, $str({" Action #"_s, $$str(i)}));
			$nc(map)->put($($KeyStroke::getKeyStroke($KeyEvent::VK_A + i, 128)), name);
			$$nc(menu->getActionMap())->put(name, $$new($Test8013370$2, this, name));
		}
		$set(this, frame, $new($JFrame, "8013370"_s));
		this->frame->setJMenuBar(menu);
		$nc(this->frame)->setVisible(true);
	} else {
		this->frame->dispose();
	}
}

void Test8013370::validate() {
	if (this->error) {
		$throwNew($Error, "KeyStroke is null"_s);
	}
}

Test8013370::Test8013370() {
}

$Class* Test8013370::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE, $field(Test8013370, frame)},
		{"error", "Z", nullptr, $PRIVATE, $field(Test8013370, error)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test8013370, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test8013370, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Test8013370, run, void)},
		{"validate", "()V", nullptr, $PRIVATE, $method(Test8013370, validate, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test8013370$2", nullptr, nullptr, 0},
		{"Test8013370$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test8013370",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test8013370$2,Test8013370$1"
	};
	$loadClass(Test8013370, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test8013370);
	});
	return class$;
}

$Class* Test8013370::class$ = nullptr;
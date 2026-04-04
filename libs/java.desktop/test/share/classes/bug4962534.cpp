#include <bug4962534.h>
#include <bug4962534$1.h>
#include <bug4962534$2.h>
#include <bug4962534$3.h>
#include <bug4962534$4.h>
#include <bug4962534$5.h>
#include <bug4962534$6.h>
#include <bug4962534$7.h>
#include <java/awt/AWTException.h>
#include <java/awt/Component.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/MouseInfo.h>
#include <java/awt/Point.h>
#include <java/awt/PointerInfo.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/util/Random.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef LOCK

using $bug4962534$1 = ::bug4962534$1;
using $bug4962534$2 = ::bug4962534$2;
using $bug4962534$3 = ::bug4962534$3;
using $bug4962534$4 = ::bug4962534$4;
using $bug4962534$5 = ::bug4962534$5;
using $bug4962534$6 = ::bug4962534$6;
using $bug4962534$7 = ::bug4962534$7;
using $AWTException = ::java::awt::AWTException;
using $Component = ::java::awt::Component;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $MouseInfo = ::java::awt::MouseInfo;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $Random = ::java::util::Random;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class bug4962534$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4962534$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4962534::lambda$main$0();
	}
};
$Class* bug4962534$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4962534$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4962534$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4962534$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4962534$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4962534$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug4962534$$Lambda$lambda$main$0::class$ = nullptr;

$JFrame* bug4962534::frame = nullptr;
$Object* bug4962534::LOCK = nullptr;

void bug4962534::init$() {
	this->titleFound = false;
}

void bug4962534::main($StringArray* args) {
	$init(bug4962534);
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		$var(bug4962534, app, $new(bug4962534));
		app->init();
		app->start();
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (bug4962534::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(bug4962534$$Lambda$lambda$main$0));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug4962534::init() {
	$useLocalObjectStack();
	try {
		$SwingUtilities::invokeAndWait($$new($bug4962534$1, this));
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, $$str({"Init failed. "_s, $(ex->getMessage())}));
	}
}

void bug4962534::start() {
	$useLocalObjectStack();
	try {
		setJLayeredPaneEDT();
		setTitleComponentEDT();
	} catch ($Exception& ex) {
		ex->printStackTrace();
		$throwNew($RuntimeException, $$str({"Test failed. "_s, $(ex->getMessage())}));
	}
	if (!this->titleFound) {
		$throwNew($RuntimeException, "Test Failed. Unable to determine title\'s size."_s);
	}
	$var($Random, r, $new($Random));
	for (int32_t iteration = 0; iteration < 10; ++iteration) {
		try {
			setFramePosEDT();
		} catch ($Exception& ex) {
			ex->printStackTrace();
			$throwNew($RuntimeException, "Test failed."_s);
		}
		try {
			$set(this, robot, $new($Robot));
			this->robot->setAutoDelay(70);
			$nc(this->robot)->waitForIdle();
			int32_t var$0 = $nc(this->framePosition)->x + getJFrameWidthEDT() / 2;
			$nc(this->robot)->mouseMove(var$0, $nc(this->framePosition)->y + $nc(this->titleComponent)->getHeight() / 2);
			$nc(this->robot)->mousePress($InputEvent::BUTTON1_MASK);
			$nc(this->robot)->waitForIdle();
			$set(this, gcBounds, $nc($nc($($nc($nc($($$nc($GraphicsEnvironment::getLocalGraphicsEnvironment())->getScreenDevices()))->get(0))->getConfigurations()))->get(0))->getBounds());
			int32_t var$1 = $nc(this->framePosition)->x + getJFrameWidthEDT() / 2;
			$nc(this->robot)->mouseMove(var$1, $nc(this->framePosition)->y + $nc(this->titleComponent)->getHeight() / 2);
			$nc(this->robot)->waitForIdle();
			int32_t multier = $nc(this->gcBounds)->height / 2 - 10;
			for (int32_t i = 0; i < 10; ++i) {
				int32_t var$2 = $nc(this->gcBounds)->width / 2 - $cast(int32_t, (r->nextDouble() * multier));
				$nc(this->robot)->mouseMove(var$2, this->gcBounds->height / 2 - $cast(int32_t, (r->nextDouble() * multier)));
			}
			$nc(this->robot)->mouseRelease($InputEvent::BUTTON1_MASK);
			$nc(this->robot)->waitForIdle();
		} catch ($AWTException& e) {
			$throwNew($RuntimeException, $$str({"Test Failed. AWTException thrown."_s, $(e->getMessage())}));
		} catch ($Exception& e) {
			e->printStackTrace();
			$throwNew($RuntimeException, "Test Failed."_s);
		}
		$nc($System::out)->println($$str({"Mouse  lies in "_s, $($$nc($MouseInfo::getPointerInfo())->getLocation())}));
		bool frameIsOutOfScreen = false;
		try {
			setNewFrameLocationEDT();
			$System::out->println($$str({"Now Frame lies in "_s, this->newFrameLocation}));
			frameIsOutOfScreen = checkFrameIsOutOfScreenEDT();
		} catch ($Exception& ex) {
			ex->printStackTrace();
			$throwNew($RuntimeException, "Test Failed."_s);
		}
		if (frameIsOutOfScreen) {
			$throwNew($RuntimeException, "Test failed. JFrame is out of screen."_s);
		}
	}
	$nc($System::out)->println("Test passed."_s);
}

void bug4962534::createAndShowGUI() {
	try {
		$UIManager::setLookAndFeel("javax.swing.plaf.metal.MetalLookAndFeel"_s);
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, $(ex->getMessage()));
	}
	$JFrame::setDefaultLookAndFeelDecorated(true);
	$assignStatic(bug4962534::frame, $new($JFrame, "JFrame Dance Test"_s));
	bug4962534::frame->pack();
	$nc(bug4962534::frame)->setSize(450, 260);
	$nc(bug4962534::frame)->setLocationRelativeTo(nullptr);
	$nc(bug4962534::frame)->setVisible(true);
}

void bug4962534::setJLayeredPaneEDT() {
	$SwingUtilities::invokeAndWait($$new($bug4962534$2, this));
}

void bug4962534::setTitleComponentEDT() {
	$SwingUtilities::invokeAndWait($$new($bug4962534$3, this));
}

void bug4962534::setFramePosEDT() {
	$SwingUtilities::invokeAndWait($$new($bug4962534$4, this));
}

bool bug4962534::checkFrameIsOutOfScreenEDT() {
	$useLocalObjectStack();
	$var($booleans, result, $new($booleans, 1));
	$SwingUtilities::invokeAndWait($$new($bug4962534$5, this, result));
	return result->get(0);
}

void bug4962534::setNewFrameLocationEDT() {
	$SwingUtilities::invokeAndWait($$new($bug4962534$6, this));
}

int32_t bug4962534::getJFrameWidthEDT() {
	$useLocalObjectStack();
	$var($ints, result, $new($ints, 1));
	$SwingUtilities::invokeAndWait($$new($bug4962534$7, this, result));
	return result->get(0);
}

void bug4962534::lambda$main$0() {
	$init(bug4962534);
	$nc(bug4962534::frame)->dispose();
}

void bug4962534::clinit$($Class* clazz) {
	$assignStatic(bug4962534::LOCK, $new($Object));
}

bug4962534::bug4962534() {
}

$Class* bug4962534::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4962534$$Lambda$lambda$main$0")) {
			return bug4962534$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"robot", "Ljava/awt/Robot;", nullptr, 0, $field(bug4962534, robot)},
		{"framePosition", "Ljava/awt/Point;", nullptr, $VOLATILE, $field(bug4962534, framePosition)},
		{"newFrameLocation", "Ljava/awt/Point;", nullptr, $VOLATILE, $field(bug4962534, newFrameLocation)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $STATIC, $staticField(bug4962534, frame)},
		{"gcBounds", "Ljava/awt/Rectangle;", nullptr, 0, $field(bug4962534, gcBounds)},
		{"titleComponent", "Ljava/awt/Component;", nullptr, 0, $field(bug4962534, titleComponent)},
		{"lPane", "Ljavax/swing/JLayeredPane;", nullptr, 0, $field(bug4962534, lPane)},
		{"titleFound", "Z", nullptr, $VOLATILE, $field(bug4962534, titleFound)},
		{"LOCK", "Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticField(bug4962534, LOCK)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4962534, init$, void)},
		{"checkFrameIsOutOfScreenEDT", "()Z", nullptr, $PRIVATE, $method(bug4962534, checkFrameIsOutOfScreenEDT, bool), "java.lang.Exception"},
		{"createAndShowGUI", "()V", nullptr, $PRIVATE, $method(bug4962534, createAndShowGUI, void)},
		{"getJFrameWidthEDT", "()I", nullptr, $PRIVATE, $method(bug4962534, getJFrameWidthEDT, int32_t), "java.lang.Exception"},
		{"init", "()V", nullptr, $PUBLIC, $virtualMethod(bug4962534, init, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4962534, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4962534, main, void, $StringArray*), "java.lang.Exception"},
		{"setFramePosEDT", "()V", nullptr, $PRIVATE, $method(bug4962534, setFramePosEDT, void), "java.lang.Exception"},
		{"setJLayeredPaneEDT", "()V", nullptr, $PRIVATE, $method(bug4962534, setJLayeredPaneEDT, void), "java.lang.Exception"},
		{"setNewFrameLocationEDT", "()V", nullptr, $PRIVATE, $method(bug4962534, setNewFrameLocationEDT, void), "java.lang.Exception"},
		{"setTitleComponentEDT", "()V", nullptr, $PRIVATE, $method(bug4962534, setTitleComponentEDT, void), "java.lang.Exception"},
		{"start", "()V", nullptr, $PUBLIC, $virtualMethod(bug4962534, start, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4962534$7", nullptr, nullptr, 0},
		{"bug4962534$6", nullptr, nullptr, 0},
		{"bug4962534$5", nullptr, nullptr, 0},
		{"bug4962534$4", nullptr, nullptr, 0},
		{"bug4962534$3", nullptr, nullptr, 0},
		{"bug4962534$2", nullptr, nullptr, 0},
		{"bug4962534$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4962534",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4962534$7,bug4962534$6,bug4962534$5,bug4962534$4,bug4962534$3,bug4962534$2,bug4962534$1"
	};
	$loadClass(bug4962534, name, initialize, &classInfo$$, bug4962534::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug4962534);
	});
	return class$;
}

$Class* bug4962534::class$ = nullptr;
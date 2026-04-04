#include <bug4788637.h>
#include <bug4788637$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/GridBagConstraints.h>
#include <java/awt/GridBagLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Error.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/SpinnerModel.h>
#include <javax/swing/SpinnerNumberModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef BUTTON1_MASK

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug4788637$1 = ::bug4788637$1;
using $Component = ::java::awt::Component;
using $GridBagConstraints = ::java::awt::GridBagConstraints;
using $GridBagLayout = ::java::awt::GridBagLayout;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Error = ::java::lang::Error;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JSpinner = ::javax::swing::JSpinner;
using $SpinnerModel = ::javax::swing::SpinnerModel;
using $SpinnerNumberModel = ::javax::swing::SpinnerNumberModel;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class bug4788637$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4788637$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4788637::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* bug4788637$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4788637$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(bug4788637$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4788637$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4788637$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4788637$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4788637$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug4788637$$Lambda$lambda$main$0::class$ = nullptr;

class bug4788637$$Lambda$createAndShowGUI$1 : public $Runnable {
	$class(bug4788637$$Lambda$createAndShowGUI$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4788637* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->createAndShowGUI();
	}
	bug4788637* inst$ = nullptr;
};
$Class* bug4788637$$Lambda$createAndShowGUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4788637$$Lambda$createAndShowGUI$1, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4788637;)V", nullptr, $PUBLIC, $method(bug4788637$$Lambda$createAndShowGUI$1, init$, void, bug4788637*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4788637$$Lambda$createAndShowGUI$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4788637$$Lambda$createAndShowGUI$1",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4788637$$Lambda$createAndShowGUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4788637$$Lambda$createAndShowGUI$1);
	});
	return class$;
}
$Class* bug4788637$$Lambda$createAndShowGUI$1::class$ = nullptr;

class bug4788637$$Lambda$lambda$main$1$2 : public $Runnable {
	$class(bug4788637$$Lambda$lambda$main$1$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4788637::lambda$main$1();
	}
};
$Class* bug4788637$$Lambda$lambda$main$1$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4788637$$Lambda$lambda$main$1$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4788637$$Lambda$lambda$main$1$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4788637$$Lambda$lambda$main$1$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4788637$$Lambda$lambda$main$1$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4788637$$Lambda$lambda$main$1$2);
	});
	return class$;
}
$Class* bug4788637$$Lambda$lambda$main$1$2::class$ = nullptr;

class bug4788637$$Lambda$destroy$3 : public $Runnable {
	$class(bug4788637$$Lambda$destroy$3, $NO_CLASS_INIT, $Runnable)
public:
	void init$(bug4788637* inst) {
		$set(this, inst$, inst);
	}
	virtual void run() override {
		$nc(inst$)->destroy();
	}
	bug4788637* inst$ = nullptr;
};
$Class* bug4788637$$Lambda$destroy$3::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(bug4788637$$Lambda$destroy$3, inst$)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug4788637;)V", nullptr, $PUBLIC, $method(bug4788637$$Lambda$destroy$3, init$, void, bug4788637*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4788637$$Lambda$destroy$3, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4788637$$Lambda$destroy$3",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4788637$$Lambda$destroy$3, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4788637$$Lambda$destroy$3);
	});
	return class$;
}
$Class* bug4788637$$Lambda$destroy$3::class$ = nullptr;

$JSpinner* bug4788637::spinner = nullptr;
$JFrame* bug4788637::fr = nullptr;
$Robot* bug4788637::robot = nullptr;
$Point* bug4788637::p = nullptr;
$Rectangle* bug4788637::rect = nullptr;

void bug4788637::init$() {
	$set(this, spinnerValueChanged, $new($booleans, {
		false,
		false,
		false
	}));
}

void bug4788637::main($StringArray* args) {
	$useLocalObjectStack();
	$init(bug4788637);
	$assignStatic(bug4788637::robot, $new($Robot));
	bug4788637::robot->setAutoDelay(50);
	$nc(bug4788637::robot)->setAutoWaitForIdle(true);
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$SwingUtilities::invokeAndWait($$new(bug4788637$$Lambda$lambda$main$0, laf));
				$var(bug4788637, app, $new(bug4788637));
				$var($Throwable, var$0, nullptr);
				try {
					$SwingUtilities::invokeAndWait($$new(bug4788637$$Lambda$createAndShowGUI$1, app));
					$nc(bug4788637::robot)->waitForIdle();
					$SwingUtilities::invokeAndWait($$new(bug4788637$$Lambda$lambda$main$1$2));
					app->start();
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$SwingUtilities::invokeAndWait($$new(bug4788637$$Lambda$destroy$3, app));
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
}

void bug4788637::createAndShowGUI() {
	$useLocalObjectStack();
	$assignStatic(bug4788637::fr, $new($JFrame, "Test"_s));
	bug4788637::fr->setLayout($$new($GridBagLayout));
	$var($SpinnerModel, model, $new($SpinnerNumberModel, 50, 1, 100, 1));
	$assignStatic(bug4788637::spinner, $new($JSpinner, model));
	$nc(bug4788637::fr)->add(bug4788637::spinner, $$new($GridBagConstraints));
	$nc(bug4788637::spinner)->addChangeListener($$new($bug4788637$1, this));
	$nc(bug4788637::fr)->setSize(200, 200);
	$nc(bug4788637::fr)->setLocationRelativeTo(nullptr);
	$nc(bug4788637::fr)->setVisible(true);
	$nc(bug4788637::fr)->toFront();
}

void bug4788637::start() {
	try {
		$Thread::sleep(1000);
		$nc(bug4788637::robot)->mouseMove($nc(bug4788637::p)->x + $nc(bug4788637::rect)->width - 3, $nc(bug4788637::p)->y + 3);
		$nc(bug4788637::robot)->mousePress($InputEvent::BUTTON1_MASK);
		$synchronized(this) {
			if (!$nc(this->spinnerValueChanged)->get(this->step)) {
				this->wait(3000);
			}
		}
		$nc(bug4788637::robot)->mouseMove($nc(bug4788637::p)->x + $nc(bug4788637::rect)->width - 3, $nc(bug4788637::p)->y - 3);
		$synchronized(this) {
			++this->step;
			if (!$nc(this->spinnerValueChanged)->get(this->step)) {
				this->wait(3000);
			}
		}
		$nc(bug4788637::robot)->mouseMove($nc(bug4788637::p)->x + $nc(bug4788637::rect)->width - 3, $nc(bug4788637::p)->y + 3);
		$synchronized(this) {
			++this->step;
			if (!$nc(this->spinnerValueChanged)->get(this->step)) {
				this->wait(3000);
			}
		}
		$nc(bug4788637::robot)->mouseRelease($InputEvent::BUTTON1_MASK);
	} catch ($Throwable& t) {
		$throwNew($RuntimeException, t);
	}
}

void bug4788637::destroy() {
	$nc(bug4788637::fr)->dispose();
	$synchronized(this) {
		if (!$nc(this->spinnerValueChanged)->get(0) || this->spinnerValueChanged->get(1) || !this->spinnerValueChanged->get(2)) {
			$throwNew($Error, "JSpinner buttons don\'t conform to most platform conventions"_s);
		}
	}
}

void bug4788637::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
		$nc($System::out)->println($$str({"LookAndFeel: "_s, $(laf->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($UnsupportedLookAndFeelException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void bug4788637::lambda$main$1() {
	$init(bug4788637);
	$nc(bug4788637::spinner)->requestFocus();
	$assignStatic(bug4788637::p, $nc(bug4788637::spinner)->getLocationOnScreen());
	$assignStatic(bug4788637::rect, $nc(bug4788637::spinner)->getBounds());
}

void bug4788637::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

bug4788637::bug4788637() {
}

$Class* bug4788637::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4788637$$Lambda$lambda$main$0")) {
			return bug4788637$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("bug4788637$$Lambda$createAndShowGUI$1")) {
			return bug4788637$$Lambda$createAndShowGUI$1::load$(name, initialize);
		}
		if (name->equals("bug4788637$$Lambda$lambda$main$1$2")) {
			return bug4788637$$Lambda$lambda$main$1$2::load$(name, initialize);
		}
		if (name->equals("bug4788637$$Lambda$destroy$3")) {
			return bug4788637$$Lambda$destroy$3::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"spinner", "Ljavax/swing/JSpinner;", nullptr, $PRIVATE | $STATIC, $staticField(bug4788637, spinner)},
		{"fr", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4788637, fr)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug4788637, robot)},
		{"step", "I", nullptr, $PRIVATE, $field(bug4788637, step)},
		{"spinnerValueChanged", "[Z", nullptr, $PRIVATE, $field(bug4788637, spinnerValueChanged)},
		{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(bug4788637, p)},
		{"rect", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticField(bug4788637, rect)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4788637, init$, void)},
		{"createAndShowGUI", "()V", nullptr, $PUBLIC, $method(bug4788637, createAndShowGUI, void)},
		{"destroy", "()V", nullptr, $PUBLIC, $method(bug4788637, destroy, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4788637, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4788637, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4788637, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4788637, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{"start", "()V", nullptr, $PUBLIC, $method(bug4788637, start, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4788637$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"bug4788637",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4788637$1"
	};
	$loadClass(bug4788637, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4788637);
	});
	return class$;
}

$Class* bug4788637::class$ = nullptr;
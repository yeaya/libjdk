#include <BasicListTest.h>
#include <BasicListTest$1.h>
#include <MyList.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Container.h>
#include <java/awt/Point.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/InterruptedException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JScrollPane.h>
#include <javax/swing/ListModel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <javax/swing/WindowConstants.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef CENTER
#undef EXIT_ON_CLOSE
#undef VK_PAGE_DOWN

using $BasicListTest$1 = ::BasicListTest$1;
using $MyList = ::MyList;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Point = ::java::awt::Point;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JScrollPane = ::javax::swing::JScrollPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;
using $WindowConstants = ::javax::swing::WindowConstants;

class BasicListTest$$Lambda$lambda$main$0 : public $Runnable {
	$class(BasicListTest$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		BasicListTest::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* BasicListTest$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(BasicListTest$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(BasicListTest$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BasicListTest$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"BasicListTest$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(BasicListTest$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicListTest$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* BasicListTest$$Lambda$lambda$main$0::class$ = nullptr;

class BasicListTest$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(BasicListTest$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		BasicListTest::lambda$main$1();
	}
};
$Class* BasicListTest$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicListTest$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BasicListTest$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"BasicListTest$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicListTest$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicListTest$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* BasicListTest$$Lambda$lambda$main$1$1::class$ = nullptr;

class BasicListTest$$Lambda$lambda$main$2$2 : public $Runnable {
	$class(BasicListTest$$Lambda$lambda$main$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		BasicListTest::lambda$main$2();
	}
};
$Class* BasicListTest$$Lambda$lambda$main$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicListTest$$Lambda$lambda$main$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(BasicListTest$$Lambda$lambda$main$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"BasicListTest$$Lambda$lambda$main$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(BasicListTest$$Lambda$lambda$main$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicListTest$$Lambda$lambda$main$2$2);
	});
	return class$;
}
$Class* BasicListTest$$Lambda$lambda$main$2$2::class$ = nullptr;

$JScrollPane* BasicListTest::jScrollPane1 = nullptr;
$MyList* BasicListTest::list1 = nullptr;
$Point* BasicListTest::p = nullptr;
$JFrame* BasicListTest::f = nullptr;

void BasicListTest::init$() {
}

void BasicListTest::initComponents() {
	$useLocalObjectStack();
	$init(BasicListTest);
	$assignStatic(BasicListTest::f, $new($JFrame));
	$assignStatic(BasicListTest::jScrollPane1, $new($JScrollPane));
	$assignStatic(BasicListTest::list1, $new($MyList));
	BasicListTest::f->setDefaultCloseOperation($WindowConstants::EXIT_ON_CLOSE);
	$nc(BasicListTest::list1)->setModel($$new($BasicListTest$1));
	$nc(BasicListTest::jScrollPane1)->setViewportView(BasicListTest::list1);
	$init($BorderLayout);
	$$nc($nc(BasicListTest::f)->getContentPane())->add(BasicListTest::jScrollPane1, $BorderLayout::CENTER);
	$nc(BasicListTest::f)->pack();
	$nc(BasicListTest::f)->setVisible(true);
	$assignStatic(BasicListTest::p, $nc(BasicListTest::list1)->getLocationOnScreen());
}

void BasicListTest::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
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

void BasicListTest::main($StringArray* args) {
	$useLocalObjectStack();
	$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
	for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
		$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
		{
			try {
				$SwingUtilities::invokeAndWait($$new(BasicListTest$$Lambda$lambda$main$0, laf));
				$nc($System::out)->println($$str({"Test for LookAndFeel "_s, $($nc(laf)->getClassName())}));
				$SwingUtilities::invokeAndWait($$new(BasicListTest$$Lambda$lambda$main$1$1));
				$System::out->println($$str({"Test passed for LookAndFeel "_s, $(laf->getClassName())}));
			} catch ($Exception& e) {
				$throwNew($RuntimeException, e);
			}
			$var($Robot, robot, $new($Robot));
			robot->setAutoDelay(200);
			$init(BasicListTest);
			robot->mouseMove($nc(BasicListTest::p)->x, $nc(BasicListTest::p)->y);
			robot->waitForIdle();
			robot->mousePress($InputEvent::BUTTON1_DOWN_MASK);
			robot->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
			robot->waitForIdle();
			robot->keyPress($KeyEvent::VK_PAGE_DOWN);
			robot->keyRelease($KeyEvent::VK_PAGE_DOWN);
			try {
				$Thread::sleep(1000);
			} catch ($InterruptedException& ex) {
			}
			$SwingUtilities::invokeAndWait($$new(BasicListTest$$Lambda$lambda$main$2$2));
		}
	}
}

void BasicListTest::lambda$main$2() {
	$init(BasicListTest);
	$nc(BasicListTest::f)->dispose();
}

void BasicListTest::lambda$main$1() {
	initComponents();
}

void BasicListTest::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

BasicListTest::BasicListTest() {
}

$Class* BasicListTest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("BasicListTest$$Lambda$lambda$main$0")) {
			return BasicListTest$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("BasicListTest$$Lambda$lambda$main$1$1")) {
			return BasicListTest$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
		if (name->equals("BasicListTest$$Lambda$lambda$main$2$2")) {
			return BasicListTest$$Lambda$lambda$main$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"jScrollPane1", "Ljavax/swing/JScrollPane;", nullptr, $PRIVATE | $STATIC, $staticField(BasicListTest, jScrollPane1)},
		{"list1", "LMyList;", nullptr, $PRIVATE | $STATIC, $staticField(BasicListTest, list1)},
		{"p", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticField(BasicListTest, p)},
		{"f", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(BasicListTest, f)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(BasicListTest, init$, void)},
		{"initComponents", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(BasicListTest, initComponents, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicListTest, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicListTest, lambda$main$1, void)},
		{"lambda$main$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(BasicListTest, lambda$main$2, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(BasicListTest, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(BasicListTest, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"BasicListTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"BasicListTest",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"BasicListTest$1"
	};
	$loadClass(BasicListTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicListTest);
	});
	return class$;
}

$Class* BasicListTest::class$ = nullptr;
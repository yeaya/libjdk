#include <bug4368790.h>
#include <bug4368790$1.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/KeyEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/ButtonModel.h>
#include <javax/swing/JButton.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/UnsupportedLookAndFeelException.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef VK_SPACE
#undef VK_TAB

using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $bug4368790$1 = ::bug4368790$1;
using $Component = ::java::awt::Component;
using $FlowLayout = ::java::awt::FlowLayout;
using $Robot = ::java::awt::Robot;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JButton = ::javax::swing::JButton;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;
using $UnsupportedLookAndFeelException = ::javax::swing::UnsupportedLookAndFeelException;

class bug4368790$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4368790$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($UIManager$LookAndFeelInfo* laf) {
		$set(this, laf, laf);
	}
	virtual void run() override {
		bug4368790::lambda$main$0(laf);
	}
	$UIManager$LookAndFeelInfo* laf = nullptr;
};
$Class* bug4368790$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"laf", "Ljavax/swing/UIManager$LookAndFeelInfo;", nullptr, $PUBLIC, $field(bug4368790$$Lambda$lambda$main$0, laf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PUBLIC, $method(bug4368790$$Lambda$lambda$main$0, init$, void, $UIManager$LookAndFeelInfo*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4368790$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4368790$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(bug4368790$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4368790$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug4368790$$Lambda$lambda$main$0::class$ = nullptr;

class bug4368790$$Lambda$lambda$main$1$1 : public $Runnable {
	$class(bug4368790$$Lambda$lambda$main$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4368790::lambda$main$1();
	}
};
$Class* bug4368790$$Lambda$lambda$main$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4368790$$Lambda$lambda$main$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4368790$$Lambda$lambda$main$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4368790$$Lambda$lambda$main$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4368790$$Lambda$lambda$main$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4368790$$Lambda$lambda$main$1$1);
	});
	return class$;
}
$Class* bug4368790$$Lambda$lambda$main$1$1::class$ = nullptr;

$JButton* bug4368790::b1 = nullptr;
$JFrame* bug4368790::frame = nullptr;

void bug4368790::init$() {
}

void bug4368790::createGui() {
	$useLocalObjectStack();
	$init(bug4368790);
	$assignStatic(bug4368790::frame, $new($JFrame));
	bug4368790::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
	$nc(bug4368790::frame)->setLayout($$new($FlowLayout));
	$assignStatic(bug4368790::b1, $new($JButton, "Button1"_s));
	$nc(bug4368790::frame)->add(bug4368790::b1);
	$nc(bug4368790::frame)->add($$new($JButton, "Button2"_s));
	$nc(bug4368790::frame)->setSize(200, 200);
	$nc(bug4368790::frame)->setLocationRelativeTo(nullptr);
	$nc(bug4368790::frame)->setVisible(true);
	$nc(bug4368790::b1)->requestFocus();
}

void bug4368790::setLookAndFeel($UIManager$LookAndFeelInfo* laf) {
	$useLocalObjectStack();
	try {
		$UIManager::setLookAndFeel($($nc(laf)->getClassName()));
	} catch ($UnsupportedLookAndFeelException& ignored) {
		$nc($System::out)->println($$str({"Unsupported L&F: "_s, $($nc(laf)->getClassName())}));
	} catch ($ClassNotFoundException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InstantiationException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	}
}

void bug4368790::main($StringArray* args) {
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, $UIManager::getInstalledLookAndFeels());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, laf, arr$->get(i$));
			{
				$nc($System::out)->println($$str({"Testing L&F: "_s, laf}));
				$SwingUtilities::invokeAndWait($$new(bug4368790$$Lambda$lambda$main$0, laf));
				$var($Throwable, var$0, nullptr);
				try {
					robot->setAutoDelay(50);
					$SwingUtilities::invokeAndWait($$new($bug4368790$1));
					robot->waitForIdle();
					robot->keyPress($KeyEvent::VK_SPACE);
					robot->keyPress($KeyEvent::VK_TAB);
					robot->keyRelease($KeyEvent::VK_TAB);
					robot->keyRelease($KeyEvent::VK_SPACE);
					robot->waitForIdle();
					$init(bug4368790);
					if ($$nc($nc(bug4368790::b1)->getModel())->isPressed()) {
						$throwNew($RuntimeException, "The button is unexpectedly pressed"_s);
					}
				} catch ($Throwable& var$1) {
					$assign(var$0, var$1);
				} /*finally*/ {
					$init(bug4368790);
					if (bug4368790::frame != nullptr) {
						$SwingUtilities::invokeAndWait($$new(bug4368790$$Lambda$lambda$main$1$1));
					}
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				robot->delay(1000);
			}
		}
	}
}

void bug4368790::lambda$main$1() {
	$init(bug4368790);
	$nc(bug4368790::frame)->dispose();
}

void bug4368790::lambda$main$0($UIManager$LookAndFeelInfo* laf) {
	setLookAndFeel(laf);
}

bug4368790::bug4368790() {
}

$Class* bug4368790::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4368790$$Lambda$lambda$main$0")) {
			return bug4368790$$Lambda$lambda$main$0::load$(name, initialize);
		}
		if (name->equals("bug4368790$$Lambda$lambda$main$1$1")) {
			return bug4368790$$Lambda$lambda$main$1$1::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"b1", "Ljavax/swing/JButton;", nullptr, $PRIVATE | $STATIC, $staticField(bug4368790, b1)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4368790, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4368790, init$, void)},
		{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4368790, createGui, void)},
		{"lambda$main$0", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4368790, lambda$main$0, void, $UIManager$LookAndFeelInfo*)},
		{"lambda$main$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4368790, lambda$main$1, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4368790, main, void, $StringArray*), "java.lang.Exception"},
		{"setLookAndFeel", "(Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug4368790, setLookAndFeel, void, $UIManager$LookAndFeelInfo*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4368790$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4368790",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4368790$1"
	};
	$loadClass(bug4368790, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4368790);
	});
	return class$;
}

$Class* bug4368790::class$ = nullptr;
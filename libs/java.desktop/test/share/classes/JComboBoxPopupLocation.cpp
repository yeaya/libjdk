#include <JComboBoxPopupLocation.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/EventQueue.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Insets.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Toolkit.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/io/Serializable.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/UIManager$LookAndFeelInfo.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BUTTON1_DOWN_MASK
#undef PROPERTY_NAME
#undef SIZE

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $UIManager$LookAndFeelInfoArray = $Array<::javax::swing::UIManager$LookAndFeelInfo>;
using $EventQueue = ::java::awt::EventQueue;
using $FlowLayout = ::java::awt::FlowLayout;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Insets = ::java::awt::Insets;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $Toolkit = ::java::awt::Toolkit;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComboBox = ::javax::swing::JComboBox;
using $JFrame = ::javax::swing::JFrame;
using $UIManager = ::javax::swing::UIManager;
using $UIManager$LookAndFeelInfo = ::javax::swing::UIManager$LookAndFeelInfo;

class JComboBoxPopupLocation$$Lambda$lambda$step$0 : public $Runnable {
	$class(JComboBoxPopupLocation$$Lambda$lambda$step$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($Point* point) {
		$set(this, point, point);
	}
	virtual void run() override {
		JComboBoxPopupLocation::lambda$step$0(point);
	}
	$Point* point = nullptr;
};
$Class* JComboBoxPopupLocation$$Lambda$lambda$step$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"point", "Ljava/awt/Point;", nullptr, $PUBLIC, $field(JComboBoxPopupLocation$$Lambda$lambda$step$0, point)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/Point;)V", nullptr, $PUBLIC, $method(JComboBoxPopupLocation$$Lambda$lambda$step$0, init$, void, $Point*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBoxPopupLocation$$Lambda$lambda$step$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JComboBoxPopupLocation$$Lambda$lambda$step$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JComboBoxPopupLocation$$Lambda$lambda$step$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComboBoxPopupLocation$$Lambda$lambda$step$0);
	});
	return class$;
}
$Class* JComboBoxPopupLocation$$Lambda$lambda$step$0::class$ = nullptr;

class JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1 : public $Runnable {
	$class(JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		JComboBoxPopupLocation::lambda$dispose$2();
	}
};
$Class* JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1);
	});
	return class$;
}
$Class* JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1::class$ = nullptr;

class JComboBoxPopupLocation$$Lambda$lambda$validate$3$2 : public $Runnable {
	$class(JComboBoxPopupLocation$$Lambda$lambda$validate$3$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$($JComboBox* comboBox) {
		$set(this, comboBox, comboBox);
	}
	virtual void run() override {
		JComboBoxPopupLocation::lambda$validate$3(comboBox);
	}
	$JComboBox* comboBox = nullptr;
};
$Class* JComboBoxPopupLocation$$Lambda$lambda$validate$3$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"comboBox", "Ljavax/swing/JComboBox;", nullptr, $PUBLIC, $field(JComboBoxPopupLocation$$Lambda$lambda$validate$3$2, comboBox)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JComboBox;)V", nullptr, $PUBLIC, $method(JComboBoxPopupLocation$$Lambda$lambda$validate$3$2, init$, void, $JComboBox*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(JComboBoxPopupLocation$$Lambda$lambda$validate$3$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"JComboBoxPopupLocation$$Lambda$lambda$validate$3$2",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JComboBoxPopupLocation$$Lambda$lambda$validate$3$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JComboBoxPopupLocation$$Lambda$lambda$validate$3$2);
	});
	return class$;
}
$Class* JComboBoxPopupLocation$$Lambda$lambda$validate$3$2::class$ = nullptr;

$String* JComboBoxPopupLocation::PROPERTY_NAME = nullptr;
$volatile($Robot*) JComboBoxPopupLocation::robot = nullptr;
$volatile($JComboBox*) JComboBoxPopupLocation::comboBox = nullptr;
$volatile($JFrame*) JComboBoxPopupLocation::frame = nullptr;

void JComboBoxPopupLocation::init$() {
}

void JComboBoxPopupLocation::main($StringArray* args) {
	$init(JComboBoxPopupLocation);
	$useLocalObjectStack();
	$assignStatic(JComboBoxPopupLocation::robot, $new($Robot));
	$nc(JComboBoxPopupLocation::robot)->setAutoDelay(100);
	$nc(JComboBoxPopupLocation::robot)->setAutoWaitForIdle(true);
	$var($GraphicsEnvironment, ge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	$var($GraphicsDeviceArray, sds, $nc(ge)->getScreenDevices());
	$var($UIManager$LookAndFeelInfoArray, lookAndFeelArray, $UIManager::getInstalledLookAndFeels());
	{
		$var($UIManager$LookAndFeelInfoArray, arr$, lookAndFeelArray);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($UIManager$LookAndFeelInfo, lookAndFeelItem, arr$->get(i$));
			{
				$System::setProperty(JComboBoxPopupLocation::PROPERTY_NAME, "true"_s);
				step(sds, lookAndFeelItem);
				if ($$nc($nc(lookAndFeelItem)->getClassName())->contains("Aqua"_s)) {
					$System::setProperty(JComboBoxPopupLocation::PROPERTY_NAME, "false"_s);
					step(sds, lookAndFeelItem);
				}
			}
		}
	}
}

void JComboBoxPopupLocation::step($GraphicsDeviceArray* sds, $UIManager$LookAndFeelInfo* lookAndFeelItem) {
	$init(JComboBoxPopupLocation);
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($($nc(lookAndFeelItem)->getClassName()));
	$var($Point, left, nullptr);
	{
		$var($GraphicsDeviceArray, arr$, sds);
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($GraphicsDevice, sd, arr$->get(i$));
			{
				$var($GraphicsConfiguration, gc, $nc(sd)->getDefaultConfiguration());
				$var($Rectangle, bounds, $nc(gc)->getBounds());
				if (left == nullptr || left->x > $nc(bounds)->x) {
					$assign(left, $new($Point, $nc(bounds)->x, $nc(bounds)->y + $nc(bounds)->height / 2));
				}
				$var($Point, point, $new($Point, $nc(bounds)->x, $nc(bounds)->y));
				$var($Insets, insets, $$nc($Toolkit::getDefaultToolkit())->getScreenInsets(gc));
				while (point->y < bounds->y + bounds->height - $nc(insets)->bottom - JComboBoxPopupLocation::SIZE) {
					while (point->x < bounds->x + bounds->width - insets->right - JComboBoxPopupLocation::SIZE) {
						$var($Throwable, var$0, nullptr);
						try {
							$EventQueue::invokeAndWait($$new(JComboBoxPopupLocation$$Lambda$lambda$step$0, point));
							$nc(JComboBoxPopupLocation::robot)->waitForIdle();
							test(JComboBoxPopupLocation::comboBox);
							$nc(JComboBoxPopupLocation::robot)->waitForIdle();
							validate(JComboBoxPopupLocation::comboBox);
							$nc(JComboBoxPopupLocation::robot)->waitForIdle();
							point->translate(bounds->width / 5, 0);
						} catch ($Throwable& var$1) {
							$assign(var$0, var$1);
						} /*finally*/ {
							dispose();
						}
						if (var$0 != nullptr) {
							$throw(var$0);
						}
					}
					point->setLocation(bounds->x, point->y + bounds->height / 5);
				}
			}
		}
	}
	if (left != nullptr) {
		$var($Point, finalLeft, left);
		finalLeft->translate(-50, 0);
		$var($Throwable, var$2, nullptr);
		try {
			$EventQueue::invokeAndWait($$new(JComboBoxPopupLocation$$Lambda$lambda$step$0, finalLeft));
			$nc(JComboBoxPopupLocation::robot)->waitForIdle();
			test(JComboBoxPopupLocation::comboBox);
			$nc(JComboBoxPopupLocation::robot)->waitForIdle();
			validate(JComboBoxPopupLocation::comboBox);
		} catch ($Throwable& var$3) {
			$assign(var$2, var$3);
		} /*finally*/ {
			dispose();
		}
		if (var$2 != nullptr) {
			$throw(var$2);
		}
	}
}

void JComboBoxPopupLocation::dispose() {
	$init(JComboBoxPopupLocation);
	$EventQueue::invokeAndWait($$new(JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1));
}

void JComboBoxPopupLocation::setup($Point* tmp) {
	$init(JComboBoxPopupLocation);
	$useLocalObjectStack();
	$assignStatic(JComboBoxPopupLocation::comboBox, $new($JComboBox));
	for (int32_t i = 1; i < 7; ++i) {
		$nc(JComboBoxPopupLocation::comboBox)->addItem($$str({"Long-long-long-long-long text in the item-"_s, $$str(i)}));
	}
	$var($String, property, $System::getProperty(JComboBoxPopupLocation::PROPERTY_NAME));
	$nc(JComboBoxPopupLocation::comboBox)->putClientProperty(JComboBoxPopupLocation::PROPERTY_NAME, $($Boolean::valueOf(property)));
	$assignStatic(JComboBoxPopupLocation::frame, $new($JFrame));
	$nc(JComboBoxPopupLocation::frame)->setAlwaysOnTop(true);
	$nc(JComboBoxPopupLocation::frame)->setLayout($$new($FlowLayout));
	$nc(JComboBoxPopupLocation::frame)->add(JComboBoxPopupLocation::comboBox);
	$nc(JComboBoxPopupLocation::frame)->pack();
	$nc(JComboBoxPopupLocation::frame)->setSize($nc(JComboBoxPopupLocation::frame)->getWidth(), JComboBoxPopupLocation::SIZE);
	$nc(JComboBoxPopupLocation::frame)->setVisible(true);
	$nc(JComboBoxPopupLocation::frame)->setLocation($nc(tmp)->x, $nc(tmp)->y);
}

void JComboBoxPopupLocation::test($JComboBox* comboBox) {
	$init(JComboBoxPopupLocation);
	$var($Point, pt, $nc(comboBox)->getLocationOnScreen());
	int32_t var$0 = $nc(pt)->x + comboBox->getWidth() / 2;
	$nc(JComboBoxPopupLocation::robot)->mouseMove(var$0, pt->y + comboBox->getHeight() / 2);
	$nc(JComboBoxPopupLocation::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc(JComboBoxPopupLocation::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
	int32_t x = pt->x + comboBox->getWidth() / 2;
	int32_t y = pt->y + comboBox->getHeight() / 2 + 70;
	$nc(JComboBoxPopupLocation::robot)->mouseMove(x, y);
	$nc(JComboBoxPopupLocation::robot)->mousePress($InputEvent::BUTTON1_DOWN_MASK);
	$nc(JComboBoxPopupLocation::robot)->mouseRelease($InputEvent::BUTTON1_DOWN_MASK);
}

void JComboBoxPopupLocation::validate($JComboBox* comboBox) {
	$init(JComboBoxPopupLocation);
	$EventQueue::invokeAndWait($$new(JComboBoxPopupLocation$$Lambda$lambda$validate$3$2, comboBox));
}

void JComboBoxPopupLocation::lambda$validate$3($JComboBox* comboBox) {
	$init(JComboBoxPopupLocation);
	if ($nc(comboBox)->getSelectedIndex() == 0) {
		$throwNew($RuntimeException);
	}
}

void JComboBoxPopupLocation::lambda$dispose$2() {
	$init(JComboBoxPopupLocation);
	if (JComboBoxPopupLocation::frame != nullptr) {
		$nc(JComboBoxPopupLocation::frame)->dispose();
	}
}

void JComboBoxPopupLocation::lambda$step$0($Point* point) {
	$init(JComboBoxPopupLocation);
	setup(point);
}

JComboBoxPopupLocation::JComboBoxPopupLocation() {
}

void JComboBoxPopupLocation::clinit$($Class* clazz) {
	$assignStatic(JComboBoxPopupLocation::PROPERTY_NAME, "JComboBox.isPopDown"_s);
}

$Class* JComboBoxPopupLocation::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("JComboBoxPopupLocation$$Lambda$lambda$step$0")) {
			return JComboBoxPopupLocation$$Lambda$lambda$step$0::load$(name, initialize);
		}
		if (name->equals("JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1")) {
			return JComboBoxPopupLocation$$Lambda$lambda$dispose$2$1::load$(name, initialize);
		}
		if (name->equals("JComboBoxPopupLocation$$Lambda$lambda$validate$3$2")) {
			return JComboBoxPopupLocation$$Lambda$lambda$validate$3$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(JComboBoxPopupLocation, SIZE)},
		{"PROPERTY_NAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(JComboBoxPopupLocation, PROPERTY_NAME)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JComboBoxPopupLocation, robot)},
		{"comboBox", "Ljavax/swing/JComboBox;", "Ljavax/swing/JComboBox<Ljava/lang/String;>;", $PRIVATE | $STATIC | $VOLATILE, $staticField(JComboBoxPopupLocation, comboBox)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(JComboBoxPopupLocation, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JComboBoxPopupLocation, init$, void)},
		{"dispose", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(JComboBoxPopupLocation, dispose, void), "java.lang.Exception"},
		{"lambda$dispose$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JComboBoxPopupLocation, lambda$dispose$2, void)},
		{"lambda$step$0", "(Ljava/awt/Point;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JComboBoxPopupLocation, lambda$step$0, void, $Point*)},
		{"lambda$validate$3", "(Ljavax/swing/JComboBox;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(JComboBoxPopupLocation, lambda$validate$3, void, $JComboBox*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JComboBoxPopupLocation, main, void, $StringArray*), "java.lang.Exception"},
		{"setup", "(Ljava/awt/Point;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JComboBoxPopupLocation, setup, void, $Point*)},
		{"step", "([Ljava/awt/GraphicsDevice;Ljavax/swing/UIManager$LookAndFeelInfo;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JComboBoxPopupLocation, step, void, $GraphicsDeviceArray*, $UIManager$LookAndFeelInfo*), "java.lang.Exception"},
		{"test", "(Ljavax/swing/JComboBox;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JComboBoxPopupLocation, test, void, $JComboBox*), "java.lang.Exception"},
		{"validate", "(Ljavax/swing/JComboBox;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(JComboBoxPopupLocation, validate, void, $JComboBox*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"JComboBoxPopupLocation",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JComboBoxPopupLocation, name, initialize, &classInfo$$, JComboBoxPopupLocation::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JComboBoxPopupLocation);
	});
	return class$;
}

$Class* JComboBoxPopupLocation::class$ = nullptr;
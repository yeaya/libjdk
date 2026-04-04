#include <DNDTextToScaledArea.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/GraphicsDevice.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/awt/event/InputEvent.h>
#include <java/awt/geom/RectangularShape.h>
#include <java/io/Serializable.h>
#include <java/lang/Math.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef BUTTON1_MASK
#undef CENTER
#undef SIZE
#undef SOUTH
#undef TEXT

using $GraphicsDeviceArray = $Array<::java::awt::GraphicsDevice>;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $GraphicsDevice = ::java::awt::GraphicsDevice;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $InputEvent = ::java::awt::event::InputEvent;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Double = ::java::lang::Double;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JPanel = ::javax::swing::JPanel;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class DNDTextToScaledArea$$Lambda$lambda$test$0 : public $Runnable {
	$class(DNDTextToScaledArea$$Lambda$lambda$test$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$($GraphicsDevice* device) {
		$set(this, device, device);
	}
	virtual void run() override {
		DNDTextToScaledArea::lambda$test$0(device);
	}
	$GraphicsDevice* device = nullptr;
};
$Class* DNDTextToScaledArea$$Lambda$lambda$test$0::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"device", "Ljava/awt/GraphicsDevice;", nullptr, $PUBLIC, $field(DNDTextToScaledArea$$Lambda$lambda$test$0, device)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/GraphicsDevice;)V", nullptr, $PUBLIC, $method(DNDTextToScaledArea$$Lambda$lambda$test$0, init$, void, $GraphicsDevice*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DNDTextToScaledArea$$Lambda$lambda$test$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DNDTextToScaledArea$$Lambda$lambda$test$0",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DNDTextToScaledArea$$Lambda$lambda$test$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DNDTextToScaledArea$$Lambda$lambda$test$0);
	});
	return class$;
}
$Class* DNDTextToScaledArea$$Lambda$lambda$test$0::class$ = nullptr;

class DNDTextToScaledArea$$Lambda$lambda$test$1$1 : public $Runnable {
	$class(DNDTextToScaledArea$$Lambda$lambda$test$1$1, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DNDTextToScaledArea::lambda$test$1();
	}
};
$Class* DNDTextToScaledArea$$Lambda$lambda$test$1$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DNDTextToScaledArea$$Lambda$lambda$test$1$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DNDTextToScaledArea$$Lambda$lambda$test$1$1, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DNDTextToScaledArea$$Lambda$lambda$test$1$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(DNDTextToScaledArea$$Lambda$lambda$test$1$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DNDTextToScaledArea$$Lambda$lambda$test$1$1);
	});
	return class$;
}
$Class* DNDTextToScaledArea$$Lambda$lambda$test$1$1::class$ = nullptr;

class DNDTextToScaledArea$$Lambda$lambda$test$2$2 : public $Runnable {
	$class(DNDTextToScaledArea$$Lambda$lambda$test$2$2, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		DNDTextToScaledArea::lambda$test$2();
	}
};
$Class* DNDTextToScaledArea$$Lambda$lambda$test$2$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DNDTextToScaledArea$$Lambda$lambda$test$2$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(DNDTextToScaledArea$$Lambda$lambda$test$2$2, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"DNDTextToScaledArea$$Lambda$lambda$test$2$2",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(DNDTextToScaledArea$$Lambda$lambda$test$2$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DNDTextToScaledArea$$Lambda$lambda$test$2$2);
	});
	return class$;
}
$Class* DNDTextToScaledArea$$Lambda$lambda$test$2$2::class$ = nullptr;

$String* DNDTextToScaledArea::TEXT = nullptr;
$JFrame* DNDTextToScaledArea::frame = nullptr;
$JTextArea* DNDTextToScaledArea::srcTextArea = nullptr;
$JTextArea* DNDTextToScaledArea::dstTextArea = nullptr;
$volatile($Point*) DNDTextToScaledArea::srcPoint = nullptr;
$volatile($Point*) DNDTextToScaledArea::dstPoint = nullptr;
$volatile(bool) DNDTextToScaledArea::passed = false;

void DNDTextToScaledArea::init$() {
}

void DNDTextToScaledArea::main($StringArray* args) {
	$init(DNDTextToScaledArea);
	$useLocalObjectStack();
	$var($GraphicsEnvironment, lge, $GraphicsEnvironment::getLocalGraphicsEnvironment());
	{
		$var($GraphicsDeviceArray, arr$, $nc(lge)->getScreenDevices());
		for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
			$var($GraphicsDevice, device, arr$->get(i$));
			{
				test(device);
			}
		}
	}
}

void DNDTextToScaledArea::test($GraphicsDevice* device) {
	$init(DNDTextToScaledArea);
	$useLocalObjectStack();
	$var($Robot, robot, $new($Robot));
	robot->setAutoDelay(150);
	$SwingUtilities::invokeAndWait($$new(DNDTextToScaledArea$$Lambda$lambda$test$0, device));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(DNDTextToScaledArea$$Lambda$lambda$test$1$1));
	robot->waitForIdle();
	robot->mouseMove($nc(DNDTextToScaledArea::dstPoint)->x, $nc(DNDTextToScaledArea::dstPoint)->y);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
	robot->waitForIdle();
	dragAndDrop(robot, DNDTextToScaledArea::srcPoint, DNDTextToScaledArea::dstPoint);
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new(DNDTextToScaledArea$$Lambda$lambda$test$2$2));
	robot->waitForIdle();
	if (!DNDTextToScaledArea::passed) {
		$throwNew($RuntimeException, "Text Drag and Drop failed!"_s);
	}
}

void DNDTextToScaledArea::createAndShowGUI($GraphicsDevice* device) {
	$init(DNDTextToScaledArea);
	$useLocalObjectStack();
	$assignStatic(DNDTextToScaledArea::frame, $new($JFrame, $($nc(device)->getDefaultConfiguration())));
	$var($Rectangle, screen, $$nc(device->getDefaultConfiguration())->getBounds());
	int32_t x = $cast(int32_t, ($nc(screen)->getCenterX() - DNDTextToScaledArea::SIZE / 2));
	int32_t y = $cast(int32_t, (screen->getCenterY() - DNDTextToScaledArea::SIZE / 2));
	$nc(DNDTextToScaledArea::frame)->setBounds(x, y, DNDTextToScaledArea::SIZE, DNDTextToScaledArea::SIZE);
	$var($JPanel, panel, $new($JPanel, $$new($BorderLayout)));
	$assignStatic(DNDTextToScaledArea::srcTextArea, $new($JTextArea, DNDTextToScaledArea::TEXT));
	DNDTextToScaledArea::srcTextArea->setDragEnabled(true);
	$nc(DNDTextToScaledArea::srcTextArea)->selectAll();
	$assignStatic(DNDTextToScaledArea::dstTextArea, $new($JTextArea));
	panel->add(DNDTextToScaledArea::dstTextArea, $BorderLayout::CENTER);
	panel->add(DNDTextToScaledArea::srcTextArea, $BorderLayout::SOUTH);
	$$nc($nc(DNDTextToScaledArea::frame)->getContentPane())->add(panel);
	$nc(DNDTextToScaledArea::frame)->setVisible(true);
}

$Point* DNDTextToScaledArea::getPoint($Component* component, double scale) {
	$init(DNDTextToScaledArea);
	$useLocalObjectStack();
	$var($Point, point, $nc(component)->getLocationOnScreen());
	$var($Dimension, bounds, component->getSize());
	$nc(point)->translate($cast(int32_t, ($nc(bounds)->width * scale)), $cast(int32_t, ($nc(bounds)->height * scale)));
	return point;
}

void DNDTextToScaledArea::dragAndDrop($Robot* robot, $Point* src, $Point* dst) {
	$init(DNDTextToScaledArea);
	int32_t x1 = $nc(src)->x;
	int32_t y1 = src->y;
	int32_t x2 = $nc(dst)->x;
	int32_t y2 = dst->y;
	$nc(robot)->mouseMove(x1, y1);
	robot->mousePress($InputEvent::BUTTON1_MASK);
	int32_t var$0 = $Math::abs(x2 - x1);
	float dmax = (float)$Math::max(var$0, $Math::abs(y2 - y1));
	float dx = (x2 - x1) / dmax;
	float dy = (y2 - y1) / dmax;
	for (int32_t i = 0; i <= dmax; i += 5) {
		robot->mouseMove($cast(int32_t, (x1 + dx * i)), $cast(int32_t, (y1 + dy * i)));
	}
	robot->mouseRelease($InputEvent::BUTTON1_MASK);
}

void DNDTextToScaledArea::lambda$test$2() {
	$init(DNDTextToScaledArea);
	DNDTextToScaledArea::passed = DNDTextToScaledArea::TEXT->equals($($nc(DNDTextToScaledArea::dstTextArea)->getText()));
	$nc(DNDTextToScaledArea::frame)->dispose();
}

void DNDTextToScaledArea::lambda$test$1() {
	$init(DNDTextToScaledArea);
	$assignStatic(DNDTextToScaledArea::srcPoint, getPoint(DNDTextToScaledArea::srcTextArea, 0.1));
	$assignStatic(DNDTextToScaledArea::dstPoint, getPoint(DNDTextToScaledArea::dstTextArea, 0.75));
}

void DNDTextToScaledArea::lambda$test$0($GraphicsDevice* device) {
	$init(DNDTextToScaledArea);
	createAndShowGUI(device);
}

void DNDTextToScaledArea::clinit$($Class* clazz) {
	$assignStatic(DNDTextToScaledArea::TEXT, "ABCDEFGH"_s);
	DNDTextToScaledArea::passed = false;
}

DNDTextToScaledArea::DNDTextToScaledArea() {
}

$Class* DNDTextToScaledArea::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("DNDTextToScaledArea$$Lambda$lambda$test$0")) {
			return DNDTextToScaledArea$$Lambda$lambda$test$0::load$(name, initialize);
		}
		if (name->equals("DNDTextToScaledArea$$Lambda$lambda$test$1$1")) {
			return DNDTextToScaledArea$$Lambda$lambda$test$1$1::load$(name, initialize);
		}
		if (name->equals("DNDTextToScaledArea$$Lambda$lambda$test$2$2")) {
			return DNDTextToScaledArea$$Lambda$lambda$test$2$2::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(DNDTextToScaledArea, SIZE)},
		{"TEXT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DNDTextToScaledArea, TEXT)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(DNDTextToScaledArea, frame)},
		{"srcTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(DNDTextToScaledArea, srcTextArea)},
		{"dstTextArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(DNDTextToScaledArea, dstTextArea)},
		{"srcPoint", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DNDTextToScaledArea, srcPoint)},
		{"dstPoint", "Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DNDTextToScaledArea, dstPoint)},
		{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(DNDTextToScaledArea, passed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DNDTextToScaledArea, init$, void)},
		{"createAndShowGUI", "(Ljava/awt/GraphicsDevice;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(DNDTextToScaledArea, createAndShowGUI, void, $GraphicsDevice*)},
		{"dragAndDrop", "(Ljava/awt/Robot;Ljava/awt/Point;Ljava/awt/Point;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DNDTextToScaledArea, dragAndDrop, void, $Robot*, $Point*, $Point*), "java.lang.Exception"},
		{"getPoint", "(Ljava/awt/Component;D)Ljava/awt/Point;", nullptr, $PRIVATE | $STATIC, $staticMethod(DNDTextToScaledArea, getPoint, $Point*, $Component*, double)},
		{"lambda$test$0", "(Ljava/awt/GraphicsDevice;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DNDTextToScaledArea, lambda$test$0, void, $GraphicsDevice*)},
		{"lambda$test$1", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DNDTextToScaledArea, lambda$test$1, void)},
		{"lambda$test$2", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(DNDTextToScaledArea, lambda$test$2, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(DNDTextToScaledArea, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "(Ljava/awt/GraphicsDevice;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(DNDTextToScaledArea, test, void, $GraphicsDevice*), "java.lang.Exception"},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"DNDTextToScaledArea",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(DNDTextToScaledArea, name, initialize, &classInfo$$, DNDTextToScaledArea::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DNDTextToScaledArea);
	});
	return class$;
}

$Class* DNDTextToScaledArea::class$ = nullptr;
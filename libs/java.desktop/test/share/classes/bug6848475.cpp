#include <bug6848475.h>
#include <bug6848475$1.h>
#include <bug6848475$2.h>
#include <bug6848475$3.h>
#include <bug6848475$4.h>
#include <java/awt/Rectangle.h>
#include <java/awt/Robot.h>
#include <java/lang/reflect/Field.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/SliderUI.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $bug6848475$1 = ::bug6848475$1;
using $bug6848475$2 = ::bug6848475$2;
using $bug6848475$3 = ::bug6848475$3;
using $bug6848475$4 = ::bug6848475$4;
using $Rectangle = ::java::awt::Rectangle;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $JFrame = ::javax::swing::JFrame;
using $JSlider = ::javax::swing::JSlider;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SliderUI = ::javax::swing::plaf::SliderUI;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

$JFrame* bug6848475::frame = nullptr;
$JSlider* bug6848475::slider = nullptr;
$Robot* bug6848475::robot = nullptr;
int32_t bug6848475::thumbRectX = 0;

void bug6848475::init$() {
}

void bug6848475::main($StringArray* args) {
	$useLocalObjectStack();
	$init(bug6848475);
	$assignStatic(bug6848475::robot, $new($Robot));
	bug6848475::robot->setAutoDelay(100);
	$SwingUtilities::invokeAndWait($$new($bug6848475$1));
	$nc(bug6848475::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6848475$2));
	$nc(bug6848475::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6848475$3));
	$nc(bug6848475::robot)->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug6848475$4));
}

$Rectangle* bug6848475::getThumbRectField() {
	$useLocalObjectStack();
	$load(bug6848475);
	$beforeCallerSensitive();
	try {
		$init(bug6848475);
		$var($SliderUI, ui, $cast($SliderUI, $nc(bug6848475::slider)->getUI()));
		$load($BasicSliderUI);
		$var($Field, field, $BasicSliderUI::class$->getDeclaredField("thumbRect"_s));
		$nc(field)->setAccessible(true);
		return $cast($Rectangle, field->get(ui));
	} catch ($Exception& e) {
		$throwNew($RuntimeException, e);
	}
	$shouldNotReachHere();
}

bug6848475::bug6848475() {
}

$Class* bug6848475::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug6848475, frame)},
		{"slider", "Ljavax/swing/JSlider;", nullptr, $PRIVATE | $STATIC, $staticField(bug6848475, slider)},
		{"robot", "Ljava/awt/Robot;", nullptr, $PRIVATE | $STATIC, $staticField(bug6848475, robot)},
		{"thumbRectX", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug6848475, thumbRectX)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6848475, init$, void)},
		{"getThumbRectField", "()Ljava/awt/Rectangle;", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6848475, getThumbRectField, $Rectangle*)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6848475, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6848475$4", nullptr, nullptr, 0},
		{"bug6848475$3", nullptr, nullptr, 0},
		{"bug6848475$2", nullptr, nullptr, 0},
		{"bug6848475$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6848475",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6848475$4,bug6848475$3,bug6848475$2,bug6848475$1,bug6848475$1$1"
	};
	$loadClass(bug6848475, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6848475);
	});
	return class$;
}

$Class* bug6848475::class$ = nullptr;
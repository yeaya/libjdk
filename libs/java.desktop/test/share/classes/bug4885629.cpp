#include <bug4885629.h>
#include <bug4885629$1.h>
#include <bug4885629$2.h>
#include <bug4885629$3.h>
#include <java/awt/Color.h>
#include <java/awt/Robot.h>
#include <java/awt/Window.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JSplitPane.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef BGCOLOR

using $bug4885629$1 = ::bug4885629$1;
using $bug4885629$2 = ::bug4885629$2;
using $bug4885629$3 = ::bug4885629$3;
using $Color = ::java::awt::Color;
using $Robot = ::java::awt::Robot;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JFrame = ::javax::swing::JFrame;
using $JSplitPane = ::javax::swing::JSplitPane;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

class bug4885629$$Lambda$lambda$main$0 : public $Runnable {
	$class(bug4885629$$Lambda$lambda$main$0, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		bug4885629::lambda$main$0();
	}
};
$Class* bug4885629$$Lambda$lambda$main$0::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4885629$$Lambda$lambda$main$0, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug4885629$$Lambda$lambda$main$0, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"bug4885629$$Lambda$lambda$main$0",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(bug4885629$$Lambda$lambda$main$0, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug4885629$$Lambda$lambda$main$0);
	});
	return class$;
}
$Class* bug4885629$$Lambda$lambda$main$0::class$ = nullptr;

$Color* bug4885629::darkShadow = nullptr;
$Color* bug4885629::darkHighlight = nullptr;
$Color* bug4885629::lightHighlight = nullptr;
$Color* bug4885629::BGCOLOR = nullptr;
$JSplitPane* bug4885629::sp = nullptr;
$JFrame* bug4885629::frame = nullptr;

void bug4885629::init$() {
}

void bug4885629::main($StringArray* args) {
	$init(bug4885629);
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($bug4885629$1));
	$var($Throwable, var$0, nullptr);
	try {
		$SwingUtilities::invokeAndWait($$new($bug4885629$2));
		$var($Robot, robot, $new($Robot));
		robot->waitForIdle();
		robot->delay(1000);
		$SwingUtilities::invokeAndWait($$new($bug4885629$3, robot));
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		if (bug4885629::frame != nullptr) {
			$SwingUtilities::invokeAndWait($$new(bug4885629$$Lambda$lambda$main$0));
		}
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

void bug4885629::lambda$main$0() {
	$init(bug4885629);
	$nc(bug4885629::frame)->dispose();
}

void bug4885629::clinit$($Class* clazz) {
	$assignStatic(bug4885629::darkShadow, $new($Color, 100, 120, 200));
	$assignStatic(bug4885629::darkHighlight, $new($Color, 200, 120, 50));
	$assignStatic(bug4885629::lightHighlight, bug4885629::darkHighlight->brighter());
	$assignStatic(bug4885629::BGCOLOR, $Color::blue);
}

bug4885629::bug4885629() {
}

$Class* bug4885629::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("bug4885629$$Lambda$lambda$main$0")) {
			return bug4885629$$Lambda$lambda$main$0::load$(name, initialize);
		}
	}
	$FieldInfo fieldInfos$$[] = {
		{"darkShadow", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4885629, darkShadow)},
		{"darkHighlight", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4885629, darkHighlight)},
		{"lightHighlight", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4885629, lightHighlight)},
		{"BGCOLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug4885629, BGCOLOR)},
		{"sp", "Ljavax/swing/JSplitPane;", nullptr, $PRIVATE | $STATIC, $staticField(bug4885629, sp)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(bug4885629, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4885629, init$, void)},
		{"lambda$main$0", "()V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(bug4885629, lambda$main$0, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4885629, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4885629$3", nullptr, nullptr, 0},
		{"bug4885629$2", nullptr, nullptr, 0},
		{"bug4885629$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4885629",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4885629$3,bug4885629$2,bug4885629$1"
	};
	$loadClass(bug4885629, name, initialize, &classInfo$$, bug4885629::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug4885629);
	});
	return class$;
}

$Class* bug4885629::class$ = nullptr;
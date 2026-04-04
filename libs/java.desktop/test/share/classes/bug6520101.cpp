#include <bug6520101.h>
#include <bug6520101$1.h>
#include <java/awt/Component.h>
#include <java/lang/InterruptedException.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/Timer.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef ALWAYS_NEW_INSTANCE
#undef ATTEMPTS
#undef AUTO_CLOSE_DIALOG
#undef CHOOSER
#undef DO_GC_EACH_INTERVAL
#undef INTERVAL
#undef UPDATE_UI_EACH_INTERVAL

using $bug6520101$1 = ::bug6520101$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFileChooser = ::javax::swing::JFileChooser;
using $Timer = ::javax::swing::Timer;
using $UIManager = ::javax::swing::UIManager;

$JFileChooser* bug6520101::CHOOSER = nullptr;

void bug6520101::main($StringArray* args) {
	$init(bug6520101);
	$UIManager::setLookAndFeel("com.sun.java.swing.plaf.motif.MotifLookAndFeel"_s);
	for (int32_t i = 0; i < bug6520101::ATTEMPTS; ++i) {
		doAttempt();
	}
	$nc($System::out)->println("Test passed successfully"_s);
}

void bug6520101::doAttempt() {
	$init(bug6520101);
	$useLocalObjectStack();
	if (bug6520101::CHOOSER == nullptr) {
		$assignStatic(bug6520101::CHOOSER, $new($JFileChooser, "."_s));
	}
	{
		$nc(bug6520101::CHOOSER)->updateUI();
	}
	{
		$var($Thread, t, $new($Thread, $$new(bug6520101, bug6520101::CHOOSER)));
		t->start();
		$nc(bug6520101::CHOOSER)->showOpenDialog(nullptr);
		t->join();
	}
	;
}

void bug6520101::init$($JFileChooser* chooser) {
	$set(this, chooser, chooser);
}

void bug6520101::run() {
	$useLocalObjectStack();
	while (!$nc(this->chooser)->isShowing()) {
		try {
			$Thread::sleep(30);
		} catch ($InterruptedException& exception) {
			exception->printStackTrace();
		}
	}
	$var($Timer, timer, $new($Timer, bug6520101::INTERVAL, $$new($bug6520101$1, this)));
	timer->setRepeats(false);
	timer->start();
}

bug6520101::bug6520101() {
}

$Class* bug6520101::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"ATTEMPTS", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, ATTEMPTS)},
		{"INTERVAL", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, INTERVAL)},
		{"ALWAYS_NEW_INSTANCE", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, ALWAYS_NEW_INSTANCE)},
		{"DO_GC_EACH_INTERVAL", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, DO_GC_EACH_INTERVAL)},
		{"UPDATE_UI_EACH_INTERVAL", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, UPDATE_UI_EACH_INTERVAL)},
		{"AUTO_CLOSE_DIALOG", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(bug6520101, AUTO_CLOSE_DIALOG)},
		{"CHOOSER", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $STATIC, $staticField(bug6520101, CHOOSER)},
		{"chooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $FINAL, $field(bug6520101, chooser)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/JFileChooser;)V", nullptr, 0, $method(bug6520101, init$, void, $JFileChooser*)},
		{"doAttempt", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6520101, doAttempt, void), "java.lang.InterruptedException"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6520101, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6520101, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6520101$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6520101",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6520101$1"
	};
	$loadClass(bug6520101, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6520101);
	});
	return class$;
}

$Class* bug6520101::class$ = nullptr;
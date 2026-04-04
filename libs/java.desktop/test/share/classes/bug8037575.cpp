#include <bug8037575.h>
#include <Sysout.h>
#include <bug8037575$1.h>
#include <bug8037575$2.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionListener.h>
#include <java/lang/InterruptedException.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

#undef EXIT_ON_CLOSE
#undef SEVERE

using $Sysout = ::Sysout;
using $bug8037575$1 = ::bug8037575$1;
using $bug8037575$2 = ::bug8037575$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InterruptedException = ::java::lang::InterruptedException;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $JFrame = ::javax::swing::JFrame;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;

bool bug8037575::theTestPassed = false;
bool bug8037575::testGeneratedInterrupt = false;
$Thread* bug8037575::mainThread = nullptr;
int32_t bug8037575::sleepTime = 0;
int32_t bug8037575::waitTime = 0;
$JFrame* bug8037575::frame = nullptr;

void bug8037575::init$() {
}

void bug8037575::init() {
	$init(bug8037575);
	$SwingUtilities::invokeAndWait($$new($bug8037575$1));
}

void bug8037575::main($StringArray* args) {
	$init(bug8037575);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$assignStatic(bug8037575::mainThread, $Thread::currentThread());
	try {
		init();
	} catch ($Exception& ex) {
		$init($Level);
		$$nc($Logger::getLogger($(bug8037575::class$->getName())))->log($Level::SEVERE, nullptr, ex);
	}
	try {
		$nc(bug8037575::mainThread)->sleep(bug8037575::sleepTime);
	} catch ($InterruptedException& ex) {
		$Sysout::dispose();
		if (!bug8037575::theTestPassed && bug8037575::testGeneratedInterrupt) {
			$throwNew($RuntimeException, "Test Failed"_s);
		}
	}
	if (!bug8037575::testGeneratedInterrupt) {
		$Sysout::dispose();
		$throwNew($RuntimeException, "Test Failed"_s);
	}
}

void bug8037575::pass() {
	$init(bug8037575);
	$synchronized(class$) {
		bug8037575::theTestPassed = true;
		bug8037575::testGeneratedInterrupt = true;
		$nc(bug8037575::mainThread)->interrupt();
	}
}

void bug8037575::runTest() {
	$init(bug8037575);
	$synchronized(class$) {
		$useLocalObjectStack();
		bug8037575::frame->setSize(800, 600);
		bug8037575::frame->setVisible(true);
		bug8037575::frame->setDefaultCloseOperation($JFrame::EXIT_ON_CLOSE);
		$var($Timer, timer, $new($Timer, bug8037575::waitTime, $$new($bug8037575$2)));
		timer->setRepeats(false);
		timer->start();
	}
}

void bug8037575::fail() {
	$init(bug8037575);
	$synchronized(class$) {
		bug8037575::theTestPassed = false;
		bug8037575::testGeneratedInterrupt = true;
		$nc(bug8037575::mainThread)->interrupt();
	}
}

void bug8037575::clinit$($Class* clazz) {
	bug8037575::sleepTime = 30000;
	bug8037575::waitTime = 2000;
	$assignStatic(bug8037575::frame, $new($JFrame, "bug8037575"_s));
}

bug8037575::bug8037575() {
}

$Class* bug8037575::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theTestPassed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug8037575, theTestPassed)},
		{"testGeneratedInterrupt", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug8037575, testGeneratedInterrupt)},
		{"mainThread", "Ljava/lang/Thread;", nullptr, $PRIVATE | $STATIC, $staticField(bug8037575, mainThread)},
		{"sleepTime", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug8037575, sleepTime)},
		{"waitTime", "I", nullptr, $PRIVATE | $STATIC, $staticField(bug8037575, waitTime)},
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug8037575, frame)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug8037575, init$, void)},
		{"fail", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(bug8037575, fail, void)},
		{"init", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug8037575, init, void), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug8037575, main, void, $StringArray*), "java.lang.InterruptedException"},
		{"pass", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(bug8037575, pass, void)},
		{"runTest", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(bug8037575, runTest, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8037575$2", nullptr, nullptr, 0},
		{"bug8037575$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug8037575",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug8037575$2,bug8037575$1"
	};
	$loadClass(bug8037575, name, initialize, &classInfo$$, bug8037575::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug8037575);
	});
	return class$;
}

$Class* bug8037575::class$ = nullptr;
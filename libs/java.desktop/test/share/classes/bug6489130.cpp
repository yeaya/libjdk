#include <bug6489130.h>
#include <bug6489130$1.h>
#include <bug6489130$2.h>
#include <java/util/concurrent/CountDownLatch.h>
#include <java/util/concurrent/TimeUnit.h>
#include <javax/swing/JFileChooser.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

#undef MUX
#undef SECONDS

using $bug6489130$1 = ::bug6489130$1;
using $bug6489130$2 = ::bug6489130$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CountDownLatch = ::java::util::concurrent::CountDownLatch;
using $TimeUnit = ::java::util::concurrent::TimeUnit;
using $JFileChooser = ::javax::swing::JFileChooser;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;

$CountDownLatch* bug6489130::MUX = nullptr;

void bug6489130::init$() {
	$set(this, chooser, $new($JFileChooser));
	$set(this, timer, $new($Timer, 1000, $$new($bug6489130$1, this)));
	this->state = 0;
}

void bug6489130::main($StringArray* args) {
	$init(bug6489130);
	$SwingUtilities::invokeLater($$new($bug6489130$2));
	$init($TimeUnit);
	if (!bug6489130::MUX->await(10, $TimeUnit::SECONDS)) {
		$throwNew($RuntimeException, "Timeout"_s);
	}
}

void bug6489130::run() {
	this->timer->start();
}

void bug6489130::clinit$($Class* clazz) {
	$assignStatic(bug6489130::MUX, $new($CountDownLatch, 1));
}

bug6489130::bug6489130() {
}

$Class* bug6489130::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"chooser", "Ljavax/swing/JFileChooser;", nullptr, $PRIVATE | $FINAL, $field(bug6489130, chooser)},
		{"MUX", "Ljava/util/concurrent/CountDownLatch;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug6489130, MUX)},
		{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE | $FINAL, $field(bug6489130, timer)},
		{"state", "I", nullptr, $PRIVATE, $field(bug6489130, state)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6489130, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6489130, main, void, $StringArray*), "java.lang.InterruptedException"},
		{"run", "()V", nullptr, $PRIVATE, $method(bug6489130, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6489130$2", nullptr, nullptr, 0},
		{"bug6489130$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6489130",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6489130$2,bug6489130$1,bug6489130$1$1"
	};
	$loadClass(bug6489130, name, initialize, &classInfo$$, bug6489130::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug6489130);
	});
	return class$;
}

$Class* bug6489130::class$ = nullptr;
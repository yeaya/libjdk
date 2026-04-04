#include <bug6432565$1.h>
#include <bug6432565.h>
#include <java/lang/CharSequence.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <javax/swing/SwingWorker.h>
#include <jcpp.h>

using $CharSequenceArray = $Array<::java::lang::CharSequence>;
using $bug6432565 = ::bug6432565;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingWorker = ::javax::swing::SwingWorker;

void bug6432565$1::init$() {
	$SwingWorker::init$();
}

$Object* bug6432565$1::doInBackground() {
	$useLocalObjectStack();
	publish($$new($StringArray, {"hello"_s}));
	publish($$new($CharSequenceArray, {$$new($StringBuilder, "world"_s)}));
	return nullptr;
}

void bug6432565$1::done() {
	$init($bug6432565);
	$nc($bug6432565::isDone)->set(true);
}

bug6432565$1::bug6432565$1() {
}

$Class* bug6432565$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6432565$1, init$, void)},
		{"doInBackground", "()Ljava/lang/Void;", nullptr, $PROTECTED, $virtualMethod(bug6432565$1, doInBackground, $Object*)},
		{"done", "()V", nullptr, $PROTECTED, $virtualMethod(bug6432565$1, done, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6432565",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6432565$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6432565$1",
		"javax.swing.SwingWorker",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/SwingWorker<Ljava/lang/Void;Ljava/lang/CharSequence;>;",
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug6432565"
	};
	$loadClass(bug6432565$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug6432565$1));
	});
	return class$;
}

$Class* bug6432565$1::class$ = nullptr;
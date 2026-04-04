#include <bug6547087.h>
#include <bug6547087$1.h>
#include <java/awt/Dimension.h>
#include <java/lang/Runnable.h>
#include <java/util/concurrent/Callable.h>
#include <java/util/concurrent/ExecutionException.h>
#include <java/util/concurrent/FutureTask.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JPopupMenu$Separator.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug6547087$1 = ::bug6547087$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Callable = ::java::util::concurrent::Callable;
using $ExecutionException = ::java::util::concurrent::ExecutionException;
using $FutureTask = ::java::util::concurrent::FutureTask;
using $JPopupMenu$Separator = ::javax::swing::JPopupMenu$Separator;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

void bug6547087::init$() {
}

void bug6547087::main($StringArray* args) {
	$useLocalObjectStack();
	try {
		invokeAndWait($$new($bug6547087$1));
	} catch ($ExecutionException& e) {
		if ($instanceOf($NullPointerException, $(e->getCause()))) {
			$throwNew($RuntimeException, "failed"_s);
		}
	}
}

void bug6547087::test() {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($($UIManager::getSystemLookAndFeelClassName()));
	$var($JPopupMenu$Separator, separator, $new($JPopupMenu$Separator));
	separator->getPreferredSize();
}

$Object* bug6547087::invokeAndWait($Callable* callable) {
	$var($FutureTask, future, $new($FutureTask, callable));
	$SwingUtilities::invokeLater(future);
	return future->get();
}

bug6547087::bug6547087() {
}

$Class* bug6547087::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6547087, init$, void)},
		{"invokeAndWait", "(Ljava/util/concurrent/Callable;)Ljava/lang/Object;", "<T:Ljava/lang/Object;>(Ljava/util/concurrent/Callable<TT;>;)TT;", $STATIC, $staticMethod(bug6547087, invokeAndWait, $Object*, $Callable*), "java.lang.Exception"},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6547087, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, $STATIC, $staticMethod(bug6547087, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6547087$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6547087",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6547087$1"
	};
	$loadClass(bug6547087, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6547087);
	});
	return class$;
}

$Class* bug6547087::class$ = nullptr;
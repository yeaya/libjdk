#include <bug7013453$1.h>
#include <bug7013453$1$1.h>
#include <bug7013453.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/NoSuchFieldException.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/reflect/Field.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $bug7013453$1$1 = ::bug7013453$1$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchFieldException = ::java::lang::NoSuchFieldException;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Field = ::java::lang::reflect::Field;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Method = ::java::lang::reflect::Method;
using $JLabel = ::javax::swing::JLabel;
using $RepaintManager = ::javax::swing::RepaintManager;

void bug7013453$1::init$() {
}

void bug7013453$1::run() {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		$load($RepaintManager);
		$var($Method, getPaintManagerMethod, $RepaintManager::class$->getDeclaredMethod("getPaintManager"_s, $$new($ClassArray, 0)));
		$nc(getPaintManagerMethod)->setAccessible(true);
		$var($Object, paintManager, getPaintManagerMethod->invoke($($RepaintManager::currentManager($$new($JLabel))), $$new($ObjectArray, 0)));
		$var($String, paintManagerName, $nc(paintManager)->getClass()->getCanonicalName());
		if (!$nc(paintManagerName)->equals("javax.swing.BufferStrategyPaintManager"_s)) {
			$nc($System::out)->println($$str({"The test is not suitable for the "_s, paintManagerName, " paint manager. The test skipped."_s}));
			return;
		}
		$var($Field, showingField, paintManager->getClass()->getDeclaredField("showing"_s));
		$nc(showingField)->setAccessible(true);
		$synchronized(paintManager) {
			showingField->setBoolean(paintManager, true);
		}
		$var($Thread, thread, $new($Thread, $$new($bug7013453$1$1, this, paintManager, showingField)));
		thread->start();
		$var($Method, disposeMethod, paintManager->getClass()->getDeclaredMethod("dispose"_s, $$new($ClassArray, 0)));
		$nc(disposeMethod)->setAccessible(true);
		disposeMethod->invoke(paintManager, $$new($ObjectArray, 0));
		$nc($System::out)->println("The test passed."_s);
	} catch ($NoSuchMethodException& e) {
		$throwNew($RuntimeException, e);
	} catch ($InvocationTargetException& e) {
		$throwNew($RuntimeException, e);
	} catch ($IllegalAccessException& e) {
		$throwNew($RuntimeException, e);
	} catch ($NoSuchFieldException& e) {
		$throwNew($RuntimeException, e);
	}
}

bug7013453$1::bug7013453$1() {
}

$Class* bug7013453$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7013453$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7013453$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7013453",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7013453$1", nullptr, nullptr, 0},
		{"bug7013453$1$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7013453$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug7013453"
	};
	$loadClass(bug7013453$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7013453$1);
	});
	return class$;
}

$Class* bug7013453$1::class$ = nullptr;
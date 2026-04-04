#include <bug7045593$2.h>
#include <bug7045593.h>
#include <java/awt/Point.h>
#include <java/awt/Rectangle.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/text/BadLocationException.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug7045593 = ::bug7045593;
using $Point = ::java::awt::Point;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BadLocationException = ::javax::swing::text::BadLocationException;

void bug7045593$2::init$() {
}

void bug7045593$2::run() {
	$useLocalObjectStack();
	try {
		$init($bug7045593);
		$var($Rectangle, r, $nc($bug7045593::jtf)->modelToView(1));
		int32_t delta = 2;
		for (int32_t x = $nc(r)->x - delta; x < r->x + delta; ++x) {
			$bug7045593::assertEquals($nc($bug7045593::jtf)->viewToModel($$new($Point, x, r->y)), 1);
		}
		$nc($System::out)->println("Passed."_s);
	} catch ($BadLocationException& e) {
		$throwNew($RuntimeException, "Test failed"_s, e);
	}
}

bug7045593$2::bug7045593$2() {
}

$Class* bug7045593$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug7045593$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug7045593$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug7045593",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7045593$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug7045593$2",
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
		"bug7045593"
	};
	$loadClass(bug7045593$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7045593$2);
	});
	return class$;
}

$Class* bug7045593$2::class$ = nullptr;
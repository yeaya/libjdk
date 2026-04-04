#include <bug6866751$2.h>
#include <bug6866751.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/text/Caret.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $bug6866751 = ::bug6866751;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void bug6866751$2::init$() {
}

void bug6866751$2::run() {
	$useLocalObjectStack();
	$init($bug6866751);
	int32_t width = $nc($bug6866751::area)->getWidth();
	double caretX = $$nc($$nc($nc($bug6866751::area)->getCaret())->getMagicCaretPosition())->getX();
	if (width < caretX + 1) {
		$throwNew($RuntimeException, $$str({"Width of the area ("_s, $$str(width), ") is less than caret x-position "_s, $$str(caretX), $$str(1)}));
	}
	$nc($bug6866751::area)->putClientProperty("caretWidth"_s, $($Integer::valueOf(10)));
	$nc($bug6866751::frame)->pack();
}

bug6866751$2::bug6866751$2() {
}

$Class* bug6866751$2::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug6866751$2, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(bug6866751$2, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug6866751",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6866751$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug6866751$2",
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
		"bug6866751"
	};
	$loadClass(bug6866751$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6866751$2);
	});
	return class$;
}

$Class* bug6866751$2::class$ = nullptr;
#include <TestBrowserBGColor$1.h>
#include <TestBrowserBGColor.h>
#include <java/awt/Window.h>
#include <java/awt/event/WindowAdapter.h>
#include <java/awt/event/WindowEvent.h>
#include <jcpp.h>

using $TestBrowserBGColor = ::TestBrowserBGColor;
using $WindowAdapter = ::java::awt::event::WindowAdapter;
using $WindowEvent = ::java::awt::event::WindowEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void TestBrowserBGColor$1::init$() {
	$WindowAdapter::init$();
}

void TestBrowserBGColor$1::windowClosing($WindowEvent* e) {
	$init($TestBrowserBGColor);
	$nc($TestBrowserBGColor::b)->dispose();
	$assignStatic($TestBrowserBGColor::b, nullptr);
}

TestBrowserBGColor$1::TestBrowserBGColor$1() {
}

$Class* TestBrowserBGColor$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestBrowserBGColor$1, init$, void)},
		{"windowClosing", "(Ljava/awt/event/WindowEvent;)V", nullptr, $PUBLIC, $virtualMethod(TestBrowserBGColor$1, windowClosing, void, $WindowEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestBrowserBGColor",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestBrowserBGColor$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestBrowserBGColor$1",
		"java.awt.event.WindowAdapter",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestBrowserBGColor"
	};
	$loadClass(TestBrowserBGColor$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestBrowserBGColor$1));
	});
	return class$;
}

$Class* TestBrowserBGColor$1::class$ = nullptr;
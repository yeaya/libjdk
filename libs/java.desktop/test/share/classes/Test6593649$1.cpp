#include <Test6593649$1.h>
#include <Test6593649.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Window.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $Test6593649 = ::Test6593649;
using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void Test6593649$1::init$() {
}

void Test6593649$1::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	$init($Test6593649);
	bool failed = !$$nc($$nc($nc($Test6593649::textArea)->getParent())->getSize())->equals($($nc($Test6593649::textArea)->getSize()));
	$nc($Test6593649::frame)->dispose();
	if (failed) {
		$throwNew($RuntimeException, "The test failed"_s);
	}
}

Test6593649$1::Test6593649$1() {
}

$Class* Test6593649$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6593649$1, init$, void)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(Test6593649$1, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"Test6593649",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6593649$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6593649$1",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test6593649"
	};
	$loadClass(Test6593649$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6593649$1);
	});
	return class$;
}

$Class* Test6593649$1::class$ = nullptr;
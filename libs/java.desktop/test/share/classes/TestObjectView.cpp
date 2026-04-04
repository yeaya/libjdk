#include <TestObjectView.h>
#include <TestObjectView$UserElement.h>
#include <TestObjectView$UserJComponent.h>
#include <TestObjectView$UserObjectView.h>
#include <java/awt/Component.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $TestObjectView$UserElement = ::TestObjectView$UserElement;
using $TestObjectView$UserJComponent = ::TestObjectView$UserJComponent;
using $TestObjectView$UserObjectView = ::TestObjectView$UserObjectView;
using $Component = ::java::awt::Component;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestObjectView$$Lambda$testObjectView : public $Runnable {
	$class(TestObjectView$$Lambda$testObjectView, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestObjectView::testObjectView();
	}
};
$Class* TestObjectView$$Lambda$testObjectView::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestObjectView$$Lambda$testObjectView, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestObjectView$$Lambda$testObjectView, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestObjectView$$Lambda$testObjectView",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestObjectView$$Lambda$testObjectView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestObjectView$$Lambda$testObjectView);
	});
	return class$;
}
$Class* TestObjectView$$Lambda$testObjectView::class$ = nullptr;

void TestObjectView::init$() {
}

void TestObjectView::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestObjectView);
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait($$new(TestObjectView$$Lambda$testObjectView));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait($$new(TestObjectView$$Lambda$testObjectView));
}

void TestObjectView::testObjectView() {
	$useLocalObjectStack();
	$var($TestObjectView$UserObjectView, objectView, $new($TestObjectView$UserObjectView, $$new($TestObjectView$UserElement)));
	$var($Component, comp, objectView->createComponent());
	if (!($instanceOf($TestObjectView$UserJComponent, comp))) {
		$throwNew($RuntimeException, "Component is not UserJComponent!"_s);
	}
}

TestObjectView::TestObjectView() {
}

$Class* TestObjectView::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestObjectView$$Lambda$testObjectView")) {
			return TestObjectView$$Lambda$testObjectView::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestObjectView, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestObjectView, main, void, $StringArray*), "java.lang.Exception"},
		{"testObjectView", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestObjectView, testObjectView, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestObjectView$UserElement", "TestObjectView", "UserElement", $PUBLIC | $STATIC},
		{"TestObjectView$UserObjectView", "TestObjectView", "UserObjectView", $PUBLIC | $STATIC},
		{"TestObjectView$UserJComponent", "TestObjectView", "UserJComponent", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestObjectView",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestObjectView$UserElement,TestObjectView$UserElement$1,TestObjectView$UserObjectView,TestObjectView$UserJComponent"
	};
	$loadClass(TestObjectView, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestObjectView);
	});
	return class$;
}

$Class* TestObjectView::class$ = nullptr;
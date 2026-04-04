#include <TestAbstractRegionPainter.h>
#include <TestAbstractRegionPainter$UserAbstractRegionPainter.h>
#include <TestAbstractRegionPainter$UserJComponent.h>
#include <java/awt/Color.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef USER_COLOR

using $TestAbstractRegionPainter$UserAbstractRegionPainter = ::TestAbstractRegionPainter$UserAbstractRegionPainter;
using $TestAbstractRegionPainter$UserJComponent = ::TestAbstractRegionPainter$UserJComponent;
using $Color = ::java::awt::Color;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $JComponent = ::javax::swing::JComponent;
using $SwingUtilities = ::javax::swing::SwingUtilities;

class TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter : public $Runnable {
	$class(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestAbstractRegionPainter::testAbstractRegionPainter();
	}
};
$Class* TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter);
	});
	return class$;
}
$Class* TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter::class$ = nullptr;

void TestAbstractRegionPainter::init$() {
}

void TestAbstractRegionPainter::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestAbstractRegionPainter);
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait($$new(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait($$new(TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter));
}

void TestAbstractRegionPainter::testAbstractRegionPainter() {
	$useLocalObjectStack();
	$var($TestAbstractRegionPainter$UserAbstractRegionPainter, painter, $new($TestAbstractRegionPainter$UserAbstractRegionPainter));
	$var($JComponent, userComponent, $new($TestAbstractRegionPainter$UserJComponent));
	$init($Color);
	$var($Color, color, painter->getUserComponentColor(userComponent, "UserColor"_s, $Color::yellow, 0, 0, 0));
	if (!$nc($TestAbstractRegionPainter$UserJComponent::USER_COLOR)->equals(color)) {
		$throwNew($RuntimeException, $$str({"Wrong color: "_s, color}));
	}
}

TestAbstractRegionPainter::TestAbstractRegionPainter() {
}

$Class* TestAbstractRegionPainter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter")) {
			return TestAbstractRegionPainter$$Lambda$testAbstractRegionPainter::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestAbstractRegionPainter, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestAbstractRegionPainter, main, void, $StringArray*), "java.lang.Exception"},
		{"testAbstractRegionPainter", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestAbstractRegionPainter, testAbstractRegionPainter, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestAbstractRegionPainter$UserAbstractRegionPainter", "TestAbstractRegionPainter", "UserAbstractRegionPainter", $PUBLIC | $STATIC},
		{"TestAbstractRegionPainter$UserJComponent", "TestAbstractRegionPainter", "UserJComponent", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestAbstractRegionPainter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestAbstractRegionPainter$UserAbstractRegionPainter,TestAbstractRegionPainter$UserJComponent"
	};
	$loadClass(TestAbstractRegionPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestAbstractRegionPainter);
	});
	return class$;
}

$Class* TestAbstractRegionPainter::class$ = nullptr;
#include <TestDefaultFormatter.h>
#include <TestDefaultFormatter$1.h>
#include <TestDefaultFormatter$UserValueClass.h>
#include <java/io/Serializable.h>
#include <java/lang/Runnable.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/text/ParseException.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/text/DefaultFormatter.h>
#include <jcpp.h>

using $TestDefaultFormatter$1 = ::TestDefaultFormatter$1;
using $TestDefaultFormatter$UserValueClass = ::TestDefaultFormatter$UserValueClass;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Runnable = ::java::lang::Runnable;
using $RuntimeException = ::java::lang::RuntimeException;
using $SecurityManager = ::java::lang::SecurityManager;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $ParseException = ::java::text::ParseException;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $DefaultFormatter = ::javax::swing::text::DefaultFormatter;

class TestDefaultFormatter$$Lambda$testDefaultFormatter : public $Runnable {
	$class(TestDefaultFormatter$$Lambda$testDefaultFormatter, $NO_CLASS_INIT, $Runnable)
public:
	void init$() {
	}
	virtual void run() override {
		TestDefaultFormatter::testDefaultFormatter();
	}
};
$Class* TestDefaultFormatter$$Lambda$testDefaultFormatter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestDefaultFormatter$$Lambda$testDefaultFormatter, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(TestDefaultFormatter$$Lambda$testDefaultFormatter, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL,
		"TestDefaultFormatter$$Lambda$testDefaultFormatter",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$
	};
	$loadClass(TestDefaultFormatter$$Lambda$testDefaultFormatter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestDefaultFormatter$$Lambda$testDefaultFormatter);
	});
	return class$;
}
$Class* TestDefaultFormatter$$Lambda$testDefaultFormatter::class$ = nullptr;

void TestDefaultFormatter::init$() {
}

void TestDefaultFormatter::main($StringArray* args) {
	$useLocalObjectStack();
	$load(TestDefaultFormatter);
	$beforeCallerSensitive();
	$SwingUtilities::invokeAndWait($$new(TestDefaultFormatter$$Lambda$testDefaultFormatter));
	$System::setSecurityManager($$new($SecurityManager));
	$SwingUtilities::invokeAndWait($$new(TestDefaultFormatter$$Lambda$testDefaultFormatter));
}

void TestDefaultFormatter::testDefaultFormatter() {
	$useLocalObjectStack();
	testDefaultFormatter($$new($TestDefaultFormatter$1));
	testDefaultFormatter($$new($DefaultFormatter));
}

void TestDefaultFormatter::testDefaultFormatter($DefaultFormatter* formatter) {
	$useLocalObjectStack();
	try {
		$nc($System::out)->println($$str({"formatter: "_s, $nc($of(formatter))->getClass()}));
		$load($TestDefaultFormatter$UserValueClass);
		formatter->setValueClass($TestDefaultFormatter$UserValueClass::class$);
		$var($TestDefaultFormatter$UserValueClass, userValue, $cast($TestDefaultFormatter$UserValueClass, formatter->stringToValue("test"_s)));
		if (!$nc($nc(userValue)->str)->equals("test"_s)) {
			$throwNew($RuntimeException, "String value is wrong!"_s);
		}
	} catch ($ParseException& ex) {
		$throwNew($RuntimeException, ex);
	}
}

TestDefaultFormatter::TestDefaultFormatter() {
}

$Class* TestDefaultFormatter::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals("TestDefaultFormatter$$Lambda$testDefaultFormatter")) {
			return TestDefaultFormatter$$Lambda$testDefaultFormatter::load$(name, initialize);
		}
	}
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestDefaultFormatter, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestDefaultFormatter, main, void, $StringArray*), "java.lang.Exception"},
		{"testDefaultFormatter", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestDefaultFormatter, testDefaultFormatter, void)},
		{"testDefaultFormatter", "(Ljavax/swing/text/DefaultFormatter;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(TestDefaultFormatter, testDefaultFormatter, void, $DefaultFormatter*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestDefaultFormatter$UserValueClass", "TestDefaultFormatter", "UserValueClass", $PUBLIC | $STATIC},
		{"TestDefaultFormatter$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestDefaultFormatter",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestDefaultFormatter$UserValueClass,TestDefaultFormatter$1"
	};
	$loadClass(TestDefaultFormatter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TestDefaultFormatter);
	});
	return class$;
}

$Class* TestDefaultFormatter::class$ = nullptr;
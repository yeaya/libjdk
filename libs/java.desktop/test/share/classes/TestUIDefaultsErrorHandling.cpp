#include <TestUIDefaultsErrorHandling.h>
#include <TestUIDefaultsErrorHandling$1.h>
#include <TestUIDefaultsErrorHandling$BrokenUI.h>
#include <java/io/ByteArrayOutputStream.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $TestUIDefaultsErrorHandling$1 = ::TestUIDefaultsErrorHandling$1;
using $TestUIDefaultsErrorHandling$BrokenUI = ::TestUIDefaultsErrorHandling$BrokenUI;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UIDefaults = ::javax::swing::UIDefaults;
using $UIManager = ::javax::swing::UIManager;

$String* TestUIDefaultsErrorHandling::erroutput = nullptr;

void TestUIDefaultsErrorHandling::init$() {
}

void TestUIDefaultsErrorHandling::main($StringArray* args) {
	$init(TestUIDefaultsErrorHandling);
	$useLocalObjectStack();
	$var($PrintStream, err, $System::err);
	$var($ByteArrayOutputStream, bytes, $new($ByteArrayOutputStream));
	$System::setErr($$new($PrintStream, bytes));
	$var($Throwable, var$0, nullptr);
	try {
		$var($UIDefaults, defaults, $UIManager::getDefaults());
		$load($TestUIDefaultsErrorHandling$BrokenUI);
		$nc(defaults)->put("BrokenUI"_s, $($TestUIDefaultsErrorHandling$BrokenUI::class$->getName()));
		defaults->getUI($$new($TestUIDefaultsErrorHandling$1));
		if (!($$nc(bytes->toString())->contains(TestUIDefaultsErrorHandling::erroutput))) {
			$throwNew($RuntimeException, "UIDefauls swallows exception trace"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$System::setErr(err);
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

TestUIDefaultsErrorHandling::TestUIDefaultsErrorHandling() {
}

void TestUIDefaultsErrorHandling::clinit$($Class* clazz) {
	$assignStatic(TestUIDefaultsErrorHandling::erroutput, "oops, complex problem with diagnostics"_s);
}

$Class* TestUIDefaultsErrorHandling::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"erroutput", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TestUIDefaultsErrorHandling, erroutput)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TestUIDefaultsErrorHandling, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(TestUIDefaultsErrorHandling, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestUIDefaultsErrorHandling$BrokenUI", "TestUIDefaultsErrorHandling", "BrokenUI", $PUBLIC | $STATIC},
		{"TestUIDefaultsErrorHandling$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"TestUIDefaultsErrorHandling",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"TestUIDefaultsErrorHandling$BrokenUI,TestUIDefaultsErrorHandling$1"
	};
	$loadClass(TestUIDefaultsErrorHandling, name, initialize, &classInfo$$, TestUIDefaultsErrorHandling::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TestUIDefaultsErrorHandling);
	});
	return class$;
}

$Class* TestUIDefaultsErrorHandling::class$ = nullptr;
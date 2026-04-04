#include <Test6593649.h>
#include <Test6593649$1.h>
#include <Test6593649$2.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JTextArea.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/Timer.h>
#include <jcpp.h>

using $Test6593649$1 = ::Test6593649$1;
using $Test6593649$2 = ::Test6593649$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JFrame = ::javax::swing::JFrame;
using $JTextArea = ::javax::swing::JTextArea;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $Timer = ::javax::swing::Timer;

$JFrame* Test6593649::frame = nullptr;
$JTextArea* Test6593649::textArea = nullptr;
$Timer* Test6593649::timer = nullptr;

void Test6593649::init$() {
}

void Test6593649::main($StringArray* args) {
	$init(Test6593649);
	$SwingUtilities::invokeAndWait($$new($Test6593649$2));
}

void Test6593649::clinit$($Class* clazz) {
	$assignStatic(Test6593649::timer, $new($Timer, 1000, $$new($Test6593649$1)));
}

Test6593649::Test6593649() {
}

$Class* Test6593649::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"frame", "Ljavax/swing/JFrame;", nullptr, $PRIVATE | $STATIC, $staticField(Test6593649, frame)},
		{"textArea", "Ljavax/swing/JTextArea;", nullptr, $PRIVATE | $STATIC, $staticField(Test6593649, textArea)},
		{"timer", "Ljavax/swing/Timer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Test6593649, timer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6593649, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6593649, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6593649$2", nullptr, nullptr, 0},
		{"Test6593649$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6593649",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test6593649$2,Test6593649$1"
	};
	$loadClass(Test6593649, name, initialize, &classInfo$$, Test6593649::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(Test6593649);
	});
	return class$;
}

$Class* Test6593649::class$ = nullptr;
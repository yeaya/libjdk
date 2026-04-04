#include <bug7045593.h>
#include <bug7045593$1.h>
#include <bug7045593$2.h>
#include <java/awt/Robot.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug7045593$1 = ::bug7045593$1;
using $bug7045593$2 = ::bug7045593$2;
using $Robot = ::java::awt::Robot;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JTextField = ::javax::swing::JTextField;
using $SwingUtilities = ::javax::swing::SwingUtilities;

$volatile($JTextField*) bug7045593::jtf = nullptr;

void bug7045593::init$() {
}

void bug7045593::main($StringArray* args) {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new($bug7045593$1));
	$var($Robot, robot, $new($Robot));
	robot->waitForIdle();
	$SwingUtilities::invokeAndWait($$new($bug7045593$2));
}

void bug7045593::assertEquals(int32_t i1, int32_t i2) {
	$useLocalObjectStack();
	if (i1 != i2) {
		$throwNew($RuntimeException, $$str({"Test failed, "_s, $$str(i1), " != "_s, $$str(i2)}));
	}
}

bug7045593::bug7045593() {
}

$Class* bug7045593::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"jtf", "Ljavax/swing/JTextField;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(bug7045593, jtf)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7045593, init$, void)},
		{"assertEquals", "(II)V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug7045593, assertEquals, void, int32_t, int32_t)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7045593, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7045593$2", nullptr, nullptr, 0},
		{"bug7045593$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7045593",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7045593$2,bug7045593$1"
	};
	$loadClass(bug7045593, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug7045593);
	});
	return class$;
}

$Class* bug7045593::class$ = nullptr;
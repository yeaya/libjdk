#include <Test6919629.h>
#include <Test6919629$1.h>
#include <Test6919629$2.h>
#include <java/lang/ref/WeakReference.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $Test6919629$1 = ::Test6919629$1;
using $Test6919629$2 = ::Test6919629$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

void Test6919629::init$() {
}

void Test6919629::main($StringArray* args) {
	$useLocalObjectStack();
	$UIManager::setLookAndFeel($$new($NimbusLookAndFeel));
	$var(Test6919629, t, $new(Test6919629));
	t->test();
	$System::gc();
	t->check();
}

void Test6919629::test() {
	$useLocalObjectStack();
	$SwingUtilities::invokeAndWait($$new($Test6919629$1, this));
	$Thread::sleep(2000);
	$SwingUtilities::invokeAndWait($$new($Test6919629$2, this));
	$Thread::sleep(2000);
}

void Test6919629::check() {
	if ($nc(this->ref)->get() != nullptr) {
		$throwNew($RuntimeException, "Failed: an unused component wasn\'t collected"_s);
	}
}

Test6919629::Test6919629() {
}

$Class* Test6919629::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"f", "Ljavax/swing/JFrame;", nullptr, 0, $field(Test6919629, f)},
		{"ref", "Ljava/lang/ref/WeakReference;", "Ljava/lang/ref/WeakReference<Ljavax/swing/JLabel;>;", 0, $field(Test6919629, ref)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Test6919629, init$, void)},
		{"check", "()V", nullptr, 0, $virtualMethod(Test6919629, check, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Test6919629, main, void, $StringArray*), "java.lang.Exception"},
		{"test", "()V", nullptr, 0, $virtualMethod(Test6919629, test, void), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6919629$2", nullptr, nullptr, 0},
		{"Test6919629$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"Test6919629",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"Test6919629$2,Test6919629$1"
	};
	$loadClass(Test6919629, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Test6919629);
	});
	return class$;
}

$Class* Test6919629::class$ = nullptr;
#include <Pending.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$volatile(bool) Pending::passed = false;

void Pending::init$() {
}

void Pending::main($StringArray* args) {
	$init(Pending);
	$SwingUtilities::invokeLater($$new(Pending));
	$Thread::sleep(10000);
	if (!Pending::passed) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
}

void Pending::run() {
	$UIManager::put("foobar"_s, "Pending"_s);
	$UIManager::get("foobar"_s);
	Pending::passed = true;
}

Pending::Pending() {
}

$Class* Pending::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"passed", "Z", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(Pending, passed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(Pending, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Pending, main, void, $StringArray*), "java.lang.Exception"},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(Pending, run, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"Pending",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(Pending, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Pending);
	});
	return class$;
}

$Class* Pending::class$ = nullptr;
#include <bug4331767.h>
#include <bug4331767$BrokenLookAndFeel.h>
#include <java/lang/Error.h>
#include <javax/swing/JButton.h>
#include <javax/swing/LookAndFeel.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $bug4331767$BrokenLookAndFeel = ::bug4331767$BrokenLookAndFeel;
using $ClassInfo = ::java::lang::ClassInfo;
using $Error = ::java::lang::Error;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $JButton = ::javax::swing::JButton;
using $UIManager = ::javax::swing::UIManager;

bool bug4331767::passed = false;

void bug4331767::init$() {
}

void bug4331767::main($StringArray* argv) {
	$init(bug4331767);
	try {
		$UIManager::setLookAndFeel($$new($bug4331767$BrokenLookAndFeel));
	} catch ($Exception& e) {
		$throwNew($Error, "Failed to set BrokenLookAndFeel, cannot test"_s, e);
	}
	$new($JButton);
	if (!bug4331767::passed) {
		$throwNew($RuntimeException, "Failed: Custom getUIError() not called"_s);
	}
}

void bug4331767::clinit$($Class* clazz) {
	bug4331767::passed = false;
}

bug4331767::bug4331767() {
}

$Class* bug4331767::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"passed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(bug4331767, passed)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug4331767, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug4331767, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4331767$BrokenLookAndFeel", "bug4331767", "BrokenLookAndFeel", $STATIC},
		{"bug4331767$BrokenUIDefaults", "bug4331767", "BrokenUIDefaults", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug4331767",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug4331767$BrokenLookAndFeel,bug4331767$BrokenUIDefaults"
	};
	$loadClass(bug4331767, name, initialize, &classInfo$$, bug4331767::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug4331767);
	});
	return class$;
}

$Class* bug4331767::class$ = nullptr;
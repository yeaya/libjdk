#include <bug7142955.h>
#include <bug7142955$1.h>
#include <java/awt/Color.h>
#include <javax/swing/SwingUtilities.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

#undef FALSE
#undef RED
#undef TEST_COLOR

using $bug7142955$1 = ::bug7142955$1;
using $Color = ::java::awt::Color;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $UIManager = ::javax::swing::UIManager;

$Color* bug7142955::TEST_COLOR = nullptr;

void bug7142955::init$() {
}

void bug7142955::main($StringArray* args) {
	$init(bug7142955);
	$UIManager::put("Tree.rendererFillBackground"_s, $Boolean::FALSE);
	$UIManager::put("Tree.textBackground"_s, bug7142955::TEST_COLOR);
	$SwingUtilities::invokeAndWait($$new($bug7142955$1));
}

void bug7142955::clinit$($Class* clazz) {
	$init($Color);
	$assignStatic(bug7142955::TEST_COLOR, $Color::RED);
}

bug7142955::bug7142955() {
}

$Class* bug7142955::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TEST_COLOR", "Ljava/awt/Color;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(bug7142955, TEST_COLOR)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug7142955, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug7142955, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug7142955$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug7142955",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug7142955$1"
	};
	$loadClass(bug7142955, name, initialize, &classInfo$$, bug7142955::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(bug7142955);
	});
	return class$;
}

$Class* bug7142955::class$ = nullptr;
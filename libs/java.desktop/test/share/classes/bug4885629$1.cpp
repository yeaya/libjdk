#include <bug4885629$1.h>
#include <bug4885629.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;

void bug4885629$1::init$() {
	$BasicLookAndFeel::init$();
}

bool bug4885629$1::isSupportedLookAndFeel() {
	return true;
}

bool bug4885629$1::isNativeLookAndFeel() {
	return false;
}

$String* bug4885629$1::getDescription() {
	return "Foo"_s;
}

$String* bug4885629$1::getID() {
	return "FooID"_s;
}

$String* bug4885629$1::getName() {
	return "FooName"_s;
}

bug4885629$1::bug4885629$1() {
}

$Class* bug4885629$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(bug4885629$1, init$, void)},
		{"getDescription", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(bug4885629$1, getDescription, $String*)},
		{"getID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(bug4885629$1, getID, $String*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(bug4885629$1, getName, $String*)},
		{"isNativeLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(bug4885629$1, isNativeLookAndFeel, bool)},
		{"isSupportedLookAndFeel", "()Z", nullptr, $PUBLIC, $virtualMethod(bug4885629$1, isSupportedLookAndFeel, bool)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"bug4885629",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug4885629$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug4885629$1",
		"javax.swing.plaf.basic.BasicLookAndFeel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug4885629"
	};
	$loadClass(bug4885629$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug4885629$1));
	});
	return class$;
}

$Class* bug4885629$1::class$ = nullptr;
#include <NormalBoundsTest$10.h>
#include <NormalBoundsTest.h>
#include <jcpp.h>

using $NormalBoundsTest = ::NormalBoundsTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NormalBoundsTest$10::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void NormalBoundsTest$10::run() {
	$NormalBoundsTest::createUI(this->val$lookAndFeelString);
}

NormalBoundsTest$10::NormalBoundsTest$10() {
}

$Class* NormalBoundsTest$10::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(NormalBoundsTest$10, val$lookAndFeelString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(NormalBoundsTest$10, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NormalBoundsTest$10, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NormalBoundsTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NormalBoundsTest$10", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NormalBoundsTest$10",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NormalBoundsTest"
	};
	$loadClass(NormalBoundsTest$10, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NormalBoundsTest$10);
	});
	return class$;
}

$Class* NormalBoundsTest$10::class$ = nullptr;
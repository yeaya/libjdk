#include <SynthScrollbarThumbPainterTest$1.h>
#include <SynthScrollbarThumbPainterTest.h>
#include <jcpp.h>

using $SynthScrollbarThumbPainterTest = ::SynthScrollbarThumbPainterTest;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

void SynthScrollbarThumbPainterTest$1::init$($String* val$lookAndFeelString) {
	$set(this, val$lookAndFeelString, val$lookAndFeelString);
}

void SynthScrollbarThumbPainterTest$1::run() {
	try {
		$SynthScrollbarThumbPainterTest::constructTestUI(this->val$lookAndFeelString);
	} catch ($Exception& ex) {
		$throwNew($RuntimeException, "Exception creating test UI"_s);
	}
}

SynthScrollbarThumbPainterTest$1::SynthScrollbarThumbPainterTest$1() {
}

$Class* SynthScrollbarThumbPainterTest$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"val$lookAndFeelString", "Ljava/lang/String;", nullptr, $FINAL | $SYNTHETIC, $field(SynthScrollbarThumbPainterTest$1, val$lookAndFeelString)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", "()V", 0, $method(SynthScrollbarThumbPainterTest$1, init$, void, $String*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SynthScrollbarThumbPainterTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"SynthScrollbarThumbPainterTest",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"SynthScrollbarThumbPainterTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"SynthScrollbarThumbPainterTest$1",
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
		"SynthScrollbarThumbPainterTest"
	};
	$loadClass(SynthScrollbarThumbPainterTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthScrollbarThumbPainterTest$1);
	});
	return class$;
}

$Class* SynthScrollbarThumbPainterTest$1::class$ = nullptr;
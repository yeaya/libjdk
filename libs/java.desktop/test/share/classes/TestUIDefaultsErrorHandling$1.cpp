#include <TestUIDefaultsErrorHandling$1.h>
#include <TestUIDefaultsErrorHandling.h>
#include <javax/swing/JLabel.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;

void TestUIDefaultsErrorHandling$1::init$() {
	$JLabel::init$();
}

$String* TestUIDefaultsErrorHandling$1::getUIClassID() {
	return "BrokenUI"_s;
}

TestUIDefaultsErrorHandling$1::TestUIDefaultsErrorHandling$1() {
}

$Class* TestUIDefaultsErrorHandling$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TestUIDefaultsErrorHandling$1, init$, void)},
		{"getUIClassID", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(TestUIDefaultsErrorHandling$1, getUIClassID, $String*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"TestUIDefaultsErrorHandling",
		"main",
		"([Ljava/lang/String;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"TestUIDefaultsErrorHandling$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"TestUIDefaultsErrorHandling$1",
		"javax.swing.JLabel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"TestUIDefaultsErrorHandling"
	};
	$loadClass(TestUIDefaultsErrorHandling$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(TestUIDefaultsErrorHandling$1));
	});
	return class$;
}

$Class* TestUIDefaultsErrorHandling$1::class$ = nullptr;
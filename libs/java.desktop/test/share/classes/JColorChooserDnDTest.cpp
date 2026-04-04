#include <JColorChooserDnDTest.h>
#include <JColorChooserDnDTest$1.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $JColorChooserDnDTest$1 = ::JColorChooserDnDTest$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void JColorChooserDnDTest::init$() {
}

void JColorChooserDnDTest::main($StringArray* args) {
	$SwingUtilities::invokeLater($$new($JColorChooserDnDTest$1));
}

JColorChooserDnDTest::JColorChooserDnDTest() {
}

$Class* JColorChooserDnDTest::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JColorChooserDnDTest, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(JColorChooserDnDTest, main, void, $StringArray*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"JColorChooserDnDTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"JColorChooserDnDTest",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"JColorChooserDnDTest$1"
	};
	$loadClass(JColorChooserDnDTest, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JColorChooserDnDTest);
	});
	return class$;
}

$Class* JColorChooserDnDTest::class$ = nullptr;
#include <Test6849805$Minimbus.h>
#include <Test6849805.h>
#include <java/awt/Color.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <jcpp.h>

using $Test6849805 = ::Test6849805;
using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;

void Test6849805$Minimbus::init$() {
	$NimbusLookAndFeel::init$();
}

void Test6849805$Minimbus::test($Color* c1, $Color* c2, float f) {
	$useLocalObjectStack();
	$var($Color, r, getDerivedColor(c1, c2, f));
	$var($Color, test, f > 0 ? c2 : c1);
	$nc($System::out)->printf("Got %s, need %s "_s, $$new($ObjectArray, {
		r,
		test
	}));
	int32_t var$1 = $nc(r)->getRGB();
	bool var$0 = var$1 == $nc(test)->getRGB();
	if (var$0) {
		int32_t var$2 = r->getAlpha();
		var$0 = var$2 == test->getAlpha();
	}
	if (var$0) {
		$System::out->println("Ok"_s);
	} else {
		$System::out->println("FAIL"_s);
		$init($Test6849805);
		$Test6849805::pass = false;
	}
}

Test6849805$Minimbus::Test6849805$Minimbus() {
}

$Class* Test6849805$Minimbus::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(Test6849805$Minimbus, init$, void)},
		{"test", "(Ljava/awt/Color;Ljava/awt/Color;F)V", nullptr, $PUBLIC, $virtualMethod(Test6849805$Minimbus, test, void, $Color*, $Color*, float)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"Test6849805$Minimbus", "Test6849805", "Minimbus", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"Test6849805$Minimbus",
		"javax.swing.plaf.nimbus.NimbusLookAndFeel",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"Test6849805"
	};
	$loadClass(Test6849805$Minimbus, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Test6849805$Minimbus));
	});
	return class$;
}

$Class* Test6849805$Minimbus::class$ = nullptr;
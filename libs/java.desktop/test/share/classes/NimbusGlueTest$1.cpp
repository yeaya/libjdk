#include <NimbusGlueTest$1.h>
#include <NimbusGlueTest.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Window.h>
#include <javax/swing/JFrame.h>
#include <javax/swing/JToolBar.h>
#include <jcpp.h>

using $NimbusGlueTest = ::NimbusGlueTest;
using $ComponentArray = $Array<::java::awt::Component>;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

void NimbusGlueTest$1::init$() {
}

void NimbusGlueTest$1::run() {
	$useLocalObjectStack();
	$var($Throwable, var$0, nullptr);
	try {
		int32_t width = 0;
		{
			$init($NimbusGlueTest);
			$var($ComponentArray, arr$, $nc($NimbusGlueTest::bar)->getComponents());
			for (int32_t len$ = $nc(arr$)->length, i$ = 0; i$ < len$; ++i$) {
				$var($Component, comp, arr$->get(i$));
				{
					width += $nc(comp)->getWidth();
				}
			}
		}
		if (width > 600) {
			$assignStatic($NimbusGlueTest::errorMessage, "Test Failed"_s);
		}
	} catch ($Throwable& var$1) {
		$assign(var$0, var$1);
	} /*finally*/ {
		$init($NimbusGlueTest);
		$nc($NimbusGlueTest::frame)->dispose();
	}
	if (var$0 != nullptr) {
		$throw(var$0);
	}
}

NimbusGlueTest$1::NimbusGlueTest$1() {
}

$Class* NimbusGlueTest$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(NimbusGlueTest$1, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(NimbusGlueTest$1, run, void)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"NimbusGlueTest",
		"performTest",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"NimbusGlueTest$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"NimbusGlueTest$1",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"NimbusGlueTest"
	};
	$loadClass(NimbusGlueTest$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusGlueTest$1);
	});
	return class$;
}

$Class* NimbusGlueTest$1::class$ = nullptr;
#include <bug6875153.h>
#include <bug6875153$1.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/JPanel.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

using $bug6875153$1 = ::bug6875153$1;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLayer = ::javax::swing::JLayer;
using $JPanel = ::javax::swing::JPanel;
using $SwingUtilities = ::javax::swing::SwingUtilities;

void bug6875153::init$() {
}

void bug6875153::createGui() {
	$var($JLayer, layer, $new($JLayer));
	layer->setGlassPane(nullptr);
	layer->isOptimizedDrawingEnabled();
}

void bug6875153::main($StringArray* args) {
	$SwingUtilities::invokeAndWait($$new($bug6875153$1));
}

bug6875153::bug6875153() {
}

$Class* bug6875153::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6875153, init$, void)},
		{"createGui", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(bug6875153, createGui, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6875153, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6875153$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6875153",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6875153$1"
	};
	$loadClass(bug6875153, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6875153);
	});
	return class$;
}

$Class* bug6875153::class$ = nullptr;
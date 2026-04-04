#include <bug6875716.h>
#include <bug6875716$1.h>
#include <java/awt/Component.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/JPanel.h>
#include <jcpp.h>

using $bug6875716$1 = ::bug6875716$1;
using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $JLayer = ::javax::swing::JLayer;
using $JPanel = ::javax::swing::JPanel;

void bug6875716::init$() {
}

void bug6875716::main($StringArray* args) {
	$useLocalObjectStack();
	$var($JLayer, layer, $new($JLayer, $$new($bug6875716$1)));
	layer->setGlassPane(nullptr);
	try {
		layer->remove(($Component*)nullptr);
	} catch ($NullPointerException& e) {
		return;
	}
	$throwNew($RuntimeException, "Test failed"_s);
}

bug6875716::bug6875716() {
}

$Class* bug6875716::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(bug6875716, init$, void)},
		{"main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(bug6875716, main, void, $StringArray*), "java.lang.Exception"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug6875716$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"bug6875716",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"bug6875716$1"
	};
	$loadClass(bug6875716, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(bug6875716);
	});
	return class$;
}

$Class* bug6875716::class$ = nullptr;
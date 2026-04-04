#include <javax/swing/RepaintManager$DisplayChangedRunnable.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/RepaintManager.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $RepaintManager = ::javax::swing::RepaintManager;

namespace javax {
	namespace swing {

void RepaintManager$DisplayChangedRunnable::init$() {
}

void RepaintManager$DisplayChangedRunnable::run() {
	$$nc($RepaintManager::currentManager(($JComponent*)nullptr))->displayChanged();
}

RepaintManager$DisplayChangedRunnable::RepaintManager$DisplayChangedRunnable() {
}

$Class* RepaintManager$DisplayChangedRunnable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(RepaintManager$DisplayChangedRunnable, init$, void)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(RepaintManager$DisplayChangedRunnable, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RepaintManager$DisplayChangedRunnable", "javax.swing.RepaintManager", "DisplayChangedRunnable", $PRIVATE | $STATIC | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.RepaintManager$DisplayChangedRunnable",
		"java.lang.Object",
		"java.lang.Runnable",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.RepaintManager"
	};
	$loadClass(RepaintManager$DisplayChangedRunnable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintManager$DisplayChangedRunnable);
	});
	return class$;
}

$Class* RepaintManager$DisplayChangedRunnable::class$ = nullptr;

	} // swing
} // javax
#include <javax/swing/RepaintManager$1.h>
#include <javax/swing/RepaintManager.h>
#include <sun/swing/SwingUtilities2$RepaintListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities2$RepaintListener = ::sun::swing::SwingUtilities2$RepaintListener;

namespace javax {
	namespace swing {

void RepaintManager$1::init$() {
}

void RepaintManager$1::addRepaintListener($RepaintManager* rm, $SwingUtilities2$RepaintListener* l) {
	$nc(rm)->addRepaintListener(l);
}

void RepaintManager$1::removeRepaintListener($RepaintManager* rm, $SwingUtilities2$RepaintListener* l) {
	$nc(rm)->removeRepaintListener(l);
}

RepaintManager$1::RepaintManager$1() {
}

$Class* RepaintManager$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(RepaintManager$1, init$, void)},
		{"addRepaintListener", "(Ljavax/swing/RepaintManager;Lsun/swing/SwingUtilities2$RepaintListener;)V", nullptr, $PUBLIC, $virtualMethod(RepaintManager$1, addRepaintListener, void, $RepaintManager*, $SwingUtilities2$RepaintListener*)},
		{"removeRepaintListener", "(Ljavax/swing/RepaintManager;Lsun/swing/SwingUtilities2$RepaintListener;)V", nullptr, $PUBLIC, $virtualMethod(RepaintManager$1, removeRepaintListener, void, $RepaintManager*, $SwingUtilities2$RepaintListener*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.RepaintManager",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.RepaintManager$1", nullptr, nullptr, 0},
		{"sun.swing.SwingAccessor$RepaintManagerAccessor", "sun.swing.SwingAccessor", "RepaintManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.RepaintManager$1",
		"java.lang.Object",
		"sun.swing.SwingAccessor$RepaintManagerAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.RepaintManager"
	};
	$loadClass(RepaintManager$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(RepaintManager$1);
	});
	return class$;
}

$Class* RepaintManager$1::class$ = nullptr;

	} // swing
} // javax
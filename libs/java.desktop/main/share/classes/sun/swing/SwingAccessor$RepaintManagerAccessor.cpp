#include <sun/swing/SwingAccessor$RepaintManagerAccessor.h>
#include <javax/swing/RepaintManager.h>
#include <sun/swing/SwingAccessor.h>
#include <sun/swing/SwingUtilities2$RepaintListener.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RepaintManager = ::javax::swing::RepaintManager;
using $SwingUtilities2$RepaintListener = ::sun::swing::SwingUtilities2$RepaintListener;

namespace sun {
	namespace swing {

$Class* SwingAccessor$RepaintManagerAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"addRepaintListener", "(Ljavax/swing/RepaintManager;Lsun/swing/SwingUtilities2$RepaintListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingAccessor$RepaintManagerAccessor, addRepaintListener, void, $RepaintManager*, $SwingUtilities2$RepaintListener*)},
		{"removeRepaintListener", "(Ljavax/swing/RepaintManager;Lsun/swing/SwingUtilities2$RepaintListener;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingAccessor$RepaintManagerAccessor, removeRepaintListener, void, $RepaintManager*, $SwingUtilities2$RepaintListener*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.SwingAccessor$RepaintManagerAccessor", "sun.swing.SwingAccessor", "RepaintManagerAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.SwingAccessor$RepaintManagerAccessor",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.SwingAccessor"
	};
	$loadClass(SwingAccessor$RepaintManagerAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingAccessor$RepaintManagerAccessor);
	});
	return class$;
}

$Class* SwingAccessor$RepaintManagerAccessor::class$ = nullptr;

	} // swing
} // sun
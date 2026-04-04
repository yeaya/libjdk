#include <sun/swing/SwingUtilities2$RepaintListener.h>
#include <javax/swing/JComponent.h>
#include <sun/swing/SwingUtilities2.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace sun {
	namespace swing {

$Class* SwingUtilities2$RepaintListener::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"repaintPerformed", "(Ljavax/swing/JComponent;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingUtilities2$RepaintListener, repaintPerformed, void, $JComponent*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.SwingUtilities2$RepaintListener", "sun.swing.SwingUtilities2", "RepaintListener", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.SwingUtilities2$RepaintListener",
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
		"sun.swing.SwingUtilities2"
	};
	$loadClass(SwingUtilities2$RepaintListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingUtilities2$RepaintListener);
	});
	return class$;
}

$Class* SwingUtilities2$RepaintListener::class$ = nullptr;

	} // swing
} // sun
#include <sun/swing/SwingAccessor$JComponentAccessor.h>
#include <javax/swing/JComponent.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace sun {
	namespace swing {

$Class* SwingAccessor$JComponentAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"compWriteObjectNotify", "(Ljavax/swing/JComponent;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingAccessor$JComponentAccessor, compWriteObjectNotify, void, $JComponent*)},
		{"getFlag", "(Ljavax/swing/JComponent;I)Z", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingAccessor$JComponentAccessor, getFlag, bool, $JComponent*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.SwingAccessor$JComponentAccessor", "sun.swing.SwingAccessor", "JComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.SwingAccessor$JComponentAccessor",
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
	$loadClass(SwingAccessor$JComponentAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingAccessor$JComponentAccessor);
	});
	return class$;
}

$Class* SwingAccessor$JComponentAccessor::class$ = nullptr;

	} // swing
} // sun
#include <sun/swing/SwingAccessor$PopupFactoryAccessor.h>
#include <java/awt/Component.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory.h>
#include <sun/swing/SwingAccessor.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Popup = ::javax::swing::Popup;
using $PopupFactory = ::javax::swing::PopupFactory;

namespace sun {
	namespace swing {

$Class* SwingAccessor$PopupFactoryAccessor::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getHeavyWeightPopup", "(Ljavax/swing/PopupFactory;Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SwingAccessor$PopupFactoryAccessor, getHeavyWeightPopup, $Popup*, $PopupFactory*, $Component*, $Component*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.SwingAccessor$PopupFactoryAccessor", "sun.swing.SwingAccessor", "PopupFactoryAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"sun.swing.SwingAccessor$PopupFactoryAccessor",
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
	$loadClass(SwingAccessor$PopupFactoryAccessor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwingAccessor$PopupFactoryAccessor);
	});
	return class$;
}

$Class* SwingAccessor$PopupFactoryAccessor::class$ = nullptr;

	} // swing
} // sun
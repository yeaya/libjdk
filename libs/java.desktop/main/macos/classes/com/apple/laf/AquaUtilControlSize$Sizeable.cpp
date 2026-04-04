#include <com/apple/laf/AquaUtilControlSize$Sizeable.h>
#include <apple/laf/JRSUIConstants$Size.h>
#include <com/apple/laf/AquaUtilControlSize.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $JRSUIConstants$Size = ::apple::laf::JRSUIConstants$Size;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

$Class* AquaUtilControlSize$Sizeable::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"applySizeFor", "(Ljavax/swing/JComponent;Lapple/laf/JRSUIConstants$Size;)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AquaUtilControlSize$Sizeable, applySizeFor, void, $JComponent*, $JRSUIConstants$Size*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtilControlSize$Sizeable", "com.apple.laf.AquaUtilControlSize", "Sizeable", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.apple.laf.AquaUtilControlSize$Sizeable",
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
		"com.apple.laf.AquaUtilControlSize"
	};
	$loadClass(AquaUtilControlSize$Sizeable, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtilControlSize$Sizeable);
	});
	return class$;
}

$Class* AquaUtilControlSize$Sizeable::class$ = nullptr;

		} // laf
	} // apple
} // com
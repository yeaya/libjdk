#include <com/apple/laf/AquaUtils$JComponentPainter.h>
#include <com/apple/laf/AquaUtils.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;

namespace com {
	namespace apple {
		namespace laf {

$Class* AquaUtils$JComponentPainter::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"paint", "(Ljavax/swing/JComponent;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AquaUtils$JComponentPainter, paint, void, $JComponent*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaUtils$JComponentPainter", "com.apple.laf.AquaUtils", "JComponentPainter", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.apple.laf.AquaUtils$JComponentPainter",
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
		"com.apple.laf.AquaUtils"
	};
	$loadClass(AquaUtils$JComponentPainter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaUtils$JComponentPainter);
	});
	return class$;
}

$Class* AquaUtils$JComponentPainter::class$ = nullptr;

		} // laf
	} // apple
} // com
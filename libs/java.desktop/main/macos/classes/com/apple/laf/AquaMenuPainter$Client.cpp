#include <com/apple/laf/AquaMenuPainter$Client.h>
#include <com/apple/laf/AquaMenuPainter.h>
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

$Class* AquaMenuPainter$Client::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"paintBackground", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;II)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(AquaMenuPainter$Client, paintBackground, void, $Graphics*, $JComponent*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaMenuPainter$Client", "com.apple.laf.AquaMenuPainter", "Client", $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$INTERFACE | $ABSTRACT,
		"com.apple.laf.AquaMenuPainter$Client",
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
		"com.apple.laf.AquaMenuPainter"
	};
	$loadClass(AquaMenuPainter$Client, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaMenuPainter$Client);
	});
	return class$;
}

$Class* AquaMenuPainter$Client::class$ = nullptr;

		} // laf
	} // apple
} // com
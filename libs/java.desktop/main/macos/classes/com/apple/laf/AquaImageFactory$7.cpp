#include <com/apple/laf/AquaImageFactory$7.h>
#include <apple/laf/JRSUIConstants$AlignmentHorizontal.h>
#include <apple/laf/JRSUIConstants$AlignmentVertical.h>
#include <apple/laf/JRSUIConstants$Direction.h>
#include <apple/laf/JRSUIConstants$State.h>
#include <apple/laf/JRSUIConstants$Widget.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaPainter.h>
#include <jcpp.h>

#undef ACTIVE
#undef CENTER
#undef DISCLOSURE_TRIANGLE
#undef LEFT

using $JRSUIConstants$AlignmentHorizontal = ::apple::laf::JRSUIConstants$AlignmentHorizontal;
using $JRSUIConstants$AlignmentVertical = ::apple::laf::JRSUIConstants$AlignmentVertical;
using $JRSUIConstants$Direction = ::apple::laf::JRSUIConstants$Direction;
using $JRSUIConstants$State = ::apple::laf::JRSUIConstants$State;
using $JRSUIConstants$Widget = ::apple::laf::JRSUIConstants$Widget;
using $AquaPainter = ::com::apple::laf::AquaPainter;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaImageFactory$7::init$() {
}

void AquaImageFactory$7::initIconPainter($AquaPainter* painter) {
	$init($JRSUIConstants$Widget);
	$nc($nc(painter)->state)->set($JRSUIConstants$Widget::DISCLOSURE_TRIANGLE);
	$init($JRSUIConstants$State);
	$nc(painter->state)->set($JRSUIConstants$State::ACTIVE);
	$init($JRSUIConstants$Direction);
	$nc(painter->state)->set($JRSUIConstants$Direction::LEFT);
	$init($JRSUIConstants$AlignmentHorizontal);
	$nc(painter->state)->set($JRSUIConstants$AlignmentHorizontal::CENTER);
	$init($JRSUIConstants$AlignmentVertical);
	$nc(painter->state)->set($JRSUIConstants$AlignmentVertical::CENTER);
}

AquaImageFactory$7::AquaImageFactory$7() {
}

$Class* AquaImageFactory$7::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaImageFactory$7, init$, void)},
		{"initIconPainter", "(Lcom/apple/laf/AquaPainter;)V", "(Lcom/apple/laf/AquaPainter<+Lapple/laf/JRSUIState;>;)V", $PUBLIC, $virtualMethod(AquaImageFactory$7, initIconPainter, void, $AquaPainter*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"com.apple.laf.AquaImageFactory",
		"getTreeRightToLeftCollapsedIcon",
		"()Ljavax/swing/plaf/UIResource;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaImageFactory$7", nullptr, nullptr, 0},
		{"com.apple.laf.AquaIcon$JRSUIControlSpec", "com.apple.laf.AquaIcon", "JRSUIControlSpec", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaImageFactory$7",
		"java.lang.Object",
		"com.apple.laf.AquaIcon$JRSUIControlSpec",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaImageFactory"
	};
	$loadClass(AquaImageFactory$7, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaImageFactory$7);
	});
	return class$;
}

$Class* AquaImageFactory$7::class$ = nullptr;

		} // laf
	} // apple
} // com
#include <javax/swing/plaf/nimbus/InnerGlowEffect.h>
#include <java/awt/Color.h>
#include <javax/swing/plaf/nimbus/InnerShadowEffect.h>
#include <javax/swing/plaf/nimbus/ShadowEffect.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InnerShadowEffect = ::javax::swing::plaf::nimbus::InnerShadowEffect;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void InnerGlowEffect::init$() {
	$InnerShadowEffect::init$();
	this->distance = 0;
	$set(this, color, $new($Color, 255, 255, 211));
}

InnerGlowEffect::InnerGlowEffect() {
}

$Class* InnerGlowEffect::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(InnerGlowEffect, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.InnerGlowEffect",
		"javax.swing.plaf.nimbus.InnerShadowEffect",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(InnerGlowEffect, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(InnerGlowEffect);
	});
	return class$;
}

$Class* InnerGlowEffect::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
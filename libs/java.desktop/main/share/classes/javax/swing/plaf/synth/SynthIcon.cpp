#include <javax/swing/plaf/synth/SynthIcon.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	int32_t var$0 = getIconWidth();
	paintIcon(nullptr, g, x, y, var$0, getIconHeight());
}

int32_t SynthIcon::getIconWidth() {
	return getIconWidth(nullptr);
}

int32_t SynthIcon::getIconHeight() {
	return getIconHeight(nullptr);
}

$Class* SynthIcon::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getIconHeight", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SynthIcon, getIconHeight, int32_t, $SynthContext*)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(SynthIcon, getIconHeight, int32_t)},
		{"getIconWidth", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SynthIcon, getIconWidth, int32_t, $SynthContext*)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(SynthIcon, getIconWidth, int32_t)},
		{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SynthIcon, paintIcon, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(SynthIcon, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.plaf.synth.SynthIcon",
		nullptr,
		"javax.swing.Icon",
		nullptr,
		methodInfos$$
	};
	$loadClass(SynthIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthIcon);
	});
	return class$;
}

$Class* SynthIcon::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
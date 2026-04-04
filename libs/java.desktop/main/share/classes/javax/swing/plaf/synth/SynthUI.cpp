#include <javax/swing/plaf/synth/SynthUI.h>
#include <java/awt/Graphics.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$Class* SynthUI::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"getContext", "(Ljavax/swing/JComponent;)Ljavax/swing/plaf/synth/SynthContext;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SynthUI, getContext, $SynthContext*, $JComponent*)},
		{"paintBorder", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(SynthUI, paintBorder, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.swing.plaf.synth.SynthUI",
		nullptr,
		"javax.swing.plaf.synth.SynthConstants",
		nullptr,
		methodInfos$$
	};
	$loadClass(SynthUI, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthUI);
	});
	return class$;
}

$Class* SynthUI::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
#include <javax/swing/plaf/synth/SynthSplitPaneUI$1.h>
#include <java/awt/Canvas.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/plaf/synth/SynthSplitPaneUI.h>
#include <jcpp.h>

using $Canvas = ::java::awt::Canvas;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthSplitPaneUI = ::javax::swing::plaf::synth::SynthSplitPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthSplitPaneUI$1::init$($SynthSplitPaneUI* this$0) {
	$set(this, this$0, this$0);
	$Canvas::init$();
}

void SynthSplitPaneUI$1::paint($Graphics* g) {
	int32_t var$0 = getWidth();
	this->this$0->paintDragDivider(g, 0, 0, var$0, getHeight());
}

SynthSplitPaneUI$1::SynthSplitPaneUI$1() {
}

$Class* SynthSplitPaneUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthSplitPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthSplitPaneUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthSplitPaneUI;)V", nullptr, 0, $method(SynthSplitPaneUI$1, init$, void, $SynthSplitPaneUI*)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(SynthSplitPaneUI$1, paint, void, $Graphics*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.synth.SynthSplitPaneUI",
		"createDefaultNonContinuousLayoutDivider",
		"()Ljava/awt/Component;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthSplitPaneUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthSplitPaneUI$1",
		"java.awt.Canvas",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthSplitPaneUI"
	};
	$loadClass(SynthSplitPaneUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthSplitPaneUI$1));
	});
	return class$;
}

$Class* SynthSplitPaneUI$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
#include <javax/swing/plaf/synth/SynthScrollBarUI$1.h>
#include <javax/swing/JScrollBar.h>
#include <javax/swing/plaf/synth/SynthArrowButton.h>
#include <javax/swing/plaf/synth/SynthScrollBarUI.h>
#include <jcpp.h>

#undef VERTICAL

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JScrollBar = ::javax::swing::JScrollBar;
using $SynthArrowButton = ::javax::swing::plaf::synth::SynthArrowButton;
using $SynthScrollBarUI = ::javax::swing::plaf::synth::SynthScrollBarUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthScrollBarUI$1::init$($SynthScrollBarUI* this$0, int32_t direction) {
	$set(this, this$0, this$0);
	$SynthArrowButton::init$(direction);
}

bool SynthScrollBarUI$1::contains(int32_t x, int32_t y) {
	if ($SynthScrollBarUI::access$000(this->this$0) < 0) {
		int32_t width = getWidth();
		int32_t height = getHeight();
		if ($$nc($SynthScrollBarUI::access$100(this->this$0))->getOrientation() == $JScrollBar::VERTICAL) {
			height += $SynthScrollBarUI::access$200(this->this$0);
		} else {
			width += $SynthScrollBarUI::access$300(this->this$0);
		}
		return (x >= 0) && (x < width) && (y >= 0) && (y < height);
	}
	return $SynthArrowButton::contains(x, y);
}

SynthScrollBarUI$1::SynthScrollBarUI$1() {
}

$Class* SynthScrollBarUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthScrollBarUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthScrollBarUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthScrollBarUI;I)V", nullptr, 0, $method(SynthScrollBarUI$1, init$, void, $SynthScrollBarUI*, int32_t)},
		{"contains", "(II)Z", nullptr, $PUBLIC, $virtualMethod(SynthScrollBarUI$1, contains, bool, int32_t, int32_t)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.plaf.synth.SynthScrollBarUI",
		"createDecreaseButton",
		"(I)Ljavax/swing/JButton;"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthScrollBarUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthScrollBarUI$1",
		"javax.swing.plaf.synth.SynthArrowButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthScrollBarUI"
	};
	$loadClass(SynthScrollBarUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthScrollBarUI$1));
	});
	return class$;
}

$Class* SynthScrollBarUI$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
#include <javax/swing/plaf/synth/SynthTabbedPaneUI$SynthScrollableTabButton.h>
#include <java/awt/Component.h>
#include <javax/swing/plaf/synth/SynthArrowButton.h>
#include <javax/swing/plaf/synth/SynthTabbedPaneUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthArrowButton = ::javax::swing::plaf::synth::SynthArrowButton;
using $SynthTabbedPaneUI = ::javax::swing::plaf::synth::SynthTabbedPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthTabbedPaneUI$SynthScrollableTabButton::init$($SynthTabbedPaneUI* this$0, int32_t direction) {
	$set(this, this$0, this$0);
	$SynthArrowButton::init$(direction);
	setName("TabbedPane.button"_s);
}

SynthTabbedPaneUI$SynthScrollableTabButton::SynthTabbedPaneUI$SynthScrollableTabButton() {
}

$Class* SynthTabbedPaneUI$SynthScrollableTabButton::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthTabbedPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTabbedPaneUI$SynthScrollableTabButton, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthTabbedPaneUI;I)V", nullptr, $PUBLIC, $method(SynthTabbedPaneUI$SynthScrollableTabButton, init$, void, $SynthTabbedPaneUI*, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthTabbedPaneUI$SynthScrollableTabButton", "javax.swing.plaf.synth.SynthTabbedPaneUI", "SynthScrollableTabButton", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthTabbedPaneUI$SynthScrollableTabButton",
		"javax.swing.plaf.synth.SynthArrowButton",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthTabbedPaneUI"
	};
	$loadClass(SynthTabbedPaneUI$SynthScrollableTabButton, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthTabbedPaneUI$SynthScrollableTabButton));
	});
	return class$;
}

$Class* SynthTabbedPaneUI$SynthScrollableTabButton::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
#include <sun/swing/plaf/synth/SynthFileChooserUI$DelayedSelectionUpdater.h>
#include <javax/swing/SwingUtilities.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwingUtilities = ::javax::swing::SwingUtilities;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthFileChooserUI$DelayedSelectionUpdater::init$($SynthFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$SwingUtilities::invokeLater(this);
}

void SynthFileChooserUI$DelayedSelectionUpdater::run() {
	this->this$0->updateFileNameCompletion();
}

SynthFileChooserUI$DelayedSelectionUpdater::SynthFileChooserUI$DelayedSelectionUpdater() {
}

$Class* SynthFileChooserUI$DelayedSelectionUpdater::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUI$DelayedSelectionUpdater, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUI;)V", nullptr, 0, $method(SynthFileChooserUI$DelayedSelectionUpdater, init$, void, $SynthFileChooserUI*)},
		{"run", "()V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUI$DelayedSelectionUpdater, run, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.plaf.synth.SynthFileChooserUI$DelayedSelectionUpdater", "sun.swing.plaf.synth.SynthFileChooserUI", "DelayedSelectionUpdater", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.plaf.synth.SynthFileChooserUI$DelayedSelectionUpdater",
		"java.lang.Object",
		"java.lang.Runnable",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.plaf.synth.SynthFileChooserUI"
	};
	$loadClass(SynthFileChooserUI$DelayedSelectionUpdater, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthFileChooserUI$DelayedSelectionUpdater);
	});
	return class$;
}

$Class* SynthFileChooserUI$DelayedSelectionUpdater::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun
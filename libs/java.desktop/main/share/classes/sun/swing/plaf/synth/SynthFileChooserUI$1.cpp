#include <sun/swing/plaf/synth/SynthFileChooserUI$1.h>
#include <javax/swing/event/ListDataEvent.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI$DelayedSelectionUpdater.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListDataEvent = ::javax::swing::event::ListDataEvent;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;
using $SynthFileChooserUI$DelayedSelectionUpdater = ::sun::swing::plaf::synth::SynthFileChooserUI$DelayedSelectionUpdater;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthFileChooserUI$1::init$($SynthFileChooserUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthFileChooserUI$1::contentsChanged($ListDataEvent* e) {
	$new($SynthFileChooserUI$DelayedSelectionUpdater, this->this$0);
}

void SynthFileChooserUI$1::intervalAdded($ListDataEvent* e) {
	$new($SynthFileChooserUI$DelayedSelectionUpdater, this->this$0);
}

void SynthFileChooserUI$1::intervalRemoved($ListDataEvent* e) {
}

SynthFileChooserUI$1::SynthFileChooserUI$1() {
}

$Class* SynthFileChooserUI$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUI$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUI;)V", nullptr, 0, $method(SynthFileChooserUI$1, init$, void, $SynthFileChooserUI*)},
		{"contentsChanged", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUI$1, contentsChanged, void, $ListDataEvent*)},
		{"intervalAdded", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUI$1, intervalAdded, void, $ListDataEvent*)},
		{"intervalRemoved", "(Ljavax/swing/event/ListDataEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUI$1, intervalRemoved, void, $ListDataEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"sun.swing.plaf.synth.SynthFileChooserUI",
		"installListeners",
		"(Ljavax/swing/JFileChooser;)V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.plaf.synth.SynthFileChooserUI$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.plaf.synth.SynthFileChooserUI$1",
		"java.lang.Object",
		"javax.swing.event.ListDataListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.plaf.synth.SynthFileChooserUI"
	};
	$loadClass(SynthFileChooserUI$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthFileChooserUI$1);
	});
	return class$;
}

$Class* SynthFileChooserUI$1::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun
#include <javax/swing/plaf/synth/SynthSpinnerUI$EditorFocusHandler.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/plaf/synth/SynthSpinnerUI.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthSpinnerUI = ::javax::swing::plaf::synth::SynthSpinnerUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthSpinnerUI$EditorFocusHandler::init$($SynthSpinnerUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthSpinnerUI$EditorFocusHandler::focusGained($FocusEvent* e) {
	$$nc($SynthSpinnerUI::access$000(this->this$0))->repaint();
}

void SynthSpinnerUI$EditorFocusHandler::focusLost($FocusEvent* e) {
	$$nc($SynthSpinnerUI::access$100(this->this$0))->repaint();
}

SynthSpinnerUI$EditorFocusHandler::SynthSpinnerUI$EditorFocusHandler() {
}

$Class* SynthSpinnerUI$EditorFocusHandler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthSpinnerUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthSpinnerUI$EditorFocusHandler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthSpinnerUI;)V", nullptr, $PRIVATE, $method(SynthSpinnerUI$EditorFocusHandler, init$, void, $SynthSpinnerUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthSpinnerUI$EditorFocusHandler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthSpinnerUI$EditorFocusHandler, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthSpinnerUI$EditorFocusHandler", "javax.swing.plaf.synth.SynthSpinnerUI", "EditorFocusHandler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthSpinnerUI$EditorFocusHandler",
		"java.lang.Object",
		"java.awt.event.FocusListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthSpinnerUI"
	};
	$loadClass(SynthSpinnerUI$EditorFocusHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthSpinnerUI$EditorFocusHandler);
	});
	return class$;
}

$Class* SynthSpinnerUI$EditorFocusHandler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
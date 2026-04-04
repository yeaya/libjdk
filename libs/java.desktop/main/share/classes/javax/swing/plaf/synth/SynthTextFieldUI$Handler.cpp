#include <javax/swing/plaf/synth/SynthTextFieldUI$Handler.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/synth/SynthTextFieldUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthTextFieldUI = ::javax::swing::plaf::synth::SynthTextFieldUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthTextFieldUI$Handler::init$($SynthTextFieldUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthTextFieldUI$Handler::focusGained($FocusEvent* e) {
	$$nc($SynthTextFieldUI::access$000(this->this$0))->repaint();
}

void SynthTextFieldUI$Handler::focusLost($FocusEvent* e) {
	$$nc($SynthTextFieldUI::access$100(this->this$0))->repaint();
}

SynthTextFieldUI$Handler::SynthTextFieldUI$Handler() {
}

$Class* SynthTextFieldUI$Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthTextFieldUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTextFieldUI$Handler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthTextFieldUI;)V", nullptr, $PRIVATE, $method(SynthTextFieldUI$Handler, init$, void, $SynthTextFieldUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthTextFieldUI$Handler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthTextFieldUI$Handler, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthTextFieldUI$Handler", "javax.swing.plaf.synth.SynthTextFieldUI", "Handler", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthTextFieldUI$Handler",
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
		"javax.swing.plaf.synth.SynthTextFieldUI"
	};
	$loadClass(SynthTextFieldUI$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthTextFieldUI$Handler);
	});
	return class$;
}

$Class* SynthTextFieldUI$Handler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
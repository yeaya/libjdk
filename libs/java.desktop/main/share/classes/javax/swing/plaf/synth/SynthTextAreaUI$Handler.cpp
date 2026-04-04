#include <javax/swing/plaf/synth/SynthTextAreaUI$Handler.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/plaf/synth/SynthTextAreaUI.h>
#include <javax/swing/text/JTextComponent.h>
#include <jcpp.h>

using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthTextAreaUI = ::javax::swing::plaf::synth::SynthTextAreaUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthTextAreaUI$Handler::init$($SynthTextAreaUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthTextAreaUI$Handler::focusGained($FocusEvent* e) {
	$$nc($SynthTextAreaUI::access$000(this->this$0))->repaint();
}

void SynthTextAreaUI$Handler::focusLost($FocusEvent* e) {
	$$nc($SynthTextAreaUI::access$100(this->this$0))->repaint();
}

SynthTextAreaUI$Handler::SynthTextAreaUI$Handler() {
}

$Class* SynthTextAreaUI$Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthTextAreaUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTextAreaUI$Handler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthTextAreaUI;)V", nullptr, $PRIVATE, $method(SynthTextAreaUI$Handler, init$, void, $SynthTextAreaUI*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthTextAreaUI$Handler, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthTextAreaUI$Handler, focusLost, void, $FocusEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthTextAreaUI$Handler", "javax.swing.plaf.synth.SynthTextAreaUI", "Handler", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthTextAreaUI$Handler",
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
		"javax.swing.plaf.synth.SynthTextAreaUI"
	};
	$loadClass(SynthTextAreaUI$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthTextAreaUI$Handler);
	});
	return class$;
}

$Class* SynthTextAreaUI$Handler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
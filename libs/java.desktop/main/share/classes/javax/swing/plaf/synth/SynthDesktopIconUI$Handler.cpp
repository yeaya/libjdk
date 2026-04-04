#include <javax/swing/plaf/synth/SynthDesktopIconUI$Handler.h>
#include <java/awt/event/ActionEvent.h>
#include <java/beans/PropertyVetoException.h>
#include <java/util/EventObject.h>
#include <javax/swing/JInternalFrame.h>
#include <javax/swing/JToggleButton.h>
#include <javax/swing/plaf/synth/SynthDesktopIconUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $PropertyVetoException = ::java::beans::PropertyVetoException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JToggleButton = ::javax::swing::JToggleButton;
using $SynthDesktopIconUI = ::javax::swing::plaf::synth::SynthDesktopIconUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthDesktopIconUI$Handler::init$($SynthDesktopIconUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthDesktopIconUI$Handler::actionPerformed($ActionEvent* evt) {
	$useLocalObjectStack();
	if ($instanceOf($JToggleButton, $($nc(evt)->getSource()))) {
		$var($JToggleButton, button, $cast($JToggleButton, evt->getSource()));
		try {
			bool selected = $nc(button)->isSelected();
			if (!selected && !$$nc($SynthDesktopIconUI::access$100(this->this$0))->isIconifiable()) {
				button->setSelected(true);
			} else {
				$$nc($SynthDesktopIconUI::access$200(this->this$0))->setIcon(!selected);
				if (selected) {
					$$nc($SynthDesktopIconUI::access$300(this->this$0))->setSelected(true);
				}
			}
		} catch ($PropertyVetoException& e2) {
		}
	}
}

SynthDesktopIconUI$Handler::SynthDesktopIconUI$Handler() {
}

$Class* SynthDesktopIconUI$Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthDesktopIconUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthDesktopIconUI$Handler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthDesktopIconUI;)V", nullptr, $PRIVATE, $method(SynthDesktopIconUI$Handler, init$, void, $SynthDesktopIconUI*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthDesktopIconUI$Handler, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthDesktopIconUI$Handler", "javax.swing.plaf.synth.SynthDesktopIconUI", "Handler", $PRIVATE | $FINAL},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.plaf.synth.SynthDesktopIconUI$Handler",
		"java.lang.Object",
		"java.awt.event.ActionListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthDesktopIconUI"
	};
	$loadClass(SynthDesktopIconUI$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthDesktopIconUI$Handler);
	});
	return class$;
}

$Class* SynthDesktopIconUI$Handler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
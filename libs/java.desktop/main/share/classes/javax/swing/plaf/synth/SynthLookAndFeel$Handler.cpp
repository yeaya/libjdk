#include <javax/swing/plaf/synth/SynthLookAndFeel$Handler.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/KeyboardFocusManager.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <javax/swing/plaf/synth/SynthConstants.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthUI.h>
#include <jcpp.h>

#undef BACKGROUND
#undef FALSE
#undef FOCUSED

using $Color = ::java::awt::Color;
using $KeyboardFocusManager = ::java::awt::KeyboardFocusManager;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $ColorType = ::javax::swing::plaf::synth::ColorType;
using $SynthConstants = ::javax::swing::plaf::synth::SynthConstants;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthUI = ::javax::swing::plaf::synth::SynthUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthLookAndFeel$Handler::init$($SynthLookAndFeel* this$0) {
	$set(this, this$0, this$0);
}

void SynthLookAndFeel$Handler::propertyChange($PropertyChangeEvent* evt) {
	$useLocalObjectStack();
	$var($String, propertyName, $nc(evt)->getPropertyName());
	$var($Object, newValue, evt->getNewValue());
	$var($Object, oldValue, evt->getOldValue());
	if ("focusOwner"_s == propertyName) {
		if ($instanceOf($JComponent, oldValue)) {
			repaintIfBackgroundsDiffer($cast($JComponent, oldValue));
		}
		if ($instanceOf($JComponent, newValue)) {
			repaintIfBackgroundsDiffer($cast($JComponent, newValue));
		}
	} else if ("managingFocus"_s == propertyName) {
		$var($KeyboardFocusManager, manager, $cast($KeyboardFocusManager, evt->getSource()));
		if ($nc(newValue)->equals($Boolean::FALSE)) {
			$nc(manager)->removePropertyChangeListener(this->this$0->_handler);
		} else {
			$nc(manager)->addPropertyChangeListener(this->this$0->_handler);
		}
	}
}

void SynthLookAndFeel$Handler::repaintIfBackgroundsDiffer($JComponent* comp) {
	$useLocalObjectStack();
	$var($ComponentUI, ui, $nc(comp)->getUI());
	if ($instanceOf($SynthUI, ui)) {
		$var($SynthUI, synthUI, $cast($SynthUI, ui));
		$var($SynthContext, context, synthUI->getContext(comp));
		$var($SynthStyle, style, $nc(context)->getStyle());
		int32_t state = context->getComponentState();
		$init($ColorType);
		$var($Color, currBG, $nc(style)->getColor(context, $ColorType::BACKGROUND));
		state ^= $SynthConstants::FOCUSED;
		context->setComponentState(state);
		$var($Color, lastBG, style->getColor(context, $ColorType::BACKGROUND));
		state ^= $SynthConstants::FOCUSED;
		context->setComponentState(state);
		if (currBG != nullptr && !currBG->equals(lastBG)) {
			comp->repaint();
		}
	}
}

SynthLookAndFeel$Handler::SynthLookAndFeel$Handler() {
}

$Class* SynthLookAndFeel$Handler::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthLookAndFeel;", nullptr, $FINAL | $SYNTHETIC, $field(SynthLookAndFeel$Handler, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthLookAndFeel;)V", nullptr, $PRIVATE, $method(SynthLookAndFeel$Handler, init$, void, $SynthLookAndFeel*)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(SynthLookAndFeel$Handler, propertyChange, void, $PropertyChangeEvent*)},
		{"repaintIfBackgroundsDiffer", "(Ljavax/swing/JComponent;)V", nullptr, $PRIVATE, $method(SynthLookAndFeel$Handler, repaintIfBackgroundsDiffer, void, $JComponent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthLookAndFeel$Handler", "javax.swing.plaf.synth.SynthLookAndFeel", "Handler", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthLookAndFeel$Handler",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthLookAndFeel"
	};
	$loadClass(SynthLookAndFeel$Handler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthLookAndFeel$Handler);
	});
	return class$;
}

$Class* SynthLookAndFeel$Handler::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
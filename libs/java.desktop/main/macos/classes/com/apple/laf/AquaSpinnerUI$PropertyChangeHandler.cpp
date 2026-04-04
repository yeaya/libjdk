#include <com/apple/laf/AquaSpinnerUI$PropertyChangeHandler.h>
#include <com/apple/laf/AquaSpinnerUI$ArrowButtonHandler.h>
#include <com/apple/laf/AquaSpinnerUI.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Font.h>
#include <java/beans/PropertyChangeEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JFormattedTextField.h>
#include <javax/swing/JSpinner$DefaultEditor.h>
#include <javax/swing/JSpinner.h>
#include <javax/swing/JTextField.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/FontUIResource.h>
#include <javax/swing/plaf/SpinnerUI.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

#undef TOOL_TIP_TEXT_KEY

using $AquaSpinnerUI = ::com::apple::laf::AquaSpinnerUI;
using $ComponentOrientation = ::java::awt::ComponentOrientation;
using $Font = ::java::awt::Font;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JSpinner = ::javax::swing::JSpinner;
using $JSpinner$DefaultEditor = ::javax::swing::JSpinner$DefaultEditor;
using $JTextField = ::javax::swing::JTextField;
using $FontUIResource = ::javax::swing::plaf::FontUIResource;
using $SpinnerUI = ::javax::swing::plaf::SpinnerUI;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace com {
	namespace apple {
		namespace laf {

void AquaSpinnerUI$PropertyChangeHandler::init$() {
}

void AquaSpinnerUI$PropertyChangeHandler::propertyChange($PropertyChangeEvent* e) {
	$useLocalObjectStack();
	$var($String, propertyName, $nc(e)->getPropertyName());
	$var($JSpinner, spinner, $cast($JSpinner, e->getSource()));
	$var($SpinnerUI, spinnerUI, $cast($SpinnerUI, $nc(spinner)->getUI()));
	if ($instanceOf($AquaSpinnerUI, spinnerUI)) {
		$var($AquaSpinnerUI, ui, $cast($AquaSpinnerUI, spinnerUI));
		if ("editor"_s->equals(propertyName)) {
			$var($JComponent, oldEditor, $cast($JComponent, e->getOldValue()));
			$var($JComponent, newEditor, $cast($JComponent, e->getNewValue()));
			ui->replaceEditor(oldEditor, newEditor);
			ui->updateEnabledState();
			if ($instanceOf($JSpinner$DefaultEditor, oldEditor)) {
				$var($JTextField, tf, $cast($JSpinner$DefaultEditor, oldEditor)->getTextField());
				if (tf != nullptr) {
					tf->removeFocusListener($($AquaSpinnerUI::getNextButtonHandler()));
					tf->removeFocusListener($($AquaSpinnerUI::getPreviousButtonHandler()));
				}
			}
			if ($instanceOf($JSpinner$DefaultEditor, newEditor)) {
				$var($JTextField, tf, $cast($JSpinner$DefaultEditor, newEditor)->getTextField());
				if (tf != nullptr) {
					if ($instanceOf($UIResource, $(tf->getFont()))) {
						$var($Font, font, spinner->getFont());
						tf->setFont(font == nullptr ? ($Font*)nullptr : $$cast($Font, $new($FontUIResource, font)));
					}
					tf->addFocusListener($($AquaSpinnerUI::getNextButtonHandler()));
					tf->addFocusListener($($AquaSpinnerUI::getPreviousButtonHandler()));
				}
			}
		} else if ("componentOrientation"_s->equals(propertyName)) {
			$var($ComponentOrientation, o, $cast($ComponentOrientation, e->getNewValue()));
			if (!$equals(o, e->getOldValue())) {
				$var($JComponent, editor, spinner->getEditor());
				if (editor != nullptr) {
					editor->applyComponentOrientation(o);
				}
				spinner->revalidate();
				spinner->repaint();
			}
		} else if ("enabled"_s->equals(propertyName)) {
			ui->updateEnabledState();
		} else {
			$init($JComponent);
			if ($nc($JComponent::TOOL_TIP_TEXT_KEY)->equals(propertyName)) {
				ui->updateToolTipTextForChildren(spinner);
			} else if ("font"_s->equals(propertyName)) {
				$var($JComponent, editor, spinner->getEditor());
				if ($instanceOf($JSpinner$DefaultEditor, editor)) {
					$var($JTextField, tf, $cast($JSpinner$DefaultEditor, editor)->getTextField());
					if (tf != nullptr) {
						if ($instanceOf($UIResource, $(tf->getFont()))) {
							$var($Font, font, spinner->getFont());
							tf->setFont(font == nullptr ? ($Font*)nullptr : $$cast($Font, $new($FontUIResource, font)));
						}
					}
				}
			}
		}
	}
}

AquaSpinnerUI$PropertyChangeHandler::AquaSpinnerUI$PropertyChangeHandler() {
}

$Class* AquaSpinnerUI$PropertyChangeHandler::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(AquaSpinnerUI$PropertyChangeHandler, init$, void)},
		{"propertyChange", "(Ljava/beans/PropertyChangeEvent;)V", nullptr, $PUBLIC, $virtualMethod(AquaSpinnerUI$PropertyChangeHandler, propertyChange, void, $PropertyChangeEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaSpinnerUI$PropertyChangeHandler", "com.apple.laf.AquaSpinnerUI", "PropertyChangeHandler", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaSpinnerUI$PropertyChangeHandler",
		"java.lang.Object",
		"java.beans.PropertyChangeListener",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaSpinnerUI"
	};
	$loadClass(AquaSpinnerUI$PropertyChangeHandler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaSpinnerUI$PropertyChangeHandler);
	});
	return class$;
}

$Class* AquaSpinnerUI$PropertyChangeHandler::class$ = nullptr;

		} // laf
	} // apple
} // com
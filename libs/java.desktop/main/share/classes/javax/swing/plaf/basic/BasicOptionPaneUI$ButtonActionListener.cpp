#include <javax/swing/plaf/basic/BasicOptionPaneUI$ButtonActionListener.h>
#include <java/awt/event/ActionEvent.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <jcpp.h>

#undef DEFAULT_OPTION
#undef OK_CANCEL_OPTION
#undef YES_NO_CANCEL_OPTION
#undef YES_NO_OPTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;
using $BasicOptionPaneUI = ::javax::swing::plaf::basic::BasicOptionPaneUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicOptionPaneUI$ButtonActionListener::init$($BasicOptionPaneUI* this$0, int32_t buttonIndex) {
	$set(this, this$0, this$0);
	this->buttonIndex = buttonIndex;
}

void BasicOptionPaneUI$ButtonActionListener::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	if (this->this$0->optionPane != nullptr) {
		int32_t optionType = this->this$0->optionPane->getOptionType();
		$var($ObjectArray, options, $nc(this->this$0->optionPane)->getOptions());
		if (this->this$0->inputComponent != nullptr) {
			if (options != nullptr || optionType == $JOptionPane::DEFAULT_OPTION || ((optionType == $JOptionPane::YES_NO_OPTION || optionType == $JOptionPane::YES_NO_CANCEL_OPTION || optionType == $JOptionPane::OK_CANCEL_OPTION) && this->buttonIndex == 0)) {
				this->this$0->resetInputValue();
			}
		}
		if (options == nullptr) {
			if (optionType == $JOptionPane::OK_CANCEL_OPTION && this->buttonIndex == 1) {
				$nc(this->this$0->optionPane)->setValue($($Integer::valueOf(2)));
			} else {
				$nc(this->this$0->optionPane)->setValue($($Integer::valueOf(this->buttonIndex)));
			}
		} else {
			$nc(this->this$0->optionPane)->setValue(options->get(this->buttonIndex));
		}
	}
}

BasicOptionPaneUI$ButtonActionListener::BasicOptionPaneUI$ButtonActionListener() {
}

$Class* BasicOptionPaneUI$ButtonActionListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicOptionPaneUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicOptionPaneUI$ButtonActionListener, this$0)},
		{"buttonIndex", "I", nullptr, $PROTECTED, $field(BasicOptionPaneUI$ButtonActionListener, buttonIndex)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicOptionPaneUI;I)V", nullptr, $PUBLIC, $method(BasicOptionPaneUI$ButtonActionListener, init$, void, $BasicOptionPaneUI*, int32_t)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicOptionPaneUI$ButtonActionListener, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonActionListener", "javax.swing.plaf.basic.BasicOptionPaneUI", "ButtonActionListener", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicOptionPaneUI$ButtonActionListener",
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
		"javax.swing.plaf.basic.BasicOptionPaneUI"
	};
	$loadClass(BasicOptionPaneUI$ButtonActionListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicOptionPaneUI$ButtonActionListener);
	});
	return class$;
}

$Class* BasicOptionPaneUI$ButtonActionListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
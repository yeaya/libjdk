#include <javax/swing/plaf/basic/BasicOptionPaneUI$Actions.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/JOptionPane.h>
#include <javax/swing/plaf/basic/BasicOptionPaneUI.h>
#include <sun/swing/UIAction.h>
#include <jcpp.h>

#undef CLOSE
#undef CLOSED_OPTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $JOptionPane = ::javax::swing::JOptionPane;
using $UIAction = ::sun::swing::UIAction;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

$String* BasicOptionPaneUI$Actions::CLOSE = nullptr;

void BasicOptionPaneUI$Actions::init$($String* key) {
	$UIAction::init$(key);
}

void BasicOptionPaneUI$Actions::actionPerformed($ActionEvent* e) {
	$useLocalObjectStack();
	if (getName() == BasicOptionPaneUI$Actions::CLOSE) {
		$var($JOptionPane, optionPane, $cast($JOptionPane, $nc(e)->getSource()));
		$nc(optionPane)->setValue($($Integer::valueOf($JOptionPane::CLOSED_OPTION)));
	}
}

BasicOptionPaneUI$Actions::BasicOptionPaneUI$Actions() {
}

void BasicOptionPaneUI$Actions::clinit$($Class* clazz) {
	$assignStatic(BasicOptionPaneUI$Actions::CLOSE, "close"_s);
}

$Class* BasicOptionPaneUI$Actions::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"CLOSE", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(BasicOptionPaneUI$Actions, CLOSE)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, 0, $method(BasicOptionPaneUI$Actions, init$, void, $String*)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicOptionPaneUI$Actions, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicOptionPaneUI$Actions", "javax.swing.plaf.basic.BasicOptionPaneUI", "Actions", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicOptionPaneUI$Actions",
		"sun.swing.UIAction",
		nullptr,
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
	$loadClass(BasicOptionPaneUI$Actions, name, initialize, &classInfo$$, BasicOptionPaneUI$Actions::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(BasicOptionPaneUI$Actions);
	});
	return class$;
}

$Class* BasicOptionPaneUI$Actions::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
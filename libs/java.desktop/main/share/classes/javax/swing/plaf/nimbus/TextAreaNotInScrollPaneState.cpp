#include <javax/swing/plaf/nimbus/TextAreaNotInScrollPaneState.h>
#include <java/awt/Container.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JViewport.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JViewport = ::javax::swing::JViewport;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void TextAreaNotInScrollPaneState::init$() {
	$State::init$("NotInScrollPane"_s);
}

bool TextAreaNotInScrollPaneState::isInState($JComponent* c) {
	return !($instanceOf($JViewport, $($nc(c)->getParent())));
}

TextAreaNotInScrollPaneState::TextAreaNotInScrollPaneState() {
}

$Class* TextAreaNotInScrollPaneState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(TextAreaNotInScrollPaneState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(TextAreaNotInScrollPaneState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.TextAreaNotInScrollPaneState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(TextAreaNotInScrollPaneState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TextAreaNotInScrollPaneState);
	});
	return class$;
}

$Class* TextAreaNotInScrollPaneState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
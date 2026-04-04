#include <javax/swing/plaf/nimbus/ToolBarSouthState.h>
#include <java/awt/BorderLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JToolBar.h>
#include <javax/swing/plaf/nimbus/NimbusLookAndFeel.h>
#include <javax/swing/plaf/nimbus/State.h>
#include <jcpp.h>

#undef SOUTH

using $BorderLayout = ::java::awt::BorderLayout;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JToolBar = ::javax::swing::JToolBar;
using $NimbusLookAndFeel = ::javax::swing::plaf::nimbus::NimbusLookAndFeel;
using $State = ::javax::swing::plaf::nimbus::State;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void ToolBarSouthState::init$() {
	$State::init$("South"_s);
}

bool ToolBarSouthState::isInState($JComponent* c) {
	$init($BorderLayout);
	return ($instanceOf($JToolBar, c)) && $equals($NimbusLookAndFeel::resolveToolbarConstraint($cast($JToolBar, c)), $BorderLayout::SOUTH);
}

ToolBarSouthState::ToolBarSouthState() {
}

$Class* ToolBarSouthState::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(ToolBarSouthState, init$, void)},
		{"isInState", "(Ljavax/swing/JComponent;)Z", nullptr, $PROTECTED, $virtualMethod(ToolBarSouthState, isInState, bool, $JComponent*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.ToolBarSouthState",
		"javax.swing.plaf.nimbus.State",
		nullptr,
		nullptr,
		methodInfos$$,
		"Ljavax/swing/plaf/nimbus/State<Ljavax/swing/JComponent;>;"
	};
	$loadClass(ToolBarSouthState, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ToolBarSouthState);
	});
	return class$;
}

$Class* ToolBarSouthState::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
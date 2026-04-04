#include <javax/swing/plaf/basic/BasicSliderUI$SharedActionScroller.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/AbstractAction.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/basic/BasicLookAndFeel.h>
#include <javax/swing/plaf/basic/BasicSliderUI$Actions.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

#undef SHARED_ACTION

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractAction = ::javax::swing::AbstractAction;
using $JSlider = ::javax::swing::JSlider;
using $BasicLookAndFeel = ::javax::swing::plaf::basic::BasicLookAndFeel;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSliderUI$SharedActionScroller::init$(int32_t dir, bool block) {
	$AbstractAction::init$();
	this->dir = dir;
	this->block = block;
}

void BasicSliderUI$SharedActionScroller::actionPerformed($ActionEvent* evt) {
	$useLocalObjectStack();
	$var($JSlider, slider, $cast($JSlider, $nc(evt)->getSource()));
	$load($BasicSliderUI);
	$var($BasicSliderUI, ui, $cast($BasicSliderUI, $BasicLookAndFeel::getUIOfType($($nc(slider)->getUI()), $BasicSliderUI::class$)));
	if (ui == nullptr) {
		return;
	}
	$init($BasicSliderUI);
	$nc($BasicSliderUI::SHARED_ACTION)->scroll(slider, ui, this->dir, this->block);
}

BasicSliderUI$SharedActionScroller::BasicSliderUI$SharedActionScroller() {
}

$Class* BasicSliderUI$SharedActionScroller::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"dir", "I", nullptr, 0, $field(BasicSliderUI$SharedActionScroller, dir)},
		{"block", "Z", nullptr, 0, $field(BasicSliderUI$SharedActionScroller, block)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(IZ)V", nullptr, $PUBLIC, $method(BasicSliderUI$SharedActionScroller, init$, void, int32_t, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$SharedActionScroller, actionPerformed, void, $ActionEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSliderUI$SharedActionScroller", "javax.swing.plaf.basic.BasicSliderUI", "SharedActionScroller", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.basic.BasicSliderUI$SharedActionScroller",
		"javax.swing.AbstractAction",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.basic.BasicSliderUI"
	};
	$loadClass(BasicSliderUI$SharedActionScroller, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(BasicSliderUI$SharedActionScroller));
	});
	return class$;
}

$Class* BasicSliderUI$SharedActionScroller::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
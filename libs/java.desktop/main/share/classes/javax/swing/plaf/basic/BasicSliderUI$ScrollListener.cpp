#include <javax/swing/plaf/basic/BasicSliderUI$ScrollListener.h>
#include <java/awt/event/ActionEvent.h>
#include <java/util/EventObject.h>
#include <javax/swing/Timer.h>
#include <javax/swing/plaf/basic/BasicSliderUI$TrackListener.h>
#include <javax/swing/plaf/basic/BasicSliderUI.h>
#include <jcpp.h>

using $ActionEvent = ::java::awt::event::ActionEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Timer = ::javax::swing::Timer;
using $BasicSliderUI = ::javax::swing::plaf::basic::BasicSliderUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace basic {

void BasicSliderUI$ScrollListener::init$($BasicSliderUI* this$0) {
	$set(this, this$0, this$0);
	this->direction = 1;
	this->direction = 1;
	this->useBlockIncrement = true;
}

void BasicSliderUI$ScrollListener::init$($BasicSliderUI* this$0, int32_t dir, bool block) {
	$set(this, this$0, this$0);
	this->direction = 1;
	this->direction = dir;
	this->useBlockIncrement = block;
}

void BasicSliderUI$ScrollListener::setDirection(int32_t direction) {
	this->direction = direction;
}

void BasicSliderUI$ScrollListener::setScrollByBlock(bool block) {
	this->useBlockIncrement = block;
}

void BasicSliderUI$ScrollListener::actionPerformed($ActionEvent* e) {
	if (this->useBlockIncrement) {
		this->this$0->scrollByBlock(this->direction);
	} else {
		this->this$0->scrollByUnit(this->direction);
	}
	if (!$nc(this->this$0->trackListener)->shouldScroll(this->direction)) {
		$$sure($Timer, $nc(e)->getSource())->stop();
	}
}

BasicSliderUI$ScrollListener::BasicSliderUI$ScrollListener() {
}

$Class* BasicSliderUI$ScrollListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/basic/BasicSliderUI;", nullptr, $FINAL | $SYNTHETIC, $field(BasicSliderUI$ScrollListener, this$0)},
		{"direction", "I", nullptr, 0, $field(BasicSliderUI$ScrollListener, direction)},
		{"useBlockIncrement", "Z", nullptr, 0, $field(BasicSliderUI$ScrollListener, useBlockIncrement)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;)V", nullptr, $PUBLIC, $method(BasicSliderUI$ScrollListener, init$, void, $BasicSliderUI*)},
		{"<init>", "(Ljavax/swing/plaf/basic/BasicSliderUI;IZ)V", nullptr, $PUBLIC, $method(BasicSliderUI$ScrollListener, init$, void, $BasicSliderUI*, int32_t, bool)},
		{"actionPerformed", "(Ljava/awt/event/ActionEvent;)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$ScrollListener, actionPerformed, void, $ActionEvent*)},
		{"setDirection", "(I)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$ScrollListener, setDirection, void, int32_t)},
		{"setScrollByBlock", "(Z)V", nullptr, $PUBLIC, $virtualMethod(BasicSliderUI$ScrollListener, setScrollByBlock, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.basic.BasicSliderUI$ScrollListener", "javax.swing.plaf.basic.BasicSliderUI", "ScrollListener", $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.basic.BasicSliderUI$ScrollListener",
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
		"javax.swing.plaf.basic.BasicSliderUI"
	};
	$loadClass(BasicSliderUI$ScrollListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(BasicSliderUI$ScrollListener);
	});
	return class$;
}

$Class* BasicSliderUI$ScrollListener::class$ = nullptr;

			} // basic
		} // plaf
	} // swing
} // javax
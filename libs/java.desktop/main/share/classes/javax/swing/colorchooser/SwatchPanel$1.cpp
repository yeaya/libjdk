#include <javax/swing/colorchooser/SwatchPanel$1.h>
#include <java/awt/Component.h>
#include <java/awt/event/FocusAdapter.h>
#include <java/awt/event/FocusEvent.h>
#include <javax/swing/colorchooser/SwatchPanel.h>
#include <jcpp.h>

using $FocusAdapter = ::java::awt::event::FocusAdapter;
using $FocusEvent = ::java::awt::event::FocusEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwatchPanel = ::javax::swing::colorchooser::SwatchPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

void SwatchPanel$1::init$($SwatchPanel* this$0) {
	$set(this, this$0, this$0);
	$FocusAdapter::init$();
}

void SwatchPanel$1::focusGained($FocusEvent* e) {
	this->this$0->repaint();
}

void SwatchPanel$1::focusLost($FocusEvent* e) {
	this->this$0->repaint();
}

SwatchPanel$1::SwatchPanel$1() {
}

$Class* SwatchPanel$1::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/colorchooser/SwatchPanel;", nullptr, $FINAL | $SYNTHETIC, $field(SwatchPanel$1, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/colorchooser/SwatchPanel;)V", nullptr, 0, $method(SwatchPanel$1, init$, void, $SwatchPanel*)},
		{"focusGained", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SwatchPanel$1, focusGained, void, $FocusEvent*)},
		{"focusLost", "(Ljava/awt/event/FocusEvent;)V", nullptr, $PUBLIC, $virtualMethod(SwatchPanel$1, focusLost, void, $FocusEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.colorchooser.SwatchPanel",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.colorchooser.SwatchPanel$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.colorchooser.SwatchPanel$1",
		"java.awt.event.FocusAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.colorchooser.SwatchPanel"
	};
	$loadClass(SwatchPanel$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwatchPanel$1);
	});
	return class$;
}

$Class* SwatchPanel$1::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax
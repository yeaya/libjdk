#include <javax/swing/colorchooser/SwatchPanel$2.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Dimension.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/colorchooser/SwatchPanel.h>
#include <jcpp.h>

#undef VK_DOWN
#undef VK_END
#undef VK_HOME
#undef VK_LEFT
#undef VK_RIGHT
#undef VK_UP

using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SwatchPanel = ::javax::swing::colorchooser::SwatchPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

void SwatchPanel$2::init$($SwatchPanel* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void SwatchPanel$2::keyPressed($KeyEvent* e) {
	$useLocalObjectStack();
	int32_t typed = $nc(e)->getKeyCode();
	switch (typed) {
	case $KeyEvent::VK_UP:
		if (this->this$0->selRow > 0) {
			--this->this$0->selRow;
			this->this$0->repaint();
		}
		break;
	case $KeyEvent::VK_DOWN:
		if (this->this$0->selRow < $nc(this->this$0->numSwatches)->height - 1) {
			++this->this$0->selRow;
			this->this$0->repaint();
		}
		break;
	case $KeyEvent::VK_LEFT:
		if (this->this$0->selCol > 0 && $$nc(this->this$0->getComponentOrientation())->isLeftToRight()) {
			--this->this$0->selCol;
			this->this$0->repaint();
		} else if (this->this$0->selCol < $nc(this->this$0->numSwatches)->width - 1 && !$$nc(this->this$0->getComponentOrientation())->isLeftToRight()) {
			++this->this$0->selCol;
			this->this$0->repaint();
		}
		break;
	case $KeyEvent::VK_RIGHT:
		if (this->this$0->selCol < $nc(this->this$0->numSwatches)->width - 1 && $$nc(this->this$0->getComponentOrientation())->isLeftToRight()) {
			++this->this$0->selCol;
			this->this$0->repaint();
		} else if (this->this$0->selCol > 0 && !$$nc(this->this$0->getComponentOrientation())->isLeftToRight()) {
			--this->this$0->selCol;
			this->this$0->repaint();
		}
		break;
	case $KeyEvent::VK_HOME:
		this->this$0->selCol = 0;
		this->this$0->selRow = 0;
		this->this$0->repaint();
		break;
	case $KeyEvent::VK_END:
		this->this$0->selCol = $nc(this->this$0->numSwatches)->width - 1;
		this->this$0->selRow = this->this$0->numSwatches->height - 1;
		this->this$0->repaint();
		break;
	}
}

SwatchPanel$2::SwatchPanel$2() {
}

$Class* SwatchPanel$2::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/colorchooser/SwatchPanel;", nullptr, $FINAL | $SYNTHETIC, $field(SwatchPanel$2, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/colorchooser/SwatchPanel;)V", nullptr, 0, $method(SwatchPanel$2, init$, void, $SwatchPanel*)},
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(SwatchPanel$2, keyPressed, void, $KeyEvent*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"javax.swing.colorchooser.SwatchPanel",
		"<init>",
		"()V"
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.colorchooser.SwatchPanel$2", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.colorchooser.SwatchPanel$2",
		"java.awt.event.KeyAdapter",
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
	$loadClass(SwatchPanel$2, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SwatchPanel$2);
	});
	return class$;
}

$Class* SwatchPanel$2::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax
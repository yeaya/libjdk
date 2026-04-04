#include <javax/swing/colorchooser/DefaultSwatchChooserPanel$MainSwatchKeyListener.h>
#include <java/awt/Color.h>
#include <java/awt/event/KeyAdapter.h>
#include <java/awt/event/KeyEvent.h>
#include <javax/swing/colorchooser/DefaultSwatchChooserPanel.h>
#include <javax/swing/colorchooser/RecentSwatchPanel.h>
#include <javax/swing/colorchooser/SwatchPanel.h>
#include <jcpp.h>

#undef VK_SPACE

using $Color = ::java::awt::Color;
using $KeyAdapter = ::java::awt::event::KeyAdapter;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultSwatchChooserPanel = ::javax::swing::colorchooser::DefaultSwatchChooserPanel;

namespace javax {
	namespace swing {
		namespace colorchooser {

void DefaultSwatchChooserPanel$MainSwatchKeyListener::init$($DefaultSwatchChooserPanel* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void DefaultSwatchChooserPanel$MainSwatchKeyListener::keyPressed($KeyEvent* e) {
	if ($KeyEvent::VK_SPACE == $nc(e)->getKeyCode()) {
		$var($Color, color, $nc(this->this$0->swatchPanel)->getSelectedColor());
		this->this$0->setSelectedColor(color);
		$nc(this->this$0->recentSwatchPanel)->setMostRecentColor(color);
	}
}

DefaultSwatchChooserPanel$MainSwatchKeyListener::DefaultSwatchChooserPanel$MainSwatchKeyListener() {
}

$Class* DefaultSwatchChooserPanel$MainSwatchKeyListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultSwatchChooserPanel$MainSwatchKeyListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;)V", nullptr, $PRIVATE, $method(DefaultSwatchChooserPanel$MainSwatchKeyListener, init$, void, $DefaultSwatchChooserPanel*)},
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultSwatchChooserPanel$MainSwatchKeyListener, keyPressed, void, $KeyEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchKeyListener", "javax.swing.colorchooser.DefaultSwatchChooserPanel", "MainSwatchKeyListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.colorchooser.DefaultSwatchChooserPanel$MainSwatchKeyListener",
		"java.awt.event.KeyAdapter",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.colorchooser.DefaultSwatchChooserPanel"
	};
	$loadClass(DefaultSwatchChooserPanel$MainSwatchKeyListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultSwatchChooserPanel$MainSwatchKeyListener);
	});
	return class$;
}

$Class* DefaultSwatchChooserPanel$MainSwatchKeyListener::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax
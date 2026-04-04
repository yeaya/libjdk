#include <javax/swing/colorchooser/DefaultSwatchChooserPanel$RecentSwatchKeyListener.h>
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

void DefaultSwatchChooserPanel$RecentSwatchKeyListener::init$($DefaultSwatchChooserPanel* this$0) {
	$set(this, this$0, this$0);
	$KeyAdapter::init$();
}

void DefaultSwatchChooserPanel$RecentSwatchKeyListener::keyPressed($KeyEvent* e) {
	if ($KeyEvent::VK_SPACE == $nc(e)->getKeyCode()) {
		$var($Color, color, $nc(this->this$0->recentSwatchPanel)->getSelectedColor());
		this->this$0->setSelectedColor(color);
	}
}

DefaultSwatchChooserPanel$RecentSwatchKeyListener::DefaultSwatchChooserPanel$RecentSwatchKeyListener() {
}

$Class* DefaultSwatchChooserPanel$RecentSwatchKeyListener::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;", nullptr, $FINAL | $SYNTHETIC, $field(DefaultSwatchChooserPanel$RecentSwatchKeyListener, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/colorchooser/DefaultSwatchChooserPanel;)V", nullptr, $PRIVATE, $method(DefaultSwatchChooserPanel$RecentSwatchKeyListener, init$, void, $DefaultSwatchChooserPanel*)},
		{"keyPressed", "(Ljava/awt/event/KeyEvent;)V", nullptr, $PUBLIC, $virtualMethod(DefaultSwatchChooserPanel$RecentSwatchKeyListener, keyPressed, void, $KeyEvent*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.colorchooser.DefaultSwatchChooserPanel$RecentSwatchKeyListener", "javax.swing.colorchooser.DefaultSwatchChooserPanel", "RecentSwatchKeyListener", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.colorchooser.DefaultSwatchChooserPanel$RecentSwatchKeyListener",
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
	$loadClass(DefaultSwatchChooserPanel$RecentSwatchKeyListener, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultSwatchChooserPanel$RecentSwatchKeyListener);
	});
	return class$;
}

$Class* DefaultSwatchChooserPanel$RecentSwatchKeyListener::class$ = nullptr;

		} // colorchooser
	} // swing
} // javax
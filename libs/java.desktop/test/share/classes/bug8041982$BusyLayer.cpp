#include <bug8041982$BusyLayer.h>
#include <bug8041982.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Image.h>
#include <java/beans/PropertyChangeEvent.h>
#include <java/net/URL.h>
#include <javax/swing/Icon.h>
#include <javax/swing/ImageIcon.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLayer.h>
#include <javax/swing/plaf/LayerUI.h>
#include <jcpp.h>

using $bug8041982 = ::bug8041982;
using $Graphics = ::java::awt::Graphics;
using $Image = ::java::awt::Image;
using $PropertyChangeEvent = ::java::beans::PropertyChangeEvent;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $ImageIcon = ::javax::swing::ImageIcon;
using $JComponent = ::javax::swing::JComponent;
using $JLayer = ::javax::swing::JLayer;
using $LayerUI = ::javax::swing::plaf::LayerUI;

void bug8041982$BusyLayer::init$($bug8041982* this$0) {
	$beforeCallerSensitive();
	$set(this, this$0, this$0);
	$LayerUI::init$();
	this->animated = true;
	$load($bug8041982);
	$set(this, icon, $new($ImageIcon, $($bug8041982::class$->getResource("duke.gif"_s))));
}

void bug8041982$BusyLayer::paint($Graphics* g, $JComponent* c) {
	$LayerUI::paint(g, c);
	if (isAnimated()) {
		int32_t var$1 = $nc(c)->getWidth() / 2;
		int32_t var$0 = var$1 - $nc(this->icon)->getIconWidth() / 2;
		int32_t var$2 = c->getHeight() / 2;
		$nc(this->icon)->paintIcon(c, g, var$0, var$2 - this->icon->getIconHeight() / 2);
	}
}

bool bug8041982$BusyLayer::isAnimated() {
	return this->animated;
}

void bug8041982$BusyLayer::setAnimated(bool animated) {
	$useLocalObjectStack();
	if (this->animated != animated) {
		this->animated = animated;
		$var($String, var$0, "animated"_s);
		$var($Object, var$1, $Boolean::valueOf(!animated));
		firePropertyChange(var$0, var$1, $($Boolean::valueOf(animated)));
	}
}

void bug8041982$BusyLayer::applyPropertyChange($PropertyChangeEvent* evt, $JLayer* l) {
	$nc(l)->repaint();
}

bool bug8041982$BusyLayer::imageUpdate($Image* img, int32_t infoflags, int32_t x, int32_t y, int32_t w, int32_t h, $JLayer* l) {
	$useLocalObjectStack();
	$nc($System::out)->println($$str({"imageUpdate "_s, $$str(this->imageUpdateCount)}));
	if (this->imageUpdateCount++ == 100) {
		setAnimated(false);
	} else if (this->imageUpdateCount > 100) {
		$throwNew($RuntimeException, "Test failed"_s);
	}
	bool var$0 = isAnimated();
	return var$0 && $LayerUI::imageUpdate(img, infoflags, x, y, w, h, l);
}

bug8041982$BusyLayer::bug8041982$BusyLayer() {
}

$Class* bug8041982$BusyLayer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lbug8041982;", nullptr, $FINAL | $SYNTHETIC, $field(bug8041982$BusyLayer, this$0)},
		{"animated", "Z", nullptr, $PRIVATE | $VOLATILE, $field(bug8041982$BusyLayer, animated)},
		{"icon", "Ljavax/swing/Icon;", nullptr, $PRIVATE, $field(bug8041982$BusyLayer, icon)},
		{"imageUpdateCount", "I", nullptr, $PRIVATE, $field(bug8041982$BusyLayer, imageUpdateCount)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lbug8041982;)V", nullptr, $PRIVATE, $method(bug8041982$BusyLayer, init$, void, $bug8041982*)},
		{"applyPropertyChange", "(Ljava/beans/PropertyChangeEvent;Ljavax/swing/JLayer;)V", nullptr, $PUBLIC, $virtualMethod(bug8041982$BusyLayer, applyPropertyChange, void, $PropertyChangeEvent*, $JLayer*)},
		{"imageUpdate", "(Ljava/awt/Image;IIIIILjavax/swing/JLayer;)Z", "(Ljava/awt/Image;IIIIILjavax/swing/JLayer<+Ljavax/swing/JComponent;>;)Z", $PUBLIC, $virtualMethod(bug8041982$BusyLayer, imageUpdate, bool, $Image*, int32_t, int32_t, int32_t, int32_t, int32_t, $JLayer*)},
		{"isAnimated", "()Z", nullptr, $PUBLIC, $virtualMethod(bug8041982$BusyLayer, isAnimated, bool)},
		{"paint", "(Ljava/awt/Graphics;Ljavax/swing/JComponent;)V", nullptr, $PUBLIC, $virtualMethod(bug8041982$BusyLayer, paint, void, $Graphics*, $JComponent*)},
		{"setAnimated", "(Z)V", nullptr, $PUBLIC, $virtualMethod(bug8041982$BusyLayer, setAnimated, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"bug8041982$BusyLayer", "bug8041982", "BusyLayer", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"bug8041982$BusyLayer",
		"javax.swing.plaf.LayerUI",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/plaf/LayerUI<Ljavax/swing/JComponent;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"bug8041982"
	};
	$loadClass(bug8041982$BusyLayer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(bug8041982$BusyLayer));
	});
	return class$;
}

$Class* bug8041982$BusyLayer::class$ = nullptr;
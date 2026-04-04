#include <javax/swing/PopupFactory$MediumWeightPopup.h>
#include <java/applet/Applet.h>
#include <java/awt/BorderLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Panel.h>
#include <java/awt/Point.h>
#include <java/awt/Window.h>
#include <java/lang/StringBuffer.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/swing/JLayeredPane.h>
#include <javax/swing/JRootPane.h>
#include <javax/swing/Popup.h>
#include <javax/swing/PopupFactory$ContainerPopup.h>
#include <javax/swing/PopupFactory$MediumWeightPopup$MediumWeightComponent.h>
#include <javax/swing/PopupFactory.h>
#include <javax/swing/RootPaneContainer.h>
#include <javax/swing/SwingUtilities.h>
#include <jcpp.h>

#undef CENTER
#undef POPUP_LAYER

using $Applet = ::java::applet::Applet;
using $BorderLayout = ::java::awt::BorderLayout;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Panel = ::java::awt::Panel;
using $Point = ::java::awt::Point;
using $Window = ::java::awt::Window;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StringBuffer = ::java::lang::StringBuffer;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $JLayeredPane = ::javax::swing::JLayeredPane;
using $JRootPane = ::javax::swing::JRootPane;
using $Popup = ::javax::swing::Popup;
using $PopupFactory$ContainerPopup = ::javax::swing::PopupFactory$ContainerPopup;
using $PopupFactory$MediumWeightPopup$MediumWeightComponent = ::javax::swing::PopupFactory$MediumWeightPopup$MediumWeightComponent;
using $RootPaneContainer = ::javax::swing::RootPaneContainer;
using $SwingUtilities = ::javax::swing::SwingUtilities;

namespace javax {
	namespace swing {

$Object* PopupFactory$MediumWeightPopup::mediumWeightPopupCacheKey = nullptr;

void PopupFactory$MediumWeightPopup::init$() {
	$PopupFactory$ContainerPopup::init$();
}

$Popup* PopupFactory$MediumWeightPopup::getMediumWeightPopup($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	$init(PopupFactory$MediumWeightPopup);
	$var(PopupFactory$MediumWeightPopup, popup, getRecycledMediumWeightPopup());
	if (popup == nullptr) {
		$assign(popup, $new(PopupFactory$MediumWeightPopup));
	}
	$nc(popup)->reset(owner, contents, ownerX, ownerY);
	bool var$0 = !popup->fitsOnScreen();
	if (var$0 || popup->overlappedByOwnedWindow()) {
		popup->hide();
		return nullptr;
	}
	return popup;
}

$List* PopupFactory$MediumWeightPopup::getMediumWeightPopupCache() {
	$init(PopupFactory$MediumWeightPopup);
	$var($List, cache, $cast($List, $SwingUtilities::appContextGet(PopupFactory$MediumWeightPopup::mediumWeightPopupCacheKey)));
	if (cache == nullptr) {
		$assign(cache, $new($ArrayList));
		$SwingUtilities::appContextPut(PopupFactory$MediumWeightPopup::mediumWeightPopupCacheKey, cache);
	}
	return cache;
}

void PopupFactory$MediumWeightPopup::recycleMediumWeightPopup(PopupFactory$MediumWeightPopup* popup) {
	$init(PopupFactory$MediumWeightPopup);
	$synchronized(PopupFactory$MediumWeightPopup::class$) {
		$var($List, mediumPopupCache, getMediumWeightPopupCache());
		if ($nc(mediumPopupCache)->size() < 5) {
			mediumPopupCache->add(popup);
		}
	}
}

PopupFactory$MediumWeightPopup* PopupFactory$MediumWeightPopup::getRecycledMediumWeightPopup() {
	$init(PopupFactory$MediumWeightPopup);
	$useLocalObjectStack();
	$synchronized(PopupFactory$MediumWeightPopup::class$) {
		$var($List, mediumPopupCache, getMediumWeightPopupCache());
		if ($nc(mediumPopupCache)->size() > 0) {
			$var(PopupFactory$MediumWeightPopup, r, $cast(PopupFactory$MediumWeightPopup, mediumPopupCache->get(0)));
			mediumPopupCache->remove(0);
			return r;
		}
		return nullptr;
	}
}

void PopupFactory$MediumWeightPopup::hide() {
	$PopupFactory$ContainerPopup::hide();
	$$nc($nc(this->rootPane)->getContentPane())->removeAll();
	recycleMediumWeightPopup(this);
}

void PopupFactory$MediumWeightPopup::show() {
	$useLocalObjectStack();
	$var($Component, component, getComponent());
	$var($Container, parent, nullptr);
	if (this->owner != nullptr) {
		$assign(parent, this->owner->getParent());
	}
	while (!($instanceOf($Window, parent) || $instanceOf($Applet, parent)) && (parent != nullptr)) {
		$assign(parent, parent->getParent());
	}
	if ($instanceOf($RootPaneContainer, parent)) {
		$assign(parent, $cast($RootPaneContainer, parent)->getLayeredPane());
	}
	$var($Point, p, $SwingUtilities::convertScreenLocationToParent(parent, this->x, this->y));
	$nc(component)->setLocation($nc(p)->x, $nc(p)->y);
	if ($instanceOf($JLayeredPane, parent)) {
		$init($JLayeredPane);
		parent->add(component, $JLayeredPane::POPUP_LAYER, 0);
	} else {
		$nc(parent)->add(component);
	}
	pack();
	component->setVisible(true);
	component->revalidate();
}

$Component* PopupFactory$MediumWeightPopup::createComponent($Component* owner) {
	$var($Panel, component, $new($PopupFactory$MediumWeightPopup$MediumWeightComponent));
	$set(this, rootPane, $new($JRootPane));
	this->rootPane->setOpaque(true);
	$init($BorderLayout);
	component->add(this->rootPane, $BorderLayout::CENTER);
	return component;
}

void PopupFactory$MediumWeightPopup::reset($Component* owner, $Component* contents, int32_t ownerX, int32_t ownerY) {
	$useLocalObjectStack();
	$PopupFactory$ContainerPopup::reset(owner, contents, ownerX, ownerY);
	$var($Component, component, getComponent());
	$nc(component)->setVisible(false);
	component->setLocation(ownerX, ownerY);
	$init($BorderLayout);
	$$nc($nc(this->rootPane)->getContentPane())->add(contents, $BorderLayout::CENTER);
	pack();
}

void PopupFactory$MediumWeightPopup::clinit$($Class* clazz) {
	$assignStatic(PopupFactory$MediumWeightPopup::mediumWeightPopupCacheKey, $new($StringBuffer, "PopupFactory.mediumPopupCache"_s));
}

PopupFactory$MediumWeightPopup::PopupFactory$MediumWeightPopup() {
}

$Class* PopupFactory$MediumWeightPopup::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"mediumWeightPopupCacheKey", "Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PopupFactory$MediumWeightPopup, mediumWeightPopupCacheKey)},
		{"rootPane", "Ljavax/swing/JRootPane;", nullptr, $PRIVATE, $field(PopupFactory$MediumWeightPopup, rootPane)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(PopupFactory$MediumWeightPopup, init$, void)},
		{"createComponent", "(Ljava/awt/Component;)Ljava/awt/Component;", nullptr, 0, $virtualMethod(PopupFactory$MediumWeightPopup, createComponent, $Component*, $Component*)},
		{"getMediumWeightPopup", "(Ljava/awt/Component;Ljava/awt/Component;II)Ljavax/swing/Popup;", nullptr, $STATIC, $staticMethod(PopupFactory$MediumWeightPopup, getMediumWeightPopup, $Popup*, $Component*, $Component*, int32_t, int32_t)},
		{"getMediumWeightPopupCache", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/swing/PopupFactory$MediumWeightPopup;>;", $PRIVATE | $STATIC, $staticMethod(PopupFactory$MediumWeightPopup, getMediumWeightPopupCache, $List*)},
		{"getRecycledMediumWeightPopup", "()Ljavax/swing/PopupFactory$MediumWeightPopup;", nullptr, $PRIVATE | $STATIC, $staticMethod(PopupFactory$MediumWeightPopup, getRecycledMediumWeightPopup, PopupFactory$MediumWeightPopup*)},
		{"hide", "()V", nullptr, $PUBLIC, $virtualMethod(PopupFactory$MediumWeightPopup, hide, void)},
		{"recycleMediumWeightPopup", "(Ljavax/swing/PopupFactory$MediumWeightPopup;)V", nullptr, $PRIVATE | $STATIC, $staticMethod(PopupFactory$MediumWeightPopup, recycleMediumWeightPopup, void, PopupFactory$MediumWeightPopup*)},
		{"reset", "(Ljava/awt/Component;Ljava/awt/Component;II)V", nullptr, 0, $virtualMethod(PopupFactory$MediumWeightPopup, reset, void, $Component*, $Component*, int32_t, int32_t)},
		{"show", "()V", nullptr, $PUBLIC, $virtualMethod(PopupFactory$MediumWeightPopup, show, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.PopupFactory$MediumWeightPopup", "javax.swing.PopupFactory", "MediumWeightPopup", $PRIVATE | $STATIC},
		{"javax.swing.PopupFactory$ContainerPopup", "javax.swing.PopupFactory", "ContainerPopup", $PRIVATE | $STATIC},
		{"javax.swing.PopupFactory$MediumWeightPopup$MediumWeightComponent", "javax.swing.PopupFactory$MediumWeightPopup", "MediumWeightComponent", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.PopupFactory$MediumWeightPopup",
		"javax.swing.PopupFactory$ContainerPopup",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.PopupFactory"
	};
	$loadClass(PopupFactory$MediumWeightPopup, name, initialize, &classInfo$$, PopupFactory$MediumWeightPopup::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PopupFactory$MediumWeightPopup);
	});
	return class$;
}

$Class* PopupFactory$MediumWeightPopup::class$ = nullptr;

	} // swing
} // javax
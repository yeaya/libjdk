#include <sun/awt/windows/WMenuPeer.h>
#include <java/awt/Font.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <sun/awt/windows/WMenuBarPeer.h>
#include <sun/awt/windows/WMenuItemPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem = ::java::awt::MenuItem;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $WMenuBarPeer = ::sun::awt::windows::WMenuBarPeer;
using $WMenuItemPeer = ::sun::awt::windows::WMenuItemPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

void WMenuPeer::setEnabled(bool b) {
	this->$WMenuItemPeer::setEnabled(b);
}

void WMenuPeer::setLabel($String* label) {
	this->$WMenuItemPeer::setLabel(label);
}

void WMenuPeer::setFont($Font* f) {
	this->$WMenuItemPeer::setFont(f);
}

void WMenuPeer::dispose() {
	this->$WMenuItemPeer::dispose();
}

int32_t WMenuPeer::hashCode() {
	return this->$WMenuItemPeer::hashCode();
}

bool WMenuPeer::equals(Object$* arg0) {
	return this->$WMenuItemPeer::equals(arg0);
}

$Object* WMenuPeer::clone() {
	return this->$WMenuItemPeer::clone();
}

$String* WMenuPeer::toString() {
	return this->$WMenuItemPeer::toString();
}

void WMenuPeer::finalize() {
	this->$WMenuItemPeer::finalize();
}

void WMenuPeer::addItem($MenuItem* item) {
}

void WMenuPeer::delItem(int32_t index) {
	$prepareNative(delItem, void, int32_t index);
	$invokeNative(index);
	$finishNative();
}

void WMenuPeer::init$() {
	$WMenuItemPeer::init$();
}

void WMenuPeer::init$($Menu* target) {
	$useLocalObjectStack();
	$WMenuItemPeer::init$();
	$set(this, target, target);
	$var($MenuContainer, parent, $nc(target)->getParent());
	if ($instanceOf($MenuBar, parent)) {
		$var($WMenuBarPeer, mbPeer, $cast($WMenuBarPeer, $WToolkit::targetToPeer(parent)));
		$set(this, parent, mbPeer);
		$nc(mbPeer)->addChildPeer(this);
		createMenu(mbPeer);
	} else if ($instanceOf($Menu, parent)) {
		$set(this, parent, $cast(WMenuPeer, $WToolkit::targetToPeer(parent)));
		$nc(this->parent)->addChildPeer(this);
		createSubMenu(this->parent);
	} else {
		$throwNew($IllegalArgumentException, "unknown menu container class"_s);
	}
	checkMenuCreation();
}

void WMenuPeer::createMenu($WMenuBarPeer* parent) {
	$prepareNative(createMenu, void, $WMenuBarPeer* parent);
	$invokeNative(parent);
	$finishNative();
}

void WMenuPeer::createSubMenu(WMenuPeer* parent) {
	$prepareNative(createSubMenu, void, WMenuPeer* parent);
	$invokeNative(parent);
	$finishNative();
}

WMenuPeer::WMenuPeer() {
}

$Class* WMenuPeer::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, 0, $method(WMenuPeer, init$, void)},
		{"<init>", "(Ljava/awt/Menu;)V", nullptr, 0, $method(WMenuPeer, init$, void, $Menu*)},
		{"addItem", "(Ljava/awt/MenuItem;)V", nullptr, $PUBLIC, $virtualMethod(WMenuPeer, addItem, void, $MenuItem*)},
		{"createMenu", "(Lsun/awt/windows/WMenuBarPeer;)V", nullptr, $NATIVE, $virtualMethod(WMenuPeer, createMenu, void, $WMenuBarPeer*)},
		{"createSubMenu", "(Lsun/awt/windows/WMenuPeer;)V", nullptr, $NATIVE, $virtualMethod(WMenuPeer, createSubMenu, void, WMenuPeer*)},
		{"delItem", "(I)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WMenuPeer, delItem, void, int32_t)},
		{"*setEnabled", "(Z)V", nullptr, $PUBLIC},
		{"*setLabel", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
		{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.awt.windows.WMenuPeer",
		"sun.awt.windows.WMenuItemPeer",
		"java.awt.peer.MenuPeer",
		nullptr,
		methodInfos$$
	};
	$loadClass(WMenuPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WMenuPeer));
	});
	return class$;
}

$Class* WMenuPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun
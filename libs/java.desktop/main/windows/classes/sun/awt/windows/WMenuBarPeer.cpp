#include <sun/awt/windows/WMenuBarPeer.h>
#include <java/awt/Font.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar.h>
#include <java/awt/MenuContainer.h>
#include <sun/awt/windows/WFramePeer.h>
#include <sun/awt/windows/WMenuItemPeer.h>
#include <sun/awt/windows/WMenuPeer.h>
#include <sun/awt/windows/WObjectPeer.h>
#include <sun/awt/windows/WToolkit.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $Menu = ::java::awt::Menu;
using $MenuBar = ::java::awt::MenuBar;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WFramePeer = ::sun::awt::windows::WFramePeer;
using $WMenuPeer = ::sun::awt::windows::WMenuPeer;
using $WToolkit = ::sun::awt::windows::WToolkit;

namespace sun {
	namespace awt {
		namespace windows {

void WMenuBarPeer::setFont($Font* f) {
	this->$WMenuPeer::setFont(f);
}

void WMenuBarPeer::dispose() {
	this->$WMenuPeer::dispose();
}

int32_t WMenuBarPeer::hashCode() {
	 return this->$WMenuPeer::hashCode();
}

bool WMenuBarPeer::equals(Object$* arg0) {
	 return this->$WMenuPeer::equals(arg0);
}

$Object* WMenuBarPeer::clone() {
	 return this->$WMenuPeer::clone();
}

$String* WMenuBarPeer::toString() {
	 return this->$WMenuPeer::toString();
}

void WMenuBarPeer::finalize() {
	this->$WMenuPeer::finalize();
}

void WMenuBarPeer::addMenu($Menu* m) {
	$prepareNative(addMenu, void, $Menu* m);
	$invokeNative(m);
	$finishNative();
}

void WMenuBarPeer::delMenu(int32_t index) {
	$prepareNative(delMenu, void, int32_t index);
	$invokeNative(index);
	$finishNative();
}

void WMenuBarPeer::addHelpMenu($Menu* m) {
	addMenu(m);
}

void WMenuBarPeer::init$($MenuBar* target) {
	$WMenuPeer::init$();
	$set(this, target, target);
	$set(this, framePeer, $cast($WFramePeer, $WToolkit::targetToPeer($($nc(target)->getParent()))));
	if (this->framePeer != nullptr) {
		this->framePeer->addChildPeer(this);
	}
	create(this->framePeer);
	checkMenuCreation();
}

void WMenuBarPeer::create($WFramePeer* f) {
	$prepareNative(create, void, $WFramePeer* f);
	$invokeNative(f);
	$finishNative();
}

WMenuBarPeer::WMenuBarPeer() {
}

$Class* WMenuBarPeer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"framePeer", "Lsun/awt/windows/WFramePeer;", nullptr, $FINAL, $field(WMenuBarPeer, framePeer)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*dispose", "()V", nullptr, $PUBLIC | $FINAL},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/MenuBar;)V", nullptr, 0, $method(WMenuBarPeer, init$, void, $MenuBar*)},
		{"addHelpMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC, $virtualMethod(WMenuBarPeer, addHelpMenu, void, $Menu*)},
		{"addMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WMenuBarPeer, addMenu, void, $Menu*)},
		{"create", "(Lsun/awt/windows/WFramePeer;)V", nullptr, $NATIVE, $method(WMenuBarPeer, create, void, $WFramePeer*)},
		{"delMenu", "(I)V", nullptr, $PUBLIC | $NATIVE, $virtualMethod(WMenuBarPeer, delMenu, void, int32_t)},
		{"*setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"sun.awt.windows.WMenuBarPeer",
		"sun.awt.windows.WMenuPeer",
		"java.awt.peer.MenuBarPeer",
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(WMenuBarPeer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(WMenuBarPeer));
	});
	return class$;
}

$Class* WMenuBarPeer::class$ = nullptr;

		} // windows
	} // awt
} // sun
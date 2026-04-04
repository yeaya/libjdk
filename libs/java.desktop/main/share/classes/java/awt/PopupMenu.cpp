#include <java/awt/PopupMenu.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Event.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/PopupMenu$1.h>
#include <java/awt/PopupMenu$AccessibleAWTPopupMenu.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/awt/peer/PopupMenuPeer.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef MOUSE_DOWN

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Event = ::java::awt::Event;
using $Menu = ::java::awt::Menu;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuItem = ::java::awt::MenuItem;
using $PopupMenu$1 = ::java::awt::PopupMenu$1;
using $PopupMenu$AccessibleAWTPopupMenu = ::java::awt::PopupMenu$AccessibleAWTPopupMenu;
using $PopupMenuPeer = ::java::awt::peer::PopupMenuPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace java {
	namespace awt {

$String* PopupMenu::base = nullptr;
int32_t PopupMenu::nameCounter = 0;

void PopupMenu::init$() {
	PopupMenu::init$(""_s);
}

void PopupMenu::init$($String* label) {
	$Menu::init$(label);
}

$MenuContainer* PopupMenu::getParent() {
	if (this->isTrayIconPopup) {
		return nullptr;
	}
	return $Menu::getParent();
}

$String* PopupMenu::constructComponentName() {
	$synchronized(PopupMenu::class$) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append(PopupMenu::base);
		var$0->append(PopupMenu::nameCounter++);
		return $str(var$0);
	}
}

void PopupMenu::addNotify() {
	$useLocalObjectStack();
	$synchronized(getTreeLock()) {
		if (this->parent != nullptr && !($instanceOf($Component, this->parent))) {
			$Menu::addNotify();
		} else {
			if (this->peer == nullptr) {
				$set(this, peer, $$nc(getComponentFactory())->createPopupMenu(this));
			}
			int32_t nitems = getItemCount();
			for (int32_t i = 0; i < nitems; ++i) {
				$var($MenuItem, mi, getItem(i));
				$set($nc(mi), parent, this);
				mi->addNotify();
			}
		}
	}
}

void PopupMenu::show($Component* origin, int32_t x, int32_t y) {
	$useLocalObjectStack();
	$var($MenuContainer, localParent, this->parent);
	if (localParent == nullptr) {
		$throwNew($NullPointerException, "parent is null"_s);
	}
	if (!($instanceOf($Component, localParent))) {
		$throwNew($IllegalArgumentException, "PopupMenus with non-Component parents cannot be shown"_s);
	}
	$var($Component, compParent, $cast($Component, localParent));
	if (compParent != origin) {
		if ($instanceOf($Container, compParent)) {
			if (!$cast($Container, compParent)->isAncestorOf(origin)) {
				$throwNew($IllegalArgumentException, "origin not in parent\'s hierarchy"_s);
			}
		} else {
			$throwNew($IllegalArgumentException, "origin not in parent\'s hierarchy"_s);
		}
	}
	if ($nc(compParent)->peer == nullptr || !compParent->isShowing()) {
		$throwNew($RuntimeException, "parent not showing on screen"_s);
	}
	if (this->peer == nullptr) {
		addNotify();
	}
	$synchronized(getTreeLock()) {
		if (this->peer != nullptr) {
			$nc($cast($PopupMenuPeer, this->peer))->show($$new($Event, origin, 0, $Event::MOUSE_DOWN, x, y, 0, 0));
		}
	}
}

$AccessibleContext* PopupMenu::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($PopupMenu$AccessibleAWTPopupMenu, this));
	}
	return this->accessibleContext;
}

void PopupMenu::clinit$($Class* clazz) {
	$assignStatic(PopupMenu::base, "popup"_s);
	PopupMenu::nameCounter = 0;
	{
		$AWTAccessor::setPopupMenuAccessor($$new($PopupMenu$1));
	}
}

PopupMenu::PopupMenu() {
}

$Class* PopupMenu::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PopupMenu, base)},
		{"nameCounter", "I", nullptr, $STATIC, $staticField(PopupMenu, nameCounter)},
		{"isTrayIconPopup", "Z", nullptr, $VOLATILE | $TRANSIENT, $field(PopupMenu, isTrayIconPopup)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(PopupMenu, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(PopupMenu, init$, void), "java.awt.HeadlessException"},
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(PopupMenu, init$, void, $String*), "java.awt.HeadlessException"},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(PopupMenu, addNotify, void)},
		{"constructComponentName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(PopupMenu, constructComponentName, $String*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(PopupMenu, getAccessibleContext, $AccessibleContext*)},
		{"getParent", "()Ljava/awt/MenuContainer;", nullptr, $PUBLIC, $virtualMethod(PopupMenu, getParent, $MenuContainer*)},
		{"show", "(Ljava/awt/Component;II)V", nullptr, $PUBLIC, $virtualMethod(PopupMenu, show, void, $Component*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.PopupMenu$AccessibleAWTPopupMenu", "java.awt.PopupMenu", "AccessibleAWTPopupMenu", $PROTECTED},
		{"java.awt.PopupMenu$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.PopupMenu",
		"java.awt.Menu",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.PopupMenu$AccessibleAWTPopupMenu,java.awt.PopupMenu$1"
	};
	$loadClass(PopupMenu, name, initialize, &classInfo$$, PopupMenu::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(PopupMenu));
	});
	return class$;
}

$Class* PopupMenu::class$ = nullptr;

	} // awt
} // java
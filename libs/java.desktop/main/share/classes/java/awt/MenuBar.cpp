#include <java/awt/MenuBar.h>
#include <java/awt/AWTEvent.h>
#include <java/awt/Event.h>
#include <java/awt/Font.h>
#include <java/awt/GraphicsEnvironment.h>
#include <java/awt/Menu.h>
#include <java/awt/MenuBar$1.h>
#include <java/awt/MenuBar$AccessibleAWTMenuBar.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/MenuItem.h>
#include <java/awt/MenuShortcut.h>
#include <java/awt/Toolkit.h>
#include <java/awt/event/KeyEvent.h>
#include <java/awt/peer/MenuBarPeer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <java/io/ObjectInputStream.h>
#include <java/io/ObjectOutputStream.h>
#include <java/util/Enumeration.h>
#include <java/util/Vector.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/AWTAccessor.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

#undef KEY_PRESSED
#undef KEY_RELEASED

using $Event = ::java::awt::Event;
using $Font = ::java::awt::Font;
using $GraphicsEnvironment = ::java::awt::GraphicsEnvironment;
using $Menu = ::java::awt::Menu;
using $MenuBar$1 = ::java::awt::MenuBar$1;
using $MenuBar$AccessibleAWTMenuBar = ::java::awt::MenuBar$AccessibleAWTMenuBar;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuItem = ::java::awt::MenuItem;
using $MenuShortcut = ::java::awt::MenuShortcut;
using $Toolkit = ::java::awt::Toolkit;
using $KeyEvent = ::java::awt::event::KeyEvent;
using $MenuBarPeer = ::java::awt::peer::MenuBarPeer;
using $ObjectInputStream = ::java::io::ObjectInputStream;
using $ObjectOutputStream = ::java::io::ObjectOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;
using $Vector = ::java::util::Vector;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $AWTAccessor = ::sun::awt::AWTAccessor;

namespace java {
	namespace awt {

$Font* MenuBar::getFont() {
	return this->$MenuComponent::getFont();
}

bool MenuBar::postEvent($Event* evt) {
	return this->$MenuComponent::postEvent(evt);
}

$String* MenuBar::toString() {
	return this->$MenuComponent::toString();
}

int32_t MenuBar::hashCode() {
	return this->$MenuComponent::hashCode();
}

bool MenuBar::equals(Object$* arg0) {
	return this->$MenuComponent::equals(arg0);
}

$Object* MenuBar::clone() {
	return this->$MenuComponent::clone();
}

void MenuBar::finalize() {
	this->$MenuComponent::finalize();
}

$String* MenuBar::base = nullptr;
int32_t MenuBar::nameCounter = 0;

void MenuBar::init$() {
	$MenuComponent::init$();
	$set(this, menus, $new($Vector));
	this->menuBarSerializedDataVersion = 1;
}

$String* MenuBar::constructComponentName() {
	$synchronized(MenuBar::class$) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append(MenuBar::base);
		var$0->append(MenuBar::nameCounter++);
		return $str(var$0);
	}
}

void MenuBar::addNotify() {
	$useLocalObjectStack();
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $$nc(getComponentFactory())->createMenuBar(this));
		}
		int32_t nmenus = getMenuCount();
		for (int32_t i = 0; i < nmenus; ++i) {
			$$nc(getMenu(i))->addNotify();
		}
	}
}

void MenuBar::removeNotify() {
	$useLocalObjectStack();
	$synchronized(getTreeLock()) {
		int32_t nmenus = getMenuCount();
		for (int32_t i = 0; i < nmenus; ++i) {
			$$nc(getMenu(i))->removeNotify();
		}
		$MenuComponent::removeNotify();
	}
}

$Menu* MenuBar::getHelpMenu() {
	return this->helpMenu;
}

void MenuBar::setHelpMenu($Menu* m) {
	$synchronized(getTreeLock()) {
		if (this->helpMenu == m) {
			return;
		}
		if (this->helpMenu != nullptr) {
			remove(this->helpMenu);
		}
		$set(this, helpMenu, m);
		if (m != nullptr) {
			if (!$equals(m->parent, this)) {
				add(m);
			}
			m->isHelpMenu = true;
			$set(m, parent, this);
			$var($MenuBarPeer, peer, $cast($MenuBarPeer, this->peer));
			if (peer != nullptr) {
				if (m->peer == nullptr) {
					m->addNotify();
				}
				peer->addHelpMenu(m);
			}
		}
	}
}

$Menu* MenuBar::add($Menu* m) {
	$synchronized(getTreeLock()) {
		if ($nc(m)->parent != nullptr) {
			$nc(m->parent)->remove(m);
		}
		$set(m, parent, this);
		$var($MenuBarPeer, peer, $cast($MenuBarPeer, this->peer));
		if (peer != nullptr) {
			if (m->peer == nullptr) {
				m->addNotify();
			}
			this->menus->addElement(m);
			peer->addMenu(m);
		} else {
			this->menus->addElement(m);
		}
		return m;
	}
}

void MenuBar::remove(int32_t index) {
	$useLocalObjectStack();
	$synchronized(getTreeLock()) {
		$var($Menu, m, getMenu(index));
		this->menus->removeElementAt(index);
		$var($MenuBarPeer, peer, $cast($MenuBarPeer, this->peer));
		if (peer != nullptr) {
			peer->delMenu(index);
			$nc(m)->removeNotify();
		}
		$set($nc(m), parent, nullptr);
		if (this->helpMenu == m) {
			$set(this, helpMenu, nullptr);
			m->isHelpMenu = false;
		}
	}
}

void MenuBar::remove($MenuComponent* m) {
	$synchronized(getTreeLock()) {
		int32_t index = this->menus->indexOf(m);
		if (index >= 0) {
			remove(index);
		}
	}
}

int32_t MenuBar::getMenuCount() {
	return countMenus();
}

int32_t MenuBar::countMenus() {
	return getMenuCountImpl();
}

int32_t MenuBar::getMenuCountImpl() {
	return this->menus->size();
}

$Menu* MenuBar::getMenu(int32_t i) {
	return getMenuImpl(i);
}

$Menu* MenuBar::getMenuImpl(int32_t i) {
	return $cast($Menu, this->menus->elementAt(i));
}

$Enumeration* MenuBar::shortcuts() {
	$synchronized(this) {
		$useLocalObjectStack();
		$var($Vector, shortcuts, $new($Vector));
		int32_t nmenus = getMenuCount();
		for (int32_t i = 0; i < nmenus; ++i) {
			$var($Enumeration, e, $$nc(getMenu(i))->shortcuts());
			while ($nc(e)->hasMoreElements()) {
				shortcuts->addElement($$cast($MenuShortcut, e->nextElement()));
			}
		}
		return shortcuts->elements();
	}
}

$MenuItem* MenuBar::getShortcutMenuItem($MenuShortcut* s) {
	$useLocalObjectStack();
	int32_t nmenus = getMenuCount();
	for (int32_t i = 0; i < nmenus; ++i) {
		$var($MenuItem, mi, $$nc(getMenu(i))->getShortcutMenuItem(s));
		if (mi != nullptr) {
			return mi;
		}
	}
	return nullptr;
}

bool MenuBar::handleShortcut($KeyEvent* e) {
	$useLocalObjectStack();
	int32_t id = $nc(e)->getID();
	if (id != $KeyEvent::KEY_PRESSED && id != $KeyEvent::KEY_RELEASED) {
		return false;
	}
	int32_t accelKey = $$nc($Toolkit::getDefaultToolkit())->getMenuShortcutKeyMaskEx();
	if ((e->getModifiersEx() & accelKey) == 0) {
		return false;
	}
	int32_t nmenus = getMenuCount();
	for (int32_t i = 0; i < nmenus; ++i) {
		$var($Menu, m, getMenu(i));
		if ($nc(m)->handleShortcut(e)) {
			return true;
		}
	}
	return false;
}

void MenuBar::deleteShortcut($MenuShortcut* s) {
	$useLocalObjectStack();
	int32_t nmenus = getMenuCount();
	for (int32_t i = 0; i < nmenus; ++i) {
		$$nc(getMenu(i))->deleteShortcut(s);
	}
}

void MenuBar::writeObject($ObjectOutputStream* s) {
	$nc(s)->defaultWriteObject();
}

void MenuBar::readObject($ObjectInputStream* s) {
	$useLocalObjectStack();
	$nc(s)->defaultReadObject();
	for (int32_t i = 0; i < this->menus->size(); ++i) {
		$var($Menu, m, $cast($Menu, this->menus->elementAt(i)));
		$set($nc(m), parent, this);
	}
}

void MenuBar::initIDs() {
	$init(MenuBar);
	$prepareNativeStatic(initIDs, void);
	$invokeNativeStatic();
	$finishNativeStatic();
}

$AccessibleContext* MenuBar::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($MenuBar$AccessibleAWTMenuBar, this));
	}
	return this->accessibleContext;
}

int32_t MenuBar::getAccessibleChildIndex($MenuComponent* child) {
	return this->menus->indexOf(child);
}

void MenuBar::clinit$($Class* clazz) {
	$assignStatic(MenuBar::base, "menubar"_s);
	{
		$Toolkit::loadLibraries();
		if (!$GraphicsEnvironment::isHeadless()) {
			MenuBar::initIDs();
		}
		$AWTAccessor::setMenuBarAccessor($$new($MenuBar$1));
	}
	MenuBar::nameCounter = 0;
}

MenuBar::MenuBar() {
}

$Class* MenuBar::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"menus", "Ljava/util/Vector;", "Ljava/util/Vector<Ljava/awt/Menu;>;", $PRIVATE | $FINAL, $field(MenuBar, menus)},
		{"helpMenu", "Ljava/awt/Menu;", nullptr, $PRIVATE | $VOLATILE, $field(MenuBar, helpMenu)},
		{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(MenuBar, base)},
		{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(MenuBar, nameCounter)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MenuBar, serialVersionUID)},
		{"menuBarSerializedDataVersion", "I", nullptr, $PRIVATE, $field(MenuBar, menuBarSerializedDataVersion)},
		{}
	};
	$CompoundAttribute countMenusmethodAnnotations$$[] = {
		{"Ljava/lang/Deprecated;", nullptr},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(MenuBar, init$, void), "java.awt.HeadlessException"},
		{"add", "(Ljava/awt/Menu;)Ljava/awt/Menu;", nullptr, $PUBLIC, $virtualMethod(MenuBar, add, $Menu*, $Menu*)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(MenuBar, addNotify, void)},
		{"constructComponentName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(MenuBar, constructComponentName, $String*)},
		{"countMenus", "()I", nullptr, $PUBLIC | $DEPRECATED, $virtualMethod(MenuBar, countMenus, int32_t), nullptr, nullptr, countMenusmethodAnnotations$$},
		{"deleteShortcut", "(Ljava/awt/MenuShortcut;)V", nullptr, $PUBLIC, $virtualMethod(MenuBar, deleteShortcut, void, $MenuShortcut*)},
		{"getAccessibleChildIndex", "(Ljava/awt/MenuComponent;)I", nullptr, 0, $virtualMethod(MenuBar, getAccessibleChildIndex, int32_t, $MenuComponent*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(MenuBar, getAccessibleContext, $AccessibleContext*)},
		{"getHelpMenu", "()Ljava/awt/Menu;", nullptr, $PUBLIC, $virtualMethod(MenuBar, getHelpMenu, $Menu*)},
		{"getMenu", "(I)Ljava/awt/Menu;", nullptr, $PUBLIC, $virtualMethod(MenuBar, getMenu, $Menu*, int32_t)},
		{"getMenuCount", "()I", nullptr, $PUBLIC, $virtualMethod(MenuBar, getMenuCount, int32_t)},
		{"getMenuCountImpl", "()I", nullptr, $FINAL, $method(MenuBar, getMenuCountImpl, int32_t)},
		{"getMenuImpl", "(I)Ljava/awt/Menu;", nullptr, $FINAL, $method(MenuBar, getMenuImpl, $Menu*, int32_t)},
		{"getShortcutMenuItem", "(Ljava/awt/MenuShortcut;)Ljava/awt/MenuItem;", nullptr, $PUBLIC, $virtualMethod(MenuBar, getShortcutMenuItem, $MenuItem*, $MenuShortcut*)},
		{"handleShortcut", "(Ljava/awt/event/KeyEvent;)Z", nullptr, 0, $virtualMethod(MenuBar, handleShortcut, bool, $KeyEvent*)},
		{"initIDs", "()V", nullptr, $PRIVATE | $STATIC | $NATIVE, $staticMethod(MenuBar, initIDs, void)},
		{"*postEvent", "(Ljava/awt/Event;)Z", nullptr, $PUBLIC | $DEPRECATED},
		{"readObject", "(Ljava/io/ObjectInputStream;)V", nullptr, $PRIVATE, $method(MenuBar, readObject, void, $ObjectInputStream*), "java.lang.ClassNotFoundException,java.io.IOException,java.awt.HeadlessException"},
		{"remove", "(I)V", nullptr, $PUBLIC, $virtualMethod(MenuBar, remove, void, int32_t)},
		{"remove", "(Ljava/awt/MenuComponent;)V", nullptr, $PUBLIC, $virtualMethod(MenuBar, remove, void, $MenuComponent*)},
		{"removeNotify", "()V", nullptr, $PUBLIC, $virtualMethod(MenuBar, removeNotify, void)},
		{"setHelpMenu", "(Ljava/awt/Menu;)V", nullptr, $PUBLIC, $virtualMethod(MenuBar, setHelpMenu, void, $Menu*)},
		{"shortcuts", "()Ljava/util/Enumeration;", "()Ljava/util/Enumeration<Ljava/awt/MenuShortcut;>;", $PUBLIC | $SYNCHRONIZED, $virtualMethod(MenuBar, shortcuts, $Enumeration*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{"writeObject", "(Ljava/io/ObjectOutputStream;)V", nullptr, $PRIVATE, $method(MenuBar, writeObject, void, $ObjectOutputStream*), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.MenuBar$AccessibleAWTMenuBar", "java.awt.MenuBar", "AccessibleAWTMenuBar", $PROTECTED},
		{"java.awt.MenuBar$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.MenuBar",
		"java.awt.MenuComponent",
		"java.awt.MenuContainer,javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.MenuBar$AccessibleAWTMenuBar,java.awt.MenuBar$1"
	};
	$loadClass(MenuBar, name, initialize, &classInfo$$, MenuBar::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(MenuBar));
	});
	return class$;
}

$Class* MenuBar::class$ = nullptr;

	} // awt
} // java
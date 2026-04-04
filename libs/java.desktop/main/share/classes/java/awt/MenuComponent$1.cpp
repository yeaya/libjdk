#include <java/awt/MenuComponent$1.h>
#include <java/awt/Font.h>
#include <java/awt/MenuComponent.h>
#include <java/awt/MenuContainer.h>
#include <java/awt/peer/MenuComponentPeer.h>
#include <sun/awt/AppContext.h>
#include <jcpp.h>

using $Font = ::java::awt::Font;
using $MenuComponent = ::java::awt::MenuComponent;
using $MenuContainer = ::java::awt::MenuContainer;
using $MenuComponentPeer = ::java::awt::peer::MenuComponentPeer;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AppContext = ::sun::awt::AppContext;

namespace java {
	namespace awt {

void MenuComponent$1::init$() {
}

$AppContext* MenuComponent$1::getAppContext($MenuComponent* menuComp) {
	return $nc(menuComp)->appContext;
}

void MenuComponent$1::setAppContext($MenuComponent* menuComp, $AppContext* appContext) {
	$set($nc(menuComp), appContext, appContext);
}

$MenuComponentPeer* MenuComponent$1::getPeer($MenuComponent* menuComp) {
	return $nc(menuComp)->peer;
}

$MenuContainer* MenuComponent$1::getParent($MenuComponent* menuComp) {
	return $nc(menuComp)->parent;
}

void MenuComponent$1::setParent($MenuComponent* menuComp, $MenuContainer* menuContainer) {
	$set($nc(menuComp), parent, menuContainer);
}

$Font* MenuComponent$1::getFont_NoClientCode($MenuComponent* menuComp) {
	return $nc(menuComp)->getFont_NoClientCode();
}

MenuComponent$1::MenuComponent$1() {
}

$Class* MenuComponent$1::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(MenuComponent$1, init$, void)},
		{"getAppContext", "(Ljava/awt/MenuComponent;)Lsun/awt/AppContext;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$1, getAppContext, $AppContext*, $MenuComponent*)},
		{"getFont_NoClientCode", "(Ljava/awt/MenuComponent;)Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$1, getFont_NoClientCode, $Font*, $MenuComponent*)},
		{"getParent", "(Ljava/awt/MenuComponent;)Ljava/awt/MenuContainer;", nullptr, $PUBLIC, $virtualMethod(MenuComponent$1, getParent, $MenuContainer*, $MenuComponent*)},
		{"getPeer", "(Ljava/awt/MenuComponent;)Ljava/awt/peer/MenuComponentPeer;", "<T::Ljava/awt/peer/MenuComponentPeer;>(Ljava/awt/MenuComponent;)TT;", $PUBLIC, $virtualMethod(MenuComponent$1, getPeer, $MenuComponentPeer*, $MenuComponent*)},
		{"setAppContext", "(Ljava/awt/MenuComponent;Lsun/awt/AppContext;)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$1, setAppContext, void, $MenuComponent*, $AppContext*)},
		{"setParent", "(Ljava/awt/MenuComponent;Ljava/awt/MenuContainer;)V", nullptr, $PUBLIC, $virtualMethod(MenuComponent$1, setParent, void, $MenuComponent*, $MenuContainer*)},
		{}
	};
	$EnclosingMethodInfo enclosingMethodInfo$$ = {
		"java.awt.MenuComponent",
		nullptr,
		nullptr
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.MenuComponent$1", nullptr, nullptr, 0},
		{"sun.awt.AWTAccessor$MenuComponentAccessor", "sun.awt.AWTAccessor", "MenuComponentAccessor", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"java.awt.MenuComponent$1",
		"java.lang.Object",
		"sun.awt.AWTAccessor$MenuComponentAccessor",
		nullptr,
		methodInfos$$,
		nullptr,
		&enclosingMethodInfo$$,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"java.awt.MenuComponent"
	};
	$loadClass(MenuComponent$1, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(MenuComponent$1);
	});
	return class$;
}

$Class* MenuComponent$1::class$ = nullptr;

	} // awt
} // java
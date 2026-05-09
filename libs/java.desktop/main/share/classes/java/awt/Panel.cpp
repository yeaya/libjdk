#include <java/awt/Panel.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/FlowLayout.h>
#include <java/awt/LayoutManager.h>
#include <java/awt/Panel$AccessibleAWTPanel.h>
#include <java/awt/peer/ComponentPeer.h>
#include <java/awt/peer/PanelPeer.h>
#include <javax/accessibility/AccessibleContext.h>
#include <sun/awt/ComponentFactory.h>
#include <jcpp.h>

using $Container = ::java::awt::Container;
using $FlowLayout = ::java::awt::FlowLayout;
using $LayoutManager = ::java::awt::LayoutManager;
using $Panel$AccessibleAWTPanel = ::java::awt::Panel$AccessibleAWTPanel;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;

namespace java {
	namespace awt {

$String* Panel::toString() {
	return this->$Container::toString();
}

int32_t Panel::hashCode() {
	return this->$Container::hashCode();
}

bool Panel::equals(Object$* arg0) {
	return this->$Container::equals(arg0);
}

$Object* Panel::clone() {
	return this->$Container::clone();
}

void Panel::finalize() {
	this->$Container::finalize();
}

$String* Panel::base = nullptr;
int32_t Panel::nameCounter = 0;

void Panel::init$() {
	Panel::init$($$new($FlowLayout));
}

void Panel::init$($LayoutManager* layout) {
	$Container::init$();
	setLayout(layout);
}

$String* Panel::constructComponentName() {
	$synchronized(Panel::class$) {
		$var($StringBuilder, var$0, $new($StringBuilder));
		var$0->append(Panel::base);
		var$0->append(Panel::nameCounter++);
		return $str(var$0);
	}
}

void Panel::addNotify() {
	$synchronized(getTreeLock()) {
		if (this->peer == nullptr) {
			$set(this, peer, $$nc(getComponentFactory())->createPanel(this));
		}
		$Container::addNotify();
	}
}

$AccessibleContext* Panel::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Panel$AccessibleAWTPanel, this));
	}
	return this->accessibleContext;
}

void Panel::clinit$($Class* clazz) {
	$assignStatic(Panel::base, "panel"_s);
	Panel::nameCounter = 0;
}

Panel::Panel() {
}

$Class* Panel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"base", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Panel, base)},
		{"nameCounter", "I", nullptr, $PRIVATE | $STATIC, $staticField(Panel, nameCounter)},
		{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Panel, serialVersionUID)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "()V", nullptr, $PUBLIC, $method(Panel, init$, void)},
		{"<init>", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC, $method(Panel, init$, void, $LayoutManager*)},
		{"addNotify", "()V", nullptr, $PUBLIC, $virtualMethod(Panel, addNotify, void)},
		{"constructComponentName", "()Ljava/lang/String;", nullptr, 0, $virtualMethod(Panel, constructComponentName, $String*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(Panel, getAccessibleContext, $AccessibleContext*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"java.awt.Panel$AccessibleAWTPanel", "java.awt.Panel", "AccessibleAWTPanel", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"java.awt.Panel",
		"java.awt.Container",
		"javax.accessibility.Accessible",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"java.awt.Panel$AccessibleAWTPanel"
	};
	$loadClass(Panel, name, initialize, &classInfo$$, Panel::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(Panel));
	});
	return class$;
}

$Class* Panel::class$ = nullptr;

	} // awt
} // java
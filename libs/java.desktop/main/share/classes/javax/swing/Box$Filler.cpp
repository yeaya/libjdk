#include <javax/swing/Box$Filler.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Box$Filler$AccessibleBoxFiller.h>
#include <javax/swing/Box.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $Attribute = ::java::lang::Attribute;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Box$Filler$AccessibleBoxFiller = ::javax::swing::Box$Filler$AccessibleBoxFiller;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$String* Box$Filler::toString() {
	 return this->$JComponent::toString();
}

int32_t Box$Filler::hashCode() {
	 return this->$JComponent::hashCode();
}

bool Box$Filler::equals(Object$* arg0) {
	 return this->$JComponent::equals(arg0);
}

$Object* Box$Filler::clone() {
	 return this->$JComponent::clone();
}

void Box$Filler::finalize() {
	this->$JComponent::finalize();
}

void Box$Filler::init$($Dimension* min, $Dimension* pref, $Dimension* max) {
	$JComponent::init$();
	setMinimumSize(min);
	setPreferredSize(pref);
	setMaximumSize(max);
	setFocusable(false);
}

void Box$Filler::changeShape($Dimension* min, $Dimension* pref, $Dimension* max) {
	setMinimumSize(min);
	setPreferredSize(pref);
	setMaximumSize(max);
	revalidate();
}

void Box$Filler::paintComponent($Graphics* g) {
	if (this->ui != nullptr) {
		$JComponent::paintComponent(g);
	} else if (isOpaque()) {
		$nc(g)->setColor($(getBackground()));
		int32_t var$0 = getWidth();
		g->fillRect(0, 0, var$0, getHeight());
	}
}

$AccessibleContext* Box$Filler::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Box$Filler$AccessibleBoxFiller, this));
	}
	return this->accessibleContext;
}

Box$Filler::Box$Filler() {
}

$Class* Box$Filler::load$($String* name, bool initialize) {
	$Attribute $attribute[] = {
		{'s', "minimumSize"},
		{'s', "preferredSize"},
		{'s', "maximumSize"},
		{'-'}
	};
	$NamedAttribute init$methodAnnotations$$$namedAttribute[] = {
		{"value", '[', $attribute},
		{}
	};
	$CompoundAttribute init$methodAnnotations$$[] = {
		{"Ljava/beans/ConstructorProperties;", init$methodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljava/awt/Dimension;Ljava/awt/Dimension;Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $method(Box$Filler, init$, void, $Dimension*, $Dimension*, $Dimension*), nullptr, nullptr, init$methodAnnotations$$},
		{"changeShape", "(Ljava/awt/Dimension;Ljava/awt/Dimension;Ljava/awt/Dimension;)V", nullptr, $PUBLIC, $virtualMethod(Box$Filler, changeShape, void, $Dimension*, $Dimension*, $Dimension*)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(Box$Filler, getAccessibleContext, $AccessibleContext*)},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(Box$Filler, paintComponent, void, $Graphics*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Box$Filler", "javax.swing.Box", "Filler", $PUBLIC | $STATIC},
		{"javax.swing.Box$Filler$AccessibleBoxFiller", "javax.swing.Box$Filler", "AccessibleBoxFiller", $PROTECTED},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.Box$Filler",
		"javax.swing.JComponent",
		"javax.accessibility.Accessible",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.Box"
	};
	$loadClass(Box$Filler, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Box$Filler));
	});
	return class$;
}

$Class* Box$Filler::class$ = nullptr;

	} // swing
} // javax
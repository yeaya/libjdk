#include <javax/swing/Box.h>
#include <java/awt/AWTError.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Graphics.h>
#include <java/awt/LayoutManager.h>
#include <javax/accessibility/AccessibleContext.h>
#include <javax/swing/Box$AccessibleBox.h>
#include <javax/swing/Box$Filler.h>
#include <javax/swing/BoxLayout.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <jcpp.h>

#undef MAX_VALUE
#undef X_AXIS
#undef Y_AXIS

using $AWTError = ::java::awt::AWTError;
using $Component = ::java::awt::Component;
using $Dimension = ::java::awt::Dimension;
using $Graphics = ::java::awt::Graphics;
using $LayoutManager = ::java::awt::LayoutManager;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NamedAttribute = ::java::lang::NamedAttribute;
using $Short = ::java::lang::Short;
using $AccessibleContext = ::javax::accessibility::AccessibleContext;
using $Box$AccessibleBox = ::javax::swing::Box$AccessibleBox;
using $Box$Filler = ::javax::swing::Box$Filler;
using $BoxLayout = ::javax::swing::BoxLayout;
using $JComponent = ::javax::swing::JComponent;

namespace javax {
	namespace swing {

$String* Box::toString() {
	return this->$JComponent::toString();
}

int32_t Box::hashCode() {
	return this->$JComponent::hashCode();
}

bool Box::equals(Object$* arg0) {
	return this->$JComponent::equals(arg0);
}

$Object* Box::clone() {
	return this->$JComponent::clone();
}

void Box::finalize() {
	this->$JComponent::finalize();
}

void Box::init$(int32_t axis) {
	$JComponent::init$();
	$JComponent::setLayout($$new($BoxLayout, this, axis));
}

Box* Box::createHorizontalBox() {
	$init(Box);
	return $new(Box, $BoxLayout::X_AXIS);
}

Box* Box::createVerticalBox() {
	$init(Box);
	return $new(Box, $BoxLayout::Y_AXIS);
}

$Component* Box::createRigidArea($Dimension* d) {
	$init(Box);
	return $new($Box$Filler, d, d, d);
}

$Component* Box::createHorizontalStrut(int32_t width) {
	$init(Box);
	$useLocalObjectStack();
	$var($Dimension, var$0, $new($Dimension, width, 0));
	$var($Dimension, var$1, $new($Dimension, width, 0));
	return $new($Box$Filler, var$0, var$1, $$new($Dimension, width, $Short::MAX_VALUE));
}

$Component* Box::createVerticalStrut(int32_t height) {
	$init(Box);
	$useLocalObjectStack();
	$var($Dimension, var$0, $new($Dimension, 0, height));
	$var($Dimension, var$1, $new($Dimension, 0, height));
	return $new($Box$Filler, var$0, var$1, $$new($Dimension, $Short::MAX_VALUE, height));
}

$Component* Box::createGlue() {
	$init(Box);
	$useLocalObjectStack();
	$var($Dimension, var$0, $new($Dimension, 0, 0));
	$var($Dimension, var$1, $new($Dimension, 0, 0));
	return $new($Box$Filler, var$0, var$1, $$new($Dimension, $Short::MAX_VALUE, $Short::MAX_VALUE));
}

$Component* Box::createHorizontalGlue() {
	$init(Box);
	$useLocalObjectStack();
	$var($Dimension, var$0, $new($Dimension, 0, 0));
	$var($Dimension, var$1, $new($Dimension, 0, 0));
	return $new($Box$Filler, var$0, var$1, $$new($Dimension, $Short::MAX_VALUE, 0));
}

$Component* Box::createVerticalGlue() {
	$init(Box);
	$useLocalObjectStack();
	$var($Dimension, var$0, $new($Dimension, 0, 0));
	$var($Dimension, var$1, $new($Dimension, 0, 0));
	return $new($Box$Filler, var$0, var$1, $$new($Dimension, 0, $Short::MAX_VALUE));
}

void Box::setLayout($LayoutManager* l) {
	$throwNew($AWTError, "Illegal request"_s);
}

void Box::paintComponent($Graphics* g) {
	if (this->ui != nullptr) {
		$JComponent::paintComponent(g);
	} else if (isOpaque()) {
		$nc(g)->setColor($(getBackground()));
		int32_t var$0 = getWidth();
		g->fillRect(0, 0, var$0, getHeight());
	}
}

$AccessibleContext* Box::getAccessibleContext() {
	if (this->accessibleContext == nullptr) {
		$set(this, accessibleContext, $new($Box$AccessibleBox, this));
	}
	return this->accessibleContext;
}

Box::Box() {
}

$Class* Box::load$($String* name, bool initialize) {
	$NamedAttribute getAccessibleContextmethodAnnotations$$$namedAttribute[] = {
		{"bound", 'Z', "false"},
		{}
	};
	$CompoundAttribute getAccessibleContextmethodAnnotations$$[] = {
		{"Ljava/beans/BeanProperty;", getAccessibleContextmethodAnnotations$$$namedAttribute},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(I)V", nullptr, $PUBLIC, $method(Box, init$, void, int32_t)},
		{"createGlue", "()Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $staticMethod(Box, createGlue, $Component*)},
		{"createHorizontalBox", "()Ljavax/swing/Box;", nullptr, $PUBLIC | $STATIC, $staticMethod(Box, createHorizontalBox, Box*)},
		{"createHorizontalGlue", "()Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $staticMethod(Box, createHorizontalGlue, $Component*)},
		{"createHorizontalStrut", "(I)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $staticMethod(Box, createHorizontalStrut, $Component*, int32_t)},
		{"createRigidArea", "(Ljava/awt/Dimension;)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $staticMethod(Box, createRigidArea, $Component*, $Dimension*)},
		{"createVerticalBox", "()Ljavax/swing/Box;", nullptr, $PUBLIC | $STATIC, $staticMethod(Box, createVerticalBox, Box*)},
		{"createVerticalGlue", "()Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $staticMethod(Box, createVerticalGlue, $Component*)},
		{"createVerticalStrut", "(I)Ljava/awt/Component;", nullptr, $PUBLIC | $STATIC, $staticMethod(Box, createVerticalStrut, $Component*, int32_t)},
		{"getAccessibleContext", "()Ljavax/accessibility/AccessibleContext;", nullptr, $PUBLIC, $virtualMethod(Box, getAccessibleContext, $AccessibleContext*), nullptr, nullptr, getAccessibleContextmethodAnnotations$$},
		{"paintComponent", "(Ljava/awt/Graphics;)V", nullptr, $PROTECTED, $virtualMethod(Box, paintComponent, void, $Graphics*)},
		{"setLayout", "(Ljava/awt/LayoutManager;)V", nullptr, $PUBLIC, $virtualMethod(Box, setLayout, void, $LayoutManager*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.Box$AccessibleBox", "javax.swing.Box", "AccessibleBox", $PROTECTED},
		{"javax.swing.Box$Filler", "javax.swing.Box", "Filler", $PUBLIC | $STATIC},
		{}
	};
	$NamedAttribute annotations$$$namedAttribute[] = {
		{"defaultProperty", 's', "accessibleContext"},
		{}
	};
	$CompoundAttribute annotations$$[] = {
		{"Ljava/beans/JavaBean;", annotations$$$namedAttribute},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.Box",
		"javax.swing.JComponent",
		"javax.accessibility.Accessible",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		annotations$$,
		nullptr,
		"javax.swing.Box$AccessibleBox,javax.swing.Box$Filler,javax.swing.Box$Filler$AccessibleBoxFiller"
	};
	$loadClass(Box, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(Box));
	});
	return class$;
}

$Class* Box::class$ = nullptr;

	} // swing
} // javax
#include <javax/swing/SpringLayout.h>
#include <java/awt/Component.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/Spring$HeightSpring.h>
#include <javax/swing/Spring$WidthSpring.h>
#include <javax/swing/Spring.h>
#include <javax/swing/SpringLayout$Constraints.h>
#include <javax/swing/SpringLayout$SpringProxy.h>
#include <jcpp.h>

#undef ALL_HORIZONTAL
#undef ALL_VERTICAL
#undef BASELINE
#undef EAST
#undef HEIGHT
#undef HORIZONTAL_CENTER
#undef MAX_VALUE
#undef NORTH
#undef SOUTH
#undef UNSET
#undef VERTICAL_CENTER
#undef WEST
#undef WIDTH

using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $JComponent = ::javax::swing::JComponent;
using $Spring = ::javax::swing::Spring;
using $Spring$HeightSpring = ::javax::swing::Spring$HeightSpring;
using $Spring$WidthSpring = ::javax::swing::Spring$WidthSpring;
using $SpringLayout$Constraints = ::javax::swing::SpringLayout$Constraints;
using $SpringLayout$SpringProxy = ::javax::swing::SpringLayout$SpringProxy;

namespace javax {
	namespace swing {

$String* SpringLayout::NORTH = nullptr;
$String* SpringLayout::SOUTH = nullptr;
$String* SpringLayout::EAST = nullptr;
$String* SpringLayout::WEST = nullptr;
$String* SpringLayout::HORIZONTAL_CENTER = nullptr;
$String* SpringLayout::VERTICAL_CENTER = nullptr;
$String* SpringLayout::BASELINE = nullptr;
$String* SpringLayout::WIDTH = nullptr;
$String* SpringLayout::HEIGHT = nullptr;
$StringArray* SpringLayout::ALL_HORIZONTAL = nullptr;
$StringArray* SpringLayout::ALL_VERTICAL = nullptr;

void SpringLayout::init$() {
	$set(this, componentConstraints, $new($HashMap));
	$set(this, cyclicReference, $Spring::constant($Spring::UNSET));
}

void SpringLayout::resetCyclicStatuses() {
	$set(this, cyclicSprings, $new($HashSet));
	$set(this, acyclicSprings, $new($HashSet));
}

void SpringLayout::setParent($Container* p) {
	$useLocalObjectStack();
	resetCyclicStatuses();
	$var($SpringLayout$Constraints, pc, getConstraints(p));
	$nc(pc)->setX($($Spring::constant(0)));
	pc->setY($($Spring::constant(0)));
	$var($Spring, width, pc->getWidth());
	if ($instanceOf($Spring$WidthSpring, width) && $equals($cast($Spring$WidthSpring, width)->c, p)) {
		pc->setWidth($($Spring::constant(0, 0, $Integer::MAX_VALUE)));
	}
	$var($Spring, height, pc->getHeight());
	if ($instanceOf($Spring$HeightSpring, height) && $equals($cast($Spring$HeightSpring, height)->c, p)) {
		pc->setHeight($($Spring::constant(0, 0, $Integer::MAX_VALUE)));
	}
}

bool SpringLayout::isCyclic($Spring* s) {
	if (s == nullptr) {
		return false;
	}
	if ($nc(this->cyclicSprings)->contains(s)) {
		return true;
	}
	if ($nc(this->acyclicSprings)->contains(s)) {
		return false;
	}
	this->cyclicSprings->add(s);
	bool result = $nc(s)->isCyclic(this);
	if (!result) {
		$nc(this->acyclicSprings)->add(s);
		$nc(this->cyclicSprings)->remove(s);
	} else {
		$nc($System::err)->println($$str({s, " is cyclic. "_s}));
	}
	return result;
}

$Spring* SpringLayout::abandonCycles($Spring* s) {
	return isCyclic(s) ? this->cyclicReference : s;
}

void SpringLayout::addLayoutComponent($String* name, $Component* c) {
}

void SpringLayout::removeLayoutComponent($Component* c) {
	$nc(this->componentConstraints)->remove(c);
}

$Dimension* SpringLayout::addInsets(int32_t width, int32_t height, $Container* p) {
	$init(SpringLayout);
	$var($Insets, i, $nc(p)->getInsets());
	return $new($Dimension, width + $nc(i)->left + $nc(i)->right, height + $nc(i)->top + $nc(i)->bottom);
}

$Dimension* SpringLayout::minimumLayoutSize($Container* parent) {
	$useLocalObjectStack();
	setParent(parent);
	$var($SpringLayout$Constraints, pc, getConstraints(parent));
	int32_t var$0 = $$nc(abandonCycles($($nc(pc)->getWidth())))->getMinimumValue();
	return addInsets(var$0, $$nc(abandonCycles($(pc->getHeight())))->getMinimumValue(), parent);
}

$Dimension* SpringLayout::preferredLayoutSize($Container* parent) {
	$useLocalObjectStack();
	setParent(parent);
	$var($SpringLayout$Constraints, pc, getConstraints(parent));
	int32_t var$0 = $$nc(abandonCycles($($nc(pc)->getWidth())))->getPreferredValue();
	return addInsets(var$0, $$nc(abandonCycles($(pc->getHeight())))->getPreferredValue(), parent);
}

$Dimension* SpringLayout::maximumLayoutSize($Container* parent) {
	$useLocalObjectStack();
	setParent(parent);
	$var($SpringLayout$Constraints, pc, getConstraints(parent));
	int32_t var$0 = $$nc(abandonCycles($($nc(pc)->getWidth())))->getMaximumValue();
	return addInsets(var$0, $$nc(abandonCycles($(pc->getHeight())))->getMaximumValue(), parent);
}

void SpringLayout::addLayoutComponent($Component* component, Object$* constraints) {
	if ($instanceOf($SpringLayout$Constraints, constraints)) {
		putConstraints(component, $cast($SpringLayout$Constraints, constraints));
	}
}

float SpringLayout::getLayoutAlignmentX($Container* p) {
	return 0.5f;
}

float SpringLayout::getLayoutAlignmentY($Container* p) {
	return 0.5f;
}

void SpringLayout::invalidateLayout($Container* p) {
}

void SpringLayout::putConstraint($String* e1, $Component* c1, int32_t pad, $String* e2, $Component* c2) {
	putConstraint(e1, c1, $($Spring::constant(pad)), e2, c2);
}

void SpringLayout::putConstraint($String* e1, $Component* c1, $Spring* s, $String* e2, $Component* c2) {
	$useLocalObjectStack();
	putConstraint(e1, c1, $($Spring::sum(s, $(getConstraint(e2, c2)))));
}

void SpringLayout::putConstraint($String* e, $Component* c, $Spring* s) {
	if (s != nullptr) {
		$$nc(getConstraints(c))->setConstraint(e, s);
	}
}

$SpringLayout$Constraints* SpringLayout::applyDefaults($Component* c, $SpringLayout$Constraints* constraints$renamed) {
	$useLocalObjectStack();
	$var($SpringLayout$Constraints, constraints, constraints$renamed);
	if (constraints == nullptr) {
		$assign(constraints, $new($SpringLayout$Constraints));
	}
	if ($nc(constraints)->c == nullptr) {
		$set(constraints, c, c);
	}
	if ($nc(constraints->horizontalHistory)->size() < 2) {
		$var($String, var$0, SpringLayout::WEST);
		$var($Spring, var$1, $Spring::constant(0));
		$var($String, var$2, SpringLayout::WIDTH);
		applyDefaults(constraints, var$0, var$1, var$2, $($Spring::width(c)), constraints->horizontalHistory);
	}
	if ($nc(constraints->verticalHistory)->size() < 2) {
		$var($String, var$3, SpringLayout::NORTH);
		$var($Spring, var$4, $Spring::constant(0));
		$var($String, var$5, SpringLayout::HEIGHT);
		applyDefaults(constraints, var$3, var$4, var$5, $($Spring::height(c)), constraints->verticalHistory);
	}
	return constraints;
}

void SpringLayout::applyDefaults($SpringLayout$Constraints* constraints, $String* name1, $Spring* spring1, $String* name2, $Spring* spring2, $List* history) {
	if ($nc(history)->size() == 0) {
		$nc(constraints)->setConstraint(name1, spring1);
		constraints->setConstraint(name2, spring2);
	} else {
		if ($nc(constraints)->getConstraint(name2) == nullptr) {
			constraints->setConstraint(name2, spring2);
		} else {
			constraints->setConstraint(name1, spring1);
		}
		$Collections::rotate(history, 1);
	}
}

void SpringLayout::putConstraints($Component* component, $SpringLayout$Constraints* constraints) {
	$nc(this->componentConstraints)->put(component, $(applyDefaults(component, constraints)));
}

$SpringLayout$Constraints* SpringLayout::getConstraints($Component* c) {
	$useLocalObjectStack();
	$var($SpringLayout$Constraints, result, $cast($SpringLayout$Constraints, $nc(this->componentConstraints)->get(c)));
	if (result == nullptr) {
		if ($instanceOf($JComponent, c)) {
			$var($Object, cp, $cast($JComponent, c)->getClientProperty(SpringLayout::class$));
			if ($instanceOf($SpringLayout$Constraints, cp)) {
				return applyDefaults(c, $cast($SpringLayout$Constraints, cp));
			}
		}
		$assign(result, $new($SpringLayout$Constraints));
		putConstraints(c, result);
	}
	return result;
}

$Spring* SpringLayout::getConstraint($String* edgeName$renamed, $Component* c) {
	$var($String, edgeName, edgeName$renamed);
	$assign(edgeName, $nc(edgeName)->intern());
	return $new($SpringLayout$SpringProxy, edgeName, c, this);
}

void SpringLayout::layoutContainer($Container* parent) {
	$useLocalObjectStack();
	setParent(parent);
	int32_t n = $nc(parent)->getComponentCount();
	$$nc(getConstraints(parent))->reset();
	for (int32_t i = 0; i < n; ++i) {
		$$nc(getConstraints($(parent->getComponent(i))))->reset();
	}
	$var($Insets, insets, parent->getInsets());
	$var($SpringLayout$Constraints, pc, getConstraints(parent));
	$$nc(abandonCycles($($nc(pc)->getX())))->setValue(0);
	$$nc(abandonCycles($(pc->getY())))->setValue(0);
	$$nc(abandonCycles($(pc->getWidth())))->setValue(parent->getWidth() - $nc(insets)->left - $nc(insets)->right);
	$$nc(abandonCycles($(pc->getHeight())))->setValue(parent->getHeight() - insets->top - insets->bottom);
	for (int32_t i = 0; i < n; ++i) {
		$var($Component, c, parent->getComponent(i));
		$var($SpringLayout$Constraints, cc, getConstraints(c));
		int32_t x = $$nc(abandonCycles($($nc(cc)->getX())))->getValue();
		int32_t y = $$nc(abandonCycles($(cc->getY())))->getValue();
		int32_t width = $$nc(abandonCycles($(cc->getWidth())))->getValue();
		int32_t height = $$nc(abandonCycles($(cc->getHeight())))->getValue();
		$nc(c)->setBounds(insets->left + x, insets->top + y, width, height);
	}
}

void SpringLayout::clinit$($Class* clazz) {
	$assignStatic(SpringLayout::NORTH, "North"_s);
	$assignStatic(SpringLayout::SOUTH, "South"_s);
	$assignStatic(SpringLayout::EAST, "East"_s);
	$assignStatic(SpringLayout::WEST, "West"_s);
	$assignStatic(SpringLayout::HORIZONTAL_CENTER, "HorizontalCenter"_s);
	$assignStatic(SpringLayout::VERTICAL_CENTER, "VerticalCenter"_s);
	$assignStatic(SpringLayout::BASELINE, "Baseline"_s);
	$assignStatic(SpringLayout::WIDTH, "Width"_s);
	$assignStatic(SpringLayout::HEIGHT, "Height"_s);
	$assignStatic(SpringLayout::ALL_HORIZONTAL, $new($StringArray, {
		SpringLayout::WEST,
		SpringLayout::WIDTH,
		SpringLayout::EAST,
		SpringLayout::HORIZONTAL_CENTER
	}));
	$assignStatic(SpringLayout::ALL_VERTICAL, $new($StringArray, {
		SpringLayout::NORTH,
		SpringLayout::HEIGHT,
		SpringLayout::SOUTH,
		SpringLayout::VERTICAL_CENTER,
		SpringLayout::BASELINE
	}));
}

SpringLayout::SpringLayout() {
}

$Class* SpringLayout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"componentConstraints", "Ljava/util/Map;", "Ljava/util/Map<Ljava/awt/Component;Ljavax/swing/SpringLayout$Constraints;>;", $PRIVATE, $field(SpringLayout, componentConstraints)},
		{"cyclicReference", "Ljavax/swing/Spring;", nullptr, $PRIVATE, $field(SpringLayout, cyclicReference)},
		{"cyclicSprings", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/Spring;>;", $PRIVATE, $field(SpringLayout, cyclicSprings)},
		{"acyclicSprings", "Ljava/util/Set;", "Ljava/util/Set<Ljavax/swing/Spring;>;", $PRIVATE, $field(SpringLayout, acyclicSprings)},
		{"NORTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, NORTH)},
		{"SOUTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, SOUTH)},
		{"EAST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, EAST)},
		{"WEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, WEST)},
		{"HORIZONTAL_CENTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, HORIZONTAL_CENTER)},
		{"VERTICAL_CENTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, VERTICAL_CENTER)},
		{"BASELINE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, BASELINE)},
		{"WIDTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, WIDTH)},
		{"HEIGHT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SpringLayout, HEIGHT)},
		{"ALL_HORIZONTAL", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(SpringLayout, ALL_HORIZONTAL)},
		{"ALL_VERTICAL", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(SpringLayout, ALL_VERTICAL)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SpringLayout, init$, void)},
		{"abandonCycles", "(Ljavax/swing/Spring;)Ljavax/swing/Spring;", nullptr, $PRIVATE, $method(SpringLayout, abandonCycles, $Spring*, $Spring*)},
		{"addInsets", "(IILjava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PRIVATE | $STATIC, $staticMethod(SpringLayout, addInsets, $Dimension*, int32_t, int32_t, $Container*)},
		{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(SpringLayout, addLayoutComponent, void, $String*, $Component*)},
		{"addLayoutComponent", "(Ljava/awt/Component;Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(SpringLayout, addLayoutComponent, void, $Component*, Object$*)},
		{"applyDefaults", "(Ljava/awt/Component;Ljavax/swing/SpringLayout$Constraints;)Ljavax/swing/SpringLayout$Constraints;", nullptr, $PRIVATE, $method(SpringLayout, applyDefaults, $SpringLayout$Constraints*, $Component*, $SpringLayout$Constraints*)},
		{"applyDefaults", "(Ljavax/swing/SpringLayout$Constraints;Ljava/lang/String;Ljavax/swing/Spring;Ljava/lang/String;Ljavax/swing/Spring;Ljava/util/List;)V", "(Ljavax/swing/SpringLayout$Constraints;Ljava/lang/String;Ljavax/swing/Spring;Ljava/lang/String;Ljavax/swing/Spring;Ljava/util/List<Ljava/lang/String;>;)V", $PRIVATE, $method(SpringLayout, applyDefaults, void, $SpringLayout$Constraints*, $String*, $Spring*, $String*, $Spring*, $List*)},
		{"getConstraint", "(Ljava/lang/String;Ljava/awt/Component;)Ljavax/swing/Spring;", nullptr, $PUBLIC, $virtualMethod(SpringLayout, getConstraint, $Spring*, $String*, $Component*)},
		{"getConstraints", "(Ljava/awt/Component;)Ljavax/swing/SpringLayout$Constraints;", nullptr, $PUBLIC, $virtualMethod(SpringLayout, getConstraints, $SpringLayout$Constraints*, $Component*)},
		{"getLayoutAlignmentX", "(Ljava/awt/Container;)F", nullptr, $PUBLIC, $virtualMethod(SpringLayout, getLayoutAlignmentX, float, $Container*)},
		{"getLayoutAlignmentY", "(Ljava/awt/Container;)F", nullptr, $PUBLIC, $virtualMethod(SpringLayout, getLayoutAlignmentY, float, $Container*)},
		{"invalidateLayout", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(SpringLayout, invalidateLayout, void, $Container*)},
		{"isCyclic", "(Ljavax/swing/Spring;)Z", nullptr, 0, $virtualMethod(SpringLayout, isCyclic, bool, $Spring*)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(SpringLayout, layoutContainer, void, $Container*)},
		{"maximumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SpringLayout, maximumLayoutSize, $Dimension*, $Container*)},
		{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SpringLayout, minimumLayoutSize, $Dimension*, $Container*)},
		{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SpringLayout, preferredLayoutSize, $Dimension*, $Container*)},
		{"putConstraint", "(Ljava/lang/String;Ljava/awt/Component;ILjava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(SpringLayout, putConstraint, void, $String*, $Component*, int32_t, $String*, $Component*)},
		{"putConstraint", "(Ljava/lang/String;Ljava/awt/Component;Ljavax/swing/Spring;Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(SpringLayout, putConstraint, void, $String*, $Component*, $Spring*, $String*, $Component*)},
		{"putConstraint", "(Ljava/lang/String;Ljava/awt/Component;Ljavax/swing/Spring;)V", nullptr, $PRIVATE, $method(SpringLayout, putConstraint, void, $String*, $Component*, $Spring*)},
		{"putConstraints", "(Ljava/awt/Component;Ljavax/swing/SpringLayout$Constraints;)V", nullptr, $PRIVATE, $method(SpringLayout, putConstraints, void, $Component*, $SpringLayout$Constraints*)},
		{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(SpringLayout, removeLayoutComponent, void, $Component*)},
		{"resetCyclicStatuses", "()V", nullptr, $PRIVATE, $method(SpringLayout, resetCyclicStatuses, void)},
		{"setParent", "(Ljava/awt/Container;)V", nullptr, $PRIVATE, $method(SpringLayout, setParent, void, $Container*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.SpringLayout$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{"javax.swing.SpringLayout$SpringProxy", "javax.swing.SpringLayout", "SpringProxy", $PRIVATE | $STATIC},
		{"javax.swing.SpringLayout$Constraints", "javax.swing.SpringLayout", "Constraints", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.SpringLayout",
		"java.lang.Object",
		"java.awt.LayoutManager2",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.SpringLayout$1,javax.swing.SpringLayout$SpringProxy,javax.swing.SpringLayout$Constraints,javax.swing.SpringLayout$Constraints$2,javax.swing.SpringLayout$Constraints$1"
	};
	$loadClass(SpringLayout, name, initialize, &classInfo$$, SpringLayout::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(SpringLayout);
	});
	return class$;
}

$Class* SpringLayout::class$ = nullptr;

	} // swing
} // javax
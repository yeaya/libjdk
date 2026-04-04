#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$ButtonAreaLayout.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Container.h>
#include <java/awt/Dimension.h>
#include <java/awt/Insets.h>
#include <java/lang/Math.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

using $ComponentArray = $Array<::java::awt::Component>;
using $DimensionArray = $Array<::java::awt::Dimension>;
using $Component = ::java::awt::Component;
using $Container = ::java::awt::Container;
using $Dimension = ::java::awt::Dimension;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthFileChooserUIImpl$ButtonAreaLayout::init$() {
	this->hGap = 5;
	this->topMargin = 17;
}

void SynthFileChooserUIImpl$ButtonAreaLayout::addLayoutComponent($String* string, $Component* comp) {
}

void SynthFileChooserUIImpl$ButtonAreaLayout::layoutContainer($Container* container) {
	$useLocalObjectStack();
	$var($ComponentArray, children, $nc(container)->getComponents());
	if (children != nullptr && children->length > 0) {
		int32_t numChildren = children->length;
		$var($DimensionArray, sizes, $new($DimensionArray, numChildren));
		$var($Insets, insets, container->getInsets());
		int32_t yLocation = $nc(insets)->top + this->topMargin;
		int32_t maxWidth = 0;
		for (int32_t counter = 0; counter < numChildren; ++counter) {
			sizes->set(counter, $($nc(children->get(counter))->getPreferredSize()));
			maxWidth = $Math::max(maxWidth, $nc(sizes->get(counter))->width);
		}
		int32_t xLocation = 0;
		int32_t xOffset = 0;
		if ($$nc(container->getComponentOrientation())->isLeftToRight()) {
			xLocation = $nc($(container->getSize()))->width - insets->left - maxWidth;
			xOffset = this->hGap + maxWidth;
		} else {
			xLocation = insets->left;
			xOffset = -(this->hGap + maxWidth);
		}
		for (int32_t counter = numChildren - 1; counter >= 0; --counter) {
			$nc(children->get(counter))->setBounds(xLocation, yLocation, maxWidth, $nc(sizes->get(counter))->height);
			xLocation -= xOffset;
		}
	}
}

$Dimension* SynthFileChooserUIImpl$ButtonAreaLayout::minimumLayoutSize($Container* c) {
	$useLocalObjectStack();
	if (c != nullptr) {
		$var($ComponentArray, children, c->getComponents());
		if (children != nullptr && children->length > 0) {
			int32_t numChildren = children->length;
			int32_t height = 0;
			$var($Insets, cInsets, c->getInsets());
			int32_t extraHeight = this->topMargin + $nc(cInsets)->top + $nc(cInsets)->bottom;
			int32_t extraWidth = cInsets->left + cInsets->right;
			int32_t maxWidth = 0;
			for (int32_t counter = 0; counter < numChildren; ++counter) {
				$var($Dimension, aSize, $nc(children->get(counter))->getPreferredSize());
				height = $Math::max(height, $nc(aSize)->height);
				maxWidth = $Math::max(maxWidth, aSize->width);
			}
			return $new($Dimension, extraWidth + numChildren * maxWidth + (numChildren - 1) * this->hGap, extraHeight + height);
		}
	}
	return $new($Dimension, 0, 0);
}

$Dimension* SynthFileChooserUIImpl$ButtonAreaLayout::preferredLayoutSize($Container* c) {
	return minimumLayoutSize(c);
}

void SynthFileChooserUIImpl$ButtonAreaLayout::removeLayoutComponent($Component* c) {
}

SynthFileChooserUIImpl$ButtonAreaLayout::SynthFileChooserUIImpl$ButtonAreaLayout() {
}

$Class* SynthFileChooserUIImpl$ButtonAreaLayout::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"hGap", "I", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl$ButtonAreaLayout, hGap)},
		{"topMargin", "I", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl$ButtonAreaLayout, topMargin)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(SynthFileChooserUIImpl$ButtonAreaLayout, init$, void)},
		{"addLayoutComponent", "(Ljava/lang/String;Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$ButtonAreaLayout, addLayoutComponent, void, $String*, $Component*)},
		{"layoutContainer", "(Ljava/awt/Container;)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$ButtonAreaLayout, layoutContainer, void, $Container*)},
		{"minimumLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$ButtonAreaLayout, minimumLayoutSize, $Dimension*, $Container*)},
		{"preferredLayoutSize", "(Ljava/awt/Container;)Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$ButtonAreaLayout, preferredLayoutSize, $Dimension*, $Container*)},
		{"removeLayoutComponent", "(Ljava/awt/Component;)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$ButtonAreaLayout, removeLayoutComponent, void, $Component*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.plaf.synth.SynthFileChooserUIImpl$ButtonAreaLayout", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "ButtonAreaLayout", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.plaf.synth.SynthFileChooserUIImpl$ButtonAreaLayout",
		"java.lang.Object",
		"java.awt.LayoutManager",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.plaf.synth.SynthFileChooserUIImpl"
	};
	$loadClass(SynthFileChooserUIImpl$ButtonAreaLayout, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthFileChooserUIImpl$ButtonAreaLayout);
	});
	return class$;
}

$Class* SynthFileChooserUIImpl$ButtonAreaLayout::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun
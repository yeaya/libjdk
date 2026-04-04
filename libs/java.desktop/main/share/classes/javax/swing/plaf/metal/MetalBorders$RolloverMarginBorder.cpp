#include <javax/swing/plaf/metal/MetalBorders$RolloverMarginBorder.h>
#include <java/awt/Component.h>
#include <java/awt/Insets.h>
#include <javax/swing/AbstractButton.h>
#include <javax/swing/border/EmptyBorder.h>
#include <javax/swing/plaf/UIResource.h>
#include <javax/swing/plaf/metal/MetalBorders.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractButton = ::javax::swing::AbstractButton;
using $EmptyBorder = ::javax::swing::border::EmptyBorder;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalBorders$RolloverMarginBorder::init$() {
	$EmptyBorder::init$(3, 3, 3, 3);
}

$Insets* MetalBorders$RolloverMarginBorder::getBorderInsets($Component* c, $Insets* insets) {
	$var($Insets, margin, nullptr);
	if ($instanceOf($AbstractButton, c)) {
		$assign(margin, $cast($AbstractButton, c)->getMargin());
	}
	if (margin == nullptr || $instanceOf($UIResource, margin)) {
		$nc(insets)->left = this->left;
		insets->top = this->top;
		insets->right = this->right;
		insets->bottom = this->bottom;
	} else {
		$nc(insets)->left = margin->left;
		insets->top = margin->top;
		insets->right = margin->right;
		insets->bottom = margin->bottom;
	}
	return insets;
}

MetalBorders$RolloverMarginBorder::MetalBorders$RolloverMarginBorder() {
}

$Class* MetalBorders$RolloverMarginBorder::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(MetalBorders$RolloverMarginBorder, init$, void)},
		{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(MetalBorders$RolloverMarginBorder, getBorderInsets, $Insets*, $Component*, $Insets*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder", "javax.swing.plaf.metal.MetalBorders", "RolloverMarginBorder", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalBorders$RolloverMarginBorder",
		"javax.swing.border.EmptyBorder",
		nullptr,
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalBorders"
	};
	$loadClass(MetalBorders$RolloverMarginBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalBorders$RolloverMarginBorder));
	});
	return class$;
}

$Class* MetalBorders$RolloverMarginBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax
#include <javax/swing/plaf/metal/MetalComboBoxEditor$EditorBorder.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/ColorUIResource.h>
#include <javax/swing/plaf/metal/MetalComboBoxEditor.h>
#include <javax/swing/plaf/metal/MetalLookAndFeel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $MetalComboBoxEditor = ::javax::swing::plaf::metal::MetalComboBoxEditor;
using $MetalLookAndFeel = ::javax::swing::plaf::metal::MetalLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalComboBoxEditor$EditorBorder::init$($MetalComboBoxEditor* this$0) {
	$set(this, this$0, this$0);
	$AbstractBorder::init$();
}

void MetalComboBoxEditor$EditorBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$nc(g)->translate(x, y);
	if ($MetalLookAndFeel::usingOcean()) {
		g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
		g->drawRect(0, 0, w, h - 1);
		g->setColor($($MetalLookAndFeel::getControlShadow()));
		g->drawRect(1, 1, w - 2, h - 3);
	} else {
		g->setColor($($MetalLookAndFeel::getControlDarkShadow()));
		g->drawLine(0, 0, w - 1, 0);
		g->drawLine(0, 0, 0, h - 2);
		g->drawLine(0, h - 2, w - 1, h - 2);
		g->setColor($($MetalLookAndFeel::getControlHighlight()));
		g->drawLine(1, 1, w - 1, 1);
		g->drawLine(1, 1, 1, h - 1);
		g->drawLine(1, h - 1, w - 1, h - 1);
		g->setColor($($MetalLookAndFeel::getControl()));
		g->drawLine(1, h - 2, 1, h - 2);
	}
	g->translate(-x, -y);
}

$Insets* MetalComboBoxEditor$EditorBorder::getBorderInsets($Component* c, $Insets* insets) {
	$nc(insets)->set(2, 2, 2, 0);
	return insets;
}

MetalComboBoxEditor$EditorBorder::MetalComboBoxEditor$EditorBorder() {
}

$Class* MetalComboBoxEditor$EditorBorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalComboBoxEditor;", nullptr, $FINAL | $SYNTHETIC, $field(MetalComboBoxEditor$EditorBorder, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalComboBoxEditor;)V", nullptr, 0, $method(MetalComboBoxEditor$EditorBorder, init$, void, $MetalComboBoxEditor*)},
		{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(MetalComboBoxEditor$EditorBorder, getBorderInsets, $Insets*, $Component*, $Insets*)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(MetalComboBoxEditor$EditorBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalComboBoxEditor$EditorBorder", "javax.swing.plaf.metal.MetalComboBoxEditor", "EditorBorder", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalComboBoxEditor$EditorBorder",
		"javax.swing.border.AbstractBorder",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalComboBoxEditor"
	};
	$loadClass(MetalComboBoxEditor$EditorBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalComboBoxEditor$EditorBorder));
	});
	return class$;
}

$Class* MetalComboBoxEditor$EditorBorder::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax
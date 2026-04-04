#include <sun/swing/plaf/synth/SynthFileChooserUI$UIBorder.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <java/awt/Insets.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/border/AbstractBorder.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <sun/swing/plaf/synth/SynthFileChooserUI.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $Insets = ::java::awt::Insets;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $AbstractBorder = ::javax::swing::border::AbstractBorder;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthStyle = ::javax::swing::plaf::synth::SynthStyle;
using $SynthFileChooserUI = ::sun::swing::plaf::synth::SynthFileChooserUI;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

int32_t SynthFileChooserUI$UIBorder::hashCode() {
	 return this->$AbstractBorder::hashCode();
}

bool SynthFileChooserUI$UIBorder::equals(Object$* arg0) {
	 return this->$AbstractBorder::equals(arg0);
}

$Object* SynthFileChooserUI$UIBorder::clone() {
	 return this->$AbstractBorder::clone();
}

$String* SynthFileChooserUI$UIBorder::toString() {
	 return this->$AbstractBorder::toString();
}

void SynthFileChooserUI$UIBorder::finalize() {
	this->$AbstractBorder::finalize();
}

void SynthFileChooserUI$UIBorder::init$($SynthFileChooserUI* this$0, $Insets* insets) {
	$set(this, this$0, this$0);
	$AbstractBorder::init$();
	if (insets != nullptr) {
		$set(this, _insets, $new($Insets, insets->top, insets->left, insets->bottom, insets->right));
	} else {
		$set(this, _insets, nullptr);
	}
}

void SynthFileChooserUI$UIBorder::paintBorder($Component* c, $Graphics* g, int32_t x, int32_t y, int32_t width, int32_t height) {
	$useLocalObjectStack();
	if (!($instanceOf($JComponent, c))) {
		return;
	}
	$var($JComponent, jc, $cast($JComponent, c));
	$var($SynthContext, context, this->this$0->getContext(jc));
	$var($SynthStyle, style, $nc(context)->getStyle());
	if (style != nullptr) {
		$$nc(style->getPainter(context))->paintFileChooserBorder(context, g, x, y, width, height);
	}
}

$Insets* SynthFileChooserUI$UIBorder::getBorderInsets($Component* c, $Insets* insets$renamed) {
	$var($Insets, insets, insets$renamed);
	if (insets == nullptr) {
		$assign(insets, $new($Insets, 0, 0, 0, 0));
	}
	if (this->_insets != nullptr) {
		$nc(insets)->top = this->_insets->top;
		insets->bottom = this->_insets->bottom;
		insets->left = this->_insets->left;
		insets->right = this->_insets->right;
	} else {
		$nc(insets)->top = ($nc(insets)->bottom = ($nc(insets)->right = ($nc(insets)->left = 0)));
	}
	return insets;
}

bool SynthFileChooserUI$UIBorder::isBorderOpaque() {
	return false;
}

SynthFileChooserUI$UIBorder::SynthFileChooserUI$UIBorder() {
}

$Class* SynthFileChooserUI$UIBorder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUI$UIBorder, this$0)},
		{"_insets", "Ljava/awt/Insets;", nullptr, $PRIVATE, $field(SynthFileChooserUI$UIBorder, _insets)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUI;Ljava/awt/Insets;)V", nullptr, 0, $method(SynthFileChooserUI$UIBorder, init$, void, $SynthFileChooserUI*, $Insets*)},
		{"getBorderInsets", "(Ljava/awt/Component;Ljava/awt/Insets;)Ljava/awt/Insets;", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUI$UIBorder, getBorderInsets, $Insets*, $Component*, $Insets*)},
		{"isBorderOpaque", "()Z", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUI$UIBorder, isBorderOpaque, bool)},
		{"paintBorder", "(Ljava/awt/Component;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUI$UIBorder, paintBorder, void, $Component*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.plaf.synth.SynthFileChooserUI$UIBorder", "sun.swing.plaf.synth.SynthFileChooserUI", "UIBorder", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.plaf.synth.SynthFileChooserUI$UIBorder",
		"javax.swing.border.AbstractBorder",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.plaf.synth.SynthFileChooserUI"
	};
	$loadClass(SynthFileChooserUI$UIBorder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthFileChooserUI$UIBorder));
	});
	return class$;
}

$Class* SynthFileChooserUI$UIBorder::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun
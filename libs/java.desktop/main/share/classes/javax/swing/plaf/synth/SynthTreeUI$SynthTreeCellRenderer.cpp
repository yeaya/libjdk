#include <javax/swing/plaf/synth/SynthTreeUI$SynthTreeCellRenderer.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <java/lang/AssertionError.h>
#include <java/lang/Math.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/synth/Region.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthLabelUI.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <javax/swing/plaf/synth/SynthPainter.h>
#include <javax/swing/plaf/synth/SynthStyle.h>
#include <javax/swing/plaf/synth/SynthTreeUI.h>
#include <javax/swing/tree/DefaultTreeCellRenderer.h>
#include <jcpp.h>

#undef TREE_CELL

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $AssertionError = ::java::lang::AssertionError;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JTree = ::javax::swing::JTree;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $Region = ::javax::swing::plaf::synth::Region;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthLabelUI = ::javax::swing::plaf::synth::SynthLabelUI;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;
using $SynthTreeUI = ::javax::swing::plaf::synth::SynthTreeUI;
using $DefaultTreeCellRenderer = ::javax::swing::tree::DefaultTreeCellRenderer;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$String* SynthTreeUI$SynthTreeCellRenderer::toString() {
	return this->$DefaultTreeCellRenderer::toString();
}

int32_t SynthTreeUI$SynthTreeCellRenderer::hashCode() {
	return this->$DefaultTreeCellRenderer::hashCode();
}

bool SynthTreeUI$SynthTreeCellRenderer::equals(Object$* arg0) {
	return this->$DefaultTreeCellRenderer::equals(arg0);
}

$Object* SynthTreeUI$SynthTreeCellRenderer::clone() {
	return this->$DefaultTreeCellRenderer::clone();
}

void SynthTreeUI$SynthTreeCellRenderer::finalize() {
	this->$DefaultTreeCellRenderer::finalize();
}

bool SynthTreeUI$SynthTreeCellRenderer::$assertionsDisabled = false;

void SynthTreeUI$SynthTreeCellRenderer::init$($SynthTreeUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultTreeCellRenderer::init$();
}

$String* SynthTreeUI$SynthTreeCellRenderer::getName() {
	return "Tree.cellRenderer"_s;
}

$Component* SynthTreeUI$SynthTreeCellRenderer::getTreeCellRendererComponent($JTree* tree, Object$* value, bool sel, bool expanded, bool leaf, int32_t row, bool hasFocus) {
	$useLocalObjectStack();
	if (!this->this$0->useTreeColors && (sel || hasFocus)) {
		$load($SynthLabelUI);
		$var($ComponentUI, var$0, $cast($SynthLabelUI, $SynthLookAndFeel::getUIOfType($(getUI()), $SynthLabelUI::class$)));
		$SynthLookAndFeel::setSelectedUI(var$0, sel, hasFocus, $nc(tree)->isEnabled(), false);
	} else {
		$SynthLookAndFeel::resetSelectedUI();
	}
	return $DefaultTreeCellRenderer::getTreeCellRendererComponent(tree, value, sel, expanded, leaf, row, hasFocus);
}

void SynthTreeUI$SynthTreeCellRenderer::paint($Graphics* g) {
	$useLocalObjectStack();
	paintComponent(g);
	if (this->hasFocus$) {
		$init($Region);
		$var($SynthContext, context, this->this$0->getContext($($SynthTreeUI::access$000(this->this$0)), $Region::TREE_CELL));
		if ($nc(context)->getStyle() == nullptr) {
			if (!SynthTreeUI$SynthTreeCellRenderer::$assertionsDisabled) {
				$throwNew($AssertionError, $of("SynthTreeCellRenderer is being used outside of UI that created it"_s));
			}
			return;
		}
		int32_t imageOffset = 0;
		$var($Icon, currentI, getIcon());
		if (currentI != nullptr && getText() != nullptr) {
			int32_t var$0 = currentI->getIconWidth();
			imageOffset = var$0 + $Math::max(0, getIconTextGap() - 1);
		}
		if (this->selected) {
			context->setComponentState(1 | 0x0200);
		} else {
			context->setComponentState(1);
		}
		if ($$nc(getComponentOrientation())->isLeftToRight()) {
			int32_t var$1 = getWidth() - imageOffset;
			$$nc(context->getPainter())->paintTreeCellFocus(context, g, imageOffset, 0, var$1, getHeight());
		} else {
			int32_t var$2 = getWidth() - imageOffset;
			$$nc(context->getPainter())->paintTreeCellFocus(context, g, 0, 0, var$2, getHeight());
		}
	}
	$SynthLookAndFeel::resetSelectedUI();
}

void SynthTreeUI$SynthTreeCellRenderer::clinit$($Class* clazz) {
	$load($SynthTreeUI);
	SynthTreeUI$SynthTreeCellRenderer::$assertionsDisabled = !$SynthTreeUI::class$->desiredAssertionStatus();
}

SynthTreeUI$SynthTreeCellRenderer::SynthTreeUI$SynthTreeCellRenderer() {
}

$Class* SynthTreeUI$SynthTreeCellRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTreeUI$SynthTreeCellRenderer, this$0)},
		{"$assertionsDisabled", "Z", nullptr, $STATIC | $FINAL | $SYNTHETIC, $staticField(SynthTreeUI$SynthTreeCellRenderer, $assertionsDisabled)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/plaf/synth/SynthTreeUI;)V", nullptr, 0, $method(SynthTreeUI$SynthTreeCellRenderer, init$, void, $SynthTreeUI*)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SynthTreeUI$SynthTreeCellRenderer, getName, $String*)},
		{"getTreeCellRendererComponent", "(Ljavax/swing/JTree;Ljava/lang/Object;ZZZIZ)Ljava/awt/Component;", nullptr, $PUBLIC, $virtualMethod(SynthTreeUI$SynthTreeCellRenderer, getTreeCellRendererComponent, $Component*, $JTree*, Object$*, bool, bool, bool, int32_t, bool)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(SynthTreeUI$SynthTreeCellRenderer, paint, void, $Graphics*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellRenderer", "javax.swing.plaf.synth.SynthTreeUI", "SynthTreeCellRenderer", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthTreeUI$SynthTreeCellRenderer",
		"javax.swing.tree.DefaultTreeCellRenderer",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthTreeUI"
	};
	$loadClass(SynthTreeUI$SynthTreeCellRenderer, name, initialize, &classInfo$$, SynthTreeUI$SynthTreeCellRenderer::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthTreeUI$SynthTreeCellRenderer));
	});
	return class$;
}

$Class* SynthTreeUI$SynthTreeCellRenderer::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
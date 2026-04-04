#include <javax/swing/plaf/synth/SynthListUI$SynthListCellRenderer.h>
#include <java/awt/Component.h>
#include <java/awt/Graphics.h>
#include <javax/swing/DefaultListCellRenderer$UIResource.h>
#include <javax/swing/DefaultListCellRenderer.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/border/Border.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/synth/SynthBorder.h>
#include <javax/swing/plaf/synth/SynthLabelUI.h>
#include <javax/swing/plaf/synth/SynthListUI.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DefaultListCellRenderer$UIResource = ::javax::swing::DefaultListCellRenderer$UIResource;
using $JList = ::javax::swing::JList;
using $Border = ::javax::swing::border::Border;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SynthBorder = ::javax::swing::plaf::synth::SynthBorder;
using $SynthLabelUI = ::javax::swing::plaf::synth::SynthLabelUI;
using $SynthListUI = ::javax::swing::plaf::synth::SynthListUI;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthListUI$SynthListCellRenderer::init$($SynthListUI* this$0) {
	$set(this, this$0, this$0);
	$DefaultListCellRenderer$UIResource::init$();
}

$String* SynthListUI$SynthListCellRenderer::getName() {
	return "List.cellRenderer"_s;
}

void SynthListUI$SynthListCellRenderer::setBorder($Border* b) {
	if (this->this$0->useUIBorder || $instanceOf($SynthBorder, b)) {
		$DefaultListCellRenderer$UIResource::setBorder(b);
	}
}

$Component* SynthListUI$SynthListCellRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalObjectStack();
	if (!this->this$0->useListColors && (isSelected || cellHasFocus)) {
		$load($SynthLabelUI);
		$var($ComponentUI, var$0, $cast($SynthLabelUI, $SynthLookAndFeel::getUIOfType($(getUI()), $SynthLabelUI::class$)));
		$SynthLookAndFeel::setSelectedUI(var$0, isSelected, cellHasFocus, $nc(list)->isEnabled(), false);
	} else {
		$SynthLookAndFeel::resetSelectedUI();
	}
	$DefaultListCellRenderer$UIResource::getListCellRendererComponent(list, value, index, isSelected, cellHasFocus);
	return this;
}

void SynthListUI$SynthListCellRenderer::paint($Graphics* g) {
	$DefaultListCellRenderer$UIResource::paint(g);
	$SynthLookAndFeel::resetSelectedUI();
}

SynthListUI$SynthListCellRenderer::SynthListUI$SynthListCellRenderer() {
}

$Class* SynthListUI$SynthListCellRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthListUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthListUI$SynthListCellRenderer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthListUI;)V", nullptr, $PRIVATE, $method(SynthListUI$SynthListCellRenderer, init$, void, $SynthListUI*)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC, $virtualMethod(SynthListUI$SynthListCellRenderer, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SynthListUI$SynthListCellRenderer, getName, $String*)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(SynthListUI$SynthListCellRenderer, paint, void, $Graphics*)},
		{"setBorder", "(Ljavax/swing/border/Border;)V", nullptr, $PUBLIC, $virtualMethod(SynthListUI$SynthListCellRenderer, setBorder, void, $Border*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthListUI$SynthListCellRenderer", "javax.swing.plaf.synth.SynthListUI", "SynthListCellRenderer", $PRIVATE},
		{"javax.swing.DefaultListCellRenderer$UIResource", "javax.swing.DefaultListCellRenderer", "UIResource", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthListUI$SynthListCellRenderer",
		"javax.swing.DefaultListCellRenderer$UIResource",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthListUI"
	};
	$loadClass(SynthListUI$SynthListCellRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthListUI$SynthListCellRenderer));
	});
	return class$;
}

$Class* SynthListUI$SynthListCellRenderer::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
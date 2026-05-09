#include <javax/swing/plaf/synth/SynthComboBoxUI$SynthComboBoxRenderer.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Font.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JComboBox.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JList.h>
#include <javax/swing/plaf/ComponentUI.h>
#include <javax/swing/plaf/LabelUI.h>
#include <javax/swing/plaf/synth/SynthComboBoxUI.h>
#include <javax/swing/plaf/synth/SynthLabelUI.h>
#include <javax/swing/plaf/synth/SynthLookAndFeel.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Icon = ::javax::swing::Icon;
using $JLabel = ::javax::swing::JLabel;
using $JList = ::javax::swing::JList;
using $ComponentUI = ::javax::swing::plaf::ComponentUI;
using $SynthComboBoxUI = ::javax::swing::plaf::synth::SynthComboBoxUI;
using $SynthLabelUI = ::javax::swing::plaf::synth::SynthLabelUI;
using $SynthLookAndFeel = ::javax::swing::plaf::synth::SynthLookAndFeel;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

$String* SynthComboBoxUI$SynthComboBoxRenderer::toString() {
	return this->$JLabel::toString();
}

int32_t SynthComboBoxUI$SynthComboBoxRenderer::hashCode() {
	return this->$JLabel::hashCode();
}

bool SynthComboBoxUI$SynthComboBoxRenderer::equals(Object$* arg0) {
	return this->$JLabel::equals(arg0);
}

$Object* SynthComboBoxUI$SynthComboBoxRenderer::clone() {
	return this->$JLabel::clone();
}

void SynthComboBoxUI$SynthComboBoxRenderer::finalize() {
	this->$JLabel::finalize();
}

void SynthComboBoxUI$SynthComboBoxRenderer::init$($SynthComboBoxUI* this$0) {
	$set(this, this$0, this$0);
	$JLabel::init$();
	setText(" "_s);
}

$String* SynthComboBoxUI$SynthComboBoxRenderer::getName() {
	$var($String, name, $JLabel::getName());
	return name == nullptr ? "ComboBox.renderer"_s : name;
}

$Component* SynthComboBoxUI$SynthComboBoxRenderer::getListCellRendererComponent($JList* list, Object$* value, int32_t index, bool isSelected, bool cellHasFocus) {
	$useLocalObjectStack();
	setName("ComboBox.listRenderer"_s);
	$SynthLookAndFeel::resetSelectedUI();
	if (isSelected) {
		setBackground($($nc(list)->getSelectionBackground()));
		setForeground($(list->getSelectionForeground()));
		if (!this->this$0->useListColors) {
			$load($SynthLabelUI);
			$var($ComponentUI, var$0, $cast($SynthLabelUI, $SynthLookAndFeel::getUIOfType($(getUI()), $SynthLabelUI::class$)));
			$SynthLookAndFeel::setSelectedUI(var$0, isSelected, cellHasFocus, list->isEnabled(), false);
		}
	} else {
		setBackground($($nc(list)->getBackground()));
		setForeground($(list->getForeground()));
	}
	setFont($($nc(list)->getFont()));
	if ($instanceOf($Icon, value)) {
		setIcon($cast($Icon, value));
		setText(""_s);
	} else {
		$var($String, text, (value == nullptr) ? " "_s : $of(value)->toString());
		if (""_s->equals(text)) {
			$assign(text, " "_s);
		}
		setText(text);
	}
	if ($SynthComboBoxUI::access$000(this->this$0) != nullptr) {
		setEnabled($$nc($SynthComboBoxUI::access$100(this->this$0))->isEnabled());
		setComponentOrientation($($$nc($SynthComboBoxUI::access$200(this->this$0))->getComponentOrientation()));
	}
	return this;
}

void SynthComboBoxUI$SynthComboBoxRenderer::paint($Graphics* g) {
	$JLabel::paint(g);
	$SynthLookAndFeel::resetSelectedUI();
}

SynthComboBoxUI$SynthComboBoxRenderer::SynthComboBoxUI$SynthComboBoxRenderer() {
}

$Class* SynthComboBoxUI$SynthComboBoxRenderer::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthComboBoxUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthComboBoxUI$SynthComboBoxRenderer, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/plaf/synth/SynthComboBoxUI;)V", nullptr, $PUBLIC, $method(SynthComboBoxUI$SynthComboBoxRenderer, init$, void, $SynthComboBoxUI*)},
		{"getListCellRendererComponent", "(Ljavax/swing/JList;Ljava/lang/Object;IZZ)Ljava/awt/Component;", "(Ljavax/swing/JList<*>;Ljava/lang/Object;IZZ)Ljava/awt/Component;", $PUBLIC, $virtualMethod(SynthComboBoxUI$SynthComboBoxRenderer, getListCellRendererComponent, $Component*, $JList*, Object$*, int32_t, bool, bool)},
		{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(SynthComboBoxUI$SynthComboBoxRenderer, getName, $String*)},
		{"paint", "(Ljava/awt/Graphics;)V", nullptr, $PUBLIC, $virtualMethod(SynthComboBoxUI$SynthComboBoxRenderer, paint, void, $Graphics*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxRenderer", "javax.swing.plaf.synth.SynthComboBoxUI", "SynthComboBoxRenderer", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthComboBoxUI$SynthComboBoxRenderer",
		"javax.swing.JLabel",
		"javax.swing.ListCellRenderer,javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		"Ljavax/swing/JLabel;Ljavax/swing/ListCellRenderer<Ljava/lang/Object;>;Ljavax/swing/plaf/UIResource;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.synth.SynthComboBoxUI"
	};
	$loadClass(SynthComboBoxUI$SynthComboBoxRenderer, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthComboBoxUI$SynthComboBoxRenderer));
	});
	return class$;
}

$Class* SynthComboBoxUI$SynthComboBoxRenderer::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
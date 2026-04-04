#include <javax/swing/plaf/metal/MetalFileChooserUI$AlignedLabel.h>
#include <java/awt/Dimension.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/plaf/metal/MetalFileChooserUI.h>
#include <jcpp.h>

#undef LEFT_ALIGNMENT

using $Dimension = ::java::awt::Dimension;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $JComponent = ::javax::swing::JComponent;
using $JLabel = ::javax::swing::JLabel;
using $MetalFileChooserUI = ::javax::swing::plaf::metal::MetalFileChooserUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace metal {

void MetalFileChooserUI$AlignedLabel::init$($MetalFileChooserUI* this$0) {
	$set(this, this$0, this$0);
	$JLabel::init$();
	this->maxWidth = 0;
	$init($JComponent);
	setAlignmentX($JComponent::LEFT_ALIGNMENT);
}

void MetalFileChooserUI$AlignedLabel::init$($MetalFileChooserUI* this$0, $String* text) {
	$set(this, this$0, this$0);
	$JLabel::init$(text);
	this->maxWidth = 0;
	$init($JComponent);
	setAlignmentX($JComponent::LEFT_ALIGNMENT);
}

$Dimension* MetalFileChooserUI$AlignedLabel::getPreferredSize() {
	$var($Dimension, d, $JLabel::getPreferredSize());
	return $new($Dimension, getMaxWidth() + 11, $nc(d)->height);
}

int32_t MetalFileChooserUI$AlignedLabel::getMaxWidth() {
	if (this->maxWidth == 0 && this->group != nullptr) {
		int32_t max = 0;
		for (int32_t i = 0; i < $nc(this->group)->length; ++i) {
			max = $Math::max($nc(this->group->get(i))->getSuperPreferredWidth(), max);
		}
		for (int32_t i = 0; i < $nc(this->group)->length; ++i) {
			$nc(this->group->get(i))->maxWidth = max;
		}
	}
	return this->maxWidth;
}

int32_t MetalFileChooserUI$AlignedLabel::getSuperPreferredWidth() {
	return $nc($($JLabel::getPreferredSize()))->width;
}

MetalFileChooserUI$AlignedLabel::MetalFileChooserUI$AlignedLabel() {
}

$Class* MetalFileChooserUI$AlignedLabel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/metal/MetalFileChooserUI;", nullptr, $FINAL | $SYNTHETIC, $field(MetalFileChooserUI$AlignedLabel, this$0)},
		{"group", "[Ljavax/swing/plaf/metal/MetalFileChooserUI$AlignedLabel;", nullptr, $PRIVATE, $field(MetalFileChooserUI$AlignedLabel, group)},
		{"maxWidth", "I", nullptr, $PRIVATE, $field(MetalFileChooserUI$AlignedLabel, maxWidth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;)V", nullptr, 0, $method(MetalFileChooserUI$AlignedLabel, init$, void, $MetalFileChooserUI*)},
		{"<init>", "(Ljavax/swing/plaf/metal/MetalFileChooserUI;Ljava/lang/String;)V", nullptr, 0, $method(MetalFileChooserUI$AlignedLabel, init$, void, $MetalFileChooserUI*, $String*)},
		{"getMaxWidth", "()I", nullptr, $PRIVATE, $method(MetalFileChooserUI$AlignedLabel, getMaxWidth, int32_t)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(MetalFileChooserUI$AlignedLabel, getPreferredSize, $Dimension*)},
		{"getSuperPreferredWidth", "()I", nullptr, $PRIVATE, $method(MetalFileChooserUI$AlignedLabel, getSuperPreferredWidth, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.metal.MetalFileChooserUI$AlignedLabel", "javax.swing.plaf.metal.MetalFileChooserUI", "AlignedLabel", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.metal.MetalFileChooserUI$AlignedLabel",
		"javax.swing.JLabel",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.metal.MetalFileChooserUI"
	};
	$loadClass(MetalFileChooserUI$AlignedLabel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(MetalFileChooserUI$AlignedLabel));
	});
	return class$;
}

$Class* MetalFileChooserUI$AlignedLabel::class$ = nullptr;

			} // metal
		} // plaf
	} // swing
} // javax
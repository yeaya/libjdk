#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$AlignedLabel.h>
#include <java/awt/Dimension.h>
#include <java/lang/Math.h>
#include <javax/swing/JComponent.h>
#include <javax/swing/JLabel.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
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
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthFileChooserUIImpl$AlignedLabel::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
	$JLabel::init$();
	this->maxWidth = 0;
	$init($JComponent);
	setAlignmentX($JComponent::LEFT_ALIGNMENT);
}

void SynthFileChooserUIImpl$AlignedLabel::init$($SynthFileChooserUIImpl* this$0, $String* text) {
	$set(this, this$0, this$0);
	$JLabel::init$(text);
	this->maxWidth = 0;
	$init($JComponent);
	setAlignmentX($JComponent::LEFT_ALIGNMENT);
}

$Dimension* SynthFileChooserUIImpl$AlignedLabel::getPreferredSize() {
	$var($Dimension, d, $JLabel::getPreferredSize());
	return $new($Dimension, getMaxWidth() + 11, $nc(d)->height);
}

int32_t SynthFileChooserUIImpl$AlignedLabel::getMaxWidth() {
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

int32_t SynthFileChooserUIImpl$AlignedLabel::getSuperPreferredWidth() {
	return $nc($($JLabel::getPreferredSize()))->width;
}

SynthFileChooserUIImpl$AlignedLabel::SynthFileChooserUIImpl$AlignedLabel() {
}

$Class* SynthFileChooserUIImpl$AlignedLabel::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$AlignedLabel, this$0)},
		{"group", "[Lsun/swing/plaf/synth/SynthFileChooserUIImpl$AlignedLabel;", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl$AlignedLabel, group)},
		{"maxWidth", "I", nullptr, $PRIVATE, $field(SynthFileChooserUIImpl$AlignedLabel, maxWidth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, 0, $method(SynthFileChooserUIImpl$AlignedLabel, init$, void, $SynthFileChooserUIImpl*)},
		{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;Ljava/lang/String;)V", nullptr, 0, $method(SynthFileChooserUIImpl$AlignedLabel, init$, void, $SynthFileChooserUIImpl*, $String*)},
		{"getMaxWidth", "()I", nullptr, $PRIVATE, $method(SynthFileChooserUIImpl$AlignedLabel, getMaxWidth, int32_t)},
		{"getPreferredSize", "()Ljava/awt/Dimension;", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$AlignedLabel, getPreferredSize, $Dimension*)},
		{"getSuperPreferredWidth", "()I", nullptr, $PRIVATE, $method(SynthFileChooserUIImpl$AlignedLabel, getSuperPreferredWidth, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.plaf.synth.SynthFileChooserUIImpl$AlignedLabel", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "AlignedLabel", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.plaf.synth.SynthFileChooserUIImpl$AlignedLabel",
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
		"sun.swing.plaf.synth.SynthFileChooserUIImpl"
	};
	$loadClass(SynthFileChooserUIImpl$AlignedLabel, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(SynthFileChooserUIImpl$AlignedLabel));
	});
	return class$;
}

$Class* SynthFileChooserUIImpl$AlignedLabel::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun
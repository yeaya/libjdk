#include <javax/swing/plaf/synth/SynthTreeUI$ExpandedIconWrapper.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <javax/swing/JTree.h>
#include <javax/swing/plaf/synth/SynthContext.h>
#include <javax/swing/plaf/synth/SynthGraphicsUtils.h>
#include <javax/swing/plaf/synth/SynthTreeUI.h>
#include <jcpp.h>

using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthContext = ::javax::swing::plaf::synth::SynthContext;
using $SynthGraphicsUtils = ::javax::swing::plaf::synth::SynthGraphicsUtils;
using $SynthTreeUI = ::javax::swing::plaf::synth::SynthTreeUI;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthTreeUI$ExpandedIconWrapper::init$($SynthTreeUI* this$0) {
	$set(this, this$0, this$0);
}

void SynthTreeUI$ExpandedIconWrapper::paintIcon($SynthContext* context$renamed, $Graphics* g, int32_t x, int32_t y, int32_t w, int32_t h) {
	$useLocalObjectStack();
	$var($SynthContext, context, context$renamed);
	if (context == nullptr) {
		$assign(context, this->this$0->getContext($($SynthTreeUI::access$100(this->this$0))));
		$SynthGraphicsUtils::paintIcon($($SynthTreeUI::access$200(this->this$0)), context, g, x, y, w, h);
	} else {
		$SynthGraphicsUtils::paintIcon($($SynthTreeUI::access$300(this->this$0)), context, g, x, y, w, h);
	}
}

int32_t SynthTreeUI$ExpandedIconWrapper::getIconWidth($SynthContext* context$renamed) {
	$useLocalObjectStack();
	$var($SynthContext, context, context$renamed);
	int32_t width = 0;
	if (context == nullptr) {
		$assign(context, this->this$0->getContext($($SynthTreeUI::access$400(this->this$0))));
		width = $SynthGraphicsUtils::getIconWidth($($SynthTreeUI::access$500(this->this$0)), context);
	} else {
		width = $SynthGraphicsUtils::getIconWidth($($SynthTreeUI::access$600(this->this$0)), context);
	}
	return width;
}

int32_t SynthTreeUI$ExpandedIconWrapper::getIconHeight($SynthContext* context$renamed) {
	$useLocalObjectStack();
	$var($SynthContext, context, context$renamed);
	int32_t height = 0;
	if (context == nullptr) {
		$assign(context, this->this$0->getContext($($SynthTreeUI::access$700(this->this$0))));
		height = $SynthGraphicsUtils::getIconHeight($($SynthTreeUI::access$800(this->this$0)), context);
	} else {
		height = $SynthGraphicsUtils::getIconHeight($($SynthTreeUI::access$900(this->this$0)), context);
	}
	return height;
}

SynthTreeUI$ExpandedIconWrapper::SynthTreeUI$ExpandedIconWrapper() {
}

$Class* SynthTreeUI$ExpandedIconWrapper::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Ljavax/swing/plaf/synth/SynthTreeUI;", nullptr, $FINAL | $SYNTHETIC, $field(SynthTreeUI$ExpandedIconWrapper, this$0)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/plaf/synth/SynthTreeUI;)V", nullptr, $PRIVATE, $method(SynthTreeUI$ExpandedIconWrapper, init$, void, $SynthTreeUI*)},
		{"getIconHeight", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC, $virtualMethod(SynthTreeUI$ExpandedIconWrapper, getIconHeight, int32_t, $SynthContext*)},
		{"getIconWidth", "(Ljavax/swing/plaf/synth/SynthContext;)I", nullptr, $PUBLIC, $virtualMethod(SynthTreeUI$ExpandedIconWrapper, getIconWidth, int32_t, $SynthContext*)},
		{"paintIcon", "(Ljavax/swing/plaf/synth/SynthContext;Ljava/awt/Graphics;IIII)V", nullptr, $PUBLIC, $virtualMethod(SynthTreeUI$ExpandedIconWrapper, paintIcon, void, $SynthContext*, $Graphics*, int32_t, int32_t, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.synth.SynthTreeUI$ExpandedIconWrapper", "javax.swing.plaf.synth.SynthTreeUI", "ExpandedIconWrapper", $PRIVATE},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.synth.SynthTreeUI$ExpandedIconWrapper",
		"java.lang.Object",
		"javax.swing.plaf.synth.SynthIcon",
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
	$loadClass(SynthTreeUI$ExpandedIconWrapper, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthTreeUI$ExpandedIconWrapper);
	});
	return class$;
}

$Class* SynthTreeUI$ExpandedIconWrapper::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
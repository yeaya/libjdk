#include <sun/swing/plaf/synth/SynthFileChooserUIImpl$IndentIcon.h>
#include <java/awt/Component.h>
#include <java/awt/ComponentOrientation.h>
#include <java/awt/Graphics.h>
#include <javax/swing/Icon.h>
#include <sun/swing/plaf/synth/SynthFileChooserUIImpl.h>
#include <jcpp.h>

using $Component = ::java::awt::Component;
using $Graphics = ::java::awt::Graphics;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SynthFileChooserUIImpl = ::sun::swing::plaf::synth::SynthFileChooserUIImpl;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

void SynthFileChooserUIImpl$IndentIcon::init$($SynthFileChooserUIImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, icon, nullptr);
	this->depth = 0;
}

void SynthFileChooserUIImpl$IndentIcon::paintIcon($Component* c, $Graphics* g, int32_t x, int32_t y) {
	if (this->icon != nullptr) {
		if ($$nc($nc(c)->getComponentOrientation())->isLeftToRight()) {
			$nc(this->icon)->paintIcon(c, g, x + this->depth * 10, y);
		} else {
			$nc(this->icon)->paintIcon(c, g, x, y);
		}
	}
}

int32_t SynthFileChooserUIImpl$IndentIcon::getIconWidth() {
	return ((this->icon != nullptr) ? this->icon->getIconWidth() : 0) + this->depth * 10;
}

int32_t SynthFileChooserUIImpl$IndentIcon::getIconHeight() {
	return (this->icon != nullptr) ? this->icon->getIconHeight() : 0;
}

SynthFileChooserUIImpl$IndentIcon::SynthFileChooserUIImpl$IndentIcon() {
}

$Class* SynthFileChooserUIImpl$IndentIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$0", "Lsun/swing/plaf/synth/SynthFileChooserUIImpl;", nullptr, $FINAL | $SYNTHETIC, $field(SynthFileChooserUIImpl$IndentIcon, this$0)},
		{"icon", "Ljavax/swing/Icon;", nullptr, 0, $field(SynthFileChooserUIImpl$IndentIcon, icon)},
		{"depth", "I", nullptr, 0, $field(SynthFileChooserUIImpl$IndentIcon, depth)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lsun/swing/plaf/synth/SynthFileChooserUIImpl;)V", nullptr, 0, $method(SynthFileChooserUIImpl$IndentIcon, init$, void, $SynthFileChooserUIImpl*)},
		{"getIconHeight", "()I", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$IndentIcon, getIconHeight, int32_t)},
		{"getIconWidth", "()I", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$IndentIcon, getIconWidth, int32_t)},
		{"paintIcon", "(Ljava/awt/Component;Ljava/awt/Graphics;II)V", nullptr, $PUBLIC, $virtualMethod(SynthFileChooserUIImpl$IndentIcon, paintIcon, void, $Component*, $Graphics*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.plaf.synth.SynthFileChooserUIImpl$IndentIcon", "sun.swing.plaf.synth.SynthFileChooserUIImpl", "IndentIcon", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.swing.plaf.synth.SynthFileChooserUIImpl$IndentIcon",
		"java.lang.Object",
		"javax.swing.Icon",
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
	$loadClass(SynthFileChooserUIImpl$IndentIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SynthFileChooserUIImpl$IndentIcon);
	});
	return class$;
}

$Class* SynthFileChooserUIImpl$IndentIcon::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun
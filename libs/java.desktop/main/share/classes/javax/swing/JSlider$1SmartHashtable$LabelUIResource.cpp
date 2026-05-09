#include <javax/swing/JSlider$1SmartHashtable$LabelUIResource.h>
#include <java/awt/Color.h>
#include <java/awt/Component.h>
#include <java/awt/Font.h>
#include <javax/swing/JLabel.h>
#include <javax/swing/JSlider$1SmartHashtable.h>
#include <javax/swing/JSlider.h>
#include <javax/swing/plaf/UIResource.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $JLabel = ::javax::swing::JLabel;
using $JSlider$1SmartHashtable = ::javax::swing::JSlider$1SmartHashtable;
using $UIResource = ::javax::swing::plaf::UIResource;

namespace javax {
	namespace swing {

$String* JSlider$1SmartHashtable$LabelUIResource::toString() {
	return this->$JLabel::toString();
}

int32_t JSlider$1SmartHashtable$LabelUIResource::hashCode() {
	return this->$JLabel::hashCode();
}

bool JSlider$1SmartHashtable$LabelUIResource::equals(Object$* arg0) {
	return this->$JLabel::equals(arg0);
}

$Object* JSlider$1SmartHashtable$LabelUIResource::clone() {
	return this->$JLabel::clone();
}

void JSlider$1SmartHashtable$LabelUIResource::finalize() {
	this->$JLabel::finalize();
}

void JSlider$1SmartHashtable$LabelUIResource::init$($JSlider$1SmartHashtable* this$1, $String* text, int32_t alignment) {
	$set(this, this$1, this$1);
	$JLabel::init$(text, alignment);
	setName("Slider.label"_s);
}

$Font* JSlider$1SmartHashtable$LabelUIResource::getFont() {
	$var($Font, font, $JLabel::getFont());
	if (font != nullptr && !($instanceOf($UIResource, font))) {
		return font;
	}
	return $nc(this->this$1->this$0)->getFont();
}

$Color* JSlider$1SmartHashtable$LabelUIResource::getForeground() {
	$useLocalObjectStack();
	$var($Color, fg, $JLabel::getForeground());
	if (fg != nullptr && !($instanceOf($UIResource, fg))) {
		return fg;
	}
	if (!($instanceOf($UIResource, $($nc(this->this$1->this$0)->getForeground())))) {
		return this->this$1->this$0->getForeground();
	}
	return fg;
}

JSlider$1SmartHashtable$LabelUIResource::JSlider$1SmartHashtable$LabelUIResource() {
}

$Class* JSlider$1SmartHashtable$LabelUIResource::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"this$1", "Ljavax/swing/JSlider$1SmartHashtable;", nullptr, $FINAL | $SYNTHETIC, $field(JSlider$1SmartHashtable$LabelUIResource, this$1)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/swing/JSlider$1SmartHashtable;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(JSlider$1SmartHashtable$LabelUIResource, init$, void, $JSlider$1SmartHashtable*, $String*, int32_t)},
		{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(JSlider$1SmartHashtable$LabelUIResource, getFont, $Font*)},
		{"getForeground", "()Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(JSlider$1SmartHashtable$LabelUIResource, getForeground, $Color*)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.JSlider$1SmartHashtable", nullptr, "SmartHashtable", 0},
		{"javax.swing.JSlider$1SmartHashtable$LabelUIResource", "javax.swing.JSlider$1SmartHashtable", "LabelUIResource", 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.JSlider$1SmartHashtable$LabelUIResource",
		"javax.swing.JLabel",
		"javax.swing.plaf.UIResource",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.JSlider"
	};
	$loadClass(JSlider$1SmartHashtable$LabelUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(JSlider$1SmartHashtable$LabelUIResource));
	});
	return class$;
}

$Class* JSlider$1SmartHashtable$LabelUIResource::class$ = nullptr;

	} // swing
} // javax
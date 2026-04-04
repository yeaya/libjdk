#include <javax/swing/plaf/synth/ColorType.h>
#include <java/lang/Math.h>
#include <jcpp.h>

#undef BACKGROUND
#undef FOCUS
#undef FOREGROUND
#undef MAX_COUNT
#undef TEXT_BACKGROUND
#undef TEXT_FOREGROUND

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace synth {

ColorType* ColorType::FOREGROUND = nullptr;
ColorType* ColorType::BACKGROUND = nullptr;
ColorType* ColorType::TEXT_FOREGROUND = nullptr;
ColorType* ColorType::TEXT_BACKGROUND = nullptr;
ColorType* ColorType::FOCUS = nullptr;
int32_t ColorType::MAX_COUNT = 0;
int32_t ColorType::nextID = 0;

void ColorType::init$($String* description) {
	if (description == nullptr) {
		$throwNew($NullPointerException, "ColorType must have a valid description"_s);
	}
	$set(this, description, description);
	$synchronized(ColorType::class$) {
		this->index = ColorType::nextID++;
	}
}

int32_t ColorType::getID() {
	return this->index;
}

$String* ColorType::toString() {
	return this->description;
}

void ColorType::clinit$($Class* clazz) {
	$assignStatic(ColorType::FOREGROUND, $new(ColorType, "Foreground"_s));
	$assignStatic(ColorType::BACKGROUND, $new(ColorType, "Background"_s));
	$assignStatic(ColorType::TEXT_FOREGROUND, $new(ColorType, "TextForeground"_s));
	$assignStatic(ColorType::TEXT_BACKGROUND, $new(ColorType, "TextBackground"_s));
	$assignStatic(ColorType::FOCUS, $new(ColorType, "Focus"_s));
	{
		int32_t var$0 = ColorType::FOREGROUND->getID();
		int32_t var$1 = ColorType::BACKGROUND->getID();
		ColorType::MAX_COUNT = $Math::max(var$0, $Math::max(var$1, ColorType::FOCUS->getID())) + 1;
	}
}

ColorType::ColorType() {
}

$Class* ColorType::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"FOREGROUND", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, FOREGROUND)},
		{"BACKGROUND", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, BACKGROUND)},
		{"TEXT_FOREGROUND", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, TEXT_FOREGROUND)},
		{"TEXT_BACKGROUND", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, TEXT_BACKGROUND)},
		{"FOCUS", "Ljavax/swing/plaf/synth/ColorType;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, FOCUS)},
		{"MAX_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ColorType, MAX_COUNT)},
		{"nextID", "I", nullptr, $PRIVATE | $STATIC, $staticField(ColorType, nextID)},
		{"description", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ColorType, description)},
		{"index", "I", nullptr, $PRIVATE, $field(ColorType, index)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;)V", nullptr, $PROTECTED, $method(ColorType, init$, void, $String*)},
		{"getID", "()I", nullptr, $PUBLIC | $FINAL, $method(ColorType, getID, int32_t)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(ColorType, toString, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.swing.plaf.synth.ColorType",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(ColorType, name, initialize, &classInfo$$, ColorType::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ColorType);
	});
	return class$;
}

$Class* ColorType::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // javax
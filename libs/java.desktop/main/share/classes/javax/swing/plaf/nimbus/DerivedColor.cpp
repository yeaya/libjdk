#include <javax/swing/plaf/nimbus/DerivedColor.h>
#include <java/awt/Color.h>
#include <javax/swing/UIManager.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIManager = ::javax::swing::UIManager;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void DerivedColor::init$($String* uiDefaultParentName, float hOffset, float sOffset, float bOffset, int32_t aOffset) {
	$Color::init$(0);
	$set(this, uiDefaultParentName, uiDefaultParentName);
	this->hOffset = hOffset;
	this->sOffset = sOffset;
	this->bOffset = bOffset;
	this->aOffset = aOffset;
}

$String* DerivedColor::getUiDefaultParentName() {
	return this->uiDefaultParentName;
}

float DerivedColor::getHueOffset() {
	return this->hOffset;
}

float DerivedColor::getSaturationOffset() {
	return this->sOffset;
}

float DerivedColor::getBrightnessOffset() {
	return this->bOffset;
}

int32_t DerivedColor::getAlphaOffset() {
	return this->aOffset;
}

void DerivedColor::rederiveColor() {
	$useLocalObjectStack();
	$var($Color, src, $UIManager::getColor(this->uiDefaultParentName));
	if (src != nullptr) {
		int32_t var$0 = src->getRed();
		int32_t var$1 = src->getGreen();
		$var($floats, tmp, $Color::RGBtoHSB(var$0, var$1, src->getBlue(), nullptr));
		$nc(tmp)->set(0, $nc(tmp)->get(0) + this->hOffset);
		tmp->set(1, clamp(tmp->get(1) + this->sOffset));
		tmp->set(2, clamp(tmp->get(2) + this->bOffset));
		int32_t alpha = clamp(src->getAlpha() + this->aOffset);
		this->argbValue = ($Color::HSBtoRGB(tmp->get(0), tmp->get(1), tmp->get(2)) & 0x00ffffff) | (alpha << 24);
	} else {
		$var($floats, tmp, $new($floats, 3));
		tmp->set(0, this->hOffset);
		tmp->set(1, clamp(this->sOffset));
		tmp->set(2, clamp(this->bOffset));
		int32_t alpha = clamp(this->aOffset);
		this->argbValue = ($Color::HSBtoRGB(tmp->get(0), tmp->get(1), tmp->get(2)) & 0x00ffffff) | (alpha << 24);
	}
}

int32_t DerivedColor::getRGB() {
	return this->argbValue;
}

bool DerivedColor::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf(DerivedColor, o))) {
		return false;
	}
	$var(DerivedColor, that, $cast(DerivedColor, o));
	if (this->aOffset != $nc(that)->aOffset) {
		return false;
	}
	if ($Float::compare(that->bOffset, this->bOffset) != 0) {
		return false;
	}
	if ($Float::compare(that->hOffset, this->hOffset) != 0) {
		return false;
	}
	if ($Float::compare(that->sOffset, this->sOffset) != 0) {
		return false;
	}
	if (!$nc(this->uiDefaultParentName)->equals(that->uiDefaultParentName)) {
		return false;
	}
	return true;
}

int32_t DerivedColor::hashCode() {
	int32_t result = $nc(this->uiDefaultParentName)->hashCode();
	result = 31 * result + this->hOffset != +0.0f ? $Float::floatToIntBits(this->hOffset) : 0;
	result = 31 * result + this->sOffset != +0.0f ? $Float::floatToIntBits(this->sOffset) : 0;
	result = 31 * result + this->bOffset != +0.0f ? $Float::floatToIntBits(this->bOffset) : 0;
	result = 31 * result + this->aOffset;
	return result;
}

float DerivedColor::clamp(float value) {
	if (value < 0) {
		value = 0;
	} else if (value > 1) {
		value = 1;
	}
	return value;
}

int32_t DerivedColor::clamp(int32_t value) {
	if (value < 0) {
		value = 0;
	} else if (value > 255) {
		value = 255;
	}
	return value;
}

$String* DerivedColor::toString() {
	$useLocalObjectStack();
	$var($Color, src, $UIManager::getColor(this->uiDefaultParentName));
	$var($StringBuilder, var$0, $new($StringBuilder));
	var$0->append("DerivedColor(color="_s);
	var$0->append(getRed());
	var$0->append(","_s);
	var$0->append(getGreen());
	var$0->append(","_s);
	var$0->append(getBlue());
	var$0->append(" parent="_s);
	var$0->append(this->uiDefaultParentName);
	var$0->append(" offsets="_s);
	var$0->append(getHueOffset());
	var$0->append(","_s);
	var$0->append(getSaturationOffset());
	var$0->append(","_s);
	var$0->append(getBrightnessOffset());
	var$0->append(","_s);
	var$0->append(getAlphaOffset());
	$var($String, s, $str(var$0));
	$var($String, var$1, nullptr);
	if (src == nullptr) {
		$assign(var$1, s);
	} else {
		$var($StringBuilder, var$2, $new($StringBuilder));
		var$2->append(s);
		var$2->append(" pColor="_s);
		var$2->append($nc(src)->getRed());
		var$2->append(","_s);
		var$2->append(src->getGreen());
		var$2->append(","_s);
		var$2->append(src->getBlue());
		$assign(var$1, $str(var$2));
	}
	return var$1;
}

DerivedColor::DerivedColor() {
}

$Class* DerivedColor::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"uiDefaultParentName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DerivedColor, uiDefaultParentName)},
		{"hOffset", "F", nullptr, $PRIVATE | $FINAL, $field(DerivedColor, hOffset)},
		{"sOffset", "F", nullptr, $PRIVATE | $FINAL, $field(DerivedColor, sOffset)},
		{"bOffset", "F", nullptr, $PRIVATE | $FINAL, $field(DerivedColor, bOffset)},
		{"aOffset", "I", nullptr, $PRIVATE | $FINAL, $field(DerivedColor, aOffset)},
		{"argbValue", "I", nullptr, $PRIVATE, $field(DerivedColor, argbValue)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;FFFI)V", nullptr, 0, $method(DerivedColor, init$, void, $String*, float, float, float, int32_t)},
		{"clamp", "(F)F", nullptr, $PRIVATE, $method(DerivedColor, clamp, float, float)},
		{"clamp", "(I)I", nullptr, $PRIVATE, $method(DerivedColor, clamp, int32_t, int32_t)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(DerivedColor, equals, bool, Object$*)},
		{"getAlphaOffset", "()I", nullptr, $PUBLIC, $virtualMethod(DerivedColor, getAlphaOffset, int32_t)},
		{"getBrightnessOffset", "()F", nullptr, $PUBLIC, $virtualMethod(DerivedColor, getBrightnessOffset, float)},
		{"getHueOffset", "()F", nullptr, $PUBLIC, $virtualMethod(DerivedColor, getHueOffset, float)},
		{"getRGB", "()I", nullptr, $PUBLIC, $virtualMethod(DerivedColor, getRGB, int32_t)},
		{"getSaturationOffset", "()F", nullptr, $PUBLIC, $virtualMethod(DerivedColor, getSaturationOffset, float)},
		{"getUiDefaultParentName", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DerivedColor, getUiDefaultParentName, $String*)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(DerivedColor, hashCode, int32_t)},
		{"rederiveColor", "()V", nullptr, $PUBLIC, $virtualMethod(DerivedColor, rederiveColor, void)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DerivedColor, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.DerivedColor$UIResource", "javax.swing.plaf.nimbus.DerivedColor", "UIResource", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.plaf.nimbus.DerivedColor",
		"java.awt.Color",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.DerivedColor$UIResource"
	};
	$loadClass(DerivedColor, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(DerivedColor));
	});
	return class$;
}

$Class* DerivedColor::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
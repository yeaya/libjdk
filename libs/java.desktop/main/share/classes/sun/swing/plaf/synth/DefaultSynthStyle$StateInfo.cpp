#include <sun/swing/plaf/synth/DefaultSynthStyle$StateInfo.h>
#include <java/awt/Color.h>
#include <java/awt/Font.h>
#include <java/util/Arrays.h>
#include <java/util/HashMap.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/swing/plaf/synth/ColorType.h>
#include <sun/swing/plaf/synth/DefaultSynthStyle.h>
#include <jcpp.h>

using $ColorArray = $Array<::java::awt::Color>;
using $Color = ::java::awt::Color;
using $Font = ::java::awt::Font;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $ColorType = ::javax::swing::plaf::synth::ColorType;

namespace sun {
	namespace swing {
		namespace plaf {
			namespace synth {

void DefaultSynthStyle$StateInfo::init$() {
}

void DefaultSynthStyle$StateInfo::init$(int32_t state, $Font* font, $ColorArray* colors) {
	this->state = state;
	$set(this, font, font);
	$set(this, colors, colors);
}

void DefaultSynthStyle$StateInfo::init$(DefaultSynthStyle$StateInfo* info) {
	this->state = $nc(info)->state;
	$set(this, font, info->font);
	if (info->data != nullptr) {
		if (this->data == nullptr) {
			$set(this, data, $new($HashMap));
		}
		$nc(this->data)->putAll(info->data);
	}
	if (info->colors != nullptr) {
		$set(this, colors, $new($ColorArray, info->colors->length));
		$System::arraycopy(info->colors, 0, this->colors, 0, info->colors->length);
	}
}

$Map* DefaultSynthStyle$StateInfo::getData() {
	return this->data;
}

void DefaultSynthStyle$StateInfo::setData($Map* data) {
	$set(this, data, data);
}

void DefaultSynthStyle$StateInfo::setFont($Font* font) {
	$set(this, font, font);
}

$Font* DefaultSynthStyle$StateInfo::getFont() {
	return this->font;
}

void DefaultSynthStyle$StateInfo::setColors($ColorArray* colors) {
	$set(this, colors, colors);
}

$ColorArray* DefaultSynthStyle$StateInfo::getColors() {
	return this->colors;
}

$Color* DefaultSynthStyle$StateInfo::getColor($ColorType* type) {
	if (this->colors != nullptr) {
		int32_t id = $nc(type)->getID();
		if (id < $nc(this->colors)->length) {
			return this->colors->get(id);
		}
	}
	return nullptr;
}

DefaultSynthStyle$StateInfo* DefaultSynthStyle$StateInfo::addTo(DefaultSynthStyle$StateInfo* info) {
	if (this->font != nullptr) {
		$set($nc(info), font, this->font);
	}
	if (this->data != nullptr) {
		if ($nc(info)->data == nullptr) {
			$set(info, data, $new($HashMap));
		}
		$nc(info->data)->putAll(this->data);
	}
	if (this->colors != nullptr) {
		if ($nc(info)->colors == nullptr) {
			$set(info, colors, $new($ColorArray, this->colors->length));
			$System::arraycopy(this->colors, 0, info->colors, 0, this->colors->length);
		} else {
			if (info->colors->length < this->colors->length) {
				$var($ColorArray, old, info->colors);
				$set(info, colors, $new($ColorArray, this->colors->length));
				$System::arraycopy(old, 0, info->colors, 0, $nc(old)->length);
			}
			for (int32_t counter = this->colors->length - 1; counter >= 0; --counter) {
				if (this->colors->get(counter) != nullptr) {
					info->colors->set(counter, this->colors->get(counter));
				}
			}
		}
	}
	return info;
}

void DefaultSynthStyle$StateInfo::setComponentState(int32_t state) {
	this->state = state;
}

int32_t DefaultSynthStyle$StateInfo::getComponentState() {
	return this->state;
}

$Object* DefaultSynthStyle$StateInfo::clone() {
	return $new(DefaultSynthStyle$StateInfo, this);
}

$String* DefaultSynthStyle$StateInfo::toString() {
	$useLocalObjectStack();
	$var($StringBuilder, sb, $new($StringBuilder));
	sb->append($($Object::toString()))->append(u',');
	sb->append("state="_s)->append($($Integer::toString(this->state)))->append(u',');
	sb->append("font="_s)->append(this->font)->append(u',');
	if (this->colors != nullptr) {
		sb->append("colors="_s)->append($($Arrays::asList(this->colors)))->append(u',');
	}
	return sb->toString();
}

DefaultSynthStyle$StateInfo::DefaultSynthStyle$StateInfo() {
}

$Class* DefaultSynthStyle$StateInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"data", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(DefaultSynthStyle$StateInfo, data)},
		{"font", "Ljava/awt/Font;", nullptr, $PRIVATE, $field(DefaultSynthStyle$StateInfo, font)},
		{"colors", "[Ljava/awt/Color;", nullptr, $PRIVATE, $field(DefaultSynthStyle$StateInfo, colors)},
		{"state", "I", nullptr, $PRIVATE, $field(DefaultSynthStyle$StateInfo, state)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(DefaultSynthStyle$StateInfo, init$, void)},
		{"<init>", "(ILjava/awt/Font;[Ljava/awt/Color;)V", nullptr, $PUBLIC, $method(DefaultSynthStyle$StateInfo, init$, void, int32_t, $Font*, $ColorArray*)},
		{"<init>", "(Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;)V", nullptr, $PUBLIC, $method(DefaultSynthStyle$StateInfo, init$, void, DefaultSynthStyle$StateInfo*)},
		{"addTo", "(Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;)Lsun/swing/plaf/synth/DefaultSynthStyle$StateInfo;", nullptr, $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, addTo, DefaultSynthStyle$StateInfo*, DefaultSynthStyle$StateInfo*)},
		{"clone", "()Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, clone, $Object*)},
		{"getColor", "(Ljavax/swing/plaf/synth/ColorType;)Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, getColor, $Color*, $ColorType*)},
		{"getColors", "()[Ljava/awt/Color;", nullptr, $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, getColors, $ColorArray*)},
		{"getComponentState", "()I", nullptr, $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, getComponentState, int32_t)},
		{"getData", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;", $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, getData, $Map*)},
		{"getFont", "()Ljava/awt/Font;", nullptr, $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, getFont, $Font*)},
		{"setColors", "([Ljava/awt/Color;)V", nullptr, $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, setColors, void, $ColorArray*)},
		{"setComponentState", "(I)V", nullptr, $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, setComponentState, void, int32_t)},
		{"setData", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/Object;Ljava/lang/Object;>;)V", $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, setData, void, $Map*)},
		{"setFont", "(Ljava/awt/Font;)V", nullptr, $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, setFont, void, $Font*)},
		{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(DefaultSynthStyle$StateInfo, toString, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.swing.plaf.synth.DefaultSynthStyle$StateInfo", "sun.swing.plaf.synth.DefaultSynthStyle", "StateInfo", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"sun.swing.plaf.synth.DefaultSynthStyle$StateInfo",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.swing.plaf.synth.DefaultSynthStyle"
	};
	$loadClass(DefaultSynthStyle$StateInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(DefaultSynthStyle$StateInfo);
	});
	return class$;
}

$Class* DefaultSynthStyle$StateInfo::class$ = nullptr;

			} // synth
		} // plaf
	} // swing
} // sun
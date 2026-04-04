#include <javax/swing/plaf/nimbus/NimbusDefaults$DerivedFont.h>
#include <java/awt/Font.h>
#include <java/lang/Math.h>
#include <javax/swing/UIDefaults.h>
#include <javax/swing/plaf/nimbus/NimbusDefaults.h>
#include <jcpp.h>

#undef BOLD
#undef ITALIC

using $Font = ::java::awt::Font;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $UIDefaults = ::javax::swing::UIDefaults;

namespace javax {
	namespace swing {
		namespace plaf {
			namespace nimbus {

void NimbusDefaults$DerivedFont::init$($String* key, float sizeOffset, $Boolean* bold, $Boolean* italic) {
	if (key == nullptr) {
		$throwNew($IllegalArgumentException, "You must specify a key"_s);
	}
	$set(this, parentKey, key);
	this->sizeOffset = sizeOffset;
	$set(this, bold, bold);
	$set(this, italic, italic);
}

$Object* NimbusDefaults$DerivedFont::createValue($UIDefaults* defaults) {
	$var($Font, f, $nc(defaults)->getFont(this->parentKey));
	if (f != nullptr) {
		float size = (float)$Math::round(f->getSize2D() * this->sizeOffset);
		int32_t style = f->getStyle();
		if (this->bold != nullptr) {
			if (this->bold->booleanValue()) {
				style = style | $Font::BOLD;
			} else {
				style = style & ~$Font::BOLD;
			}
		}
		if (this->italic != nullptr) {
			if (this->italic->booleanValue()) {
				style = style | $Font::ITALIC;
			} else {
				style = style & ~$Font::ITALIC;
			}
		}
		return f->deriveFont(style, size);
	} else {
		return nullptr;
	}
}

NimbusDefaults$DerivedFont::NimbusDefaults$DerivedFont() {
}

$Class* NimbusDefaults$DerivedFont::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"sizeOffset", "F", nullptr, $PRIVATE, $field(NimbusDefaults$DerivedFont, sizeOffset)},
		{"bold", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(NimbusDefaults$DerivedFont, bold)},
		{"italic", "Ljava/lang/Boolean;", nullptr, $PRIVATE, $field(NimbusDefaults$DerivedFont, italic)},
		{"parentKey", "Ljava/lang/String;", nullptr, $PRIVATE, $field(NimbusDefaults$DerivedFont, parentKey)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/String;FLjava/lang/Boolean;Ljava/lang/Boolean;)V", nullptr, $PUBLIC, $method(NimbusDefaults$DerivedFont, init$, void, $String*, float, $Boolean*, $Boolean*)},
		{"createValue", "(Ljavax/swing/UIDefaults;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(NimbusDefaults$DerivedFont, createValue, $Object*, $UIDefaults*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.plaf.nimbus.NimbusDefaults$DerivedFont", "javax.swing.plaf.nimbus.NimbusDefaults", "DerivedFont", $STATIC | $FINAL},
		{"javax.swing.UIDefaults$ActiveValue", "javax.swing.UIDefaults", "ActiveValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"javax.swing.plaf.nimbus.NimbusDefaults$DerivedFont",
		"java.lang.Object",
		"javax.swing.UIDefaults$ActiveValue",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.swing.plaf.nimbus.NimbusDefaults"
	};
	$loadClass(NimbusDefaults$DerivedFont, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(NimbusDefaults$DerivedFont);
	});
	return class$;
}

$Class* NimbusDefaults$DerivedFont::class$ = nullptr;

			} // nimbus
		} // plaf
	} // swing
} // javax
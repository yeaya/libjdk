#include <com/apple/laf/AquaPainter$AquaPixelsKey.h>
#include <apple/laf/JRSUIState.h>
#include <com/apple/laf/AquaPainter.h>
#include <java/awt/GraphicsConfiguration.h>
#include <java/awt/Rectangle.h>
#include <jcpp.h>

using $JRSUIState = ::apple::laf::JRSUIState;
using $GraphicsConfiguration = ::java::awt::GraphicsConfiguration;
using $Rectangle = ::java::awt::Rectangle;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaPainter$AquaPixelsKey::init$($GraphicsConfiguration* config, int32_t w, int32_t h, $Rectangle* bounds, $JRSUIState* state) {
	this->pixelCount = w * h;
	$set(this, config, config);
	this->w = w;
	this->h = h;
	$set(this, bounds, bounds);
	$set(this, state, state);
	this->hash$ = hash();
}

int32_t AquaPainter$AquaPixelsKey::getPixelCount() {
	return this->pixelCount;
}

int32_t AquaPainter$AquaPixelsKey::hash() {
	int32_t hash = this->config != nullptr ? this->config->hashCode() : 0;
	hash = 31 * hash + this->w;
	hash = 31 * hash + this->h;
	hash = 31 * hash + $nc(this->bounds)->hashCode();
	hash = 31 * hash + $nc(this->state)->hashCode();
	return hash;
}

int32_t AquaPainter$AquaPixelsKey::hashCode() {
	return this->hash$;
}

bool AquaPainter$AquaPixelsKey::equals(Object$* obj) {
	if ($instanceOf(AquaPainter$AquaPixelsKey, obj)) {
		$var(AquaPainter$AquaPixelsKey, key, $cast(AquaPainter$AquaPixelsKey, obj));
		bool var$0 = this->config == key->config && this->w == key->w && this->h == key->h && $nc(this->bounds)->equals(key->bounds);
		return var$0 && $nc(this->state)->equals(key->state);
	}
	return false;
}

AquaPainter$AquaPixelsKey::AquaPainter$AquaPixelsKey() {
}

$Class* AquaPainter$AquaPixelsKey::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"pixelCount", "I", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$AquaPixelsKey, pixelCount)},
		{"hash", "I", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$AquaPixelsKey, hash$)},
		{"config", "Ljava/awt/GraphicsConfiguration;", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$AquaPixelsKey, config)},
		{"w", "I", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$AquaPixelsKey, w)},
		{"h", "I", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$AquaPixelsKey, h)},
		{"bounds", "Ljava/awt/Rectangle;", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$AquaPixelsKey, bounds)},
		{"state", "Lapple/laf/JRSUIState;", nullptr, $PRIVATE | $FINAL, $field(AquaPainter$AquaPixelsKey, state)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/awt/GraphicsConfiguration;IILjava/awt/Rectangle;Lapple/laf/JRSUIState;)V", nullptr, 0, $method(AquaPainter$AquaPixelsKey, init$, void, $GraphicsConfiguration*, int32_t, int32_t, $Rectangle*, $JRSUIState*)},
		{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(AquaPainter$AquaPixelsKey, equals, bool, Object$*)},
		{"getPixelCount", "()I", nullptr, $PUBLIC, $virtualMethod(AquaPainter$AquaPixelsKey, getPixelCount, int32_t)},
		{"hash", "()I", nullptr, $PRIVATE, $method(AquaPainter$AquaPixelsKey, hash, int32_t)},
		{"hashCode", "()I", nullptr, $PUBLIC, $virtualMethod(AquaPainter$AquaPixelsKey, hashCode, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaPainter$AquaPixelsKey", "com.apple.laf.AquaPainter", "AquaPixelsKey", $PRIVATE | $STATIC},
		{"sun.awt.image.ImageCache$PixelsKey", "sun.awt.image.ImageCache", "PixelsKey", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaPainter$AquaPixelsKey",
		"java.lang.Object",
		"sun.awt.image.ImageCache$PixelsKey",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaPainter"
	};
	$loadClass(AquaPainter$AquaPixelsKey, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaPainter$AquaPixelsKey);
	});
	return class$;
}

$Class* AquaPainter$AquaPixelsKey::class$ = nullptr;

		} // laf
	} // apple
} // com
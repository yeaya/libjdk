#include <com/apple/laf/AquaNativeResources$CColorPaintUIResource.h>
#include <com/apple/laf/AquaNativeResources.h>
#include <java/awt/Color.h>
#include <jcpp.h>

using $Color = ::java::awt::Color;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

int32_t AquaNativeResources$CColorPaintUIResource::hashCode() {
	 return this->$Color::hashCode();
}

bool AquaNativeResources$CColorPaintUIResource::equals(Object$* obj) {
	 return this->$Color::equals(obj);
}

$String* AquaNativeResources$CColorPaintUIResource::toString() {
	 return this->$Color::toString();
}

$Object* AquaNativeResources$CColorPaintUIResource::clone() {
	 return this->$Color::clone();
}

void AquaNativeResources$CColorPaintUIResource::finalize() {
	this->$Color::finalize();
}

void AquaNativeResources$CColorPaintUIResource::init$(int64_t color, int32_t r, int32_t g, int32_t b, int32_t a) {
	$Color::init$(r, g, b, a);
}

AquaNativeResources$CColorPaintUIResource::AquaNativeResources$CColorPaintUIResource() {
}

$Class* AquaNativeResources$CColorPaintUIResource::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC},
		{"<init>", "(JIIII)V", nullptr, $PUBLIC, $method(AquaNativeResources$CColorPaintUIResource, init$, void, int64_t, int32_t, int32_t, int32_t, int32_t)},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaNativeResources$CColorPaintUIResource", "com.apple.laf.AquaNativeResources", "CColorPaintUIResource", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaNativeResources$CColorPaintUIResource",
		"java.awt.Color",
		"javax.swing.plaf.UIResource",
		nullptr,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaNativeResources"
	};
	$loadClass(AquaNativeResources$CColorPaintUIResource, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaNativeResources$CColorPaintUIResource));
	});
	return class$;
}

$Class* AquaNativeResources$CColorPaintUIResource::class$ = nullptr;

		} // laf
	} // apple
} // com
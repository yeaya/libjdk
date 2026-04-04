#include <com/apple/laf/AquaImageFactory$RecyclableSlicedImageControl.h>
#include <com/apple/laf/AquaImageFactory$NineSliceMetrics.h>
#include <com/apple/laf/AquaImageFactory$SlicedImageControl.h>
#include <com/apple/laf/AquaImageFactory.h>
#include <com/apple/laf/AquaUtils$RecyclableObject.h>
#include <java/awt/Image.h>
#include <jcpp.h>

using $AquaImageFactory$NineSliceMetrics = ::com::apple::laf::AquaImageFactory$NineSliceMetrics;
using $AquaImageFactory$SlicedImageControl = ::com::apple::laf::AquaImageFactory$SlicedImageControl;
using $AquaUtils$RecyclableObject = ::com::apple::laf::AquaUtils$RecyclableObject;
using $Image = ::java::awt::Image;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace apple {
		namespace laf {

void AquaImageFactory$RecyclableSlicedImageControl::init$($AquaImageFactory$NineSliceMetrics* metrics) {
	$AquaUtils$RecyclableObject::init$();
	$set(this, metrics, metrics);
}

$Object* AquaImageFactory$RecyclableSlicedImageControl::create() {
	return $new($AquaImageFactory$SlicedImageControl, $(createTemplateImage($nc(this->metrics)->minW, $nc(this->metrics)->minH)), this->metrics);
}

AquaImageFactory$RecyclableSlicedImageControl::AquaImageFactory$RecyclableSlicedImageControl() {
}

$Class* AquaImageFactory$RecyclableSlicedImageControl::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"metrics", "Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;", nullptr, $FINAL, $field(AquaImageFactory$RecyclableSlicedImageControl, metrics)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Lcom/apple/laf/AquaImageFactory$NineSliceMetrics;)V", nullptr, $PUBLIC, $method(AquaImageFactory$RecyclableSlicedImageControl, init$, void, $AquaImageFactory$NineSliceMetrics*)},
		{"create", "()Lcom/apple/laf/AquaImageFactory$SlicedImageControl;", nullptr, $PROTECTED, $virtualMethod(AquaImageFactory$RecyclableSlicedImageControl, create, $Object*)},
		{"createTemplateImage", "(II)Ljava/awt/Image;", nullptr, $PROTECTED | $ABSTRACT, $virtualMethod(AquaImageFactory$RecyclableSlicedImageControl, createTemplateImage, $Image*, int32_t, int32_t)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl", "com.apple.laf.AquaImageFactory", "RecyclableSlicedImageControl", $PUBLIC | $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaUtils$RecyclableObject", "com.apple.laf.AquaUtils", "RecyclableObject", $STATIC | $ABSTRACT},
		{"com.apple.laf.AquaImageFactory$SlicedImageControl", "com.apple.laf.AquaImageFactory", "SlicedImageControl", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER | $ABSTRACT,
		"com.apple.laf.AquaImageFactory$RecyclableSlicedImageControl",
		"com.apple.laf.AquaUtils$RecyclableObject",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		"Lcom/apple/laf/AquaUtils$RecyclableObject<Lcom/apple/laf/AquaImageFactory$SlicedImageControl;>;",
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaImageFactory"
	};
	$loadClass(AquaImageFactory$RecyclableSlicedImageControl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(AquaImageFactory$RecyclableSlicedImageControl);
	});
	return class$;
}

$Class* AquaImageFactory$RecyclableSlicedImageControl::class$ = nullptr;

		} // laf
	} // apple
} // com
#include <com/apple/laf/AquaIcon$FileIcon.h>
#include <com/apple/laf/AquaIcon$CachingScalingIcon.h>
#include <com/apple/laf/AquaIcon.h>
#include <java/awt/Image.h>
#include <java/io/File.h>
#include <sun/lwawt/macosx/CImage.h>
#include <jcpp.h>

using $AquaIcon$CachingScalingIcon = ::com::apple::laf::AquaIcon$CachingScalingIcon;
using $Image = ::java::awt::Image;
using $File = ::java::io::File;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CImage = ::sun::lwawt::macosx::CImage;

namespace com {
	namespace apple {
		namespace laf {

void AquaIcon$FileIcon::init$($File* file, int32_t width, int32_t height) {
	$AquaIcon$CachingScalingIcon::init$(width, height);
	$set(this, file, file);
}

void AquaIcon$FileIcon::init$($File* file) {
	AquaIcon$FileIcon::init$(file, 16, 16);
}

$Image* AquaIcon$FileIcon::createImage() {
	$var($String, var$0, $nc(this->file)->getAbsolutePath());
	int32_t var$1 = getIconWidth();
	return $CImage::createImageOfFile(var$0, var$1, getIconHeight());
}

AquaIcon$FileIcon::AquaIcon$FileIcon() {
}

$Class* AquaIcon$FileIcon::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"file", "Ljava/io/File;", nullptr, $FINAL, $field(AquaIcon$FileIcon, file)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/io/File;II)V", nullptr, $PUBLIC, $method(AquaIcon$FileIcon, init$, void, $File*, int32_t, int32_t)},
		{"<init>", "(Ljava/io/File;)V", nullptr, $PUBLIC, $method(AquaIcon$FileIcon, init$, void, $File*)},
		{"createImage", "()Ljava/awt/Image;", nullptr, 0, $virtualMethod(AquaIcon$FileIcon, createImage, $Image*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.apple.laf.AquaIcon$FileIcon", "com.apple.laf.AquaIcon", "FileIcon", $STATIC},
		{"com.apple.laf.AquaIcon$CachingScalingIcon", "com.apple.laf.AquaIcon", "CachingScalingIcon", $STATIC | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"com.apple.laf.AquaIcon$FileIcon",
		"com.apple.laf.AquaIcon$CachingScalingIcon",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"com.apple.laf.AquaIcon"
	};
	$loadClass(AquaIcon$FileIcon, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $of($alloc(AquaIcon$FileIcon));
	});
	return class$;
}

$Class* AquaIcon$FileIcon::class$ = nullptr;

		} // laf
	} // apple
} // com
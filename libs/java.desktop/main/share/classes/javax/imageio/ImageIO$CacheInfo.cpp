#include <javax/imageio/ImageIO$CacheInfo.h>
#include <java/io/File.h>
#include <javax/imageio/ImageIO.h>
#include <jcpp.h>

using $File = ::java::io::File;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace imageio {

void ImageIO$CacheInfo::init$() {
	this->useCache = true;
	$set(this, cacheDirectory, nullptr);
	$set(this, hasPermission, nullptr);
}

bool ImageIO$CacheInfo::getUseCache() {
	return this->useCache;
}

void ImageIO$CacheInfo::setUseCache(bool useCache) {
	this->useCache = useCache;
}

$File* ImageIO$CacheInfo::getCacheDirectory() {
	return this->cacheDirectory;
}

void ImageIO$CacheInfo::setCacheDirectory($File* cacheDirectory) {
	$set(this, cacheDirectory, cacheDirectory);
}

$Boolean* ImageIO$CacheInfo::getHasPermission() {
	return this->hasPermission;
}

void ImageIO$CacheInfo::setHasPermission($Boolean* hasPermission) {
	$set(this, hasPermission, hasPermission);
}

ImageIO$CacheInfo::ImageIO$CacheInfo() {
}

$Class* ImageIO$CacheInfo::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"useCache", "Z", nullptr, 0, $field(ImageIO$CacheInfo, useCache)},
		{"cacheDirectory", "Ljava/io/File;", nullptr, 0, $field(ImageIO$CacheInfo, cacheDirectory)},
		{"hasPermission", "Ljava/lang/Boolean;", nullptr, 0, $field(ImageIO$CacheInfo, hasPermission)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ImageIO$CacheInfo, init$, void)},
		{"getCacheDirectory", "()Ljava/io/File;", nullptr, $PUBLIC, $virtualMethod(ImageIO$CacheInfo, getCacheDirectory, $File*)},
		{"getHasPermission", "()Ljava/lang/Boolean;", nullptr, $PUBLIC, $virtualMethod(ImageIO$CacheInfo, getHasPermission, $Boolean*)},
		{"getUseCache", "()Z", nullptr, $PUBLIC, $virtualMethod(ImageIO$CacheInfo, getUseCache, bool)},
		{"setCacheDirectory", "(Ljava/io/File;)V", nullptr, $PUBLIC, $virtualMethod(ImageIO$CacheInfo, setCacheDirectory, void, $File*)},
		{"setHasPermission", "(Ljava/lang/Boolean;)V", nullptr, $PUBLIC, $virtualMethod(ImageIO$CacheInfo, setHasPermission, void, $Boolean*)},
		{"setUseCache", "(Z)V", nullptr, $PUBLIC, $virtualMethod(ImageIO$CacheInfo, setUseCache, void, bool)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.ImageIO$CacheInfo", "javax.imageio.ImageIO", "CacheInfo", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.ImageIO$CacheInfo",
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
		"javax.imageio.ImageIO"
	};
	$loadClass(ImageIO$CacheInfo, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageIO$CacheInfo);
	});
	return class$;
}

$Class* ImageIO$CacheInfo::class$ = nullptr;

	} // imageio
} // javax
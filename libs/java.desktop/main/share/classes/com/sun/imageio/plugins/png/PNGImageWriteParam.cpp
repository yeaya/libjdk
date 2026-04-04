#include <com/sun/imageio/plugins/png/PNGImageWriteParam.h>
#include <java/util/Locale.h>
#include <javax/imageio/ImageWriteParam.h>
#include <jcpp.h>

#undef DEFAULT_QUALITY
#undef MODE_DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $MethodInfo = ::java::lang::MethodInfo;
using $Locale = ::java::util::Locale;
using $ImageWriteParam = ::javax::imageio::ImageWriteParam;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace png {

float PNGImageWriteParam::DEFAULT_QUALITY = 0.0;
$StringArray* PNGImageWriteParam::compressionNames = nullptr;
$floats* PNGImageWriteParam::qualityVals = nullptr;
$StringArray* PNGImageWriteParam::qualityDescs = nullptr;

void PNGImageWriteParam::init$($Locale* locale) {
	$ImageWriteParam::init$();
	this->canWriteProgressive$ = true;
	$set(this, locale, locale);
	this->canWriteCompressed$ = true;
	$set(this, compressionTypes, PNGImageWriteParam::compressionNames);
	$set(this, compressionType, $nc(this->compressionTypes)->get(0));
	this->compressionMode = $ImageWriteParam::MODE_DEFAULT;
	this->compressionQuality = PNGImageWriteParam::DEFAULT_QUALITY;
}

void PNGImageWriteParam::unsetCompression() {
	$ImageWriteParam::unsetCompression();
	$set(this, compressionType, $nc(this->compressionTypes)->get(0));
	this->compressionQuality = PNGImageWriteParam::DEFAULT_QUALITY;
}

bool PNGImageWriteParam::isCompressionLossless() {
	return true;
}

$StringArray* PNGImageWriteParam::getCompressionQualityDescriptions() {
	$ImageWriteParam::getCompressionQualityDescriptions();
	return $cast($StringArray, PNGImageWriteParam::qualityDescs->clone());
}

$floats* PNGImageWriteParam::getCompressionQualityValues() {
	$ImageWriteParam::getCompressionQualityValues();
	return $cast($floats, PNGImageWriteParam::qualityVals->clone());
}

void PNGImageWriteParam::clinit$($Class* clazz) {
	PNGImageWriteParam::DEFAULT_QUALITY = 0.5f;
	$assignStatic(PNGImageWriteParam::compressionNames, $new($StringArray, {"Deflate"_s}));
	$assignStatic(PNGImageWriteParam::qualityVals, $new($floats, {
		0.0f,
		0.3f,
		0.75f,
		1.0f
	}));
	$assignStatic(PNGImageWriteParam::qualityDescs, $new($StringArray, {
		"High compression"_s,
		"Medium compression"_s,
		"Low compression"_s
	}));
}

PNGImageWriteParam::PNGImageWriteParam() {
}

$Class* PNGImageWriteParam::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"DEFAULT_QUALITY", "F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageWriteParam, DEFAULT_QUALITY)},
		{"compressionNames", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageWriteParam, compressionNames)},
		{"qualityVals", "[F", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageWriteParam, qualityVals)},
		{"qualityDescs", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(PNGImageWriteParam, qualityDescs)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/util/Locale;)V", nullptr, 0, $method(PNGImageWriteParam, init$, void, $Locale*)},
		{"getCompressionQualityDescriptions", "()[Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(PNGImageWriteParam, getCompressionQualityDescriptions, $StringArray*)},
		{"getCompressionQualityValues", "()[F", nullptr, $PUBLIC, $virtualMethod(PNGImageWriteParam, getCompressionQualityValues, $floats*)},
		{"isCompressionLossless", "()Z", nullptr, $PUBLIC, $virtualMethod(PNGImageWriteParam, isCompressionLossless, bool)},
		{"unsetCompression", "()V", nullptr, $PUBLIC, $virtualMethod(PNGImageWriteParam, unsetCompression, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$FINAL | $ACC_SUPER,
		"com.sun.imageio.plugins.png.PNGImageWriteParam",
		"javax.imageio.ImageWriteParam",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(PNGImageWriteParam, name, initialize, &classInfo$$, PNGImageWriteParam::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(PNGImageWriteParam);
	});
	return class$;
}

$Class* PNGImageWriteParam::class$ = nullptr;

				} // png
			} // plugins
		} // imageio
	} // sun
} // com
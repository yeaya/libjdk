#include <javax/imageio/plugins/tiff/TIFFImageReadParam.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/ImageReadParam.h>
#include <javax/imageio/plugins/tiff/BaselineTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/FaxTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/GeoTIFFTagSet.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ImageReadParam = ::javax::imageio::ImageReadParam;
using $BaselineTIFFTagSet = ::javax::imageio::plugins::tiff::BaselineTIFFTagSet;
using $ExifParentTIFFTagSet = ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet;
using $FaxTIFFTagSet = ::javax::imageio::plugins::tiff::FaxTIFFTagSet;
using $GeoTIFFTagSet = ::javax::imageio::plugins::tiff::GeoTIFFTagSet;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

void TIFFImageReadParam::init$() {
	$useLocalObjectStack();
	$ImageReadParam::init$();
	$set(this, allowedTagSets, $new($ArrayList, 4));
	this->readUnknownTags = false;
	addAllowedTagSet($($BaselineTIFFTagSet::getInstance()));
	addAllowedTagSet($($FaxTIFFTagSet::getInstance()));
	addAllowedTagSet($($ExifParentTIFFTagSet::getInstance()));
	addAllowedTagSet($($GeoTIFFTagSet::getInstance()));
}

void TIFFImageReadParam::addAllowedTagSet($TIFFTagSet* tagSet) {
	if (tagSet == nullptr) {
		$throwNew($IllegalArgumentException, "tagSet == null!"_s);
	}
	if (!this->allowedTagSets->contains(tagSet)) {
		this->allowedTagSets->add(tagSet);
	}
}

void TIFFImageReadParam::removeAllowedTagSet($TIFFTagSet* tagSet) {
	if (tagSet == nullptr) {
		$throwNew($IllegalArgumentException, "tagSet == null!"_s);
	}
	this->allowedTagSets->remove(tagSet);
}

$List* TIFFImageReadParam::getAllowedTagSets() {
	return this->allowedTagSets;
}

void TIFFImageReadParam::setReadUnknownTags(bool readUnknownTags) {
	this->readUnknownTags = readUnknownTags;
}

bool TIFFImageReadParam::getReadUnknownTags() {
	return this->readUnknownTags;
}

TIFFImageReadParam::TIFFImageReadParam() {
}

$Class* TIFFImageReadParam::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"allowedTagSets", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;", $PRIVATE | $FINAL, $field(TIFFImageReadParam, allowedTagSets)},
		{"readUnknownTags", "Z", nullptr, $PRIVATE, $field(TIFFImageReadParam, readUnknownTags)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFImageReadParam, init$, void)},
		{"addAllowedTagSet", "(Ljavax/imageio/plugins/tiff/TIFFTagSet;)V", nullptr, $PUBLIC, $method(TIFFImageReadParam, addAllowedTagSet, void, $TIFFTagSet*)},
		{"getAllowedTagSets", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTagSet;>;", $PUBLIC, $method(TIFFImageReadParam, getAllowedTagSets, $List*)},
		{"getReadUnknownTags", "()Z", nullptr, $PUBLIC, $method(TIFFImageReadParam, getReadUnknownTags, bool)},
		{"removeAllowedTagSet", "(Ljavax/imageio/plugins/tiff/TIFFTagSet;)V", nullptr, $PUBLIC, $method(TIFFImageReadParam, removeAllowedTagSet, void, $TIFFTagSet*)},
		{"setReadUnknownTags", "(Z)V", nullptr, $PUBLIC, $method(TIFFImageReadParam, setReadUnknownTags, void, bool)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.imageio.plugins.tiff.TIFFImageReadParam",
		"javax.imageio.ImageReadParam",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFImageReadParam, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFImageReadParam);
	});
	return class$;
}

$Class* TIFFImageReadParam::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet$ExifIFDPointer.h>
#include <javax/imageio/plugins/tiff/ExifParentTIFFTagSet$GPSInfoIFDPointer.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

#undef TAG_EXIF_IFD_POINTER
#undef TAG_GPS_INFO_IFD_POINTER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ExifParentTIFFTagSet$ExifIFDPointer = ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet$ExifIFDPointer;
using $ExifParentTIFFTagSet$GPSInfoIFDPointer = ::javax::imageio::plugins::tiff::ExifParentTIFFTagSet$GPSInfoIFDPointer;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

ExifParentTIFFTagSet* ExifParentTIFFTagSet::theInstance = nullptr;
$List* ExifParentTIFFTagSet::tags = nullptr;

void ExifParentTIFFTagSet::initTags() {
	$init(ExifParentTIFFTagSet);
	$useLocalObjectStack();
	$assignStatic(ExifParentTIFFTagSet::tags, $new($ArrayList, 1));
	ExifParentTIFFTagSet::tags->add($$new($ExifParentTIFFTagSet$ExifIFDPointer));
	ExifParentTIFFTagSet::tags->add($$new($ExifParentTIFFTagSet$GPSInfoIFDPointer));
}

void ExifParentTIFFTagSet::init$() {
	$TIFFTagSet::init$(ExifParentTIFFTagSet::tags);
}

ExifParentTIFFTagSet* ExifParentTIFFTagSet::getInstance() {
	$init(ExifParentTIFFTagSet);
	$synchronized(class$) {
		if (ExifParentTIFFTagSet::theInstance == nullptr) {
			initTags();
			$assignStatic(ExifParentTIFFTagSet::theInstance, $new(ExifParentTIFFTagSet));
			$assignStatic(ExifParentTIFFTagSet::tags, nullptr);
		}
		return ExifParentTIFFTagSet::theInstance;
	}
}

void ExifParentTIFFTagSet::clinit$($Class* clazz) {
	$assignStatic(ExifParentTIFFTagSet::theInstance, nullptr);
}

ExifParentTIFFTagSet::ExifParentTIFFTagSet() {
}

$Class* ExifParentTIFFTagSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"theInstance", "Ljavax/imageio/plugins/tiff/ExifParentTIFFTagSet;", nullptr, $PRIVATE | $STATIC, $staticField(ExifParentTIFFTagSet, theInstance)},
		{"TAG_EXIF_IFD_POINTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifParentTIFFTagSet, TAG_EXIF_IFD_POINTER)},
		{"TAG_GPS_INFO_IFD_POINTER", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifParentTIFFTagSet, TAG_GPS_INFO_IFD_POINTER)},
		{"tags", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTag;>;", $PRIVATE | $STATIC, $staticField(ExifParentTIFFTagSet, tags)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ExifParentTIFFTagSet, init$, void)},
		{"getInstance", "()Ljavax/imageio/plugins/tiff/ExifParentTIFFTagSet;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(ExifParentTIFFTagSet, getInstance, ExifParentTIFFTagSet*)},
		{"initTags", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ExifParentTIFFTagSet, initTags, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$GPSInfoIFDPointer", "javax.imageio.plugins.tiff.ExifParentTIFFTagSet", "GPSInfoIFDPointer", $STATIC},
		{"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$ExifIFDPointer", "javax.imageio.plugins.tiff.ExifParentTIFFTagSet", "ExifIFDPointer", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifParentTIFFTagSet",
		"javax.imageio.plugins.tiff.TIFFTagSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.imageio.plugins.tiff.ExifParentTIFFTagSet$GPSInfoIFDPointer,javax.imageio.plugins.tiff.ExifParentTIFFTagSet$ExifIFDPointer"
	};
	$loadClass(ExifParentTIFFTagSet, name, initialize, &classInfo$$, ExifParentTIFFTagSet::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExifParentTIFFTagSet);
	});
	return class$;
}

$Class* ExifParentTIFFTagSet::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
#include <javax/imageio/plugins/tiff/ExifInteroperabilityTagSet.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/imageio/plugins/tiff/ExifInteroperabilityTagSet$InteroperabilityIndex.h>
#include <javax/imageio/plugins/tiff/TIFFTagSet.h>
#include <jcpp.h>

#undef INTEROPERABILITY_INDEX_R98
#undef INTEROPERABILITY_INDEX_THM
#undef TAG_INTEROPERABILITY_INDEX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $ExifInteroperabilityTagSet$InteroperabilityIndex = ::javax::imageio::plugins::tiff::ExifInteroperabilityTagSet$InteroperabilityIndex;
using $TIFFTagSet = ::javax::imageio::plugins::tiff::TIFFTagSet;

namespace javax {
	namespace imageio {
		namespace plugins {
			namespace tiff {

$String* ExifInteroperabilityTagSet::INTEROPERABILITY_INDEX_R98 = nullptr;
$String* ExifInteroperabilityTagSet::INTEROPERABILITY_INDEX_THM = nullptr;
ExifInteroperabilityTagSet* ExifInteroperabilityTagSet::theInstance = nullptr;
$List* ExifInteroperabilityTagSet::tags = nullptr;

void ExifInteroperabilityTagSet::initTags() {
	$init(ExifInteroperabilityTagSet);
	$assignStatic(ExifInteroperabilityTagSet::tags, $new($ArrayList, 42));
	ExifInteroperabilityTagSet::tags->add($$new($ExifInteroperabilityTagSet$InteroperabilityIndex));
}

void ExifInteroperabilityTagSet::init$() {
	$TIFFTagSet::init$(ExifInteroperabilityTagSet::tags);
}

ExifInteroperabilityTagSet* ExifInteroperabilityTagSet::getInstance() {
	$init(ExifInteroperabilityTagSet);
	$synchronized(class$) {
		if (ExifInteroperabilityTagSet::theInstance == nullptr) {
			initTags();
			$assignStatic(ExifInteroperabilityTagSet::theInstance, $new(ExifInteroperabilityTagSet));
			$assignStatic(ExifInteroperabilityTagSet::tags, nullptr);
		}
		return ExifInteroperabilityTagSet::theInstance;
	}
}

void ExifInteroperabilityTagSet::clinit$($Class* clazz) {
	$assignStatic(ExifInteroperabilityTagSet::INTEROPERABILITY_INDEX_R98, "R98"_s);
	$assignStatic(ExifInteroperabilityTagSet::INTEROPERABILITY_INDEX_THM, "THM"_s);
	$assignStatic(ExifInteroperabilityTagSet::theInstance, nullptr);
}

ExifInteroperabilityTagSet::ExifInteroperabilityTagSet() {
}

$Class* ExifInteroperabilityTagSet::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"TAG_INTEROPERABILITY_INDEX", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(ExifInteroperabilityTagSet, TAG_INTEROPERABILITY_INDEX)},
		{"INTEROPERABILITY_INDEX_R98", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifInteroperabilityTagSet, INTEROPERABILITY_INDEX_R98)},
		{"INTEROPERABILITY_INDEX_THM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExifInteroperabilityTagSet, INTEROPERABILITY_INDEX_THM)},
		{"theInstance", "Ljavax/imageio/plugins/tiff/ExifInteroperabilityTagSet;", nullptr, $PRIVATE | $STATIC, $staticField(ExifInteroperabilityTagSet, theInstance)},
		{"tags", "Ljava/util/List;", "Ljava/util/List<Ljavax/imageio/plugins/tiff/TIFFTag;>;", $PRIVATE | $STATIC, $staticField(ExifInteroperabilityTagSet, tags)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(ExifInteroperabilityTagSet, init$, void)},
		{"getInstance", "()Ljavax/imageio/plugins/tiff/ExifInteroperabilityTagSet;", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $staticMethod(ExifInteroperabilityTagSet, getInstance, ExifInteroperabilityTagSet*)},
		{"initTags", "()V", nullptr, $PRIVATE | $STATIC, $staticMethod(ExifInteroperabilityTagSet, initTags, void)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet$InteroperabilityIndex", "javax.imageio.plugins.tiff.ExifInteroperabilityTagSet", "InteroperabilityIndex", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet",
		"javax.imageio.plugins.tiff.TIFFTagSet",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.imageio.plugins.tiff.ExifInteroperabilityTagSet$InteroperabilityIndex"
	};
	$loadClass(ExifInteroperabilityTagSet, name, initialize, &classInfo$$, ExifInteroperabilityTagSet::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(ExifInteroperabilityTagSet);
	});
	return class$;
}

$Class* ExifInteroperabilityTagSet::class$ = nullptr;

			} // tiff
		} // plugins
	} // imageio
} // javax
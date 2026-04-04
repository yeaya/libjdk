#include <com/sun/imageio/plugins/tiff/TIFFStreamMetadataFormatResources.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace tiff {

$ObjectArray2* TIFFStreamMetadataFormatResources::contents = nullptr;

void TIFFStreamMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* TIFFStreamMetadataFormatResources::getContents() {
	return $cast($ObjectArray2, TIFFStreamMetadataFormatResources::contents->clone());
}

void TIFFStreamMetadataFormatResources::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(TIFFStreamMetadataFormatResources::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"ByteOrder"_s,
			"The stream byte order"_s
		}),
		$$new($ObjectArray, {
			"ByteOrder/value"_s,
			"One of \"BIG_ENDIAN\" or \"LITTLE_ENDIAN\""_s
		})
	}));
}

TIFFStreamMetadataFormatResources::TIFFStreamMetadataFormatResources() {
}

$Class* TIFFStreamMetadataFormatResources::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFStreamMetadataFormatResources, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFStreamMetadataFormatResources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TIFFStreamMetadataFormatResources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFStreamMetadataFormatResources",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFStreamMetadataFormatResources, name, initialize, &classInfo$$, TIFFStreamMetadataFormatResources::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFStreamMetadataFormatResources);
	});
	return class$;
}

$Class* TIFFStreamMetadataFormatResources::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com
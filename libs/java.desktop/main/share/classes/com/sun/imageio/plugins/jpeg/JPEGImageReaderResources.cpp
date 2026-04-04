#include <com/sun/imageio/plugins/jpeg/JPEGImageReaderResources.h>
#include <com/sun/imageio/plugins/jpeg/JPEGImageReader.h>
#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

#undef WARNING_IGNORE_INVALID_ICC
#undef WARNING_NO_EOI
#undef WARNING_NO_JFIF_IN_THUMB

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $JPEGImageReader = ::com::sun::imageio::plugins::jpeg::JPEGImageReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace jpeg {

void JPEGImageReaderResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* JPEGImageReaderResources::getContents() {
	$useLocalObjectStack();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$($Integer::toString($JPEGImageReader::WARNING_NO_EOI)),
			"Truncated File - Missing EOI marker"_s
		}),
		$$new($ObjectArray, {
			$($Integer::toString($JPEGImageReader::WARNING_NO_JFIF_IN_THUMB)),
			"JFIF markers not allowed in JFIF JPEG thumbnail; ignored"_s
		}),
		$$new($ObjectArray, {
			$($Integer::toString($JPEGImageReader::WARNING_IGNORE_INVALID_ICC)),
			"Embedded color profile is invalid; ignored"_s
		})
	});
}

JPEGImageReaderResources::JPEGImageReaderResources() {
}

$Class* JPEGImageReaderResources::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(JPEGImageReaderResources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED, $virtualMethod(JPEGImageReaderResources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.jpeg.JPEGImageReaderResources",
		"java.util.ListResourceBundle",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(JPEGImageReaderResources, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGImageReaderResources);
	});
	return class$;
}

$Class* JPEGImageReaderResources::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com
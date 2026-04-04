#include <com/sun/imageio/plugins/tiff/TIFFImageMetadataFormatResources.h>
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

$ObjectArray2* TIFFImageMetadataFormatResources::contents = nullptr;

void TIFFImageMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* TIFFImageMetadataFormatResources::getContents() {
	return $cast($ObjectArray2, TIFFImageMetadataFormatResources::contents->clone());
}

void TIFFImageMetadataFormatResources::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(TIFFImageMetadataFormatResources::contents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"TIFFIFD"_s,
			"An IFD (directory) containing fields"_s
		}),
		$$new($ObjectArray, {
			"TIFFIFD/parentTagNumber"_s,
			"The tag number of the field pointing to this IFD"_s
		}),
		$$new($ObjectArray, {
			"TIFFIFD/parentTagName"_s,
			"A mnemonic name for the field pointing to this IFD, if known"_s
		}),
		$$new($ObjectArray, {
			"TIFFField"_s,
			"A field containing data"_s
		}),
		$$new($ObjectArray, {
			"TIFFField/number"_s,
			"The tag number asociated with the field"_s
		}),
		$$new($ObjectArray, {
			"TIFFField/name"_s,
			"A mnemonic name associated with the field, if known"_s
		}),
		$$new($ObjectArray, {
			"TIFFUndefined"_s,
			"Uninterpreted byte data"_s
		}),
		$$new($ObjectArray, {
			"TIFFUndefined/value"_s,
			"A list of comma-separated byte values"_s
		}),
		$$new($ObjectArray, {
			"TIFFBytes"_s,
			"A sequence of TIFFByte nodes"_s
		}),
		$$new($ObjectArray, {
			"TIFFByte"_s,
			"An integral value between 0 and 255"_s
		}),
		$$new($ObjectArray, {
			"TIFFByte/value"_s,
			"The value"_s
		}),
		$$new($ObjectArray, {
			"TIFFByte/description"_s,
			"A description, if available"_s
		}),
		$$new($ObjectArray, {
			"TIFFAsciis"_s,
			"A sequence of TIFFAscii nodes"_s
		}),
		$$new($ObjectArray, {
			"TIFFAscii"_s,
			"A String value"_s
		}),
		$$new($ObjectArray, {
			"TIFFAscii/value"_s,
			"The value"_s
		}),
		$$new($ObjectArray, {
			"TIFFShorts"_s,
			"A sequence of TIFFShort nodes"_s
		}),
		$$new($ObjectArray, {
			"TIFFShort"_s,
			"An integral value between 0 and 65535"_s
		}),
		$$new($ObjectArray, {
			"TIFFShort/value"_s,
			"The value"_s
		}),
		$$new($ObjectArray, {
			"TIFFShort/description"_s,
			"A description, if available"_s
		}),
		$$new($ObjectArray, {
			"TIFFSShorts"_s,
			"A sequence of TIFFSShort nodes"_s
		}),
		$$new($ObjectArray, {
			"TIFFSShort"_s,
			"An integral value between -32768 and 32767"_s
		}),
		$$new($ObjectArray, {
			"TIFFSShort/value"_s,
			"The value"_s
		}),
		$$new($ObjectArray, {
			"TIFFSShort/description"_s,
			"A description, if available"_s
		}),
		$$new($ObjectArray, {
			"TIFFLongs"_s,
			"A sequence of TIFFLong nodes"_s
		}),
		$$new($ObjectArray, {
			"TIFFLong"_s,
			"An integral value between 0 and 4294967295"_s
		}),
		$$new($ObjectArray, {
			"TIFFLong/value"_s,
			"The value"_s
		}),
		$$new($ObjectArray, {
			"TIFFLong/description"_s,
			"A description, if available"_s
		}),
		$$new($ObjectArray, {
			"TIFFSLongs"_s,
			"A sequence of TIFFSLong nodes"_s
		}),
		$$new($ObjectArray, {
			"TIFFSLong"_s,
			"An integral value between -2147483648 and 2147483647"_s
		}),
		$$new($ObjectArray, {
			"TIFFSLong/value"_s,
			"The value"_s
		}),
		$$new($ObjectArray, {
			"TIFFSLong/description"_s,
			"A description, if available"_s
		}),
		$$new($ObjectArray, {
			"TIFFRationals"_s,
			"A sequence of TIFFRational nodes"_s
		}),
		$$new($ObjectArray, {
			"TIFFRational"_s,
			"A rational value consisting of an unsigned numerator and denominator"_s
		}),
		$$new($ObjectArray, {
			"TIFFRational/value"_s,
			"The numerator and denominator, separated by a slash"_s
		}),
		$$new($ObjectArray, {
			"TIFFSRationals"_s,
			"A sequence of TIFFSRational nodes"_s
		}),
		$$new($ObjectArray, {
			"TIFFSRational"_s,
			"A rational value consisting of a signed numerator and denominator"_s
		}),
		$$new($ObjectArray, {
			"TIFFSRational/value"_s,
			"The numerator and denominator, separated by a slash"_s
		}),
		$$new($ObjectArray, {
			"TIFFFloats"_s,
			"A sequence of TIFFFloat nodes"_s
		}),
		$$new($ObjectArray, {
			"TIFFFloat"_s,
			"A single-precision floating-point value"_s
		}),
		$$new($ObjectArray, {
			"TIFFFloat/value"_s,
			"The value"_s
		}),
		$$new($ObjectArray, {
			"TIFFDoubles"_s,
			"A sequence of TIFFDouble nodes"_s
		}),
		$$new($ObjectArray, {
			"TIFFDouble"_s,
			"A double-precision floating-point value"_s
		}),
		$$new($ObjectArray, {
			"TIFFDouble/value"_s,
			"The value"_s
		})
	}));
}

TIFFImageMetadataFormatResources::TIFFImageMetadataFormatResources() {
}

$Class* TIFFImageMetadataFormatResources::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"contents", "[[Ljava/lang/Object;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(TIFFImageMetadataFormatResources, contents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(TIFFImageMetadataFormatResources, init$, void)},
		{"getContents", "()[[Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(TIFFImageMetadataFormatResources, getContents, $ObjectArray2*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.tiff.TIFFImageMetadataFormatResources",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(TIFFImageMetadataFormatResources, name, initialize, &classInfo$$, TIFFImageMetadataFormatResources::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(TIFFImageMetadataFormatResources);
	});
	return class$;
}

$Class* TIFFImageMetadataFormatResources::class$ = nullptr;

				} // tiff
			} // plugins
		} // imageio
	} // sun
} // com
#include <com/sun/imageio/plugins/jpeg/JPEGMetadataFormatResources.h>
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
				namespace jpeg {

$ObjectArray2* JPEGMetadataFormatResources::commonContents = nullptr;

void JPEGMetadataFormatResources::init$() {
	$ListResourceBundle::init$();
}

void JPEGMetadataFormatResources::clinit$($Class* clazz) {
	$useLocalObjectStack();
	$assignStatic(JPEGMetadataFormatResources::commonContents, $new($ObjectArray2, {
		$$new($ObjectArray, {
			"dqt"_s,
			"A Define Quantization Table(s) marker segment"_s
		}),
		$$new($ObjectArray, {
			"dqtable"_s,
			"A single quantization table"_s
		}),
		$$new($ObjectArray, {
			"dht"_s,
			"A Define Huffman Table(s) marker segment"_s
		}),
		$$new($ObjectArray, {
			"dhtable"_s,
			"A single Huffman table"_s
		}),
		$$new($ObjectArray, {
			"dri"_s,
			"A Define Restart Interval marker segment"_s
		}),
		$$new($ObjectArray, {
			"com"_s,
			"A Comment marker segment.  The user object contains the actual bytes."_s
		}),
		$$new($ObjectArray, {
			"unknown"_s,
			"An unrecognized marker segment.  The user object contains the data not including length."_s
		}),
		$$new($ObjectArray, {
			"dqtable/elementPrecision"_s,
			"The number of bits in each table element (0 = 8, 1 = 16)"_s
		}),
		$$new($ObjectArray, {
			"dgtable/qtableId"_s,
			"The table id"_s
		}),
		$$new($ObjectArray, {
			"dhtable/class"_s,
			"Indicates whether this is a DC (0) or an AC (1) table"_s
		}),
		$$new($ObjectArray, {
			"dhtable/htableId"_s,
			"The table id"_s
		}),
		$$new($ObjectArray, {
			"dri/interval"_s,
			"The restart interval in MCUs"_s
		}),
		$$new($ObjectArray, {
			"com/comment"_s,
			"The comment as a string (used only if user object is null)"_s
		}),
		$$new($ObjectArray, {
			"unknown/MarkerTag"_s,
			"The tag identifying this marker segment"_s
		})
	}));
}

JPEGMetadataFormatResources::JPEGMetadataFormatResources() {
}

$Class* JPEGMetadataFormatResources::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"commonContents", "[[Ljava/lang/Object;", nullptr, $STATIC | $FINAL, $staticField(JPEGMetadataFormatResources, commonContents)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, 0, $method(JPEGMetadataFormatResources, init$, void)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER | $ABSTRACT,
		"com.sun.imageio.plugins.jpeg.JPEGMetadataFormatResources",
		"java.util.ListResourceBundle",
		nullptr,
		fieldInfos$$,
		methodInfos$$
	};
	$loadClass(JPEGMetadataFormatResources, name, initialize, &classInfo$$, JPEGMetadataFormatResources::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(JPEGMetadataFormatResources);
	});
	return class$;
}

$Class* JPEGMetadataFormatResources::class$ = nullptr;

				} // jpeg
			} // plugins
		} // imageio
	} // sun
} // com
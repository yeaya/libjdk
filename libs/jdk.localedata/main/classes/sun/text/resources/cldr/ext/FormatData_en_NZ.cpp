#include <sun/text/resources/cldr/ext/FormatData_en_NZ.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _FormatData_en_NZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_NZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_NZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_NZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_en_NZ",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_NZ_MethodInfo_
};

$Object* allocate$FormatData_en_NZ($Class* clazz) {
	return $of($alloc(FormatData_en_NZ));
}

void FormatData_en_NZ::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_NZ::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		""_s,
		""_s,
		"d/MM/y G"_s,
		"d/MM/y GGGGG"_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		""_s,
		""_s,
		"d/MM/y GGGG"_s,
		"d/MM/y G"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, MMMM d, y GGGG"_s,
				"MMMM d, y GGGG"_s,
				"d/MM/y GGGG"_s,
				"d/MM/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.roc.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.buddhist.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, MMMM d, y G"_s,
				"MMMM d, y G"_s,
				"d/MM/y G"_s,
				"d/MM/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM y"_s,
				"d MMMM y"_s,
				"d/MM/y"_s,
				"d/MM/yy"_s
			}))
		})
	}));
	return data;
}

FormatData_en_NZ::FormatData_en_NZ() {
}

$Class* FormatData_en_NZ::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_NZ, name, initialize, &_FormatData_en_NZ_ClassInfo_, allocate$FormatData_en_NZ);
	return class$;
}

$Class* FormatData_en_NZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun
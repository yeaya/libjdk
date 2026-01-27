#include <sun/text/resources/cldr/ext/FormatData_en_BW.h>

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

$MethodInfo _FormatData_en_BW_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_BW, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_BW, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_BW_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_en_BW",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_BW_MethodInfo_
};

$Object* allocate$FormatData_en_BW($Class* clazz) {
	return $of($alloc(FormatData_en_BW));
}

void FormatData_en_BW::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_BW::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
	}));
	$var($StringArray, metaValue_java_time_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, dd MMMM y G"_s,
		"dd MMMM y G"_s,
		"dd MMM y G"_s,
		""_s
	}));
	$var($StringArray, metaValue_buddhist_DatePatterns, $new($StringArray, {
		"EEEE, dd MMMM y GGGG"_s,
		"dd MMMM y GGGG"_s,
		"dd MMM y GGGG"_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
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
				"EEEE, dd MMMM y G"_s,
				"dd MMMM y G"_s,
				"dd MMM y G"_s,
				"M/d/y GGGGG"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("java.time.islamic.DatePatterns"_s),
			$of(metaValue_java_time_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd MMMM y"_s,
				"dd MMMM y"_s,
				"dd MMM y"_s,
				"dd/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, dd MMMM y GGGG"_s,
				"dd MMMM y GGGG"_s,
				"dd MMM y GGGG"_s,
				"M/d/y G"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("buddhist.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		}),
		$$new($ObjectArray, {
			$of("buddhist.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("japanese.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("roc.DatePatterns"_s),
			$of(metaValue_buddhist_DatePatterns)
		})
	}));
	return data;
}

FormatData_en_BW::FormatData_en_BW() {
}

$Class* FormatData_en_BW::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_BW, name, initialize, &_FormatData_en_BW_ClassInfo_, allocate$FormatData_en_BW);
	return class$;
}

$Class* FormatData_en_BW::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun
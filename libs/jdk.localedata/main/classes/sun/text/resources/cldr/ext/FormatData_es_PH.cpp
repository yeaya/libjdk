#include <sun/text/resources/cldr/ext/FormatData_es_PH.h>

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

$MethodInfo _FormatData_es_PH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_es_PH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_es_PH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_es_PH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_es_PH",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_PH_MethodInfo_
};

$Object* allocate$FormatData_es_PH($Class* clazz) {
	return $of($alloc(FormatData_es_PH));
}

void FormatData_es_PH::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_PH::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"h:mm:ss a zzzz"_s,
		"h:mm:ss a z"_s,
		"h:mm:ss a"_s,
		"h:mm a"_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
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
			$of("TimePatterns"_s),
			$of(metaValue_TimePatterns)
		}),
		$$new($ObjectArray, {
			$of("islamic.TimePatterns"_s),
			$of(metaValue_TimePatterns)
		})
	}));
	return data;
}

FormatData_es_PH::FormatData_es_PH() {
}

$Class* FormatData_es_PH::load$($String* name, bool initialize) {
	$loadClass(FormatData_es_PH, name, initialize, &_FormatData_es_PH_ClassInfo_, allocate$FormatData_es_PH);
	return class$;
}

$Class* FormatData_es_PH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun
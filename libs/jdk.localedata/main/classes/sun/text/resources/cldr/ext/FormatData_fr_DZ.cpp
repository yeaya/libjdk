#include <sun/text/resources/cldr/ext/FormatData_fr_DZ.h>

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

$MethodInfo _FormatData_fr_DZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_DZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_DZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_DZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_fr_DZ",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_DZ_MethodInfo_
};

$Object* allocate$FormatData_fr_DZ($Class* clazz) {
	return $of($alloc(FormatData_fr_DZ));
}

void FormatData_fr_DZ::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_DZ::getContents() {
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

FormatData_fr_DZ::FormatData_fr_DZ() {
}

$Class* FormatData_fr_DZ::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_DZ, name, initialize, &_FormatData_fr_DZ_ClassInfo_, allocate$FormatData_fr_DZ);
	return class$;
}

$Class* FormatData_fr_DZ::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun
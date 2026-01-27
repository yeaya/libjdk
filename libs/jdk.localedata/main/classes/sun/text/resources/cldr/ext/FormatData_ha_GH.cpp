#include <sun/text/resources/cldr/ext/FormatData_ha_GH.h>

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

$MethodInfo _FormatData_ha_GH_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ha_GH, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ha_GH, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ha_GH_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ha_GH",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ha_GH_MethodInfo_
};

$Object* allocate$FormatData_ha_GH($Class* clazz) {
	return $of($alloc(FormatData_ha_GH));
}

void FormatData_ha_GH::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ha_GH::getContents() {
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

FormatData_ha_GH::FormatData_ha_GH() {
}

$Class* FormatData_ha_GH::load$($String* name, bool initialize) {
	$loadClass(FormatData_ha_GH, name, initialize, &_FormatData_ha_GH_ClassInfo_, allocate$FormatData_ha_GH);
	return class$;
}

$Class* FormatData_ha_GH::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun
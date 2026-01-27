#include <sun/text/resources/cldr/ext/FormatData_ee_TG.h>

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

$MethodInfo _FormatData_ee_TG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_ee_TG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_ee_TG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_ee_TG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_ee_TG",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_ee_TG_MethodInfo_
};

$Object* allocate$FormatData_ee_TG($Class* clazz) {
	return $of($alloc(FormatData_ee_TG));
}

void FormatData_ee_TG::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_ee_TG::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, metaValue_TimePatterns, $new($StringArray, {
		"HH:mm:ss zzzz"_s,
		"HH:mm:ss z"_s,
		"HH:mm:ss"_s,
		"HH:mm"_s
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

FormatData_ee_TG::FormatData_ee_TG() {
}

$Class* FormatData_ee_TG::load$($String* name, bool initialize) {
	$loadClass(FormatData_ee_TG, name, initialize, &_FormatData_ee_TG_ClassInfo_, allocate$FormatData_ee_TG);
	return class$;
}

$Class* FormatData_ee_TG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun
#include <sun/text/resources/cldr/ext/FormatData_en_GG.h>

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

$MethodInfo _FormatData_en_GG_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_GG, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_GG, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_GG_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_en_GG",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_GG_MethodInfo_
};

$Object* allocate$FormatData_en_GG($Class* clazz) {
	return $of($alloc(FormatData_en_GG));
}

void FormatData_en_GG::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_GG::getContents() {
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

FormatData_en_GG::FormatData_en_GG() {
}

$Class* FormatData_en_GG::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_GG, name, initialize, &_FormatData_en_GG_ClassInfo_, allocate$FormatData_en_GG);
	return class$;
}

$Class* FormatData_en_GG::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun
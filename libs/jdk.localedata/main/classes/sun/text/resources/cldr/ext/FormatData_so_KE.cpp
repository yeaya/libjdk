#include <sun/text/resources/cldr/ext/FormatData_so_KE.h>

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

$MethodInfo _FormatData_so_KE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_so_KE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_so_KE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_so_KE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.cldr.ext.FormatData_so_KE",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_so_KE_MethodInfo_
};

$Object* allocate$FormatData_so_KE($Class* clazz) {
	return $of($alloc(FormatData_so_KE));
}

void FormatData_so_KE::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* FormatData_so_KE::getContents() {
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

FormatData_so_KE::FormatData_so_KE() {
}

$Class* FormatData_so_KE::load$($String* name, bool initialize) {
	$loadClass(FormatData_so_KE, name, initialize, &_FormatData_so_KE_ClassInfo_, allocate$FormatData_so_KE);
	return class$;
}

$Class* FormatData_so_KE::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // text
} // sun
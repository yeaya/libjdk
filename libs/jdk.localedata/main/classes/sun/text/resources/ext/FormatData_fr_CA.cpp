#include <sun/text/resources/ext/FormatData_fr_CA.h>

#include <sun/util/resources/ParallelListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ParallelListResourceBundle = ::sun::util::resources::ParallelListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _FormatData_fr_CA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_CA, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_CA, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_CA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_fr_CA",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_CA_MethodInfo_
};

$Object* allocate$FormatData_fr_CA($Class* clazz) {
	return $of($alloc(FormatData_fr_CA));
}

void FormatData_fr_CA::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_CA::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberPatterns"_s),
			$of($$new($StringArray, {
				"#,##0.###;-#,##0.###"_s,
				u"#,##0.00 ¤;(#,##0.00¤)"_s,
				"#,##0 %"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"H\' h \'mm z"_s,
				"HH:mm:ss z"_s,
				"HH:mm:ss"_s,
				"HH:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"yyyy-MM-dd"_s,
				"yy-MM-dd"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatternChars"_s),
			$of("GaMjkHmsSEDFwWxhKzZ"_s)
		})
	});
}

FormatData_fr_CA::FormatData_fr_CA() {
}

$Class* FormatData_fr_CA::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_CA, name, initialize, &_FormatData_fr_CA_ClassInfo_, allocate$FormatData_fr_CA);
	return class$;
}

$Class* FormatData_fr_CA::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
#include <sun/text/resources/ext/FormatData_fr_BE.h>

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

$MethodInfo _FormatData_fr_BE_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_fr_BE, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_fr_BE, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_fr_BE_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_fr_BE",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_fr_BE_MethodInfo_
};

$Object* allocate$FormatData_fr_BE($Class* clazz) {
	return $of($alloc(FormatData_fr_BE));
}

void FormatData_fr_BE::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_fr_BE::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				","_s,
				"."_s,
				";"_s,
				"%"_s,
				"0"_s,
				"#"_s,
				"-"_s,
				"E"_s,
				u"‰"_s,
				u"∞"_s,
				u"�"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"H\' h \'mm\' min \'ss\' s \'z"_s,
				"H:mm:ss z"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"dd-MMM-yyyy"_s,
				"d/MM/yy"_s
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

FormatData_fr_BE::FormatData_fr_BE() {
}

$Class* FormatData_fr_BE::load$($String* name, bool initialize) {
	$loadClass(FormatData_fr_BE, name, initialize, &_FormatData_fr_BE_ClassInfo_, allocate$FormatData_fr_BE);
	return class$;
}

$Class* FormatData_fr_BE::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
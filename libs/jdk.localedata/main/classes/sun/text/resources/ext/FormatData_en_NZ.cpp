#include <sun/text/resources/ext/FormatData_en_NZ.h>

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

$MethodInfo _FormatData_en_NZ_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_en_NZ, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_en_NZ, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_en_NZ_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_en_NZ",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_en_NZ_MethodInfo_
};

$Object* allocate$FormatData_en_NZ($Class* clazz) {
	return $of($alloc(FormatData_en_NZ));
}

void FormatData_en_NZ::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_en_NZ::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"h:mm:ss a z"_s,
				"h:mm:ss a"_s,
				"h:mm:ss a"_s,
				"h:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE, d MMMM yyyy"_s,
				"d MMMM yyyy"_s,
				"d/MM/yyyy"_s,
				"d/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_en_NZ::FormatData_en_NZ() {
}

$Class* FormatData_en_NZ::load$($String* name, bool initialize) {
	$loadClass(FormatData_en_NZ, name, initialize, &_FormatData_en_NZ_ClassInfo_, allocate$FormatData_en_NZ);
	return class$;
}

$Class* FormatData_en_NZ::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
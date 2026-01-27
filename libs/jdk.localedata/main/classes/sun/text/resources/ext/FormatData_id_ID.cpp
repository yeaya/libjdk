#include <sun/text/resources/ext/FormatData_id_ID.h>

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

$MethodInfo _FormatData_id_ID_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_id_ID, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_id_ID, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_id_ID_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_id_ID",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_id_ID_MethodInfo_
};

$Object* allocate$FormatData_id_ID($Class* clazz) {
	return $of($alloc(FormatData_id_ID));
}

void FormatData_id_ID::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_id_ID::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("TimePatterns"_s),
			$of($$new($StringArray, {
				"H:mm:ss"_s,
				"H:mm:ss"_s,
				"H:mm:ss"_s,
				"H:mm"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE dd MMMM yyyy"_s,
				"dd MMMM yyyy"_s,
				"dd MMM yy"_s,
				"dd/MM/yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_id_ID::FormatData_id_ID() {
}

$Class* FormatData_id_ID::load$($String* name, bool initialize) {
	$loadClass(FormatData_id_ID, name, initialize, &_FormatData_id_ID_ClassInfo_, allocate$FormatData_id_ID);
	return class$;
}

$Class* FormatData_id_ID::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
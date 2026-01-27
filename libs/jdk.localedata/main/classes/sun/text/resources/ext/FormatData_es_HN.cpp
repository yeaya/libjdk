#include <sun/text/resources/ext/FormatData_es_HN.h>

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

$MethodInfo _FormatData_es_HN_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(FormatData_es_HN, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(FormatData_es_HN, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _FormatData_es_HN_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.FormatData_es_HN",
	"sun.util.resources.ParallelListResourceBundle",
	nullptr,
	nullptr,
	_FormatData_es_HN_MethodInfo_
};

$Object* allocate$FormatData_es_HN($Class* clazz) {
	return $of($alloc(FormatData_es_HN));
}

void FormatData_es_HN::init$() {
	$ParallelListResourceBundle::init$();
}

$ObjectArray2* FormatData_es_HN::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("NumberElements"_s),
			$of($$new($StringArray, {
				"."_s,
				","_s,
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
				"hh:mm:ss a z"_s,
				"hh:mm:ss a z"_s,
				"hh:mm:ss a"_s,
				"hh:mm a"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DatePatterns"_s),
			$of($$new($StringArray, {
				"EEEE dd\' de \'MMMM\' de \'yyyy"_s,
				"dd\' de \'MMMM\' de \'yyyy"_s,
				"MM-dd-yyyy"_s,
				"MM-dd-yy"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("DateTimePatterns"_s),
			$of($$new($StringArray, {"{1} {0}"_s}))
		})
	});
}

FormatData_es_HN::FormatData_es_HN() {
}

$Class* FormatData_es_HN::load$($String* name, bool initialize) {
	$loadClass(FormatData_es_HN, name, initialize, &_FormatData_es_HN_ClassInfo_, allocate$FormatData_es_HN);
	return class$;
}

$Class* FormatData_es_HN::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
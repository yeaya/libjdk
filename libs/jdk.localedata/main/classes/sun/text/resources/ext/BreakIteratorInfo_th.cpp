#include <sun/text/resources/ext/BreakIteratorInfo_th.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace text {
		namespace resources {
			namespace ext {

$MethodInfo _BreakIteratorInfo_th_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(BreakIteratorInfo_th, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(BreakIteratorInfo_th, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _BreakIteratorInfo_th_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.text.resources.ext.BreakIteratorInfo_th",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_BreakIteratorInfo_th_MethodInfo_
};

$Object* allocate$BreakIteratorInfo_th($Class* clazz) {
	return $of($alloc(BreakIteratorInfo_th));
}

void BreakIteratorInfo_th::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* BreakIteratorInfo_th::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("BreakIteratorClasses"_s),
			$of($$new($StringArray, {
				"RuleBasedBreakIterator"_s,
				"DictionaryBasedBreakIterator"_s,
				"DictionaryBasedBreakIterator"_s,
				"RuleBasedBreakIterator"_s
			}))
		}),
		$$new($ObjectArray, {
			$of("WordData"_s),
			$of("WordBreakIteratorData_th"_s)
		}),
		$$new($ObjectArray, {
			$of("LineData"_s),
			$of("LineBreakIteratorData_th"_s)
		}),
		$$new($ObjectArray, {
			$of("WordDictionary"_s),
			$of("thai_dict"_s)
		}),
		$$new($ObjectArray, {
			$of("LineDictionary"_s),
			$of("thai_dict"_s)
		})
	});
}

BreakIteratorInfo_th::BreakIteratorInfo_th() {
}

$Class* BreakIteratorInfo_th::load$($String* name, bool initialize) {
	$loadClass(BreakIteratorInfo_th, name, initialize, &_BreakIteratorInfo_th_ClassInfo_, allocate$BreakIteratorInfo_th);
	return class$;
}

$Class* BreakIteratorInfo_th::class$ = nullptr;

			} // ext
		} // resources
	} // text
} // sun
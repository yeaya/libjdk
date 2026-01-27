#include <sun/util/resources/cldr/ext/TimeZoneNames_es_EC.h>

#include <sun/util/resources/TimeZoneNamesBundle.h>
#include <jcpp.h>

#undef EMPTY_ZONE

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $TimeZoneNamesBundle = ::sun::util::resources::TimeZoneNamesBundle;

namespace sun {
	namespace util {
		namespace resources {
			namespace cldr {
				namespace ext {

$MethodInfo _TimeZoneNames_es_EC_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_es_EC, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_es_EC, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_es_EC_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_es_EC",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_es_EC_MethodInfo_
};

$Object* allocate$TimeZoneNames_es_EC($Class* clazz) {
	return $of($alloc(TimeZoneNames_es_EC));
}

void TimeZoneNames_es_EC::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_es_EC::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Ecuador, $new($StringArray, {
		"hora de Ecuador"_s,
		"ECT"_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($StringArray, EMPTY_ZONE, $new($StringArray, {
		""_s,
		""_s,
		""_s,
		""_s,
		""_s,
		""_s
	}));
	$var($ObjectArray2, data, $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("UTC"_s),
			$of(EMPTY_ZONE)
		}),
		$$new($ObjectArray, {
			$of("America/Guayaquil"_s),
			$of(Ecuador)
		})
	}));
	return data;
}

TimeZoneNames_es_EC::TimeZoneNames_es_EC() {
}

$Class* TimeZoneNames_es_EC::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_es_EC, name, initialize, &_TimeZoneNames_es_EC_ClassInfo_, allocate$TimeZoneNames_es_EC);
	return class$;
}

$Class* TimeZoneNames_es_EC::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
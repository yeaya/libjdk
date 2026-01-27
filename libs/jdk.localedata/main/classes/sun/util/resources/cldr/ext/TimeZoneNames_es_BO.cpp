#include <sun/util/resources/cldr/ext/TimeZoneNames_es_BO.h>

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

$MethodInfo _TimeZoneNames_es_BO_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(TimeZoneNames_es_BO, init$, void)},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL, $virtualMethod(TimeZoneNames_es_BO, getContents, $ObjectArray2*)},
	{}
};

$ClassInfo _TimeZoneNames_es_BO_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.util.resources.cldr.ext.TimeZoneNames_es_BO",
	"sun.util.resources.TimeZoneNamesBundle",
	nullptr,
	nullptr,
	_TimeZoneNames_es_BO_MethodInfo_
};

$Object* allocate$TimeZoneNames_es_BO($Class* clazz) {
	return $of($alloc(TimeZoneNames_es_BO));
}

void TimeZoneNames_es_BO::init$() {
	$TimeZoneNamesBundle::init$();
}

$ObjectArray2* TimeZoneNames_es_BO::getContents() {
	$useLocalCurrentObjectStackCache();
	$var($StringArray, Bolivia, $new($StringArray, {
		"hora de Bolivia"_s,
		"BOT"_s,
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
			$of("America/La_Paz"_s),
			$of(Bolivia)
		})
	}));
	return data;
}

TimeZoneNames_es_BO::TimeZoneNames_es_BO() {
}

$Class* TimeZoneNames_es_BO::load$($String* name, bool initialize) {
	$loadClass(TimeZoneNames_es_BO, name, initialize, &_TimeZoneNames_es_BO_ClassInfo_, allocate$TimeZoneNames_es_BO);
	return class$;
}

$Class* TimeZoneNames_es_BO::class$ = nullptr;

				} // ext
			} // cldr
		} // resources
	} // util
} // sun
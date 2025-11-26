#include <sun/util/logging/resources/logging_fr.h>

#include <java/util/ListResourceBundle.h>
#include <jcpp.h>

using $ObjectArray2 = $Array<::java::lang::Object, 2>;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $ListResourceBundle = ::java::util::ListResourceBundle;

namespace sun {
	namespace util {
		namespace logging {
			namespace resources {

$MethodInfo _logging_fr_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(logging_fr::*)()>(&logging_fr::init$))},
	{"getContents", "()[[Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{}
};

$ClassInfo _logging_fr_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"sun.util.logging.resources.logging_fr",
	"java.util.ListResourceBundle",
	nullptr,
	nullptr,
	_logging_fr_MethodInfo_
};

$Object* allocate$logging_fr($Class* clazz) {
	return $of($alloc(logging_fr));
}

void logging_fr::init$() {
	$ListResourceBundle::init$();
}

$ObjectArray2* logging_fr::getContents() {
	$useLocalCurrentObjectStackCache();
	return $new($ObjectArray2, {
		$$new($ObjectArray, {
			$of("ALL"_s),
			$of("Tout"_s)
		}),
		$$new($ObjectArray, {
			$of("CONFIG"_s),
			$of("Config"_s)
		}),
		$$new($ObjectArray, {
			$of("FINE"_s),
			$of(u"Pr\u00e9cis"_s)
		}),
		$$new($ObjectArray, {
			$of("FINER"_s),
			$of(u"Plus pr\u00e9cis"_s)
		}),
		$$new($ObjectArray, {
			$of("FINEST"_s),
			$of(u"Le plus pr\u00e9cis"_s)
		}),
		$$new($ObjectArray, {
			$of("INFO"_s),
			$of("Infos"_s)
		}),
		$$new($ObjectArray, {
			$of("OFF"_s),
			$of(u"D\u00e9sactiv\u00e9"_s)
		}),
		$$new($ObjectArray, {
			$of("SEVERE"_s),
			$of("Grave"_s)
		}),
		$$new($ObjectArray, {
			$of("WARNING"_s),
			$of("Avertissement"_s)
		})
	});
}

logging_fr::logging_fr() {
}

$Class* logging_fr::load$($String* name, bool initialize) {
	$loadClass(logging_fr, name, initialize, &_logging_fr_ClassInfo_, allocate$logging_fr);
	return class$;
}

$Class* logging_fr::class$ = nullptr;

			} // resources
		} // logging
	} // util
} // sun
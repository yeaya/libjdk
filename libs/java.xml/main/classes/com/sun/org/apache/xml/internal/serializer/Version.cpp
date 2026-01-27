#include <com/sun/org/apache/xml/internal/serializer/Version.h>

#include <java/lang/NumberFormatException.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$MethodInfo _Version_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(Version, init$, void)},
	{"_main", "([Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $staticMethod(Version, _main, void, $StringArray*)},
	{"getDevelopmentVersionNum", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Version, getDevelopmentVersionNum, int32_t)},
	{"getImplementationLanguage", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Version, getImplementationLanguage, $String*)},
	{"getMaintenanceVersionNum", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Version, getMaintenanceVersionNum, int32_t)},
	{"getMajorVersionNum", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Version, getMajorVersionNum, int32_t)},
	{"getProduct", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Version, getProduct, $String*)},
	{"getReleaseVersionNum", "()I", nullptr, $PUBLIC | $STATIC, $staticMethod(Version, getReleaseVersionNum, int32_t)},
	{"getVersion", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(Version, getVersion, $String*)},
	{}
};

$ClassInfo _Version_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.serializer.Version",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Version_MethodInfo_
};

$Object* allocate$Version($Class* clazz) {
	return $of($alloc(Version));
}

void Version::init$() {
}

$String* Version::getVersion() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$6, $$str({$(getProduct()), " "_s}));
	$var($String, var$5, $$concat(var$6, $(getImplementationLanguage())));
	$var($String, var$4, $$concat(var$5, " "_s));
	$var($String, var$3, $$concat(var$4, $$str(getMajorVersionNum())));
	$var($String, var$2, $$concat(var$3, "."_s));
	$var($String, var$1, $$concat(var$2, $$str(getReleaseVersionNum())));
	$var($String, var$0, $$concat(var$1, "."_s));
	return $concat(var$0, ((getDevelopmentVersionNum() > 0) ? ($$str({"D"_s, $$str(getDevelopmentVersionNum())})) : ($$str({""_s, $$str(getMaintenanceVersionNum())}))));
}

void Version::_main($StringArray* argv) {
	$nc($System::out)->println($(getVersion()));
}

$String* Version::getProduct() {
	return "Serializer"_s;
}

$String* Version::getImplementationLanguage() {
	return "Java"_s;
}

int32_t Version::getMajorVersionNum() {
	return 2;
}

int32_t Version::getReleaseVersionNum() {
	return 7;
}

int32_t Version::getMaintenanceVersionNum() {
	return 0;
}

int32_t Version::getDevelopmentVersionNum() {
	try {
		if (($$new($String, ""_s))->length() == 0) {
			return 0;
		} else {
			return $Integer::parseInt(""_s);
		}
	} catch ($NumberFormatException& nfe) {
		return 0;
	}
	$shouldNotReachHere();
}

Version::Version() {
}

$Class* Version::load$($String* name, bool initialize) {
	$loadClass(Version, name, initialize, &_Version_ClassInfo_, allocate$Version);
	return class$;
}

$Class* Version::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
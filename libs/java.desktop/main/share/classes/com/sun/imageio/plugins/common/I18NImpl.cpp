#include <com/sun/imageio/plugins/common/I18NImpl.h>
#include <java/io/InputStream.h>
#include <java/util/PropertyResourceBundle.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $PropertyResourceBundle = ::java::util::PropertyResourceBundle;

namespace com {
	namespace sun {
		namespace imageio {
			namespace plugins {
				namespace common {

void I18NImpl::init$() {
}

$String* I18NImpl::getString($String* className, $String* resource_name, $String* key) {
	$useLocalObjectStack();
	$load(I18NImpl);
	$beforeCallerSensitive();
	$var($PropertyResourceBundle, bundle, nullptr);
	try {
		$var($InputStream, stream, $Class::forName(className)->getResourceAsStream(resource_name));
		$assign(bundle, $new($PropertyResourceBundle, stream));
	} catch ($Throwable& e) {
		$throwNew($RuntimeException, e);
	}
	return $cast($String, $nc(bundle)->handleGetObject(key));
}

I18NImpl::I18NImpl() {
}

$Class* I18NImpl::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(I18NImpl, init$, void)},
		{"getString", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticMethod(I18NImpl, getString, $String*, $String*, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"com.sun.imageio.plugins.common.I18NImpl",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(I18NImpl, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(I18NImpl);
	});
	return class$;
}

$Class* I18NImpl::class$ = nullptr;

				} // common
			} // plugins
		} // imageio
	} // sun
} // com
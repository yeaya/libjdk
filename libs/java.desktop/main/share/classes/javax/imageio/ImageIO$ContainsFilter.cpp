#include <javax/imageio/ImageIO$ContainsFilter.h>
#include <java/lang/reflect/Method.h>
#include <javax/imageio/ImageIO.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Method = ::java::lang::reflect::Method;
using $ImageIO = ::javax::imageio::ImageIO;

namespace javax {
	namespace imageio {

void ImageIO$ContainsFilter::init$($Method* method, $String* name) {
	$set(this, method, method);
	$set(this, name, name);
}

bool ImageIO$ContainsFilter::filter(Object$* elt) {
	$useLocalObjectStack();
	$beforeCallerSensitive();
	try {
		return $ImageIO::contains($$cast($StringArray, $nc(this->method)->invoke(elt, $$new($ObjectArray, 0))), this->name);
	} catch ($Exception& e) {
		return false;
	}
	$shouldNotReachHere();
}

ImageIO$ContainsFilter::ImageIO$ContainsFilter() {
}

$Class* ImageIO$ContainsFilter::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"method", "Ljava/lang/reflect/Method;", nullptr, 0, $field(ImageIO$ContainsFilter, method)},
		{"name", "Ljava/lang/String;", nullptr, 0, $field(ImageIO$ContainsFilter, name)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljava/lang/reflect/Method;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(ImageIO$ContainsFilter, init$, void, $Method*, $String*)},
		{"filter", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(ImageIO$ContainsFilter, filter, bool, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.imageio.ImageIO$ContainsFilter", "javax.imageio.ImageIO", "ContainsFilter", $STATIC},
		{"javax.imageio.spi.ServiceRegistry$Filter", "javax.imageio.spi.ServiceRegistry", "Filter", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.imageio.ImageIO$ContainsFilter",
		"java.lang.Object",
		"javax.imageio.spi.ServiceRegistry$Filter",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.imageio.ImageIO"
	};
	$loadClass(ImageIO$ContainsFilter, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(ImageIO$ContainsFilter);
	});
	return class$;
}

$Class* ImageIO$ContainsFilter::class$ = nullptr;

	} // imageio
} // javax
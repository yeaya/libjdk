#include <javax/xml/catalog/Catalog.h>

#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Stream = ::java::util::stream::Stream;

namespace javax {
	namespace xml {
		namespace catalog {

$MethodInfo _Catalog_MethodInfo_[] = {
	{"catalogs", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljavax/xml/catalog/Catalog;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Catalog, catalogs, $Stream*)},
	{"matchPublic", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Catalog, matchPublic, $String*, $String*)},
	{"matchSystem", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Catalog, matchSystem, $String*, $String*)},
	{"matchURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Catalog, matchURI, $String*, $String*)},
	{}
};

$ClassInfo _Catalog_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.catalog.Catalog",
	nullptr,
	nullptr,
	nullptr,
	_Catalog_MethodInfo_
};

$Object* allocate$Catalog($Class* clazz) {
	return $of($alloc(Catalog));
}

$Class* Catalog::load$($String* name, bool initialize) {
	$loadClass(Catalog, name, initialize, &_Catalog_ClassInfo_, allocate$Catalog);
	return class$;
}

$Class* Catalog::class$ = nullptr;

		} // catalog
	} // xml
} // javax
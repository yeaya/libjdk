#include <javax/xml/catalog/Catalog.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Stream = ::java::util::stream::Stream;

namespace javax {
	namespace xml {
		namespace catalog {

$Class* Catalog::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"catalogs", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljavax/xml/catalog/Catalog;>;", $PUBLIC | $ABSTRACT, $virtualMethod(Catalog, catalogs, $Stream*)},
		{"matchPublic", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Catalog, matchPublic, $String*, $String*)},
		{"matchSystem", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Catalog, matchSystem, $String*, $String*)},
		{"matchURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT, $virtualMethod(Catalog, matchURI, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $INTERFACE | $ABSTRACT,
		"javax.xml.catalog.Catalog",
		nullptr,
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(Catalog, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(Catalog);
	});
	return class$;
}

$Class* Catalog::class$ = nullptr;

		} // catalog
	} // xml
} // javax
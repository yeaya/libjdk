#include <javax/xml/catalog/CatalogFeatures$Builder.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/catalog/Util.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $HashMap = ::java::util::HashMap;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $Util = ::javax::xml::catalog::Util;

namespace javax {
	namespace xml {
		namespace catalog {

void CatalogFeatures$Builder::init$() {
	$set(this, values, $new($HashMap));
}

CatalogFeatures$Builder* CatalogFeatures$Builder::with($CatalogFeatures$Feature* feature, $String* value) {
	$Util::validateFeatureInput(feature, value);
	$nc(this->values)->put(feature, value);
	return this;
}

$CatalogFeatures* CatalogFeatures$Builder::build() {
	return $new($CatalogFeatures, this);
}

CatalogFeatures$Builder::CatalogFeatures$Builder() {
}

$Class* CatalogFeatures$Builder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"values", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/xml/catalog/CatalogFeatures$Feature;Ljava/lang/String;>;", 0, $field(CatalogFeatures$Builder, values)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(CatalogFeatures$Builder, init$, void)},
		{"build", "()Ljavax/xml/catalog/CatalogFeatures;", nullptr, $PUBLIC, $virtualMethod(CatalogFeatures$Builder, build, $CatalogFeatures*)},
		{"with", "(Ljavax/xml/catalog/CatalogFeatures$Feature;Ljava/lang/String;)Ljavax/xml/catalog/CatalogFeatures$Builder;", nullptr, $PUBLIC, $virtualMethod(CatalogFeatures$Builder, with, CatalogFeatures$Builder*, $CatalogFeatures$Feature*, $String*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.catalog.CatalogFeatures$Builder", "javax.xml.catalog.CatalogFeatures", "Builder", $PUBLIC | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $ACC_SUPER,
		"javax.xml.catalog.CatalogFeatures$Builder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"javax.xml.catalog.CatalogFeatures"
	};
	$loadClass(CatalogFeatures$Builder, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(CatalogFeatures$Builder);
	});
	return class$;
}

$Class* CatalogFeatures$Builder::class$ = nullptr;

		} // catalog
	} // xml
} // javax
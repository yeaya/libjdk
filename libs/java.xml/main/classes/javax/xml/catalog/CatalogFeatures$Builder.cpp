#include <javax/xml/catalog/CatalogFeatures$Builder.h>

#include <java/util/AbstractMap.h>
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
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $Util = ::javax::xml::catalog::Util;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _CatalogFeatures$Builder_FieldInfo_[] = {
	{"values", "Ljava/util/Map;", "Ljava/util/Map<Ljavax/xml/catalog/CatalogFeatures$Feature;Ljava/lang/String;>;", 0, $field(CatalogFeatures$Builder, values)},
	{}
};

$MethodInfo _CatalogFeatures$Builder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(CatalogFeatures$Builder, init$, void)},
	{"build", "()Ljavax/xml/catalog/CatalogFeatures;", nullptr, $PUBLIC, $virtualMethod(CatalogFeatures$Builder, build, $CatalogFeatures*)},
	{"with", "(Ljavax/xml/catalog/CatalogFeatures$Feature;Ljava/lang/String;)Ljavax/xml/catalog/CatalogFeatures$Builder;", nullptr, $PUBLIC, $virtualMethod(CatalogFeatures$Builder, with, CatalogFeatures$Builder*, $CatalogFeatures$Feature*, $String*)},
	{}
};

$InnerClassInfo _CatalogFeatures$Builder_InnerClassesInfo_[] = {
	{"javax.xml.catalog.CatalogFeatures$Builder", "javax.xml.catalog.CatalogFeatures", "Builder", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _CatalogFeatures$Builder_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.catalog.CatalogFeatures$Builder",
	"java.lang.Object",
	nullptr,
	_CatalogFeatures$Builder_FieldInfo_,
	_CatalogFeatures$Builder_MethodInfo_,
	nullptr,
	nullptr,
	_CatalogFeatures$Builder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.catalog.CatalogFeatures"
};

$Object* allocate$CatalogFeatures$Builder($Class* clazz) {
	return $of($alloc(CatalogFeatures$Builder));
}

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
	$loadClass(CatalogFeatures$Builder, name, initialize, &_CatalogFeatures$Builder_ClassInfo_, allocate$CatalogFeatures$Builder);
	return class$;
}

$Class* CatalogFeatures$Builder::class$ = nullptr;

		} // catalog
	} // xml
} // javax
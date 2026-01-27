#include <javax/xml/catalog/CatalogImpl$1.h>

#include <java/net/URI.h>
#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <javax/xml/catalog/Catalog.h>
#include <javax/xml/catalog/CatalogImpl.h>
#include <javax/xml/catalog/NextCatalog.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
using $List = ::java::util::List;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $Catalog = ::javax::xml::catalog::Catalog;
using $CatalogImpl = ::javax::xml::catalog::CatalogImpl;
using $NextCatalog = ::javax::xml::catalog::NextCatalog;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _CatalogImpl$1_FieldInfo_[] = {
	{"this$0", "Ljavax/xml/catalog/CatalogImpl;", nullptr, $FINAL | $SYNTHETIC, $field(CatalogImpl$1, this$0)},
	{"nextCatalog", "Ljavax/xml/catalog/Catalog;", nullptr, 0, $field(CatalogImpl$1, nextCatalog$)},
	{"inputFilesIndex", "I", nullptr, 0, $field(CatalogImpl$1, inputFilesIndex)},
	{"nextCatalogIndex", "I", nullptr, 0, $field(CatalogImpl$1, nextCatalogIndex)},
	{}
};

$MethodInfo _CatalogImpl$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/catalog/CatalogImpl;)V", nullptr, 0, $method(CatalogImpl$1, init$, void, $CatalogImpl*)},
	{"hasNext", "()Z", nullptr, $PUBLIC, $virtualMethod(CatalogImpl$1, hasNext, bool)},
	{"next", "()Ljavax/xml/catalog/Catalog;", nullptr, $PUBLIC, $virtualMethod(CatalogImpl$1, next, $Object*)},
	{"nextCatalog", "()Ljavax/xml/catalog/Catalog;", nullptr, $PRIVATE, $method(CatalogImpl$1, nextCatalog, $Catalog*)},
	{}
};

$EnclosingMethodInfo _CatalogImpl$1_EnclosingMethodInfo_ = {
	"javax.xml.catalog.CatalogImpl",
	"catalogs",
	"()Ljava/util/stream/Stream;"
};

$InnerClassInfo _CatalogImpl$1_InnerClassesInfo_[] = {
	{"javax.xml.catalog.CatalogImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CatalogImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.catalog.CatalogImpl$1",
	"java.lang.Object",
	"java.util.Iterator",
	_CatalogImpl$1_FieldInfo_,
	_CatalogImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljavax/xml/catalog/Catalog;>;",
	&_CatalogImpl$1_EnclosingMethodInfo_,
	_CatalogImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.catalog.CatalogImpl"
};

$Object* allocate$CatalogImpl$1($Class* clazz) {
	return $of($alloc(CatalogImpl$1));
}

void CatalogImpl$1::init$($CatalogImpl* this$0) {
	$set(this, this$0, this$0);
	$set(this, nextCatalog$, nullptr);
	this->inputFilesIndex = 0;
	this->nextCatalogIndex = 0;
}

bool CatalogImpl$1::hasNext() {
	if (this->nextCatalog$ != nullptr) {
		return true;
	} else {
		$set(this, nextCatalog$, nextCatalog());
		return (this->nextCatalog$ != nullptr);
	}
}

$Object* CatalogImpl$1::next() {
	if (this->nextCatalog$ != nullptr || hasNext()) {
		$var($Catalog, catalog, this->nextCatalog$);
		$set(this, nextCatalog$, nullptr);
		return $of(catalog);
	} else {
		$throwNew($NoSuchElementException);
	}
}

$Catalog* CatalogImpl$1::nextCatalog() {
	$useLocalCurrentObjectStackCache();
	$var($Catalog, c, nullptr);
	if (this->this$0->nextCatalogs != nullptr) {
		while (c == nullptr && this->nextCatalogIndex < $nc(this->this$0->nextCatalogs)->size()) {
			$assign(c, this->this$0->getCatalog(this->this$0->catalog, $($nc(($cast($NextCatalog, $($nc(this->this$0->nextCatalogs)->get(this->nextCatalogIndex++)))))->getCatalogURI())));
		}
	}
	if (c == nullptr && this->this$0->inputFiles != nullptr) {
		while (c == nullptr && this->inputFilesIndex < $nc(this->this$0->inputFiles)->size()) {
			$assign(c, this->this$0->getCatalog(nullptr, $($URI::create($cast($String, $($nc(this->this$0->inputFiles)->get(this->inputFilesIndex++)))))));
		}
	}
	return c;
}

CatalogImpl$1::CatalogImpl$1() {
}

$Class* CatalogImpl$1::load$($String* name, bool initialize) {
	$loadClass(CatalogImpl$1, name, initialize, &_CatalogImpl$1_ClassInfo_, allocate$CatalogImpl$1);
	return class$;
}

$Class* CatalogImpl$1::class$ = nullptr;

		} // catalog
	} // xml
} // javax
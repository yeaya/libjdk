#include <javax/xml/catalog/BaseEntry.h>

#include <java/io/IOException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <java/util/Objects.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/Normalizer.h>
#include <jcpp.h>

#undef SLASH

using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $Objects = ::java::util::Objects;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $Normalizer = ::javax::xml::catalog::Normalizer;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _BaseEntry_FieldInfo_[] = {
	{"SLASH", "Ljava/lang/String;", nullptr, $FINAL, $field(BaseEntry, SLASH)},
	{"type", "Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, 0, $field(BaseEntry, type)},
	{"id", "Ljava/lang/String;", nullptr, 0, $field(BaseEntry, id)},
	{"matchId", "Ljava/lang/String;", nullptr, 0, $field(BaseEntry, matchId)},
	{"baseURI", "Ljava/net/URL;", nullptr, 0, $field(BaseEntry, baseURI)},
	{"baseSpecified", "Z", nullptr, 0, $field(BaseEntry, baseSpecified)},
	{}
};

$MethodInfo _BaseEntry_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/catalog/BaseEntry$CatalogEntryType;)V", nullptr, $PUBLIC, $method(BaseEntry, init$, void, $BaseEntry$CatalogEntryType*)},
	{"<init>", "(Ljavax/xml/catalog/BaseEntry$CatalogEntryType;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(BaseEntry, init$, void, $BaseEntry$CatalogEntryType*, $String*)},
	{"getBaseURI", "()Ljava/net/URL;", nullptr, $PUBLIC, $virtualMethod(BaseEntry, getBaseURI, $URL*)},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BaseEntry, getId, $String*)},
	{"getMatchId", "()Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BaseEntry, getMatchId, $String*)},
	{"getType", "()Ljavax/xml/catalog/BaseEntry$CatalogEntryType;", nullptr, $PUBLIC, $virtualMethod(BaseEntry, getType, $BaseEntry$CatalogEntryType*)},
	{"match", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BaseEntry, match, $String*, $String*)},
	{"match", "(Ljava/lang/String;I)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(BaseEntry, match, $String*, $String*, int32_t)},
	{"setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(BaseEntry, setBaseURI, void, $String*)},
	{"setId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseEntry, setId, void, $String*)},
	{"setMatchId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(BaseEntry, setMatchId, void, $String*)},
	{"setType", "(Ljavax/xml/catalog/BaseEntry$CatalogEntryType;)V", nullptr, $PUBLIC, $virtualMethod(BaseEntry, setType, void, $BaseEntry$CatalogEntryType*)},
	{"verifyURI", "(Ljava/lang/String;Ljava/net/URL;Ljava/lang/String;)Ljava/net/URL;", nullptr, 0, $virtualMethod(BaseEntry, verifyURI, $URL*, $String*, $URL*, $String*)},
	{}
};

$InnerClassInfo _BaseEntry_InnerClassesInfo_[] = {
	{"javax.xml.catalog.BaseEntry$CatalogEntryType", "javax.xml.catalog.BaseEntry", "CatalogEntryType", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _BaseEntry_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"javax.xml.catalog.BaseEntry",
	"java.lang.Object",
	nullptr,
	_BaseEntry_FieldInfo_,
	_BaseEntry_MethodInfo_,
	nullptr,
	nullptr,
	_BaseEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.catalog.BaseEntry$CatalogEntryType"
};

$Object* allocate$BaseEntry($Class* clazz) {
	return $of($alloc(BaseEntry));
}

void BaseEntry::init$($BaseEntry$CatalogEntryType* type) {
	$set(this, SLASH, "/"_s);
	this->baseSpecified = false;
	$set(this, type, $cast($BaseEntry$CatalogEntryType, $Objects::requireNonNull(type)));
}

void BaseEntry::init$($BaseEntry$CatalogEntryType* type, $String* base) {
	$set(this, SLASH, "/"_s);
	this->baseSpecified = false;
	$set(this, type, $cast($BaseEntry$CatalogEntryType, $Objects::requireNonNull(type)));
	setBaseURI(base);
}

$BaseEntry$CatalogEntryType* BaseEntry::getType() {
	return this->type;
}

void BaseEntry::setType($BaseEntry$CatalogEntryType* type) {
	$set(this, type, type);
}

$String* BaseEntry::getId() {
	return this->id;
}

void BaseEntry::setId($String* id) {
	$set(this, id, id);
}

void BaseEntry::setBaseURI($String* base) {
	$set(this, baseURI, verifyURI("base"_s, nullptr, base));
}

$URL* BaseEntry::getBaseURI() {
	return this->baseURI;
}

$String* BaseEntry::getMatchId() {
	return this->matchId;
}

void BaseEntry::setMatchId($String* matchId) {
	$set(this, matchId, matchId);
}

$String* BaseEntry::match($String* match) {
	return nullptr;
}

$String* BaseEntry::match($String* id, int32_t currentMatch) {
	return nullptr;
}

$URL* BaseEntry::verifyURI($String* arg, $URL* base, $String* uri$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, uri, uri$renamed);
	$CatalogMessages::reportNPEOnNull(arg, uri);
	$var($URL, url, nullptr);
	$assign(uri, $Normalizer::normalizeURI(uri));
	try {
		if (base != nullptr) {
			$assign(url, $new($URL, base, uri));
		} else {
			$assign(url, $new($URL, uri));
		}
	} catch ($MalformedURLException& e) {
		$CatalogMessages::reportIAE("InvalidArgument"_s, $$new($ObjectArray, {
			$of(uri),
			$of(arg)
		}), e);
	}
	return url;
}

BaseEntry::BaseEntry() {
}

$Class* BaseEntry::load$($String* name, bool initialize) {
	$loadClass(BaseEntry, name, initialize, &_BaseEntry_ClassInfo_, allocate$BaseEntry);
	return class$;
}

$Class* BaseEntry::class$ = nullptr;

		} // catalog
	} // xml
} // javax
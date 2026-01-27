#include <javax/xml/catalog/CatalogImpl.h>

#include <com/sun/org/apache/xerces/internal/jaxp/SAXParserFactoryImpl.h>
#include <java/io/IOException.h>
#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Spliterator.h>
#include <java/util/Spliterators.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <java/util/stream/StreamSupport.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/Catalog.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/catalog/CatalogImpl$1.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/CatalogReader.h>
#include <javax/xml/catalog/GroupEntry$ResolveType.h>
#include <javax/xml/catalog/GroupEntry.h>
#include <javax/xml/catalog/NextCatalog.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/parsers/SAXParser.h>
#include <javax/xml/parsers/SAXParserFactory.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

#undef CATALOG
#undef DEFER
#undef ERR_INVALID_PATH
#undef ERR_NULL_ARGUMENT
#undef ERR_PARSING_FAILED
#undef FILES
#undef GROUP
#undef NONNULL
#undef ORDERED
#undef PREFER
#undef RESOLVE
#undef STRICT

using $URIArray = $Array<::java::net::URI>;
using $SAXParserFactoryImpl = ::com::sun::org::apache::xerces::internal::jaxp::SAXParserFactoryImpl;
using $IOException = ::java::io::IOException;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $URL = ::java::net::URL;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Spliterator = ::java::util::Spliterator;
using $Spliterators = ::java::util::Spliterators;
using $Consumer = ::java::util::function::Consumer;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $StreamSupport = ::java::util::stream::StreamSupport;
using $BaseEntry = ::javax::xml::catalog::BaseEntry;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $Catalog = ::javax::xml::catalog::Catalog;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $CatalogImpl$1 = ::javax::xml::catalog::CatalogImpl$1;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $CatalogReader = ::javax::xml::catalog::CatalogReader;
using $GroupEntry = ::javax::xml::catalog::GroupEntry;
using $GroupEntry$ResolveType = ::javax::xml::catalog::GroupEntry$ResolveType;
using $NextCatalog = ::javax::xml::catalog::NextCatalog;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $SAXParser = ::javax::xml::parsers::SAXParser;
using $SAXParserFactory = ::javax::xml::parsers::SAXParserFactory;
using $SAXException = ::org::xml::sax::SAXException;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace javax {
	namespace xml {
		namespace catalog {

class CatalogImpl$$Lambda$lambda$reset$0 : public $Predicate {
	$class(CatalogImpl$$Lambda$lambda$reset$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* entry) override {
		 return CatalogImpl::lambda$reset$0($cast($BaseEntry, entry));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CatalogImpl$$Lambda$lambda$reset$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CatalogImpl$$Lambda$lambda$reset$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CatalogImpl$$Lambda$lambda$reset$0, init$, void)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(CatalogImpl$$Lambda$lambda$reset$0, test, bool, Object$*)},
	{}
};
$ClassInfo CatalogImpl$$Lambda$lambda$reset$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.catalog.CatalogImpl$$Lambda$lambda$reset$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* CatalogImpl$$Lambda$lambda$reset$0::load$($String* name, bool initialize) {
	$loadClass(CatalogImpl$$Lambda$lambda$reset$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CatalogImpl$$Lambda$lambda$reset$0::class$ = nullptr;

class CatalogImpl$$Lambda$lambda$reset$1$1 : public $Consumer {
	$class(CatalogImpl$$Lambda$lambda$reset$1$1, $NO_CLASS_INIT, $Consumer)
public:
	void init$() {
	}
	virtual void accept(Object$* entry) override {
		CatalogImpl::lambda$reset$1($cast($BaseEntry, entry));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CatalogImpl$$Lambda$lambda$reset$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo CatalogImpl$$Lambda$lambda$reset$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(CatalogImpl$$Lambda$lambda$reset$1$1, init$, void)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CatalogImpl$$Lambda$lambda$reset$1$1, accept, void, Object$*)},
	{}
};
$ClassInfo CatalogImpl$$Lambda$lambda$reset$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.catalog.CatalogImpl$$Lambda$lambda$reset$1$1",
	"java.lang.Object",
	"java.util.function.Consumer",
	nullptr,
	methodInfos
};
$Class* CatalogImpl$$Lambda$lambda$reset$1$1::load$($String* name, bool initialize) {
	$loadClass(CatalogImpl$$Lambda$lambda$reset$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CatalogImpl$$Lambda$lambda$reset$1$1::class$ = nullptr;

class CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2 : public $Consumer {
	$class(CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$(CatalogImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* next) override {
		$nc(inst$)->lambda$loadNextCatalogs$2($cast($NextCatalog, next));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2>());
	}
	CatalogImpl* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2, inst$)},
	{}
};
$MethodInfo CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/catalog/CatalogImpl;)V", nullptr, $PUBLIC, $method(CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2, init$, void, CatalogImpl*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2, accept, void, Object$*)},
	{}
};
$ClassInfo CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.catalog.CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2::load$($String* name, bool initialize) {
	$loadClass(CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2::class$ = nullptr;

class CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3 : public $Consumer {
	$class(CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3, $NO_CLASS_INIT, $Consumer)
public:
	void init$(CatalogImpl* inst) {
		$set(this, inst$, inst);
	}
	virtual void accept(Object$* uri) override {
		$nc(inst$)->lambda$loadNextCatalogs$3($cast($String, uri));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3>());
	}
	CatalogImpl* inst$ = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3::fieldInfos[2] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3, inst$)},
	{}
};
$MethodInfo CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/catalog/CatalogImpl;)V", nullptr, $PUBLIC, $method(CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3, init$, void, CatalogImpl*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3, accept, void, Object$*)},
	{}
};
$ClassInfo CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.catalog.CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3::load$($String* name, bool initialize) {
	$loadClass(CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3::class$ = nullptr;

$FieldInfo _CatalogImpl_FieldInfo_[] = {
	{"level", "I", nullptr, 0, $field(CatalogImpl, level)},
	{"isDeferred", "Z", nullptr, 0, $field(CatalogImpl, isDeferred$)},
	{"resolveType", "Ljavax/xml/catalog/GroupEntry$ResolveType;", nullptr, 0, $field(CatalogImpl, resolveType)},
	{"isEmpty", "Z", nullptr, 0, $field(CatalogImpl, isEmpty$)},
	{"current", "I", nullptr, 0, $field(CatalogImpl, current)},
	{"systemId", "Ljava/lang/String;", nullptr, 0, $field(CatalogImpl, systemId)},
	{"inputFiles", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(CatalogImpl, inputFiles)},
	{"nextCatalogs", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/catalog/NextCatalog;>;", 0, $field(CatalogImpl, nextCatalogs)},
	{"parser", "Ljavax/xml/parsers/SAXParser;", nullptr, 0, $field(CatalogImpl, parser)},
	{}
};

$MethodInfo _CatalogImpl_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljavax/xml/catalog/CatalogFeatures;[Ljava/net/URI;)V", nullptr, $PUBLIC | $TRANSIENT, $method(CatalogImpl, init$, void, $CatalogFeatures*, $URIArray*), "javax.xml.catalog.CatalogException"},
	{"<init>", "(Ljavax/xml/catalog/CatalogImpl;Ljavax/xml/catalog/CatalogFeatures;[Ljava/net/URI;)V", nullptr, $PUBLIC | $TRANSIENT, $method(CatalogImpl, init$, void, CatalogImpl*, $CatalogFeatures*, $URIArray*), "javax.xml.catalog.CatalogException"},
	{"addNextCatalog", "(Ljavax/xml/catalog/NextCatalog;)V", nullptr, 0, $virtualMethod(CatalogImpl, addNextCatalog, void, $NextCatalog*)},
	{"catalogs", "()Ljava/util/stream/Stream;", "()Ljava/util/stream/Stream<Ljavax/xml/catalog/Catalog;>;", $PUBLIC, $virtualMethod(CatalogImpl, catalogs, $Stream*)},
	{"getCatalog", "(Ljavax/xml/catalog/CatalogImpl;Ljava/net/URI;)Ljavax/xml/catalog/Catalog;", nullptr, 0, $virtualMethod(CatalogImpl, getCatalog, $Catalog*, CatalogImpl*, $URI*)},
	{"getParent", "()Ljavax/xml/catalog/Catalog;", nullptr, $PUBLIC, $virtualMethod(CatalogImpl, getParent, $Catalog*)},
	{"getParser", "()Ljavax/xml/parsers/SAXParser;", nullptr, $PRIVATE, $method(CatalogImpl, getParser, $SAXParser*)},
	{"getResolve", "()Ljavax/xml/catalog/GroupEntry$ResolveType;", nullptr, $PUBLIC | $FINAL, $method(CatalogImpl, getResolve, $GroupEntry$ResolveType*)},
	{"init", "(Ljavax/xml/catalog/CatalogFeatures;)V", nullptr, $PRIVATE, $method(CatalogImpl, init, void, $CatalogFeatures*)},
	{"isDeferred", "()Z", nullptr, $PUBLIC, $virtualMethod(CatalogImpl, isDeferred, bool)},
	{"isEmpty", "()Z", nullptr, $PUBLIC, $virtualMethod(CatalogImpl, isEmpty, bool)},
	{"isTop", "()Z", nullptr, 0, $virtualMethod(CatalogImpl, isTop, bool)},
	{"lambda$loadNextCatalogs$2", "(Ljavax/xml/catalog/NextCatalog;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(CatalogImpl, lambda$loadNextCatalogs$2, void, $NextCatalog*)},
	{"lambda$loadNextCatalogs$3", "(Ljava/lang/String;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(CatalogImpl, lambda$loadNextCatalogs$3, void, $String*)},
	{"lambda$reset$0", "(Ljavax/xml/catalog/BaseEntry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CatalogImpl, lambda$reset$0, bool, $BaseEntry*)},
	{"lambda$reset$1", "(Ljavax/xml/catalog/BaseEntry;)V", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(CatalogImpl, lambda$reset$1, void, $BaseEntry*)},
	{"load", "()V", nullptr, 0, $virtualMethod(CatalogImpl, load, void)},
	{"loadNextCatalogs", "()V", nullptr, 0, $virtualMethod(CatalogImpl, loadNextCatalogs, void)},
	{"loadedCatalogCount", "()I", nullptr, 0, $virtualMethod(CatalogImpl, loadedCatalogCount, int32_t)},
	{"markAsSearched", "()V", nullptr, 0, $virtualMethod(CatalogImpl, markAsSearched, void)},
	{"*matchPublic", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*matchSystem", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*matchURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"parse", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(CatalogImpl, parse, void, $String*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(CatalogImpl, reset, void)},
	{"saveLoadedCatalog", "(Ljava/lang/String;Ljavax/xml/catalog/CatalogImpl;)V", nullptr, 0, $virtualMethod(CatalogImpl, saveLoadedCatalog, void, $String*, CatalogImpl*)},
	{"setDeferred", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(CatalogImpl, setDeferred, void, $String*)},
	{"setResolve", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(CatalogImpl, setResolve, void, $String*)},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _CatalogImpl_InnerClassesInfo_[] = {
	{"javax.xml.catalog.CatalogImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _CatalogImpl_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.catalog.CatalogImpl",
	"javax.xml.catalog.GroupEntry",
	"javax.xml.catalog.Catalog",
	_CatalogImpl_FieldInfo_,
	_CatalogImpl_MethodInfo_,
	nullptr,
	nullptr,
	_CatalogImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.catalog.CatalogImpl$1"
};

$Object* allocate$CatalogImpl($Class* clazz) {
	return $of($alloc(CatalogImpl));
}

$String* CatalogImpl::matchSystem($String* systemId) {
	 return this->$GroupEntry::matchSystem(systemId);
}

$String* CatalogImpl::matchPublic($String* publicId) {
	 return this->$GroupEntry::matchPublic(publicId);
}

$String* CatalogImpl::matchURI($String* uri) {
	 return this->$GroupEntry::matchURI(uri);
}

int32_t CatalogImpl::hashCode() {
	 return this->$GroupEntry::hashCode();
}

bool CatalogImpl::equals(Object$* arg0) {
	 return this->$GroupEntry::equals(arg0);
}

$Object* CatalogImpl::clone() {
	 return this->$GroupEntry::clone();
}

$String* CatalogImpl::toString() {
	 return this->$GroupEntry::toString();
}

void CatalogImpl::finalize() {
	this->$GroupEntry::finalize();
}

void CatalogImpl::init$($CatalogFeatures* f, $URIArray* uris) {
	CatalogImpl::init$(nullptr, f, uris);
}

void CatalogImpl::init$(CatalogImpl* parent, $CatalogFeatures* f, $URIArray* uris) {
	$useLocalCurrentObjectStackCache();
	$init($BaseEntry$CatalogEntryType);
	$GroupEntry::init$($BaseEntry$CatalogEntryType::CATALOG, parent);
	this->level = 0;
	this->isDeferred$ = true;
	$init($GroupEntry$ResolveType);
	$set(this, resolveType, $GroupEntry$ResolveType::STRICT);
	this->current = 0;
	if (f == nullptr) {
		$init($CatalogMessages);
		$throwNew($NullPointerException, $($CatalogMessages::formatMessage($CatalogMessages::ERR_NULL_ARGUMENT, $$new($ObjectArray, {$of("CatalogFeatures"_s)}))));
	}
	init(f);
	$var($StringArray, catalogFile, nullptr);
	if (this->level == 0 && $nc(uris)->length == 0) {
		$init($CatalogFeatures$Feature);
		$var($String, files, $nc(this->features)->get($CatalogFeatures$Feature::FILES));
		if (files != nullptr) {
			$assign(catalogFile, files->split(";"_s));
		}
	} else {
		$assign(catalogFile, $new($StringArray, uris->length));
		for (int32_t i = 0; i < uris->length; ++i) {
			catalogFile->set(i, $($nc(uris->get(i))->toASCIIString()));
		}
	}
	if (catalogFile != nullptr && catalogFile->length > 0) {
		int32_t start = 0;
		$var($URI, uri, nullptr);
		{
			$var($StringArray, arr$, catalogFile);
			int32_t len$ = arr$->length;
			int32_t i$ = 0;
			for (; i$ < len$; ++i$) {
				$var($String, temp, arr$->get(i$));
				{
					$assign(uri, $URI::create(temp));
					++start;
					if (verifyCatalogFile(nullptr, uri)) {
						$set(this, systemId, temp);
						try {
							$set(this, baseURI, $new($URL, this->systemId));
						} catch ($MalformedURLException& e) {
							$init($CatalogMessages);
							$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_INVALID_PATH, $$new($ObjectArray, {$of(temp)}), e);
						}
						break;
					}
				}
			}
		}
		if (this->level == 0 && catalogFile->length > start) {
			$set(this, inputFiles, $new($ArrayList));
			for (int32_t i = start; i < catalogFile->length; ++i) {
				if (catalogFile->get(i) != nullptr) {
					$nc(this->inputFiles)->add(catalogFile->get(i));
				}
			}
		}
	}
}

void CatalogImpl::load() {
	if (this->systemId != nullptr) {
		parse(this->systemId);
	}
	setCatalog(this);
	$nc(this->loadedCatalogs)->put(this->systemId, this);
	if (!isDeferred()) {
		loadDelegateCatalogs(this);
		loadNextCatalogs();
	}
}

void CatalogImpl::init($CatalogFeatures* f) {
	$useLocalCurrentObjectStackCache();
	if (this->parent == nullptr) {
		this->level = 0;
	} else {
		this->level = $nc(this->parent)->level + 1;
		$set(this, loadedCatalogs, $nc(this->parent)->loadedCatalogs);
		$set(this, catalogsSearched, $nc(this->parent)->catalogsSearched);
	}
	if (f == nullptr) {
		$set(this, features, $CatalogFeatures::defaults());
	} else {
		$set(this, features, f);
	}
	$init($CatalogFeatures$Feature);
	setPrefer($($nc(this->features)->get($CatalogFeatures$Feature::PREFER)));
	setDeferred($($nc(this->features)->get($CatalogFeatures$Feature::DEFER)));
	setResolve($($nc(this->features)->get($CatalogFeatures$Feature::RESOLVE)));
}

void CatalogImpl::reset() {
	$useLocalCurrentObjectStackCache();
	$GroupEntry::reset();
	this->current = 0;
	if (this->level == 0) {
		$nc(this->catalogsSearched)->clear();
	}
	$nc($($nc($($nc(this->entries)->stream()))->filter(static_cast<$Predicate*>($$new(CatalogImpl$$Lambda$lambda$reset$0)))))->forEach(static_cast<$Consumer*>($$new(CatalogImpl$$Lambda$lambda$reset$1$1)));
}

bool CatalogImpl::isTop() {
	return this->level == 0;
}

$Catalog* CatalogImpl::getParent() {
	return this->parent;
}

void CatalogImpl::setDeferred($String* value) {
	this->isDeferred$ = "true"_s->equals(value);
}

bool CatalogImpl::isDeferred() {
	return this->isDeferred$;
}

void CatalogImpl::setResolve($String* value) {
	$set(this, resolveType, $GroupEntry$ResolveType::getType(value));
}

$GroupEntry$ResolveType* CatalogImpl::getResolve() {
	return this->resolveType;
}

void CatalogImpl::markAsSearched() {
	$nc(this->catalogsSearched)->add(this->systemId);
}

void CatalogImpl::parse($String* systemId) {
	if (this->parser == nullptr) {
		$set(this, parser, getParser());
	}
	try {
		$var($CatalogReader, reader, $new($CatalogReader, this, this->parser));
		$nc(this->parser)->parse(systemId, static_cast<$DefaultHandler*>(reader));
	} catch ($SAXException& ex) {
		$init($CatalogMessages);
		$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_PARSING_FAILED, static_cast<$Throwable*>(ex));
	} catch ($IOException& ex) {
		$init($CatalogMessages);
		$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_PARSING_FAILED, static_cast<$Throwable*>(ex));
	}
}

$SAXParser* CatalogImpl::getParser() {
	$useLocalCurrentObjectStackCache();
	$var($SAXParser, p, nullptr);
	try {
		$var($SAXParserFactory, spf, $new($SAXParserFactoryImpl));
		spf->setNamespaceAware(true);
		spf->setValidating(false);
		spf->setFeature("http://apache.org/xml/features/nonvalidating/load-external-dtd"_s, false);
		$assign(p, spf->newSAXParser());
	} catch ($ParserConfigurationException& e) {
		$init($CatalogMessages);
		$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_PARSING_FAILED, static_cast<$Throwable*>(e));
	} catch ($SAXException& e) {
		$init($CatalogMessages);
		$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_PARSING_FAILED, static_cast<$Throwable*>(e));
	}
	return p;
}

bool CatalogImpl::isEmpty() {
	return this->isEmpty$;
}

$Stream* CatalogImpl::catalogs() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, iter, $new($CatalogImpl$1, this));
	return $StreamSupport::stream($($Spliterators::spliteratorUnknownSize(iter, $Spliterator::ORDERED | $Spliterator::NONNULL)), false);
}

void CatalogImpl::addNextCatalog($NextCatalog* catalog) {
	if (catalog == nullptr) {
		return;
	}
	if (this->nextCatalogs == nullptr) {
		$set(this, nextCatalogs, $new($ArrayList));
	}
	$nc(this->nextCatalogs)->add(catalog);
}

void CatalogImpl::loadNextCatalogs() {
	$useLocalCurrentObjectStackCache();
	if (this->nextCatalogs != nullptr) {
		$nc($($nc(this->nextCatalogs)->stream()))->forEach(static_cast<$Consumer*>($$new(CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2, this)));
	}
	if (this->inputFiles != nullptr) {
		$nc($($nc(this->inputFiles)->stream()))->forEach(static_cast<$Consumer*>($$new(CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3, this)));
	}
}

$Catalog* CatalogImpl::getCatalog(CatalogImpl* parent, $URI* uri) {
	$useLocalCurrentObjectStackCache();
	if (uri == nullptr) {
		return nullptr;
	}
	$var(CatalogImpl, c, nullptr);
	if (verifyCatalogFile(parent, uri)) {
		$assign(c, getLoadedCatalog($($nc(uri)->toASCIIString())));
		if (c == nullptr) {
			$assign(c, $new(CatalogImpl, this, this->features, $$new($URIArray, {uri})));
			c->load();
		}
	}
	return c;
}

void CatalogImpl::saveLoadedCatalog($String* catalogId, CatalogImpl* c) {
	$nc(this->loadedCatalogs)->put(catalogId, c);
}

int32_t CatalogImpl::loadedCatalogCount() {
	return $nc(this->loadedCatalogs)->size();
}

void CatalogImpl::lambda$loadNextCatalogs$3($String* uri) {
	getCatalog(nullptr, $($URI::create(uri)));
}

void CatalogImpl::lambda$loadNextCatalogs$2($NextCatalog* next) {
	getCatalog(this, $($nc(next)->getCatalogURI()));
}

void CatalogImpl::lambda$reset$1($BaseEntry* entry) {
	$init(CatalogImpl);
	$nc(($cast($GroupEntry, entry)))->reset();
}

bool CatalogImpl::lambda$reset$0($BaseEntry* entry) {
	$init(CatalogImpl);
	$init($BaseEntry$CatalogEntryType);
	return ($nc(entry)->type == $BaseEntry$CatalogEntryType::GROUP);
}

CatalogImpl::CatalogImpl() {
}

$Class* CatalogImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(CatalogImpl$$Lambda$lambda$reset$0::classInfo$.name)) {
			return CatalogImpl$$Lambda$lambda$reset$0::load$(name, initialize);
		}
		if (name->equals(CatalogImpl$$Lambda$lambda$reset$1$1::classInfo$.name)) {
			return CatalogImpl$$Lambda$lambda$reset$1$1::load$(name, initialize);
		}
		if (name->equals(CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2::classInfo$.name)) {
			return CatalogImpl$$Lambda$lambda$loadNextCatalogs$2$2::load$(name, initialize);
		}
		if (name->equals(CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3::classInfo$.name)) {
			return CatalogImpl$$Lambda$lambda$loadNextCatalogs$3$3::load$(name, initialize);
		}
	}
	$loadClass(CatalogImpl, name, initialize, &_CatalogImpl_ClassInfo_, allocate$CatalogImpl);
	return class$;
}

$Class* CatalogImpl::class$ = nullptr;

		} // catalog
	} // xml
} // javax
#include <javax/xml/catalog/GroupEntry.h>

#include <java/io/Serializable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/net/URI.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/function/Consumer.h>
#include <java/util/function/Function.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Stream.h>
#include <javax/xml/catalog/AltCatalog.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/Catalog.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/catalog/CatalogImpl.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/DelegatePublic.h>
#include <javax/xml/catalog/DelegateSystem.h>
#include <javax/xml/catalog/DelegateUri.h>
#include <javax/xml/catalog/GroupEntry$1.h>
#include <javax/xml/catalog/GroupEntry$PreferType.h>
#include <javax/xml/catalog/PublicEntry.h>
#include <javax/xml/catalog/RewriteSystem.h>
#include <javax/xml/catalog/RewriteUri.h>
#include <javax/xml/catalog/SystemEntry.h>
#include <javax/xml/catalog/SystemSuffix.h>
#include <javax/xml/catalog/UriEntry.h>
#include <javax/xml/catalog/UriSuffix.h>
#include <javax/xml/catalog/Util.h>
#include <jcpp.h>

#undef ATTRIBUTE_DEFFER
#undef ATTRIBUTE_PREFER
#undef ATTRIBUTE_RESOLUTION
#undef DELEGATEPUBLIC
#undef DELEGATESYSTEM
#undef DELEGATEURI
#undef ERR_CIRCULAR_REFERENCE
#undef GROUP
#undef PUBLIC

using $URIArray = $Array<::java::net::URI>;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $URI = ::java::net::URI;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Consumer = ::java::util::function::Consumer;
using $Function = ::java::util::function::Function;
using $Predicate = ::java::util::function::Predicate;
using $Stream = ::java::util::stream::Stream;
using $AltCatalog = ::javax::xml::catalog::AltCatalog;
using $BaseEntry = ::javax::xml::catalog::BaseEntry;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $Catalog = ::javax::xml::catalog::Catalog;
using $CatalogImpl = ::javax::xml::catalog::CatalogImpl;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $DelegatePublic = ::javax::xml::catalog::DelegatePublic;
using $DelegateSystem = ::javax::xml::catalog::DelegateSystem;
using $DelegateUri = ::javax::xml::catalog::DelegateUri;
using $GroupEntry$1 = ::javax::xml::catalog::GroupEntry$1;
using $GroupEntry$PreferType = ::javax::xml::catalog::GroupEntry$PreferType;
using $PublicEntry = ::javax::xml::catalog::PublicEntry;
using $RewriteSystem = ::javax::xml::catalog::RewriteSystem;
using $RewriteUri = ::javax::xml::catalog::RewriteUri;
using $SystemEntry = ::javax::xml::catalog::SystemEntry;
using $SystemSuffix = ::javax::xml::catalog::SystemSuffix;
using $UriEntry = ::javax::xml::catalog::UriEntry;
using $UriSuffix = ::javax::xml::catalog::UriSuffix;
using $Util = ::javax::xml::catalog::Util;

namespace javax {
	namespace xml {
		namespace catalog {

class GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0 : public $Predicate {
	$class(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0, $NO_CLASS_INIT, $Predicate)
public:
	void init$() {
	}
	virtual bool test(Object$* entry) override {
		 return GroupEntry::lambda$loadDelegateCatalogs$0($cast($BaseEntry, entry));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0, init$, void)},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC, $virtualMethod(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0, test, bool, Object$*)},
	{}
};
$ClassInfo GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.catalog.GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0",
	"java.lang.Object",
	"java.util.function.Predicate",
	nullptr,
	methodInfos
};
$Class* GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0::load$($String* name, bool initialize) {
	$loadClass(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0::class$ = nullptr;

class GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1 : public $Function {
	$class(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* entry) override {
		 return $of(GroupEntry::lambda$loadDelegateCatalogs$1($cast($BaseEntry, entry)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1, init$, void)},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, $virtualMethod(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1, apply, $Object*, Object$*)},
	{}
};
$ClassInfo GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.catalog.GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1::load$($String* name, bool initialize) {
	$loadClass(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1::class$ = nullptr;

class GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2 : public $Consumer {
	$class(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2, $NO_CLASS_INIT, $Consumer)
public:
	void init$(GroupEntry* inst, $CatalogImpl* parent) {
		$set(this, inst$, inst);
		$set(this, parent, parent);
	}
	virtual void accept(Object$* altCatalog) override {
		$nc(inst$)->lambda$loadDelegateCatalogs$2(parent, $cast($AltCatalog, altCatalog));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2>());
	}
	GroupEntry* inst$ = nullptr;
	$CatalogImpl* parent = nullptr;
	static $FieldInfo fieldInfos[3];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2::fieldInfos[3] = {
	{"inst$", "Ljava/lang/Object;", nullptr, $PUBLIC, $field(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2, inst$)},
	{"parent", "Ljavax/xml/catalog/CatalogImpl;", nullptr, $PUBLIC, $field(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2, parent)},
	{}
};
$MethodInfo GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2::methodInfos[3] = {
	{"<init>", "(Ljavax/xml/catalog/GroupEntry;Ljavax/xml/catalog/CatalogImpl;)V", nullptr, $PUBLIC, $method(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2, init$, void, GroupEntry*, $CatalogImpl*)},
	{"accept", "(Ljava/lang/Object;)V", nullptr, $PUBLIC, $virtualMethod(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2, accept, void, Object$*)},
	{}
};
$ClassInfo GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"javax.xml.catalog.GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2",
	"java.lang.Object",
	"java.util.function.Consumer",
	fieldInfos,
	methodInfos
};
$Class* GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2::load$($String* name, bool initialize) {
	$loadClass(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2::class$ = nullptr;

$FieldInfo _GroupEntry_FieldInfo_[] = {
	{"ATTRIBUTE_PREFER", "I", nullptr, $STATIC | $FINAL, $constField(GroupEntry, ATTRIBUTE_PREFER)},
	{"ATTRIBUTE_DEFFER", "I", nullptr, $STATIC | $FINAL, $constField(GroupEntry, ATTRIBUTE_DEFFER)},
	{"ATTRIBUTE_RESOLUTION", "I", nullptr, $STATIC | $FINAL, $constField(GroupEntry, ATTRIBUTE_RESOLUTION)},
	{"features", "Ljavax/xml/catalog/CatalogFeatures;", nullptr, 0, $field(GroupEntry, features)},
	{"isPreferPublic", "Z", nullptr, 0, $field(GroupEntry, isPreferPublic$)},
	{"parent", "Ljavax/xml/catalog/CatalogImpl;", nullptr, 0, $field(GroupEntry, parent)},
	{"catalog", "Ljavax/xml/catalog/CatalogImpl;", nullptr, 0, $field(GroupEntry, catalog)},
	{"entries", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/catalog/BaseEntry;>;", 0, $field(GroupEntry, entries)},
	{"delegateCatalogs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/xml/catalog/CatalogImpl;>;", 0, $field(GroupEntry, delegateCatalogs)},
	{"loadedCatalogs", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/xml/catalog/CatalogImpl;>;", 0, $field(GroupEntry, loadedCatalogs)},
	{"catalogsSearched", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", 0, $field(GroupEntry, catalogsSearched)},
	{"isInstantMatch", "Z", nullptr, 0, $field(GroupEntry, isInstantMatch)},
	{"rewriteMatch", "Ljava/lang/String;", nullptr, 0, $field(GroupEntry, rewriteMatch)},
	{"longestRewriteMatch", "I", nullptr, 0, $field(GroupEntry, longestRewriteMatch)},
	{"suffixMatch", "Ljava/lang/String;", nullptr, 0, $field(GroupEntry, suffixMatch)},
	{"longestSuffixMatch", "I", nullptr, 0, $field(GroupEntry, longestSuffixMatch)},
	{"systemEntrySearched", "Z", nullptr, 0, $field(GroupEntry, systemEntrySearched)},
	{}
};

$MethodInfo _GroupEntry_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/catalog/BaseEntry$CatalogEntryType;Ljavax/xml/catalog/CatalogImpl;)V", nullptr, $PUBLIC, $method(GroupEntry, init$, void, $BaseEntry$CatalogEntryType*, $CatalogImpl*)},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $method(GroupEntry, init$, void, $String*, $StringArray*)},
	{"<init>", "(Ljavax/xml/catalog/CatalogImpl;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, $PUBLIC | $TRANSIENT, $method(GroupEntry, init$, void, $CatalogImpl*, $String*, $StringArray*)},
	{"addEntry", "(Ljavax/xml/catalog/BaseEntry;)V", nullptr, $PUBLIC, $virtualMethod(GroupEntry, addEntry, void, $BaseEntry*)},
	{"getLoadedCatalog", "(Ljava/lang/String;)Ljavax/xml/catalog/CatalogImpl;", nullptr, 0, $virtualMethod(GroupEntry, getLoadedCatalog, $CatalogImpl*, $String*)},
	{"isCircular", "(Ljavax/xml/catalog/CatalogImpl;Ljava/lang/String;)Z", nullptr, 0, $virtualMethod(GroupEntry, isCircular, bool, $CatalogImpl*, $String*)},
	{"isPreferPublic", "()Z", nullptr, $PUBLIC, $virtualMethod(GroupEntry, isPreferPublic, bool)},
	{"lambda$loadDelegateCatalogs$0", "(Ljavax/xml/catalog/BaseEntry;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GroupEntry, lambda$loadDelegateCatalogs$0, bool, $BaseEntry*)},
	{"lambda$loadDelegateCatalogs$1", "(Ljavax/xml/catalog/BaseEntry;)Ljavax/xml/catalog/AltCatalog;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $staticMethod(GroupEntry, lambda$loadDelegateCatalogs$1, $AltCatalog*, $BaseEntry*)},
	{"lambda$loadDelegateCatalogs$2", "(Ljavax/xml/catalog/CatalogImpl;Ljavax/xml/catalog/AltCatalog;)V", nullptr, $PRIVATE | $SYNTHETIC, $method(GroupEntry, lambda$loadDelegateCatalogs$2, void, $CatalogImpl*, $AltCatalog*)},
	{"loadDelegateCatalog", "(Ljavax/xml/catalog/CatalogImpl;Ljava/net/URI;)Ljavax/xml/catalog/Catalog;", nullptr, 0, $virtualMethod(GroupEntry, loadDelegateCatalog, $Catalog*, $CatalogImpl*, $URI*)},
	{"loadDelegateCatalogs", "(Ljavax/xml/catalog/CatalogImpl;)V", nullptr, 0, $virtualMethod(GroupEntry, loadDelegateCatalogs, void, $CatalogImpl*)},
	{"matchDelegate", "(Ljavax/xml/catalog/BaseEntry$CatalogEntryType;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(GroupEntry, matchDelegate, $String*, $BaseEntry$CatalogEntryType*, $String*)},
	{"matchPublic", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GroupEntry, matchPublic, $String*, $String*)},
	{"matchSystem", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GroupEntry, matchSystem, $String*, $String*)},
	{"matchURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC, $virtualMethod(GroupEntry, matchURI, $String*, $String*)},
	{"reset", "()V", nullptr, $PUBLIC, $virtualMethod(GroupEntry, reset, void)},
	{"setCatalog", "(Ljavax/xml/catalog/CatalogImpl;)V", nullptr, 0, $virtualMethod(GroupEntry, setCatalog, void, $CatalogImpl*)},
	{"setPrefer", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $method(GroupEntry, setPrefer, void, $String*)},
	{"verifyCatalogFile", "(Ljavax/xml/catalog/CatalogImpl;Ljava/net/URI;)Z", nullptr, $FINAL, $method(GroupEntry, verifyCatalogFile, bool, $CatalogImpl*, $URI*)},
	{}
};

$InnerClassInfo _GroupEntry_InnerClassesInfo_[] = {
	{"javax.xml.catalog.GroupEntry$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.xml.catalog.GroupEntry$ResolveType", "javax.xml.catalog.GroupEntry", "ResolveType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{"javax.xml.catalog.GroupEntry$PreferType", "javax.xml.catalog.GroupEntry", "PreferType", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _GroupEntry_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.catalog.GroupEntry",
	"javax.xml.catalog.BaseEntry",
	nullptr,
	_GroupEntry_FieldInfo_,
	_GroupEntry_MethodInfo_,
	nullptr,
	nullptr,
	_GroupEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.catalog.GroupEntry$1,javax.xml.catalog.GroupEntry$ResolveType,javax.xml.catalog.GroupEntry$PreferType"
};

$Object* allocate$GroupEntry($Class* clazz) {
	return $of($alloc(GroupEntry));
}

void GroupEntry::init$($BaseEntry$CatalogEntryType* type, $CatalogImpl* parent) {
	$BaseEntry::init$(type);
	this->isPreferPublic$ = true;
	$set(this, parent, nullptr);
	$set(this, entries, $new($ArrayList));
	$set(this, delegateCatalogs, $new($HashMap));
	$set(this, loadedCatalogs, $new($HashMap));
	$set(this, catalogsSearched, $new($ArrayList));
	this->isInstantMatch = false;
	$set(this, rewriteMatch, nullptr);
	this->longestRewriteMatch = 0;
	$set(this, suffixMatch, nullptr);
	this->longestSuffixMatch = 0;
	this->systemEntrySearched = false;
	$set(this, parent, parent);
}

void GroupEntry::init$($String* base, $StringArray* attributes) {
	GroupEntry::init$(nullptr, base, attributes);
}

void GroupEntry::reset() {
	this->isInstantMatch = false;
	$set(this, rewriteMatch, nullptr);
	this->longestRewriteMatch = 0;
	$set(this, suffixMatch, nullptr);
	this->longestSuffixMatch = 0;
	this->systemEntrySearched = false;
}

void GroupEntry::init$($CatalogImpl* catalog, $String* base, $StringArray* attributes) {
	$init($BaseEntry$CatalogEntryType);
	$BaseEntry::init$($BaseEntry$CatalogEntryType::GROUP, base);
	this->isPreferPublic$ = true;
	$set(this, parent, nullptr);
	$set(this, entries, $new($ArrayList));
	$set(this, delegateCatalogs, $new($HashMap));
	$set(this, loadedCatalogs, $new($HashMap));
	$set(this, catalogsSearched, $new($ArrayList));
	this->isInstantMatch = false;
	$set(this, rewriteMatch, nullptr);
	this->longestRewriteMatch = 0;
	$set(this, suffixMatch, nullptr);
	this->longestSuffixMatch = 0;
	this->systemEntrySearched = false;
	setPrefer($nc(attributes)->get(GroupEntry::ATTRIBUTE_PREFER));
	$set(this, catalog, catalog);
}

void GroupEntry::setCatalog($CatalogImpl* catalog) {
	$set(this, catalog, catalog);
}

void GroupEntry::addEntry($BaseEntry* entry) {
	$nc(this->entries)->add(entry);
}

void GroupEntry::setPrefer($String* value) {
	$init($GroupEntry$PreferType);
	this->isPreferPublic$ = $GroupEntry$PreferType::PUBLIC->prefer(value);
}

bool GroupEntry::isPreferPublic() {
	return this->isPreferPublic$;
}

$String* GroupEntry::matchSystem($String* systemId) {
	$useLocalCurrentObjectStackCache();
	this->systemEntrySearched = true;
	$var($String, match, nullptr);
	{
		$var($Iterator, i$, $nc(this->entries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($BaseEntry, entry, $cast($BaseEntry, i$->next()));
			{
				$init($GroupEntry$1);
				{
					$var(GroupEntry, grpEntry, nullptr)
					switch ($nc($GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->get($nc(($nc(entry)->type))->ordinal())) {
					case 1:
						{
							$assign(match, $nc(($cast($SystemEntry, entry)))->match(systemId));
							if (match != nullptr) {
								this->isInstantMatch = true;
								return match;
							}
							break;
						}
					case 2:
						{
							$assign(match, $nc(($cast($RewriteSystem, entry)))->match(systemId, this->longestRewriteMatch));
							if (match != nullptr) {
								$set(this, rewriteMatch, match);
								this->longestRewriteMatch = $nc($($nc(($cast($RewriteSystem, entry)))->getSystemIdStartString()))->length();
							}
							break;
						}
					case 3:
						{
							$assign(match, $nc(($cast($SystemSuffix, entry)))->match(systemId, this->longestSuffixMatch));
							if (match != nullptr) {
								$set(this, suffixMatch, match);
								this->longestSuffixMatch = $nc($($nc(($cast($SystemSuffix, entry)))->getSystemIdSuffix()))->length();
							}
							break;
						}
					case 4:
						{
							$assign(grpEntry, $cast(GroupEntry, entry));
							$assign(match, $nc(grpEntry)->matchSystem(systemId));
							if ($nc(grpEntry)->isInstantMatch) {
								return match;
							} else if (grpEntry->longestRewriteMatch > this->longestRewriteMatch) {
								this->longestRewriteMatch = grpEntry->longestRewriteMatch;
								$set(this, rewriteMatch, match);
							} else if (grpEntry->longestSuffixMatch > this->longestSuffixMatch) {
								this->longestSuffixMatch = grpEntry->longestSuffixMatch;
								$set(this, suffixMatch, match);
							}
							break;
						}
					}
				}
			}
		}
	}
	if (this->longestRewriteMatch > 0) {
		return this->rewriteMatch;
	} else if (this->longestSuffixMatch > 0) {
		return this->suffixMatch;
	}
	$init($BaseEntry$CatalogEntryType);
	return matchDelegate($BaseEntry$CatalogEntryType::DELEGATESYSTEM, systemId);
}

$String* GroupEntry::matchPublic($String* publicId) {
	$useLocalCurrentObjectStackCache();
	if (!this->isPreferPublic$ && this->systemEntrySearched) {
		return nullptr;
	}
	$var($String, match, nullptr);
	{
		$var($Iterator, i$, $nc(this->entries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($BaseEntry, entry, $cast($BaseEntry, i$->next()));
			{
				$init($GroupEntry$1);
				switch ($nc($GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->get($nc(($nc(entry)->type))->ordinal())) {
				case 5:
					{
						$assign(match, $nc(($cast($PublicEntry, entry)))->match(publicId));
						break;
					}
				case 6:
					{
						$assign(match, $nc(($cast($UriEntry, entry)))->match(publicId));
						break;
					}
				case 4:
					{
						$assign(match, $nc(($cast(GroupEntry, entry)))->matchPublic(publicId));
						break;
					}
				}
				if (match != nullptr) {
					return match;
				}
			}
		}
	}
	$init($BaseEntry$CatalogEntryType);
	return matchDelegate($BaseEntry$CatalogEntryType::DELEGATEPUBLIC, publicId);
}

$String* GroupEntry::matchURI($String* uri) {
	$useLocalCurrentObjectStackCache();
	$var($String, match, nullptr);
	{
		$var($Iterator, i$, $nc(this->entries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($BaseEntry, entry, $cast($BaseEntry, i$->next()));
			{
				$init($GroupEntry$1);
				{
					$var(GroupEntry, grpEntry, nullptr)
					switch ($nc($GroupEntry$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->get($nc(($nc(entry)->type))->ordinal())) {
					case 6:
						{
							$assign(match, $nc(($cast($UriEntry, entry)))->match(uri));
							if (match != nullptr) {
								this->isInstantMatch = true;
								return match;
							}
							break;
						}
					case 7:
						{
							$assign(match, $nc(($cast($RewriteUri, entry)))->match(uri, this->longestRewriteMatch));
							if (match != nullptr) {
								$set(this, rewriteMatch, match);
								this->longestRewriteMatch = $nc($($nc(($cast($RewriteUri, entry)))->getURIStartString()))->length();
							}
							break;
						}
					case 8:
						{
							$assign(match, $nc(($cast($UriSuffix, entry)))->match(uri, this->longestSuffixMatch));
							if (match != nullptr) {
								$set(this, suffixMatch, match);
								this->longestSuffixMatch = $nc($($nc(($cast($UriSuffix, entry)))->getURISuffix()))->length();
							}
							break;
						}
					case 4:
						{
							$assign(grpEntry, $cast(GroupEntry, entry));
							$assign(match, $nc(grpEntry)->matchURI(uri));
							if ($nc(grpEntry)->isInstantMatch) {
								return match;
							} else if (grpEntry->longestRewriteMatch > this->longestRewriteMatch) {
								$set(this, rewriteMatch, match);
								this->longestRewriteMatch = grpEntry->longestRewriteMatch;
							} else if (grpEntry->longestSuffixMatch > this->longestSuffixMatch) {
								$set(this, suffixMatch, match);
								this->longestSuffixMatch = grpEntry->longestSuffixMatch;
							}
							break;
						}
					}
				}
			}
		}
	}
	if (this->longestRewriteMatch > 0) {
		return this->rewriteMatch;
	} else if (this->longestSuffixMatch > 0) {
		return this->suffixMatch;
	}
	$init($BaseEntry$CatalogEntryType);
	return matchDelegate($BaseEntry$CatalogEntryType::DELEGATEURI, uri);
}

$String* GroupEntry::matchDelegate($BaseEntry$CatalogEntryType* type, $String* id) {
	$useLocalCurrentObjectStackCache();
	$var($String, match, nullptr);
	int32_t longestMatch = 0;
	$var($URI, catalogId, nullptr);
	$var($URI, temp, nullptr);
	{
		$var($Iterator, i$, $nc(this->entries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($BaseEntry, entry, $cast($BaseEntry, i$->next()));
			{
				if ($nc(entry)->type == type) {
					$init($BaseEntry$CatalogEntryType);
					if (type == $BaseEntry$CatalogEntryType::DELEGATESYSTEM) {
						$assign(temp, $nc(($cast($DelegateSystem, entry)))->matchURI(id, longestMatch));
					} else {
						if (type == $BaseEntry$CatalogEntryType::DELEGATEPUBLIC) {
							$assign(temp, $nc(($cast($DelegatePublic, entry)))->matchURI(id, longestMatch));
						} else {
							$assign(temp, $nc(($cast($DelegateUri, entry)))->matchURI(id, longestMatch));
						}
					}
					if (temp != nullptr) {
						longestMatch = $nc($(entry->getMatchId()))->length();
						$assign(catalogId, temp);
					}
				}
			}
		}
	}
	if (catalogId != nullptr) {
		$var($Catalog, delegateCatalog, loadDelegateCatalog(this->catalog, catalogId));
		if (delegateCatalog != nullptr) {
			$init($BaseEntry$CatalogEntryType);
			if (type == $BaseEntry$CatalogEntryType::DELEGATESYSTEM) {
				$assign(match, delegateCatalog->matchSystem(id));
			} else {
				if (type == $BaseEntry$CatalogEntryType::DELEGATEPUBLIC) {
					$assign(match, delegateCatalog->matchPublic(id));
				} else {
					$assign(match, delegateCatalog->matchURI(id));
				}
			}
		}
	}
	return match;
}

void GroupEntry::loadDelegateCatalogs($CatalogImpl* parent) {
	$useLocalCurrentObjectStackCache();
	$nc($($nc($($nc($($nc(this->entries)->stream()))->filter(static_cast<$Predicate*>($$new(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0)))))->map(static_cast<$Function*>($$new(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1)))))->forEach(static_cast<$Consumer*>($$new(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2, this, parent)));
}

$Catalog* GroupEntry::loadDelegateCatalog($CatalogImpl* parent, $URI* catalogURI) {
	$useLocalCurrentObjectStackCache();
	$var($CatalogImpl, delegateCatalog, nullptr);
	if (catalogURI != nullptr) {
		$var($String, catalogId, catalogURI->toASCIIString());
		if (verifyCatalogFile(parent, catalogURI)) {
			$assign(delegateCatalog, getLoadedCatalog(catalogId));
			if (delegateCatalog == nullptr) {
				$assign(delegateCatalog, $new($CatalogImpl, parent, this->features, $$new($URIArray, {catalogURI})));
				delegateCatalog->load();
				$nc(this->delegateCatalogs)->put(catalogId, delegateCatalog);
			}
		}
	}
	return delegateCatalog;
}

$CatalogImpl* GroupEntry::getLoadedCatalog($String* catalogId) {
	$var($CatalogImpl, c, nullptr);
	$assign(c, $cast($CatalogImpl, $nc(this->delegateCatalogs)->get(catalogId)));
	if (c == nullptr) {
		$assign(c, $cast($CatalogImpl, $nc(this->loadedCatalogs)->get(catalogId)));
	}
	return c;
}

bool GroupEntry::verifyCatalogFile($CatalogImpl* parent, $URI* catalogURI) {
	$useLocalCurrentObjectStackCache();
	if (catalogURI == nullptr) {
		return false;
	}
	bool var$0 = $Util::isFileUri(catalogURI);
	if (var$0 && !$Util::isFileUriExist(catalogURI, false)) {
		return false;
	}
	$var($String, catalogId, $nc(catalogURI)->toASCIIString());
	bool var$1 = $nc(this->catalogsSearched)->contains(catalogId);
	if (var$1 || isCircular(parent, catalogId)) {
		$init($CatalogMessages);
		$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_CIRCULAR_REFERENCE, $$new($ObjectArray, {$($of($CatalogMessages::sanitize(catalogId)))}));
	}
	return true;
}

bool GroupEntry::isCircular($CatalogImpl* parent, $String* systemId) {
	if (parent == nullptr) {
		return false;
	}
	if ($nc($nc(parent)->systemId)->equals(systemId)) {
		return true;
	}
	return $nc(parent)->isCircular(parent->parent, systemId);
}

void GroupEntry::lambda$loadDelegateCatalogs$2($CatalogImpl* parent, $AltCatalog* altCatalog) {
	loadDelegateCatalog(parent, $($nc(altCatalog)->getCatalogURI()));
}

$AltCatalog* GroupEntry::lambda$loadDelegateCatalogs$1($BaseEntry* entry) {
	$init(GroupEntry);
	return $cast($AltCatalog, entry);
}

bool GroupEntry::lambda$loadDelegateCatalogs$0($BaseEntry* entry) {
	$init(GroupEntry);
	$init($BaseEntry$CatalogEntryType);
	return ($nc(entry)->type == $BaseEntry$CatalogEntryType::DELEGATESYSTEM || $nc(entry)->type == $BaseEntry$CatalogEntryType::DELEGATEPUBLIC || $nc(entry)->type == $BaseEntry$CatalogEntryType::DELEGATEURI);
}

GroupEntry::GroupEntry() {
}

$Class* GroupEntry::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0::classInfo$.name)) {
			return GroupEntry$$Lambda$lambda$loadDelegateCatalogs$0::load$(name, initialize);
		}
		if (name->equals(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1::classInfo$.name)) {
			return GroupEntry$$Lambda$lambda$loadDelegateCatalogs$1$1::load$(name, initialize);
		}
		if (name->equals(GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2::classInfo$.name)) {
			return GroupEntry$$Lambda$lambda$loadDelegateCatalogs$2$2::load$(name, initialize);
		}
	}
	$loadClass(GroupEntry, name, initialize, &_GroupEntry_ClassInfo_, allocate$GroupEntry);
	return class$;
}

$Class* GroupEntry::class$ = nullptr;

		} // catalog
	} // xml
} // javax
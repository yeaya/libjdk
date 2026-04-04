#include <javax/xml/catalog/CatalogReader.h>
#include <java/io/StringReader.h>
#include <java/net/URL.h>
#include <javax/xml/catalog/BaseEntry$CatalogEntryType.h>
#include <javax/xml/catalog/BaseEntry.h>
#include <javax/xml/catalog/Catalog.h>
#include <javax/xml/catalog/CatalogEntry.h>
#include <javax/xml/catalog/CatalogFeatures.h>
#include <javax/xml/catalog/CatalogImpl.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/CatalogReader$1.h>
#include <javax/xml/catalog/DelegatePublic.h>
#include <javax/xml/catalog/DelegateSystem.h>
#include <javax/xml/catalog/DelegateUri.h>
#include <javax/xml/catalog/GroupEntry$ResolveType.h>
#include <javax/xml/catalog/GroupEntry.h>
#include <javax/xml/catalog/NextCatalog.h>
#include <javax/xml/catalog/Normalizer.h>
#include <javax/xml/catalog/PublicEntry.h>
#include <javax/xml/catalog/RewriteSystem.h>
#include <javax/xml/catalog/RewriteUri.h>
#include <javax/xml/catalog/SystemEntry.h>
#include <javax/xml/catalog/SystemSuffix.h>
#include <javax/xml/catalog/UriEntry.h>
#include <javax/xml/catalog/UriSuffix.h>
#include <javax/xml/parsers/SAXParser.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/helpers/DefaultHandler.h>
#include <jcpp.h>

#undef CATALOGENTRY
#undef DEFER_FALSE
#undef DEFER_TRUE
#undef ERR_INVALID_CATALOG
#undef ERR_INVALID_ENTRY_TYPE
#undef GROUP
#undef NAMESPACE_OASIS
#undef NEXTCATALOG
#undef PREFER_PUBLIC
#undef PREFER_SYSTEM

using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BaseEntry$CatalogEntryType = ::javax::xml::catalog::BaseEntry$CatalogEntryType;
using $Catalog = ::javax::xml::catalog::Catalog;
using $CatalogEntry = ::javax::xml::catalog::CatalogEntry;
using $CatalogFeatures = ::javax::xml::catalog::CatalogFeatures;
using $CatalogImpl = ::javax::xml::catalog::CatalogImpl;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $CatalogReader$1 = ::javax::xml::catalog::CatalogReader$1;
using $DelegatePublic = ::javax::xml::catalog::DelegatePublic;
using $DelegateSystem = ::javax::xml::catalog::DelegateSystem;
using $DelegateUri = ::javax::xml::catalog::DelegateUri;
using $GroupEntry = ::javax::xml::catalog::GroupEntry;
using $NextCatalog = ::javax::xml::catalog::NextCatalog;
using $Normalizer = ::javax::xml::catalog::Normalizer;
using $PublicEntry = ::javax::xml::catalog::PublicEntry;
using $RewriteSystem = ::javax::xml::catalog::RewriteSystem;
using $RewriteUri = ::javax::xml::catalog::RewriteUri;
using $SystemEntry = ::javax::xml::catalog::SystemEntry;
using $SystemSuffix = ::javax::xml::catalog::SystemSuffix;
using $UriEntry = ::javax::xml::catalog::UriEntry;
using $UriSuffix = ::javax::xml::catalog::UriSuffix;
using $SAXParser = ::javax::xml::parsers::SAXParser;
using $Source = ::javax::xml::transform::Source;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $Attributes = ::org::xml::sax::Attributes;
using $InputSource = ::org::xml::sax::InputSource;
using $DefaultHandler = ::org::xml::sax::helpers::DefaultHandler;

namespace javax {
	namespace xml {
		namespace catalog {

int32_t CatalogReader::hashCode() {
	 return this->$DefaultHandler::hashCode();
}

bool CatalogReader::equals(Object$* arg0) {
	 return this->$DefaultHandler::equals(arg0);
}

$Object* CatalogReader::clone() {
	 return this->$DefaultHandler::clone();
}

$String* CatalogReader::toString() {
	 return this->$DefaultHandler::toString();
}

void CatalogReader::finalize() {
	this->$DefaultHandler::finalize();
}

$String* CatalogReader::xmlCatalogXSD = nullptr;
$String* CatalogReader::xmlCatalogPubId = nullptr;
$String* CatalogReader::NAMESPACE_OASIS = nullptr;

void CatalogReader::init$($Catalog* catalog, $SAXParser* parser) {
	$DefaultHandler::init$();
	this->ignoreTheCatalog = false;
	$set(this, catalog, $cast($CatalogImpl, catalog));
	$set(this, parser, parser);
}

void CatalogReader::startElement($String* namespaceURI, $String* localName, $String* qName, $Attributes* atts) {
	$useLocalObjectStack();
	if (this->ignoreTheCatalog) {
		return;
	}
	if (!CatalogReader::NAMESPACE_OASIS->equals(namespaceURI)) {
		this->ignoreTheCatalog = true;
		return;
	}
	$BaseEntry$CatalogEntryType* type = $BaseEntry$CatalogEntryType::getType(localName);
	if (type == nullptr) {
		$init($CatalogMessages);
		$CatalogMessages::reportError($CatalogMessages::ERR_INVALID_ENTRY_TYPE, $$new($ObjectArray, {localName}));
	}
	if (type != $BaseEntry$CatalogEntryType::CATALOGENTRY) {
		if (!this->seenRoot) {
			$init($CatalogMessages);
			$CatalogMessages::reportError($CatalogMessages::ERR_INVALID_CATALOG);
		}
	}
	$var($String, base, $nc(atts)->getValue("xml:base"_s));
	if (base == nullptr) {
		if (this->inGroup) {
			$assign(base, $$nc($nc(this->group)->getBaseURI())->toString());
		} else if (type == $BaseEntry$CatalogEntryType::CATALOGENTRY) {
			$assign(base, $$nc($nc(this->catalog)->getBaseURI())->toString());
		} else {
			$assign(base, $$nc($nc(this->catalogEntry)->getBaseURI())->toString());
		}
	} else {
		$assign(base, $Normalizer::normalizeURI(base));
	}
	if (type == $BaseEntry$CatalogEntryType::CATALOGENTRY || type == $BaseEntry$CatalogEntryType::GROUP) {
		$var($String, prefer, atts->getValue("prefer"_s));
		if (prefer == nullptr) {
			if (type == $BaseEntry$CatalogEntryType::CATALOGENTRY) {
				$init($CatalogFeatures);
				$assign(prefer, $nc(this->catalog)->isPreferPublic() ? $CatalogFeatures::PREFER_PUBLIC : $CatalogFeatures::PREFER_SYSTEM);
			} else {
				$init($CatalogFeatures);
				$assign(prefer, $nc(this->catalogEntry)->isPreferPublic() ? $CatalogFeatures::PREFER_PUBLIC : $CatalogFeatures::PREFER_SYSTEM);
			}
		}
		if (type == $BaseEntry$CatalogEntryType::CATALOGENTRY) {
			this->seenRoot = true;
			if ($nc(this->catalog)->isTop()) {
				$var($String, defer, atts->getValue("defer"_s));
				$var($String, resolve, atts->getValue("resolve"_s));
				if (defer == nullptr) {
					$init($CatalogFeatures);
					$assign(defer, $nc(this->catalog)->isDeferred() ? $CatalogFeatures::DEFER_TRUE : $CatalogFeatures::DEFER_FALSE);
				}
				if (resolve == nullptr) {
					$assign(resolve, $nc($($nc(this->catalog)->getResolve()))->literal);
				}
				$nc(this->catalog)->setResolve(resolve);
				$nc(this->catalog)->setDeferred(defer);
				$set(this, catalogEntry, $new($CatalogEntry, base, $$new($StringArray, {
					prefer,
					defer,
					resolve
				})));
			} else {
				$set(this, catalogEntry, $new($CatalogEntry, base, $$new($StringArray, {prefer})));
			}
			$nc(this->catalog)->setPrefer(prefer);
			return;
		} else {
			this->inGroup = true;
			$set(this, group, $new($GroupEntry, this->catalog, base, $$new($StringArray, {prefer})));
			$nc(this->catalog)->addEntry(this->group);
			return;
		}
	}
	$init($CatalogReader$1);
	switch ($nc($CatalogReader$1::$SwitchMap$javax$xml$catalog$BaseEntry$CatalogEntryType)->get($nc((type))->ordinal())) {
	case 1:
		{
			$var($String, var$0, atts->getValue("publicId"_s));
			$set(this, entry, $new($PublicEntry, base, var$0, $(atts->getValue("uri"_s))));
			break;
		}
	case 2:
		{
			$var($String, var$1, atts->getValue("systemId"_s));
			$set(this, entry, $new($SystemEntry, base, var$1, $(atts->getValue("uri"_s))));
			break;
		}
	case 3:
		{
			$var($String, var$2, atts->getValue("systemIdStartString"_s));
			$set(this, entry, $new($RewriteSystem, base, var$2, $(atts->getValue("rewritePrefix"_s))));
			break;
		}
	case 4:
		{
			$var($String, var$3, atts->getValue("systemIdSuffix"_s));
			$set(this, entry, $new($SystemSuffix, base, var$3, $(atts->getValue("uri"_s))));
			break;
		}
	case 5:
		{
			$var($String, var$4, atts->getValue("publicIdStartString"_s));
			$set(this, entry, $new($DelegatePublic, base, var$4, $(atts->getValue("catalog"_s))));
			break;
		}
	case 6:
		{
			$var($String, var$5, atts->getValue("systemIdStartString"_s));
			$set(this, entry, $new($DelegateSystem, base, var$5, $(atts->getValue("catalog"_s))));
			break;
		}
	case 7:
		{
			$var($String, var$6, atts->getValue("name"_s));
			$set(this, entry, $new($UriEntry, base, var$6, $(atts->getValue("uri"_s))));
			break;
		}
	case 8:
		{
			$var($String, var$7, atts->getValue("uriStartString"_s));
			$set(this, entry, $new($RewriteUri, base, var$7, $(atts->getValue("rewritePrefix"_s))));
			break;
		}
	case 9:
		{
			$var($String, var$8, atts->getValue("uriSuffix"_s));
			$set(this, entry, $new($UriSuffix, base, var$8, $(atts->getValue("uri"_s))));
			break;
		}
	case 10:
		{
			$var($String, var$9, atts->getValue("uriStartString"_s));
			$set(this, entry, $new($DelegateUri, base, var$9, $(atts->getValue("catalog"_s))));
			break;
		}
	case 11:
		$set(this, entry, $new($NextCatalog, base, $(atts->getValue("catalog"_s))));
		break;
	}
	if (type == $BaseEntry$CatalogEntryType::NEXTCATALOG) {
		$nc(this->catalog)->addNextCatalog($cast($NextCatalog, this->entry));
	} else if (this->inGroup) {
		$nc(this->group)->addEntry(this->entry);
	} else {
		$nc(this->catalog)->addEntry(this->entry);
	}
}

void CatalogReader::endElement($String* namespaceURI, $String* localName, $String* qName) {
	if (this->ignoreTheCatalog) {
		return;
	}
	$BaseEntry$CatalogEntryType* type = $BaseEntry$CatalogEntryType::getType(localName);
	if (type == $BaseEntry$CatalogEntryType::GROUP) {
		this->inGroup = false;
	}
}

$InputSource* CatalogReader::resolveEntity($String* publicId, $String* systemId) {
	return $new($InputSource, $$new($StringReader, ""_s));
}

$Source* CatalogReader::resolve($String* href, $String* base) {
	$useLocalObjectStack();
	return $new($SAXSource, $$new($InputSource, $$new($StringReader, ""_s)));
}

CatalogReader::CatalogReader() {
}

void CatalogReader::clinit$($Class* clazz) {
	$assignStatic(CatalogReader::xmlCatalogXSD, "http://www.oasis-open.org/committees/entity/release/1.0/catalog.xsd"_s);
	$assignStatic(CatalogReader::xmlCatalogPubId, "-//OASIS//DTD XML Catalogs V1.0//EN"_s);
	$assignStatic(CatalogReader::NAMESPACE_OASIS, "urn:oasis:names:tc:entity:xmlns:xml:catalog"_s);
}

$Class* CatalogReader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"xmlCatalogXSD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogReader, xmlCatalogXSD)},
		{"xmlCatalogPubId", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogReader, xmlCatalogPubId)},
		{"NAMESPACE_OASIS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CatalogReader, NAMESPACE_OASIS)},
		{"seenRoot", "Z", nullptr, 0, $field(CatalogReader, seenRoot)},
		{"inGroup", "Z", nullptr, 0, $field(CatalogReader, inGroup)},
		{"catalog", "Ljavax/xml/catalog/CatalogImpl;", nullptr, 0, $field(CatalogReader, catalog)},
		{"parser", "Ljavax/xml/parsers/SAXParser;", nullptr, 0, $field(CatalogReader, parser)},
		{"catalogEntry", "Ljavax/xml/catalog/CatalogEntry;", nullptr, 0, $field(CatalogReader, catalogEntry)},
		{"group", "Ljavax/xml/catalog/GroupEntry;", nullptr, 0, $field(CatalogReader, group)},
		{"entry", "Ljavax/xml/catalog/BaseEntry;", nullptr, 0, $field(CatalogReader, entry)},
		{"ignoreTheCatalog", "Z", nullptr, 0, $field(CatalogReader, ignoreTheCatalog)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
		{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
		{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
		{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
		{"<init>", "(Ljavax/xml/catalog/Catalog;Ljavax/xml/parsers/SAXParser;)V", nullptr, $PUBLIC, $method(CatalogReader, init$, void, $Catalog*, $SAXParser*)},
		{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(CatalogReader, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
		{"resolve", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;", nullptr, $PUBLIC, $virtualMethod(CatalogReader, resolve, $Source*, $String*, $String*), "javax.xml.transform.TransformerException"},
		{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(CatalogReader, resolveEntity, $InputSource*, $String*, $String*)},
		{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(CatalogReader, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
		{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.xml.catalog.CatalogReader$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.xml.catalog.CatalogReader",
		"org.xml.sax.helpers.DefaultHandler",
		"javax.xml.transform.URIResolver",
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.xml.catalog.CatalogReader$1"
	};
	$loadClass(CatalogReader, name, initialize, &classInfo$$, CatalogReader::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(CatalogReader));
	});
	return class$;
}

$Class* CatalogReader::class$ = nullptr;

		} // catalog
	} // xml
} // javax
#include <javax/xml/catalog/CatalogResolverImpl.h>

#include <com/sun/org/apache/xerces/internal/jaxp/SAXParserFactoryImpl.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/StringReader.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URL.h>
#include <javax/xml/catalog/Catalog.h>
#include <javax/xml/catalog/CatalogImpl.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <javax/xml/catalog/CatalogResolver.h>
#include <javax/xml/catalog/CatalogResolverImpl$1.h>
#include <javax/xml/catalog/CatalogResolverImpl$LSInputImpl.h>
#include <javax/xml/catalog/GroupEntry$ResolveType.h>
#include <javax/xml/catalog/Normalizer.h>
#include <javax/xml/catalog/Util.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <javax/xml/parsers/SAXParser.h>
#include <javax/xml/parsers/SAXParserFactory.h>
#include <javax/xml/transform/Source.h>
#include <javax/xml/transform/sax/SAXSource.h>
#include <org/w3c/dom/ls/LSInput.h>
#include <org/xml/sax/EntityResolver.h>
#include <org/xml/sax/InputSource.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/XMLReader.h>
#include <jcpp.h>

#undef ERR_CREATING_URI
#undef ERR_NO_MATCH
#undef ERR_NO_URI_MATCH
#undef ERR_PARSER_CONF
#undef URN

using $SAXParserFactoryImpl = ::com::sun::org::apache::xerces::internal::jaxp::SAXParserFactoryImpl;
using $IOException = ::java::io::IOException;
using $Reader = ::java::io::Reader;
using $StringReader = ::java::io::StringReader;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URL = ::java::net::URL;
using $Catalog = ::javax::xml::catalog::Catalog;
using $CatalogImpl = ::javax::xml::catalog::CatalogImpl;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $CatalogResolver = ::javax::xml::catalog::CatalogResolver;
using $CatalogResolverImpl$1 = ::javax::xml::catalog::CatalogResolverImpl$1;
using $CatalogResolverImpl$LSInputImpl = ::javax::xml::catalog::CatalogResolverImpl$LSInputImpl;
using $GroupEntry$ResolveType = ::javax::xml::catalog::GroupEntry$ResolveType;
using $Normalizer = ::javax::xml::catalog::Normalizer;
using $Util = ::javax::xml::catalog::Util;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $SAXParser = ::javax::xml::parsers::SAXParser;
using $SAXParserFactory = ::javax::xml::parsers::SAXParserFactory;
using $Source = ::javax::xml::transform::Source;
using $SAXSource = ::javax::xml::transform::sax::SAXSource;
using $LSInput = ::org::w3c::dom::ls::LSInput;
using $EntityResolver = ::org::xml::sax::EntityResolver;
using $InputSource = ::org::xml::sax::InputSource;
using $SAXException = ::org::xml::sax::SAXException;
using $XMLReader = ::org::xml::sax::XMLReader;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _CatalogResolverImpl_FieldInfo_[] = {
	{"catalog", "Ljavax/xml/catalog/Catalog;", nullptr, 0, $field(CatalogResolverImpl, catalog)},
	{"entityResolver", "Ljavax/xml/catalog/CatalogResolverImpl;", nullptr, 0, $field(CatalogResolverImpl, entityResolver)},
	{}
};

$MethodInfo _CatalogResolverImpl_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/catalog/Catalog;)V", nullptr, $PUBLIC, $method(CatalogResolverImpl, init$, void, $Catalog*)},
	{"resolve", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/transform/Source;", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl, resolve, $Source*, $String*, $String*)},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;)Lorg/xml/sax/InputSource;", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl, resolveEntity, $InputSource*, $String*, $String*)},
	{"resolveEntity", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/io/InputStream;", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl, resolveEntity, $Object*, $String*, $String*, $String*, $String*)},
	{"resolveResource", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/ls/LSInput;", nullptr, $PUBLIC, $virtualMethod(CatalogResolverImpl, resolveResource, $LSInput*, $String*, $String*, $String*, $String*, $String*)},
	{"setEntityResolver", "(Ljavax/xml/transform/sax/SAXSource;)V", nullptr, $PRIVATE, $method(CatalogResolverImpl, setEntityResolver, void, $SAXSource*)},
	{}
};

$InnerClassInfo _CatalogResolverImpl_InnerClassesInfo_[] = {
	{"javax.xml.catalog.CatalogResolverImpl$1", nullptr, nullptr, $STATIC | $SYNTHETIC},
	{"javax.xml.catalog.CatalogResolverImpl$LSInputImpl", "javax.xml.catalog.CatalogResolverImpl", "LSInputImpl", 0},
	{}
};

$ClassInfo _CatalogResolverImpl_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"javax.xml.catalog.CatalogResolverImpl",
	"java.lang.Object",
	"javax.xml.catalog.CatalogResolver",
	_CatalogResolverImpl_FieldInfo_,
	_CatalogResolverImpl_MethodInfo_,
	nullptr,
	nullptr,
	_CatalogResolverImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.catalog.CatalogResolverImpl$1,javax.xml.catalog.CatalogResolverImpl$LSInputImpl"
};

$Object* allocate$CatalogResolverImpl($Class* clazz) {
	return $of($alloc(CatalogResolverImpl));
}

void CatalogResolverImpl::init$($Catalog* catalog) {
	$set(this, catalog, catalog);
}

$InputSource* CatalogResolverImpl::resolveEntity($String* publicId$renamed, $String* systemId$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, systemId, systemId$renamed);
	$var($String, publicId, publicId$renamed);
	$CatalogMessages::reportNPEOnNull("systemId"_s, systemId);
	$assign(systemId, $Normalizer::normalizeURI($($Util::getNotNullOrEmpty(systemId))));
	$assign(publicId, $Normalizer::normalizePublicId($($Normalizer::decodeURN($($Util::getNotNullOrEmpty(publicId))))));
	if (systemId != nullptr && systemId->startsWith($Util::URN)) {
		$assign(systemId, $Normalizer::decodeURN(systemId));
		if (publicId != nullptr && !publicId->equals(systemId)) {
			$assign(systemId, nullptr);
		} else {
			$assign(publicId, systemId);
			$assign(systemId, nullptr);
		}
	}
	$var($CatalogImpl, c, $cast($CatalogImpl, this->catalog));
	$var($String, resolvedSystemId, $Util::resolve(c, publicId, systemId));
	if (resolvedSystemId != nullptr) {
		return $new($InputSource, resolvedSystemId);
	}
	$GroupEntry$ResolveType* resolveType = $nc(($cast($CatalogImpl, this->catalog)))->getResolve();
	$init($CatalogResolverImpl$1);
	switch ($nc($CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType)->get($nc((resolveType))->ordinal())) {
	case 1:
		{
			return $new($InputSource, static_cast<$Reader*>($$new($StringReader, ""_s)));
		}
	case 2:
		{
			$CatalogMessages::reportError($CatalogMessages::ERR_NO_MATCH, $$new($ObjectArray, {
				$of(publicId),
				$of(systemId)
			}));
		}
	}
	return nullptr;
}

$Source* CatalogResolverImpl::resolve($String* href$renamed, $String* base$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, href, href$renamed);
	$var($String, base, base$renamed);
	$CatalogMessages::reportNPEOnNull("href"_s, href);
	$assign(href, $Util::getNotNullOrEmpty(href));
	$assign(base, $Util::getNotNullOrEmpty(base));
	$var($String, result, nullptr);
	$var($CatalogImpl, c, $cast($CatalogImpl, this->catalog));
	$var($String, uri, $Normalizer::normalizeURI(href));
	if (uri == nullptr) {
		return nullptr;
	}
	if (uri != nullptr && uri->startsWith($Util::URN)) {
		$var($String, publicId, $Normalizer::decodeURN(uri));
		if (publicId != nullptr) {
			$assign(result, $Util::resolve(c, publicId, nullptr));
		}
	}
	if (result == nullptr) {
		int32_t hashPos = $nc(uri)->indexOf("#"_s);
		if (hashPos >= 0) {
			$assign(uri, uri->substring(0, hashPos));
		}
		$assign(result, $Util::resolve(c, nullptr, uri));
	}
	if (result == nullptr) {
		$GroupEntry$ResolveType* resolveType = $nc(c)->getResolve();
		$init($CatalogResolverImpl$1);
		switch ($nc($CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType)->get($nc((resolveType))->ordinal())) {
		case 1:
			{
				return $new($SAXSource, $$new($InputSource, static_cast<$Reader*>($$new($StringReader, ""_s))));
			}
		case 2:
			{
				$CatalogMessages::reportError($CatalogMessages::ERR_NO_URI_MATCH, $$new($ObjectArray, {
					$of(href),
					$of(base)
				}));
			}
		}
		try {
			$var($URL, url, nullptr);
			if (base == nullptr) {
				$assign(url, $new($URL, uri));
				$assign(result, url->toString());
			} else {
				$var($URL, baseURL, $new($URL, base));
				$assign(url, $nc(href)->length() == 0 ? baseURL : $new($URL, baseURL, uri));
				$assign(result, $nc(url)->toString());
			}
		} catch ($MalformedURLException& mue) {
			$CatalogMessages::reportError($CatalogMessages::ERR_CREATING_URI, $$new($ObjectArray, {
				$of(href),
				$of(base)
			}));
		}
	}
	$var($SAXSource, source, $new($SAXSource));
	source->setInputSource($$new($InputSource, result));
	setEntityResolver(source);
	return source;
}

void CatalogResolverImpl::setEntityResolver($SAXSource* source) {
	$useLocalCurrentObjectStackCache();
	$var($XMLReader, reader, $nc(source)->getXMLReader());
	if (reader == nullptr) {
		$var($SAXParserFactory, spFactory, $new($SAXParserFactoryImpl));
		spFactory->setNamespaceAware(true);
		try {
			$assign(reader, $nc($(spFactory->newSAXParser()))->getXMLReader());
		} catch ($ParserConfigurationException& ex) {
			$init($CatalogMessages);
			$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_PARSER_CONF, static_cast<$Throwable*>(ex));
		} catch ($SAXException& ex) {
			$init($CatalogMessages);
			$CatalogMessages::reportRunTimeError($CatalogMessages::ERR_PARSER_CONF, static_cast<$Throwable*>(ex));
		}
	}
	if (this->entityResolver != nullptr) {
		$set(this, entityResolver, $new(CatalogResolverImpl, this->catalog));
	}
	$nc(reader)->setEntityResolver(this->entityResolver);
	source->setXMLReader(reader);
}

$Object* CatalogResolverImpl::resolveEntity($String* publicId, $String* systemId, $String* baseUri, $String* namespace$) {
	$useLocalCurrentObjectStackCache();
	$var($InputSource, is, resolveEntity(publicId, systemId));
	if (is != nullptr && !is->isEmpty()) {
		try {
			return $of($$new($URL, $(is->getSystemId()))->openStream());
		} catch ($IOException& ex) {
		}
	}
	$GroupEntry$ResolveType* resolveType = $nc(($cast($CatalogImpl, this->catalog)))->getResolve();
	$init($CatalogResolverImpl$1);
	switch ($nc($CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType)->get($nc((resolveType))->ordinal())) {
	case 1:
		{
			return $of(nullptr);
		}
	case 2:
		{
			$init($CatalogMessages);
			$CatalogMessages::reportError($CatalogMessages::ERR_NO_MATCH, $$new($ObjectArray, {
				$of(publicId),
				$of(systemId)
			}));
		}
	}
	return $of(nullptr);
}

$LSInput* CatalogResolverImpl::resolveResource($String* type, $String* namespaceURI, $String* publicId, $String* systemId, $String* baseURI) {
	$useLocalCurrentObjectStackCache();
	$var($InputSource, is, resolveEntity(publicId, systemId));
	if (is != nullptr && !is->isEmpty()) {
		return $new($CatalogResolverImpl$LSInputImpl, this, $(is->getSystemId()));
	}
	$GroupEntry$ResolveType* resolveType = $nc(($cast($CatalogImpl, this->catalog)))->getResolve();
	$init($CatalogResolverImpl$1);
	switch ($nc($CatalogResolverImpl$1::$SwitchMap$javax$xml$catalog$GroupEntry$ResolveType)->get($nc((resolveType))->ordinal())) {
	case 1:
		{
			return nullptr;
		}
	case 2:
		{
			$init($CatalogMessages);
			$CatalogMessages::reportError($CatalogMessages::ERR_NO_MATCH, $$new($ObjectArray, {
				$of(publicId),
				$of(systemId)
			}));
		}
	}
	return nullptr;
}

CatalogResolverImpl::CatalogResolverImpl() {
}

$Class* CatalogResolverImpl::load$($String* name, bool initialize) {
	$loadClass(CatalogResolverImpl, name, initialize, &_CatalogResolverImpl_ClassInfo_, allocate$CatalogResolverImpl);
	return class$;
}

$Class* CatalogResolverImpl::class$ = nullptr;

		} // catalog
	} // xml
} // javax
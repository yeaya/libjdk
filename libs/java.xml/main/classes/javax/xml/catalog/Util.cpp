#include <javax/xml/catalog/Util.h>

#include <java/io/File.h>
#include <java/io/IOException.h>
#include <java/net/MalformedURLException.h>
#include <java/net/URI.h>
#include <java/net/URL.h>
#include <java/util/Iterator.h>
#include <java/util/jar/JarEntry.h>
#include <java/util/jar/JarFile.h>
#include <java/util/stream/Stream.h>
#include <javax/xml/catalog/CatalogFeatures$Feature.h>
#include <javax/xml/catalog/CatalogImpl.h>
#include <javax/xml/catalog/CatalogMessages.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef DEFER
#undef ERR_INVALID_ARGUMENT
#undef ERR_URI_NOTABSOLUTE
#undef ERR_URI_NOTVALIDURL
#undef FILES
#undef PREFER
#undef PUBLICID_PREFIX
#undef PUBLICID_PREFIX_ALT
#undef RESOLVE
#undef SCHEME_FILE
#undef SCHEME_JAR
#undef SCHEME_JARFILE
#undef URN

using $URIArray = $Array<::java::net::URI>;
using $File = ::java::io::File;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MalformedURLException = ::java::net::MalformedURLException;
using $URI = ::java::net::URI;
using $Iterator = ::java::util::Iterator;
using $JarEntry = ::java::util::jar::JarEntry;
using $JarFile = ::java::util::jar::JarFile;
using $Stream = ::java::util::stream::Stream;
using $CatalogFeatures$Feature = ::javax::xml::catalog::CatalogFeatures$Feature;
using $CatalogImpl = ::javax::xml::catalog::CatalogImpl;
using $CatalogMessages = ::javax::xml::catalog::CatalogMessages;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace javax {
	namespace xml {
		namespace catalog {

$FieldInfo _Util_FieldInfo_[] = {
	{"URN", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Util, URN)},
	{"PUBLICID_PREFIX", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Util, PUBLICID_PREFIX)},
	{"PUBLICID_PREFIX_ALT", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Util, PUBLICID_PREFIX_ALT)},
	{"SCHEME_FILE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Util, SCHEME_FILE)},
	{"SCHEME_JAR", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Util, SCHEME_JAR)},
	{"SCHEME_JARFILE", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(Util, SCHEME_JARFILE)},
	{}
};

$MethodInfo _Util_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(Util, init$, void)},
	{"getCatalogFiles", "(Ljava/lang/String;)[Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Util, getCatalogFiles, $StringArray*, $String*)},
	{"getNotNullOrEmpty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Util, getNotNullOrEmpty, $String*, $String*)},
	{"isFileUri", "(Ljava/net/URI;)Z", nullptr, $STATIC, $staticMethod(Util, isFileUri, bool, $URI*)},
	{"isFileUriExist", "(Ljava/net/URI;Z)Z", nullptr, $STATIC, $staticMethod(Util, isFileUriExist, bool, $URI*, bool)},
	{"resolve", "(Ljavax/xml/catalog/CatalogImpl;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $staticMethod(Util, resolve, $String*, $CatalogImpl*, $String*, $String*)},
	{"validateFeatureInput", "(Ljavax/xml/catalog/CatalogFeatures$Feature;Ljava/lang/String;)V", nullptr, $STATIC, $staticMethod(Util, validateFeatureInput, void, $CatalogFeatures$Feature*, $String*)},
	{"validateUriSyntax", "(Ljava/net/URI;)V", nullptr, $STATIC, $staticMethod(Util, validateUriSyntax, void, $URI*)},
	{"validateUrisSyntax", "([Ljava/net/URI;)V", nullptr, $STATIC | $TRANSIENT, $staticMethod(Util, validateUrisSyntax, void, $URIArray*)},
	{"validateUrisSyntax", "([Ljava/lang/String;)V", nullptr, $STATIC | $TRANSIENT, $staticMethod(Util, validateUrisSyntax, void, $StringArray*)},
	{}
};

$ClassInfo _Util_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.catalog.Util",
	"java.lang.Object",
	nullptr,
	_Util_FieldInfo_,
	_Util_MethodInfo_
};

$Object* allocate$Util($Class* clazz) {
	return $of($alloc(Util));
}

$String* Util::URN = nullptr;
$String* Util::PUBLICID_PREFIX = nullptr;
$String* Util::PUBLICID_PREFIX_ALT = nullptr;
$String* Util::SCHEME_FILE = nullptr;
$String* Util::SCHEME_JAR = nullptr;
$String* Util::SCHEME_JARFILE = nullptr;

void Util::init$() {
}

$String* Util::resolve($CatalogImpl* catalog, $String* publicId, $String* systemId) {
	$init(Util);
	$useLocalCurrentObjectStackCache();
	$var($String, resolvedSystemId, nullptr);
	$nc(catalog)->reset();
	if (systemId != nullptr) {
		$assign(resolvedSystemId, catalog->matchSystem(systemId));
	}
	if (resolvedSystemId == nullptr && publicId != nullptr) {
		$assign(resolvedSystemId, catalog->matchPublic(publicId));
	}
	if (resolvedSystemId == nullptr && systemId != nullptr) {
		$assign(resolvedSystemId, catalog->matchURI(systemId));
	}
	catalog->markAsSearched();
	if (resolvedSystemId == nullptr) {
		$var($Iterator, iter, $nc($(catalog->catalogs()))->iterator());
		while ($nc(iter)->hasNext()) {
			$assign(resolvedSystemId, resolve($cast($CatalogImpl, $(iter->next())), publicId, systemId));
			if (resolvedSystemId != nullptr) {
				break;
			}
		}
	}
	return resolvedSystemId;
}

void Util::validateUrisSyntax($URIArray* uris) {
	$init(Util);
	$useLocalCurrentObjectStackCache();
	{
		$var($URIArray, arr$, uris);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($URI, uri, arr$->get(i$));
			{
				validateUriSyntax(uri);
			}
		}
	}
}

void Util::validateUrisSyntax($StringArray* uris) {
	$init(Util);
	$useLocalCurrentObjectStackCache();
	{
		$var($StringArray, arr$, uris);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, uri, arr$->get(i$));
			{
				validateUriSyntax($($URI::create(uri)));
			}
		}
	}
}

void Util::validateUriSyntax($URI* uri) {
	$init(Util);
	$useLocalCurrentObjectStackCache();
	$CatalogMessages::reportNPEOnNull("URI input"_s, uri);
	if (!$nc(uri)->isAbsolute()) {
		$CatalogMessages::reportIAE($CatalogMessages::ERR_URI_NOTABSOLUTE, $$new($ObjectArray, {$of(uri)}), nullptr);
	}
	try {
		$nc(uri)->toURL();
	} catch ($MalformedURLException& ex) {
		$CatalogMessages::reportIAE($CatalogMessages::ERR_URI_NOTVALIDURL, $$new($ObjectArray, {$of(uri)}), nullptr);
	}
}

bool Util::isFileUri($URI* uri) {
	$init(Util);
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc(Util::SCHEME_FILE)->equals($($nc(uri)->getScheme()));
	if (var$0 || $nc(Util::SCHEME_JAR)->equals($($nc(uri)->getScheme()))) {
		return true;
	}
	return false;
}

bool Util::isFileUriExist($URI* uri, bool openJarFile) {
	$init(Util);
	$useLocalCurrentObjectStackCache();
	if (uri != nullptr && uri->isAbsolute()) {
		if (nullptr != uri->getScheme()) {
			{
				$var($String, s6342$, uri->getScheme());
				int32_t tmp6342$ = -1;
				switch ($nc(s6342$)->hashCode()) {
				case 0x002FF57C:
					{
						if (s6342$->equals("file"_s)) {
							tmp6342$ = 0;
						}
						break;
					}
				case 0x00019A1B:
					{
						if (s6342$->equals("jar"_s)) {
							tmp6342$ = 1;
						}
						break;
					}
				}
				{
					$var($String, path, nullptr)
					$var($File, f1, nullptr)
					$var($String, tempUri, nullptr)
					int32_t pos = 0;
					switch (tmp6342$) {
					case 0:
						{
							$assign(path, uri->getPath());
							$assign(f1, $new($File, path));
							if ($nc(f1)->isFile()) {
								return true;
							}
							break;
						}
					case 1:
						{
							$assign(tempUri, uri->toString());
							pos = $nc(tempUri)->indexOf("!"_s);
							if (pos < 0) {
								return false;
							}
							if (openJarFile) {
								$var($String, jarFile, tempUri->substring($nc(Util::SCHEME_JARFILE)->length(), pos));
								$var($String, entryName, tempUri->substring(pos + 2));
								try {
									$var($JarFile, jf, $new($JarFile, jarFile));
									$var($JarEntry, je, jf->getJarEntry(entryName));
									if (je != nullptr) {
										return true;
									}
								} catch ($IOException& ex) {
									return false;
								}
							} else {
								return true;
							}
							break;
						}
					}
				}
			}
		}
	}
	return false;
}

$StringArray* Util::getCatalogFiles($String* sysPropertyName) {
	$init(Util);
	$var($String, value, $SecuritySupport::getJAXPSystemProperty(sysPropertyName));
	if (value != nullptr && !value->isEmpty()) {
		return value->split(";"_s);
	}
	return nullptr;
}

$String* Util::getNotNullOrEmpty($String* test) {
	$init(Util);
	if (test == nullptr) {
		return test;
	} else {
		$var($String, temp, $nc(test)->trim());
		if (temp->length() == 0) {
			return nullptr;
		} else {
			return temp;
		}
	}
}

void Util::validateFeatureInput($CatalogFeatures$Feature* f, $String* value) {
	$init(Util);
	$useLocalCurrentObjectStackCache();
	$CatalogMessages::reportNPEOnNull($($nc(f)->name()), value);
	if ($nc(value)->length() == 0) {
		$CatalogMessages::reportIAE($CatalogMessages::ERR_INVALID_ARGUMENT, $$new($ObjectArray, {
			$of(value),
			$($of($nc(f)->name()))
		}), nullptr);
	}
	if (f == $CatalogFeatures$Feature::PREFER) {
		bool var$0 = !$nc(value)->equals("system"_s);
		if (var$0 && !value->equals("public"_s)) {
			$CatalogMessages::reportIAE($CatalogMessages::ERR_INVALID_ARGUMENT, $$new($ObjectArray, {
				$of(value),
				$($of($CatalogFeatures$Feature::PREFER->name()))
			}), nullptr);
		}
	} else {
		if (f == $CatalogFeatures$Feature::DEFER) {
			bool var$1 = !$nc(value)->equals("true"_s);
			if (var$1 && !value->equals("false"_s)) {
				$CatalogMessages::reportIAE($CatalogMessages::ERR_INVALID_ARGUMENT, $$new($ObjectArray, {
					$of(value),
					$($of($CatalogFeatures$Feature::DEFER->name()))
				}), nullptr);
			}
		} else {
			if (f == $CatalogFeatures$Feature::RESOLVE) {
				bool var$3 = !$nc(value)->equals("strict"_s);
				bool var$2 = var$3 && !value->equals("continue"_s);
				if (var$2 && !value->equals("ignore"_s)) {
					$CatalogMessages::reportIAE($CatalogMessages::ERR_INVALID_ARGUMENT, $$new($ObjectArray, {
						$of(value),
						$($of($CatalogFeatures$Feature::RESOLVE->name()))
					}), nullptr);
				}
			} else {
				if (f == $CatalogFeatures$Feature::FILES) {
					Util::validateUrisSyntax($($nc(value)->split(";"_s)));
				}
			}
		}
	}
}

Util::Util() {
}

void clinit$Util($Class* class$) {
	$assignStatic(Util::URN, "urn:publicid:"_s);
	$assignStatic(Util::PUBLICID_PREFIX, "-//"_s);
	$assignStatic(Util::PUBLICID_PREFIX_ALT, "+//"_s);
	$assignStatic(Util::SCHEME_FILE, "file"_s);
	$assignStatic(Util::SCHEME_JAR, "jar"_s);
	$assignStatic(Util::SCHEME_JARFILE, "jar:file:"_s);
}

$Class* Util::load$($String* name, bool initialize) {
	$loadClass(Util, name, initialize, &_Util_ClassInfo_, clinit$Util, allocate$Util);
	return class$;
}

$Class* Util::class$ = nullptr;

		} // catalog
	} // xml
} // javax
#include <com/sun/org/apache/xml/internal/serializer/utils/SystemIDResolver.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/URI$MalformedURIException.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/URI.h>
#include <java/io/File.h>
#include <java/lang/SecurityException.h>
#include <java/lang/StringBuffer.h>
#include <javax/xml/transform/TransformerException.h>
#include <jcpp.h>

using $URI = ::com::sun::org::apache::xml::internal::serializer::utils::URI;
using $URI$MalformedURIException = ::com::sun::org::apache::xml::internal::serializer::utils::URI$MalformedURIException;
using $File = ::java::io::File;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityException = ::java::lang::SecurityException;
using $StringBuffer = ::java::lang::StringBuffer;
using $TransformerException = ::javax::xml::transform::TransformerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {
							namespace utils {

void SystemIDResolver::init$() {
}

$String* SystemIDResolver::getAbsoluteURIFromRelative($String* localPath) {
	$useLocalObjectStack();
	if (localPath == nullptr || localPath->length() == 0) {
		return ""_s;
	}
	$var($String, absolutePath, localPath);
	if (!isAbsolutePath(localPath)) {
		try {
			$assign(absolutePath, getAbsolutePathFromRelativePath(localPath));
		} catch ($SecurityException& se) {
			return $str({"file:"_s, localPath});
		}
	}
	$var($String, urlString, nullptr);
	if (nullptr != absolutePath) {
		$init($File);
		if (absolutePath->startsWith($File::separator)) {
			$assign(urlString, $str({"file://"_s, absolutePath}));
		} else {
			$assign(urlString, $str({"file:///"_s, absolutePath}));
		}
	} else {
		$assign(urlString, $str({"file:"_s, localPath}));
	}
	return replaceChars(urlString);
}

$String* SystemIDResolver::getAbsolutePathFromRelativePath($String* relativePath) {
	return $$new($File, relativePath)->getAbsolutePath();
}

bool SystemIDResolver::isAbsoluteURI($String* systemId) {
	if (isWindowsAbsolutePath(systemId)) {
		return false;
	}
	int32_t fragmentIndex = $nc(systemId)->indexOf(u'#');
	int32_t queryIndex = systemId->indexOf(u'?');
	int32_t slashIndex = systemId->indexOf(u'/');
	int32_t colonIndex = systemId->indexOf(u':');
	int32_t index = systemId->length() - 1;
	if (fragmentIndex > 0) {
		index = fragmentIndex;
	}
	if ((queryIndex > 0) && (queryIndex < index)) {
		index = queryIndex;
	}
	if ((slashIndex > 0) && (slashIndex < index)) {
		index = slashIndex;
	}
	return ((colonIndex > 0) && (colonIndex < index));
}

bool SystemIDResolver::isAbsolutePath($String* systemId) {
	if (systemId == nullptr) {
		return false;
	}
	$var($File, file, $new($File, systemId));
	return file->isAbsolute();
}

bool SystemIDResolver::isWindowsAbsolutePath($String* systemId) {
	if (!isAbsolutePath(systemId)) {
		return false;
	}
	bool var$2 = $nc(systemId)->length() > 2;
	bool var$1 = var$2 && systemId->charAt(1) == u':';
	bool var$0 = var$1 && $Character::isLetter(systemId->charAt(0));
	if (var$0) {
		bool var$3 = systemId->charAt(2) == u'\\';
		var$0 = var$3 || systemId->charAt(2) == u'/';
	}
	if (var$0) {
		return true;
	} else {
		return false;
	}
}

$String* SystemIDResolver::replaceChars($String* str) {
	$var($StringBuffer, buf, $new($StringBuffer, str));
	int32_t length = buf->length();
	for (int32_t i = 0; i < length; ++i) {
		char16_t currentChar = buf->charAt(i);
		if (currentChar == u' ') {
			buf->setCharAt(i, u'%');
			buf->insert(i + 1, "20"_s);
			length = length + 2;
			i = i + 2;
		} else if (currentChar == u'\\') {
			buf->setCharAt(i, u'/');
		}
	}
	return buf->toString();
}

$String* SystemIDResolver::getAbsoluteURI($String* systemId) {
	$useLocalObjectStack();
	$var($String, absoluteURI, systemId);
	if (isAbsoluteURI(systemId)) {
		if ($nc(systemId)->startsWith("file:"_s)) {
			$var($String, str, systemId->substring(5));
			if (str != nullptr && str->startsWith("/"_s)) {
				bool var$0 = str->startsWith("///"_s);
				if (var$0 || !str->startsWith("//"_s)) {
					int32_t secondColonIndex = systemId->indexOf(u':', 5);
					if (secondColonIndex > 0) {
						$var($String, localPath, systemId->substring(secondColonIndex - 1));
						try {
							if (!isAbsolutePath(localPath)) {
								$var($StringBuilder, var$1, $new($StringBuilder));
								var$1->append($(systemId->substring(0, secondColonIndex - 1)));
								var$1->append($(getAbsolutePathFromRelativePath(localPath)));
								$assign(absoluteURI, $str(var$1));
							}
						} catch ($SecurityException& se) {
							return systemId;
						}
					}
				}
			} else {
				return getAbsoluteURIFromRelative($(systemId->substring(5)));
			}
			return replaceChars(absoluteURI);
		} else {
			return systemId;
		}
	} else {
		return getAbsoluteURIFromRelative(systemId);
	}
}

$String* SystemIDResolver::getAbsoluteURI($String* urlString, $String* base) {
	$useLocalObjectStack();
	if (base == nullptr) {
		return getAbsoluteURI(urlString);
	}
	$var($String, absoluteBase, getAbsoluteURI(base));
	$var($URI, uri, nullptr);
	try {
		$var($URI, baseURI, $new($URI, absoluteBase));
		$assign(uri, $new($URI, baseURI, urlString));
	} catch ($URI$MalformedURIException& mue) {
		$throwNew($TransformerException, mue);
	}
	return replaceChars($($nc(uri)->toString()));
}

SystemIDResolver::SystemIDResolver() {
}

$Class* SystemIDResolver::load$($String* name, bool initialize) {
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(SystemIDResolver, init$, void)},
		{"getAbsolutePathFromRelativePath", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SystemIDResolver, getAbsolutePathFromRelativePath, $String*, $String*)},
		{"getAbsoluteURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemIDResolver, getAbsoluteURI, $String*, $String*)},
		{"getAbsoluteURI", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemIDResolver, getAbsoluteURI, $String*, $String*, $String*), "javax.xml.transform.TransformerException"},
		{"getAbsoluteURIFromRelative", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemIDResolver, getAbsoluteURIFromRelative, $String*, $String*)},
		{"isAbsolutePath", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemIDResolver, isAbsolutePath, bool, $String*)},
		{"isAbsoluteURI", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(SystemIDResolver, isAbsoluteURI, bool, $String*)},
		{"isWindowsAbsolutePath", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(SystemIDResolver, isWindowsAbsolutePath, bool, $String*)},
		{"replaceChars", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(SystemIDResolver, replaceChars, $String*, $String*)},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.utils.SystemIDResolver",
		"java.lang.Object",
		nullptr,
		nullptr,
		methodInfos$$
	};
	$loadClass(SystemIDResolver, name, initialize, &classInfo$$, []($Class* clazz) -> $Object* {
		return $alloc(SystemIDResolver);
	});
	return class$;
}

$Class* SystemIDResolver::class$ = nullptr;

							} // utils
						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
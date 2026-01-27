#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeTextReader.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <com/sun/org/apache/xerces/internal/impl/XMLErrorReporter.h>
#include <com/sun/org/apache/xerces/internal/impl/io/ASCIIReader.h>
#include <com/sun/org/apache/xerces/internal/impl/io/Latin1Reader.h>
#include <com/sun/org/apache/xerces/internal/impl/io/UTF16Reader.h>
#include <com/sun/org/apache/xerces/internal/impl/io/UTF8Reader.h>
#include <com/sun/org/apache/xerces/internal/impl/msg/XMLMessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/EncodingMap.h>
#include <com/sun/org/apache/xerces/internal/util/HTTPInputSource.h>
#include <com/sun/org/apache/xerces/internal/util/MessageFormatter.h>
#include <com/sun/org/apache/xerces/internal/util/XMLChar.h>
#include <com/sun/org/apache/xerces/internal/xinclude/XIncludeHandler.h>
#include <com/sun/org/apache/xerces/internal/xni/Augmentations.h>
#include <com/sun/org/apache/xerces/internal/xni/XMLString.h>
#include <com/sun/org/apache/xerces/internal/xni/parser/XMLInputSource.h>
#include <java/io/BufferedInputStream.h>
#include <java/io/FilterInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/Reader.h>
#include <java/net/HttpURLConnection.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/util/Iterator.h>
#include <java/util/Locale.h>
#include <java/util/Map$Entry.h>
#include <jcpp.h>

#undef ENGLISH
#undef SEVERITY_FATAL_ERROR
#undef XML_DOMAIN

using $XMLEntityManager = ::com::sun::org::apache::xerces::internal::impl::XMLEntityManager;
using $XMLErrorReporter = ::com::sun::org::apache::xerces::internal::impl::XMLErrorReporter;
using $ASCIIReader = ::com::sun::org::apache::xerces::internal::impl::io::ASCIIReader;
using $Latin1Reader = ::com::sun::org::apache::xerces::internal::impl::io::Latin1Reader;
using $UTF16Reader = ::com::sun::org::apache::xerces::internal::impl::io::UTF16Reader;
using $UTF8Reader = ::com::sun::org::apache::xerces::internal::impl::io::UTF8Reader;
using $XMLMessageFormatter = ::com::sun::org::apache::xerces::internal::impl::msg::XMLMessageFormatter;
using $EncodingMap = ::com::sun::org::apache::xerces::internal::util::EncodingMap;
using $HTTPInputSource = ::com::sun::org::apache::xerces::internal::util::HTTPInputSource;
using $MessageFormatter = ::com::sun::org::apache::xerces::internal::util::MessageFormatter;
using $XMLChar = ::com::sun::org::apache::xerces::internal::util::XMLChar;
using $XIncludeHandler = ::com::sun::org::apache::xerces::internal::xinclude::XIncludeHandler;
using $Augmentations = ::com::sun::org::apache::xerces::internal::xni::Augmentations;
using $XMLString = ::com::sun::org::apache::xerces::internal::xni::XMLString;
using $XMLInputSource = ::com::sun::org::apache::xerces::internal::xni::parser::XMLInputSource;
using $BufferedInputStream = ::java::io::BufferedInputStream;
using $FilterInputStream = ::java::io::FilterInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $Reader = ::java::io::Reader;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $HttpURLConnection = ::java::net::HttpURLConnection;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Iterator = ::java::util::Iterator;
using $Locale = ::java::util::Locale;
using $Map$Entry = ::java::util::Map$Entry;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace xinclude {

$FieldInfo _XIncludeTextReader_FieldInfo_[] = {
	{"fReader", "Ljava/io/Reader;", nullptr, $PRIVATE, $field(XIncludeTextReader, fReader)},
	{"fHandler", "Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler;", nullptr, $PRIVATE | $FINAL, $field(XIncludeTextReader, fHandler)},
	{"fSource", "Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;", nullptr, $PRIVATE, $field(XIncludeTextReader, fSource)},
	{"fErrorReporter", "Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;", nullptr, $PRIVATE, $field(XIncludeTextReader, fErrorReporter)},
	{"fTempString", "Lcom/sun/org/apache/xerces/internal/xni/XMLString;", nullptr, $PRIVATE, $field(XIncludeTextReader, fTempString)},
	{}
};

$MethodInfo _XIncludeTextReader_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;Lcom/sun/org/apache/xerces/internal/xinclude/XIncludeHandler;I)V", nullptr, $PUBLIC, $method(XIncludeTextReader, init$, void, $XMLInputSource*, $XIncludeHandler*, int32_t), "java.io.IOException"},
	{"close", "()V", nullptr, $PUBLIC, $virtualMethod(XIncludeTextReader, close, void), "java.io.IOException"},
	{"consumeBOM", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XIncludeTextReader, consumeBOM, $String*, $InputStream*, $String*), "java.io.IOException"},
	{"createASCIIReader", "(Ljava/io/InputStream;)Ljava/io/Reader;", nullptr, $PRIVATE, $method(XIncludeTextReader, createASCIIReader, $Reader*, $InputStream*)},
	{"createLatin1Reader", "(Ljava/io/InputStream;)Ljava/io/Reader;", nullptr, $PRIVATE, $method(XIncludeTextReader, createLatin1Reader, $Reader*, $InputStream*)},
	{"createUTF16Reader", "(Ljava/io/InputStream;Z)Ljava/io/Reader;", nullptr, $PRIVATE, $method(XIncludeTextReader, createUTF16Reader, $Reader*, $InputStream*, bool)},
	{"createUTF8Reader", "(Ljava/io/InputStream;)Ljava/io/Reader;", nullptr, $PRIVATE, $method(XIncludeTextReader, createUTF8Reader, $Reader*, $InputStream*)},
	{"getEncodingName", "(Ljava/io/InputStream;)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XIncludeTextReader, getEncodingName, $String*, $InputStream*), "java.io.IOException"},
	{"getEncodingName", "([B)Ljava/lang/String;", nullptr, $PROTECTED, $virtualMethod(XIncludeTextReader, getEncodingName, $String*, $bytes*)},
	{"getReader", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)Ljava/io/Reader;", nullptr, $PROTECTED, $virtualMethod(XIncludeTextReader, getReader, $Reader*, $XMLInputSource*), "java.io.IOException"},
	{"isValid", "(I)Z", nullptr, $PROTECTED, $virtualMethod(XIncludeTextReader, isValid, bool, int32_t)},
	{"parse", "()V", nullptr, $PUBLIC, $virtualMethod(XIncludeTextReader, parse, void), "java.io.IOException"},
	{"setBufferSize", "(I)V", nullptr, $PROTECTED, $virtualMethod(XIncludeTextReader, setBufferSize, void, int32_t)},
	{"setErrorReporter", "(Lcom/sun/org/apache/xerces/internal/impl/XMLErrorReporter;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeTextReader, setErrorReporter, void, $XMLErrorReporter*)},
	{"setInputSource", "(Lcom/sun/org/apache/xerces/internal/xni/parser/XMLInputSource;)V", nullptr, $PUBLIC, $virtualMethod(XIncludeTextReader, setInputSource, void, $XMLInputSource*)},
	{}
};

$ClassInfo _XIncludeTextReader_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xerces.internal.xinclude.XIncludeTextReader",
	"java.lang.Object",
	nullptr,
	_XIncludeTextReader_FieldInfo_,
	_XIncludeTextReader_MethodInfo_
};

$Object* allocate$XIncludeTextReader($Class* clazz) {
	return $of($alloc(XIncludeTextReader));
}

void XIncludeTextReader::init$($XMLInputSource* source, $XIncludeHandler* handler, int32_t bufferSize) {
	$set(this, fTempString, $new($XMLString));
	$set(this, fHandler, handler);
	$set(this, fSource, source);
	$set(this, fTempString, $new($XMLString, $$new($chars, bufferSize + 1), 0, 0));
}

void XIncludeTextReader::setErrorReporter($XMLErrorReporter* errorReporter) {
	$set(this, fErrorReporter, errorReporter);
}

$Reader* XIncludeTextReader::getReader($XMLInputSource* source) {
	$useLocalCurrentObjectStackCache();
	if ($nc(source)->getCharacterStream() != nullptr) {
		return source->getCharacterStream();
	} else {
		$var($InputStream, stream, nullptr);
		$var($String, encoding, source->getEncoding());
		if (encoding == nullptr) {
			$assign(encoding, "UTF-8"_s);
		}
		if (source->getByteStream() != nullptr) {
			$assign(stream, source->getByteStream());
			if (!($instanceOf($BufferedInputStream, stream))) {
				$assign(stream, $new($BufferedInputStream, stream, $nc($nc(this->fTempString)->ch)->length));
			}
		} else {
			$var($String, var$0, source->getSystemId());
			$var($String, expandedSystemId, $XMLEntityManager::expandSystemId(var$0, $(source->getBaseSystemId()), false));
			$var($URL, url, $new($URL, expandedSystemId));
			$var($URLConnection, urlCon, url->openConnection());
			if ($instanceOf($HttpURLConnection, urlCon) && $instanceOf($HTTPInputSource, source)) {
				$var($HttpURLConnection, urlConnection, $cast($HttpURLConnection, urlCon));
				$var($HTTPInputSource, httpInputSource, $cast($HTTPInputSource, source));
				$var($Iterator, propIter, httpInputSource->getHTTPRequestProperties());
				while ($nc(propIter)->hasNext()) {
					$var($Map$Entry, entry, $cast($Map$Entry, propIter->next()));
					$var($String, var$1, $cast($String, $nc(entry)->getKey()));
					$nc(urlConnection)->setRequestProperty(var$1, $cast($String, $(entry->getValue())));
				}
				bool followRedirects = httpInputSource->getFollowHTTPRedirects();
				if (!followRedirects) {
					$nc(urlConnection)->setInstanceFollowRedirects(followRedirects);
				}
			}
			$assign(stream, $new($BufferedInputStream, $($nc(urlCon)->getInputStream())));
			$var($String, rawContentType, $nc(urlCon)->getContentType());
			int32_t index = (rawContentType != nullptr) ? $nc(rawContentType)->indexOf((int32_t)u';') : -1;
			$var($String, contentType, nullptr);
			$var($String, charset, nullptr);
			if (index != -1) {
				$assign(contentType, $(rawContentType->substring(0, index))->trim());
				$assign(charset, $(rawContentType->substring(index + 1))->trim());
				if (charset->startsWith("charset="_s)) {
					$assign(charset, $(charset->substring(8))->trim());
					bool var$3 = charset->charAt(0) == u'\"';
					bool var$2 = (var$3 && charset->charAt(charset->length() - 1) == u'\"');
					if (!var$2) {
						bool var$4 = charset->charAt(0) == u'\'';
						var$2 = (var$4 && charset->charAt(charset->length() - 1) == u'\'');
					}
					if (var$2) {
						$assign(charset, charset->substring(1, charset->length() - 1));
					}
				} else {
					$assign(charset, nullptr);
				}
			} else {
				$assign(contentType, (rawContentType != nullptr) ? rawContentType->trim() : ""_s);
			}
			$var($String, detectedEncoding, nullptr);
			if ($nc(contentType)->equals("text/xml"_s)) {
				if (charset != nullptr) {
					$assign(detectedEncoding, charset);
				} else {
					$assign(detectedEncoding, "US-ASCII"_s);
				}
			} else if (contentType->equals("application/xml"_s)) {
				if (charset != nullptr) {
					$assign(detectedEncoding, charset);
				} else {
					$assign(detectedEncoding, getEncodingName(stream));
				}
			} else if (contentType->endsWith("+xml"_s)) {
				$assign(detectedEncoding, getEncodingName(stream));
			}
			if (detectedEncoding != nullptr) {
				$assign(encoding, detectedEncoding);
			}
		}
		$init($Locale);
		$assign(encoding, $nc(encoding)->toUpperCase($Locale::ENGLISH));
		$assign(encoding, consumeBOM(stream, encoding));
		if (encoding->equals("UTF-8"_s)) {
			return createUTF8Reader(stream);
		} else if (encoding->equals("UTF-16BE"_s)) {
			return createUTF16Reader(stream, true);
		} else if (encoding->equals("UTF-16LE"_s)) {
			return createUTF16Reader(stream, false);
		}
		$var($String, javaEncoding, $EncodingMap::getIANA2JavaMapping(encoding));
		if (javaEncoding == nullptr) {
			$init($XMLMessageFormatter);
			$var($MessageFormatter, aFormatter, $nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN));
			$var($Locale, aLocale, $nc(this->fErrorReporter)->getLocale());
			$throwNew($IOException, $($nc(aFormatter)->formatMessage(aLocale, "EncodingDeclInvalid"_s, $$new($ObjectArray, {$of(encoding)}))));
		} else if ($nc(javaEncoding)->equals("ASCII"_s)) {
			return createASCIIReader(stream);
		} else if (javaEncoding->equals("ISO8859_1"_s)) {
			return createLatin1Reader(stream);
		}
		return $new($InputStreamReader, stream, javaEncoding);
	}
}

$Reader* XIncludeTextReader::createUTF8Reader($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, var$0, stream);
	int32_t var$1 = $nc($nc(this->fTempString)->ch)->length;
	$init($XMLMessageFormatter);
	$var($MessageFormatter, var$2, $nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN));
	return $new($UTF8Reader, var$0, var$1, var$2, $($nc(this->fErrorReporter)->getLocale()));
}

$Reader* XIncludeTextReader::createUTF16Reader($InputStream* stream, bool isBigEndian) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, var$0, stream);
	int32_t var$1 = ($nc($nc(this->fTempString)->ch)->length << 1);
	bool var$2 = isBigEndian;
	$init($XMLMessageFormatter);
	$var($MessageFormatter, var$3, $nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN));
	return $new($UTF16Reader, var$0, var$1, var$2, var$3, $($nc(this->fErrorReporter)->getLocale()));
}

$Reader* XIncludeTextReader::createASCIIReader($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, var$0, stream);
	int32_t var$1 = $nc($nc(this->fTempString)->ch)->length;
	$init($XMLMessageFormatter);
	$var($MessageFormatter, var$2, $nc(this->fErrorReporter)->getMessageFormatter($XMLMessageFormatter::XML_DOMAIN));
	return $new($ASCIIReader, var$0, var$1, var$2, $($nc(this->fErrorReporter)->getLocale()));
}

$Reader* XIncludeTextReader::createLatin1Reader($InputStream* stream) {
	return $new($Latin1Reader, stream, $nc($nc(this->fTempString)->ch)->length);
}

$String* XIncludeTextReader::getEncodingName($InputStream* stream) {
	$useLocalCurrentObjectStackCache();
	$var($bytes, b4, $new($bytes, 4));
	$var($String, encoding, nullptr);
	$nc(stream)->mark(4);
	int32_t count = stream->read(b4, 0, 4);
	stream->reset();
	if (count == 4) {
		$assign(encoding, getEncodingName(b4));
	}
	return encoding;
}

$String* XIncludeTextReader::consumeBOM($InputStream* stream, $String* encoding) {
	$var($bytes, b, $new($bytes, 3));
	int32_t count = 0;
	$nc(stream)->mark(3);
	if ($nc(encoding)->equals("UTF-8"_s)) {
		count = stream->read(b, 0, 3);
		if (count == 3) {
			int32_t b0 = (int32_t)(b->get(0) & (uint32_t)255);
			int32_t b1 = (int32_t)(b->get(1) & (uint32_t)255);
			int32_t b2 = (int32_t)(b->get(2) & (uint32_t)255);
			if (b0 != 239 || b1 != 187 || b2 != 191) {
				stream->reset();
			}
		} else {
			stream->reset();
		}
	} else if (encoding->startsWith("UTF-16"_s)) {
		count = stream->read(b, 0, 2);
		if (count == 2) {
			int32_t b0 = (int32_t)(b->get(0) & (uint32_t)255);
			int32_t b1 = (int32_t)(b->get(1) & (uint32_t)255);
			if (b0 == 254 && b1 == 255) {
				return "UTF-16BE"_s;
			} else if (b0 == 255 && b1 == 254) {
				return "UTF-16LE"_s;
			}
		}
		stream->reset();
	}
	return encoding;
}

$String* XIncludeTextReader::getEncodingName($bytes* b4) {
	int32_t b0 = (int32_t)($nc(b4)->get(0) & (uint32_t)255);
	int32_t b1 = (int32_t)(b4->get(1) & (uint32_t)255);
	if (b0 == 254 && b1 == 255) {
		return "UTF-16BE"_s;
	}
	if (b0 == 255 && b1 == 254) {
		return "UTF-16LE"_s;
	}
	int32_t b2 = (int32_t)(b4->get(2) & (uint32_t)255);
	if (b0 == 239 && b1 == 187 && b2 == 191) {
		return "UTF-8"_s;
	}
	int32_t b3 = (int32_t)(b4->get(3) & (uint32_t)255);
	if (b0 == 0 && b1 == 0 && b2 == 0 && b3 == 60) {
		return "ISO-10646-UCS-4"_s;
	}
	if (b0 == 60 && b1 == 0 && b2 == 0 && b3 == 0) {
		return "ISO-10646-UCS-4"_s;
	}
	if (b0 == 0 && b1 == 0 && b2 == 60 && b3 == 0) {
		return "ISO-10646-UCS-4"_s;
	}
	if (b0 == 0 && b1 == 60 && b2 == 0 && b3 == 0) {
		return "ISO-10646-UCS-4"_s;
	}
	if (b0 == 0 && b1 == 60 && b2 == 0 && b3 == 63) {
		return "UTF-16BE"_s;
	}
	if (b0 == 60 && b1 == 0 && b2 == 63 && b3 == 0) {
		return "UTF-16LE"_s;
	}
	if (b0 == 76 && b1 == 111 && b2 == 167 && b3 == 148) {
		return "CP037"_s;
	}
	return nullptr;
}

void XIncludeTextReader::parse() {
	$useLocalCurrentObjectStackCache();
	$set(this, fReader, getReader(this->fSource));
	$set(this, fSource, nullptr);
	int32_t readSize = $nc(this->fReader)->read($nc(this->fTempString)->ch, 0, $nc($nc(this->fTempString)->ch)->length - 1);
	$nc(this->fHandler)->fHasIncludeReportedContent = true;
	while (readSize != -1) {
		for (int32_t i = 0; i < readSize; ++i) {
			char16_t ch = $nc($nc(this->fTempString)->ch)->get(i);
			if (!isValid(ch)) {
				if ($XMLChar::isHighSurrogate(ch)) {
					int32_t ch2 = 0;
					if (++i < readSize) {
						ch2 = $nc($nc(this->fTempString)->ch)->get(i);
					} else {
						ch2 = $nc(this->fReader)->read();
						if (ch2 != -1) {
							$nc($nc(this->fTempString)->ch)->set(readSize++, (char16_t)ch2);
						}
					}
					if ($XMLChar::isLowSurrogate(ch2)) {
						int32_t sup = $XMLChar::supplemental(ch, (char16_t)ch2);
						if (!isValid(sup)) {
							$init($XMLMessageFormatter);
							$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "InvalidCharInContent"_s, $$new($ObjectArray, {$($of($Integer::toString(sup, 16)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
						}
					} else {
						$init($XMLMessageFormatter);
						$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "InvalidCharInContent"_s, $$new($ObjectArray, {$($of($Integer::toString(ch2, 16)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
					}
				} else {
					$init($XMLMessageFormatter);
					$nc(this->fErrorReporter)->reportError($XMLMessageFormatter::XML_DOMAIN, "InvalidCharInContent"_s, $$new($ObjectArray, {$($of($Integer::toString(ch, 16)))}), $XMLErrorReporter::SEVERITY_FATAL_ERROR);
				}
			}
		}
		if (this->fHandler != nullptr && readSize > 0) {
			$nc(this->fTempString)->offset = 0;
			$nc(this->fTempString)->length = readSize;
			$nc(this->fHandler)->characters(this->fTempString, $($nc(this->fHandler)->modifyAugmentations(nullptr, true)));
		}
		readSize = $nc(this->fReader)->read($nc(this->fTempString)->ch, 0, $nc($nc(this->fTempString)->ch)->length - 1);
	}
}

void XIncludeTextReader::setInputSource($XMLInputSource* source) {
	$set(this, fSource, source);
}

void XIncludeTextReader::close() {
	if (this->fReader != nullptr) {
		$nc(this->fReader)->close();
		$set(this, fReader, nullptr);
	}
}

bool XIncludeTextReader::isValid(int32_t ch) {
	return $XMLChar::isValid(ch);
}

void XIncludeTextReader::setBufferSize(int32_t bufferSize) {
	if ($nc($nc(this->fTempString)->ch)->length != ++bufferSize) {
		$set($nc(this->fTempString), ch, $new($chars, bufferSize));
	}
}

XIncludeTextReader::XIncludeTextReader() {
}

$Class* XIncludeTextReader::load$($String* name, bool initialize) {
	$loadClass(XIncludeTextReader, name, initialize, &_XIncludeTextReader_ClassInfo_, allocate$XIncludeTextReader);
	return class$;
}

$Class* XIncludeTextReader::class$ = nullptr;

						} // xinclude
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
#include <com/sun/xml/internal/stream/writers/WriterUtility.h>

#include <java/io/FileWriter.h>
#include <java/io/OutputStreamWriter.h>
#include <java/io/Writer.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/CharsetEncoder.h>
#include <jdk/xml/internal/SecuritySupport.h>
#include <jcpp.h>

#undef CLOSE_EMPTY_ELEMENT
#undef CLOSE_END_TAG
#undef CLOSE_START_TAG
#undef DEBUG_XML_CONTENT
#undef DEFAULT_ENCODING
#undef DEFAULT_XMLDECL
#undef DEFAULT_XML_VERSION
#undef END_CDATA
#undef END_COMMENT
#undef OPEN_END_TAG
#undef OPEN_START_TAG
#undef SPACE
#undef START_CDATA
#undef START_COMMENT
#undef UTF_8

using $FileWriter = ::java::io::FileWriter;
using $OutputStreamWriter = ::java::io::OutputStreamWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $CharsetEncoder = ::java::nio::charset::CharsetEncoder;
using $SecuritySupport = ::jdk::xml::internal::SecuritySupport;

namespace com {
	namespace sun {
		namespace xml {
			namespace internal {
				namespace stream {
					namespace writers {

$FieldInfo _WriterUtility_FieldInfo_[] = {
	{"START_COMMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WriterUtility, START_COMMENT)},
	{"END_COMMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WriterUtility, END_COMMENT)},
	{"DEFAULT_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WriterUtility, DEFAULT_ENCODING)},
	{"DEFAULT_XMLDECL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WriterUtility, DEFAULT_XMLDECL)},
	{"DEFAULT_XML_VERSION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WriterUtility, DEFAULT_XML_VERSION)},
	{"CLOSE_START_TAG", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WriterUtility, CLOSE_START_TAG)},
	{"OPEN_START_TAG", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WriterUtility, OPEN_START_TAG)},
	{"OPEN_END_TAG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WriterUtility, OPEN_END_TAG)},
	{"CLOSE_END_TAG", "C", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(WriterUtility, CLOSE_END_TAG)},
	{"START_CDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WriterUtility, START_CDATA)},
	{"END_CDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WriterUtility, END_CDATA)},
	{"CLOSE_EMPTY_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WriterUtility, CLOSE_EMPTY_ELEMENT)},
	{"SPACE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WriterUtility, SPACE)},
	{"UTF_8", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(WriterUtility, UTF_8)},
	{"DEBUG_XML_CONTENT", "Z", nullptr, $STATIC | $FINAL, $constField(WriterUtility, DEBUG_XML_CONTENT)},
	{"fEscapeCharacters", "Z", nullptr, 0, $field(WriterUtility, fEscapeCharacters)},
	{"fWriter", "Ljava/io/Writer;", nullptr, 0, $field(WriterUtility, fWriter)},
	{"fEncoder", "Ljava/nio/charset/CharsetEncoder;", nullptr, 0, $field(WriterUtility, fEncoder)},
	{}
};

$MethodInfo _WriterUtility_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(WriterUtility, init$, void)},
	{"<init>", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $method(WriterUtility, init$, void, $Writer*)},
	{"getDefaultEncoder", "()Ljava/nio/charset/CharsetEncoder;", nullptr, $PRIVATE, $method(WriterUtility, getDefaultEncoder, $CharsetEncoder*)},
	{"getEscapeCharacters", "()Z", nullptr, $PUBLIC, $virtualMethod(WriterUtility, getEscapeCharacters, bool)},
	{"setEscapeCharacters", "(Z)V", nullptr, $PUBLIC, $virtualMethod(WriterUtility, setEscapeCharacters, void, bool)},
	{"setWriter", "(Ljava/io/Writer;)V", nullptr, $PUBLIC, $virtualMethod(WriterUtility, setWriter, void, $Writer*)},
	{"writeXMLAttributeValue", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(WriterUtility, writeXMLAttributeValue, void, $String*), "java.io.IOException"},
	{"writeXMLContent", "([CII)V", nullptr, $PUBLIC, $virtualMethod(WriterUtility, writeXMLContent, void, $chars*, int32_t, int32_t), "java.io.IOException"},
	{"writeXMLContent", "([CIIZ)V", nullptr, $PRIVATE, $method(WriterUtility, writeXMLContent, void, $chars*, int32_t, int32_t, bool), "java.io.IOException"},
	{"writeXMLContent", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(WriterUtility, writeXMLContent, void, $String*), "java.io.IOException"},
	{}
};

$ClassInfo _WriterUtility_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.xml.internal.stream.writers.WriterUtility",
	"java.lang.Object",
	nullptr,
	_WriterUtility_FieldInfo_,
	_WriterUtility_MethodInfo_
};

$Object* allocate$WriterUtility($Class* clazz) {
	return $of($alloc(WriterUtility));
}

$String* WriterUtility::START_COMMENT = nullptr;
$String* WriterUtility::END_COMMENT = nullptr;
$String* WriterUtility::DEFAULT_ENCODING = nullptr;
$String* WriterUtility::DEFAULT_XMLDECL = nullptr;
$String* WriterUtility::DEFAULT_XML_VERSION = nullptr;
$String* WriterUtility::OPEN_END_TAG = nullptr;
$String* WriterUtility::START_CDATA = nullptr;
$String* WriterUtility::END_CDATA = nullptr;
$String* WriterUtility::CLOSE_EMPTY_ELEMENT = nullptr;
$String* WriterUtility::SPACE = nullptr;
$String* WriterUtility::UTF_8 = nullptr;

void WriterUtility::init$() {
	this->fEscapeCharacters = true;
	$set(this, fWriter, nullptr);
	$set(this, fEncoder, getDefaultEncoder());
}

void WriterUtility::init$($Writer* writer) {
	$useLocalCurrentObjectStackCache();
	this->fEscapeCharacters = true;
	$set(this, fWriter, nullptr);
	$set(this, fWriter, writer);
	if ($instanceOf($OutputStreamWriter, writer)) {
		$var($String, charset, $nc(($cast($OutputStreamWriter, writer)))->getEncoding());
		if (charset != nullptr) {
			$set(this, fEncoder, $nc($($Charset::forName(charset)))->newEncoder());
		}
	} else if ($instanceOf($FileWriter, writer)) {
		$var($String, charset, $nc(($cast($FileWriter, writer)))->getEncoding());
		if (charset != nullptr) {
			$set(this, fEncoder, $nc($($Charset::forName(charset)))->newEncoder());
		}
	} else {
		$set(this, fEncoder, getDefaultEncoder());
	}
}

void WriterUtility::setWriter($Writer* writer) {
	$set(this, fWriter, writer);
}

void WriterUtility::setEscapeCharacters(bool escape) {
	this->fEscapeCharacters = escape;
}

bool WriterUtility::getEscapeCharacters() {
	return this->fEscapeCharacters;
}

void WriterUtility::writeXMLContent($chars* content, int32_t start, int32_t length) {
	writeXMLContent(content, start, length, getEscapeCharacters());
}

void WriterUtility::writeXMLContent($chars* content, int32_t start, int32_t length, bool escapeCharacter) {
	$useLocalCurrentObjectStackCache();
	int32_t index = 0;
	char16_t ch = 0;
	int32_t sc = 0;
	int32_t end = start + length;
	int32_t startWritePos = start;
	for (index = start; index < end; ++index) {
		ch = $nc(content)->get(index);
		if (this->fEncoder != nullptr && !$nc(this->fEncoder)->canEncode(ch)) {
			$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
			$nc(this->fWriter)->write("&#x"_s);
			$nc(this->fWriter)->write($($Integer::toHexString(ch)));
			$nc(this->fWriter)->write((int32_t)u';');
			startWritePos = index + 1;
		}
		switch (ch) {
		case u'<':
			{
				{
					if (escapeCharacter) {
						$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
						$nc(this->fWriter)->write("&lt;"_s);
						startWritePos = index + 1;
					}
					break;
				}
			}
		case u'&':
			{
				{
					if (escapeCharacter) {
						$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
						$nc(this->fWriter)->write("&amp;"_s);
						startWritePos = index + 1;
					}
					break;
				}
			}
		case u'>':
			{
				{
					if (escapeCharacter) {
						$nc(this->fWriter)->write(content, startWritePos, index - startWritePos);
						$nc(this->fWriter)->write("&gt;"_s);
						startWritePos = index + 1;
					}
					break;
				}
			}
		}
	}
	$nc(this->fWriter)->write(content, startWritePos, end - startWritePos);
}

void WriterUtility::writeXMLContent($String* content) {
	if (content == nullptr || $nc(content)->length() == 0) {
		return;
	}
	$var($chars, var$0, $nc(content)->toCharArray());
	writeXMLContent(var$0, 0, content->length());
}

void WriterUtility::writeXMLAttributeValue($String* value) {
	$var($chars, var$0, $nc(value)->toCharArray());
	writeXMLContent(var$0, 0, value->length(), true);
}

$CharsetEncoder* WriterUtility::getDefaultEncoder() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, encoding, $SecuritySupport::getSystemProperty("file.encoding"_s));
		if (encoding != nullptr) {
			return $nc($($Charset::forName(encoding)))->newEncoder();
		}
	} catch ($Exception& ex) {
	}
	return nullptr;
}

WriterUtility::WriterUtility() {
}

void clinit$WriterUtility($Class* class$) {
	$assignStatic(WriterUtility::START_COMMENT, "<!--"_s);
	$assignStatic(WriterUtility::END_COMMENT, "-->"_s);
	$assignStatic(WriterUtility::DEFAULT_ENCODING, " encoding=\"utf-8\""_s);
	$assignStatic(WriterUtility::DEFAULT_XMLDECL, "<?xml version=\"1.0\" ?>"_s);
	$assignStatic(WriterUtility::DEFAULT_XML_VERSION, "1.0"_s);
	$assignStatic(WriterUtility::OPEN_END_TAG, "</"_s);
	$assignStatic(WriterUtility::START_CDATA, "<![CDATA["_s);
	$assignStatic(WriterUtility::END_CDATA, "]]>"_s);
	$assignStatic(WriterUtility::CLOSE_EMPTY_ELEMENT, "/>"_s);
	$assignStatic(WriterUtility::SPACE, " "_s);
	$assignStatic(WriterUtility::UTF_8, "utf-8"_s);
}

$Class* WriterUtility::load$($String* name, bool initialize) {
	$loadClass(WriterUtility, name, initialize, &_WriterUtility_ClassInfo_, clinit$WriterUtility, allocate$WriterUtility);
	return class$;
}

$Class* WriterUtility::class$ = nullptr;

					} // writers
				} // stream
			} // internal
		} // xml
	} // sun
} // com
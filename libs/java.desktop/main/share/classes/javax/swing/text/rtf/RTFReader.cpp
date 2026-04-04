#include <javax/swing/text/rtf/RTFReader.h>
#include <java/awt/Color.h>
#include <java/io/BufferedReader.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/InputStreamReader.h>
#include <java/io/StreamTokenizer.h>
#include <java/lang/CharSequence.h>
#include <java/lang/InternalError.h>
#include <java/lang/Number.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/util/Dictionary.h>
#include <java/util/Enumeration.h>
#include <java/util/Hashtable.h>
#include <javax/swing/text/MutableAttributeSet.h>
#include <javax/swing/text/SimpleAttributeSet.h>
#include <javax/swing/text/Style.h>
#include <javax/swing/text/StyledDocument.h>
#include <javax/swing/text/rtf/AbstractFilter.h>
#include <javax/swing/text/rtf/Constants.h>
#include <javax/swing/text/rtf/MockAttributeSet.h>
#include <javax/swing/text/rtf/RTFAttributes.h>
#include <javax/swing/text/rtf/RTFParser.h>
#include <javax/swing/text/rtf/RTFReader$1.h>
#include <javax/swing/text/rtf/RTFReader$ColortblDestination.h>
#include <javax/swing/text/rtf/RTFReader$Destination.h>
#include <javax/swing/text/rtf/RTFReader$DiscardingDestination.h>
#include <javax/swing/text/rtf/RTFReader$DocumentDestination.h>
#include <javax/swing/text/rtf/RTFReader$FonttblDestination.h>
#include <javax/swing/text/rtf/RTFReader$InfoDestination.h>
#include <javax/swing/text/rtf/RTFReader$StylesheetDestination.h>
#include <jcpp.h>

#undef TT_NUMBER

using $Color = ::java::awt::Color;
using $BufferedReader = ::java::io::BufferedReader;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $InputStreamReader = ::java::io::InputStreamReader;
using $StreamTokenizer = ::java::io::StreamTokenizer;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $InternalError = ::java::lang::InternalError;
using $MethodInfo = ::java::lang::MethodInfo;
using $Number = ::java::lang::Number;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $Dictionary = ::java::util::Dictionary;
using $Enumeration = ::java::util::Enumeration;
using $Hashtable = ::java::util::Hashtable;
using $SimpleAttributeSet = ::javax::swing::text::SimpleAttributeSet;
using $StyledDocument = ::javax::swing::text::StyledDocument;
using $AbstractFilter = ::javax::swing::text::rtf::AbstractFilter;
using $Constants = ::javax::swing::text::rtf::Constants;
using $MockAttributeSet = ::javax::swing::text::rtf::MockAttributeSet;
using $RTFAttributes = ::javax::swing::text::rtf::RTFAttributes;
using $RTFParser = ::javax::swing::text::rtf::RTFParser;
using $RTFReader$1 = ::javax::swing::text::rtf::RTFReader$1;
using $RTFReader$ColortblDestination = ::javax::swing::text::rtf::RTFReader$ColortblDestination;
using $RTFReader$Destination = ::javax::swing::text::rtf::RTFReader$Destination;
using $RTFReader$DiscardingDestination = ::javax::swing::text::rtf::RTFReader$DiscardingDestination;
using $RTFReader$DocumentDestination = ::javax::swing::text::rtf::RTFReader$DocumentDestination;
using $RTFReader$FonttblDestination = ::javax::swing::text::rtf::RTFReader$FonttblDestination;
using $RTFReader$InfoDestination = ::javax::swing::text::rtf::RTFReader$InfoDestination;
using $RTFReader$StylesheetDestination = ::javax::swing::text::rtf::RTFReader$StylesheetDestination;

namespace javax {
	namespace swing {
		namespace text {
			namespace rtf {

$Dictionary* RTFReader::straightforwardAttributes = nullptr;
$Dictionary* RTFReader::textKeywords = nullptr;
$String* RTFReader::TabAlignmentKey = nullptr;
$String* RTFReader::TabLeaderKey = nullptr;
$Dictionary* RTFReader::characterSets = nullptr;
bool RTFReader::useNeXTForAnsi = false;

void RTFReader::init$($StyledDocument* destination) {
	$RTFParser::init$();
	int32_t i = 0;
	$set(this, target, destination);
	$set(this, parserState, $new($Hashtable));
	$set(this, fontTable, $new($Hashtable));
	this->rtfversion = -1;
	$set(this, mockery, $new($MockAttributeSet));
	$set(this, documentAttributes, $new($SimpleAttributeSet));
}

void RTFReader::handleBinaryBlob($bytes* data) {
	if (this->skippingCharacters > 0) {
		--this->skippingCharacters;
		return;
	}
}

void RTFReader::handleText($String* text$renamed) {
	$var($String, text, text$renamed);
	if (this->skippingCharacters > 0) {
		if (this->skippingCharacters >= $nc(text)->length()) {
			this->skippingCharacters -= text->length();
			return;
		} else {
			$assign(text, text->substring(this->skippingCharacters));
			this->skippingCharacters = 0;
		}
	}
	if (this->rtfDestination != nullptr) {
		this->rtfDestination->handleText(text);
		return;
	}
	warning("Text with no destination. oops."_s);
}

$Color* RTFReader::defaultColor() {
	$init($Color);
	return $Color::black;
}

void RTFReader::begingroup() {
	$useLocalObjectStack();
	if (this->skippingCharacters > 0) {
		this->skippingCharacters = 0;
	}
	$var($Object, oldSaveState, $nc(this->parserState)->get("_savedState"_s));
	if (oldSaveState != nullptr) {
		this->parserState->remove("_savedState"_s);
	}
	$var($Dictionary, saveState, $cast($Dictionary, $cast($Hashtable, this->parserState)->clone()));
	if (oldSaveState != nullptr) {
		$nc(saveState)->put("_savedState"_s, oldSaveState);
	}
	this->parserState->put("_savedState"_s, saveState);
	if (this->rtfDestination != nullptr) {
		this->rtfDestination->begingroup();
	}
}

void RTFReader::endgroup() {
	$useLocalObjectStack();
	if (this->skippingCharacters > 0) {
		this->skippingCharacters = 0;
	}
	$var($Dictionary, restoredState, $cast($Dictionary, $nc(this->parserState)->get("_savedState"_s)));
	$var($RTFReader$Destination, restoredDestination, $cast($RTFReader$Destination, $nc(restoredState)->get("dst"_s)));
	if (restoredDestination != this->rtfDestination) {
		$nc(this->rtfDestination)->close();
		$set(this, rtfDestination, restoredDestination);
	}
	$var($Dictionary, oldParserState, this->parserState);
	$set(this, parserState, restoredState);
	if (this->rtfDestination != nullptr) {
		this->rtfDestination->endgroup(oldParserState);
	}
}

void RTFReader::setRTFDestination($RTFReader$Destination* newDestination) {
	$var($Dictionary, previousState, $cast($Dictionary, $nc(this->parserState)->get("_savedState"_s)));
	if (previousState != nullptr) {
		if (!$equals(this->rtfDestination, previousState->get("dst"_s))) {
			warning("Warning, RTF destination overridden, invalid RTF."_s);
			$nc(this->rtfDestination)->close();
		}
	}
	$set(this, rtfDestination, newDestination);
	$nc(this->parserState)->put("dst"_s, this->rtfDestination);
}

void RTFReader::close() {
	$useLocalObjectStack();
	$var($Enumeration, docProps, $nc(this->documentAttributes)->getAttributeNames());
	while ($nc(docProps)->hasMoreElements()) {
		$var($Object, propName, docProps->nextElement());
		$nc(this->target)->putProperty(propName, $($nc(this->documentAttributes)->getAttribute(propName)));
	}
	warning("RTF filter done."_s);
	$RTFParser::close();
}

bool RTFReader::handleKeyword($String* keyword) {
	$useLocalObjectStack();
	$var($String, item, nullptr);
	bool ignoreGroupIfUnknownKeywordSave = this->ignoreGroupIfUnknownKeyword;
	if (this->skippingCharacters > 0) {
		--this->skippingCharacters;
		return true;
	}
	this->ignoreGroupIfUnknownKeyword = false;
	if (($assign(item, $cast($String, $nc(RTFReader::textKeywords)->get(keyword)))) != nullptr) {
		handleText(item);
		return true;
	}
	if ($nc(keyword)->equals("fonttbl"_s)) {
		setRTFDestination($$new($RTFReader$FonttblDestination, this));
		return true;
	}
	if (keyword->equals("colortbl"_s)) {
		setRTFDestination($$new($RTFReader$ColortblDestination, this));
		return true;
	}
	if (keyword->equals("stylesheet"_s)) {
		setRTFDestination($$new($RTFReader$StylesheetDestination, this));
		return true;
	}
	if (keyword->equals("info"_s)) {
		setRTFDestination($$new($RTFReader$InfoDestination, this));
		return false;
	}
	if (keyword->equals("mac"_s)) {
		setCharacterSet("mac"_s);
		return true;
	}
	if (keyword->equals("ansi"_s)) {
		if (RTFReader::useNeXTForAnsi) {
			setCharacterSet("NeXT"_s);
		} else {
			setCharacterSet("ansi"_s);
		}
		return true;
	}
	if (keyword->equals("next"_s)) {
		setCharacterSet("NeXT"_s);
		return true;
	}
	if (keyword->equals("pc"_s)) {
		setCharacterSet("cpg437"_s);
		return true;
	}
	if (keyword->equals("pca"_s)) {
		setCharacterSet("cpg850"_s);
		return true;
	}
	if (keyword->equals("*"_s)) {
		this->ignoreGroupIfUnknownKeyword = true;
		return true;
	}
	if (this->rtfDestination != nullptr) {
		if (this->rtfDestination->handleKeyword(keyword)) {
			return true;
		}
	}
	bool var$47 = keyword->equals("aftncn"_s);
	bool var$46 = var$47 || keyword->equals("aftnsep"_s);
	bool var$45 = var$46 || keyword->equals("aftnsepc"_s);
	bool var$44 = var$45 || keyword->equals("annotation"_s);
	bool var$43 = var$44 || keyword->equals("atnauthor"_s);
	bool var$42 = var$43 || keyword->equals("atnicn"_s);
	bool var$41 = var$42 || keyword->equals("atnid"_s);
	bool var$40 = var$41 || keyword->equals("atnref"_s);
	bool var$39 = var$40 || keyword->equals("atntime"_s);
	bool var$38 = var$39 || keyword->equals("atrfend"_s);
	bool var$37 = var$38 || keyword->equals("atrfstart"_s);
	bool var$36 = var$37 || keyword->equals("bkmkend"_s);
	bool var$35 = var$36 || keyword->equals("bkmkstart"_s);
	bool var$34 = var$35 || keyword->equals("datafield"_s);
	bool var$33 = var$34 || keyword->equals("do"_s);
	bool var$32 = var$33 || keyword->equals("dptxbxtext"_s);
	bool var$31 = var$32 || keyword->equals("falt"_s);
	bool var$30 = var$31 || keyword->equals("field"_s);
	bool var$29 = var$30 || keyword->equals("file"_s);
	bool var$28 = var$29 || keyword->equals("filetbl"_s);
	bool var$27 = var$28 || keyword->equals("fname"_s);
	bool var$26 = var$27 || keyword->equals("fontemb"_s);
	bool var$25 = var$26 || keyword->equals("fontfile"_s);
	bool var$24 = var$25 || keyword->equals("footer"_s);
	bool var$23 = var$24 || keyword->equals("footerf"_s);
	bool var$22 = var$23 || keyword->equals("footerl"_s);
	bool var$21 = var$22 || keyword->equals("footerr"_s);
	bool var$20 = var$21 || keyword->equals("footnote"_s);
	bool var$19 = var$20 || keyword->equals("ftncn"_s);
	bool var$18 = var$19 || keyword->equals("ftnsep"_s);
	bool var$17 = var$18 || keyword->equals("ftnsepc"_s);
	bool var$16 = var$17 || keyword->equals("header"_s);
	bool var$15 = var$16 || keyword->equals("headerf"_s);
	bool var$14 = var$15 || keyword->equals("headerl"_s);
	bool var$13 = var$14 || keyword->equals("headerr"_s);
	bool var$12 = var$13 || keyword->equals("keycode"_s);
	bool var$11 = var$12 || keyword->equals("nextfile"_s);
	bool var$10 = var$11 || keyword->equals("object"_s);
	bool var$9 = var$10 || keyword->equals("pict"_s);
	bool var$8 = var$9 || keyword->equals("pn"_s);
	bool var$7 = var$8 || keyword->equals("pnseclvl"_s);
	bool var$6 = var$7 || keyword->equals("pntxtb"_s);
	bool var$5 = var$6 || keyword->equals("pntxta"_s);
	bool var$4 = var$5 || keyword->equals("revtbl"_s);
	bool var$3 = var$4 || keyword->equals("rxe"_s);
	bool var$2 = var$3 || keyword->equals("tc"_s);
	bool var$1 = var$2 || keyword->equals("template"_s);
	bool var$0 = var$1 || keyword->equals("txe"_s);
	if (var$0 || keyword->equals("xe"_s)) {
		ignoreGroupIfUnknownKeywordSave = true;
	}
	if (ignoreGroupIfUnknownKeywordSave) {
		setRTFDestination($$new($RTFReader$DiscardingDestination, this));
	}
	return false;
}

bool RTFReader::handleKeyword($String* keyword, int32_t parameter) {
	$useLocalObjectStack();
	bool ignoreGroupIfUnknownKeywordSave = this->ignoreGroupIfUnknownKeyword;
	if (this->skippingCharacters > 0) {
		--this->skippingCharacters;
		return true;
	}
	this->ignoreGroupIfUnknownKeyword = false;
	if ($nc(keyword)->equals("uc"_s)) {
		$nc(this->parserState)->put("UnicodeSkip"_s, $($Integer::valueOf(parameter)));
		return true;
	}
	if (keyword->equals("u"_s)) {
		if (parameter < 0) {
			parameter = parameter + 0x00010000;
		}
		handleText((char16_t)parameter);
		$var($Number, skip, $cast($Number, $nc(this->parserState)->get("UnicodeSkip"_s)));
		if (skip != nullptr) {
			this->skippingCharacters = skip->intValue();
		} else {
			this->skippingCharacters = 1;
		}
		return true;
	}
	if (keyword->equals("rtf"_s)) {
		this->rtfversion = parameter;
		setRTFDestination($$new($RTFReader$DocumentDestination, this));
		return true;
	}
	bool var$0 = keyword->startsWith("NeXT"_s);
	if (var$0 || keyword->equals("private"_s)) {
		ignoreGroupIfUnknownKeywordSave = true;
	}
	if (keyword->contains("ansicpg"_s)) {
		setCharacterSet("ansicpg"_s);
		return true;
	}
	if (this->rtfDestination != nullptr) {
		if (this->rtfDestination->handleKeyword(keyword, parameter)) {
			return true;
		}
	}
	if (ignoreGroupIfUnknownKeywordSave) {
		setRTFDestination($$new($RTFReader$DiscardingDestination, this));
	}
	return false;
}

void RTFReader::setTargetAttribute($String* name, Object$* value) {
}

void RTFReader::setCharacterSet($String* name) {
	$useLocalObjectStack();
	$var($Object, set, nullptr);
	try {
		$assign(set, getCharacterSet(name));
	} catch ($Exception& e) {
		warning($$str({"Exception loading RTF character set \""_s, name, "\": "_s, e}));
		$assign(set, nullptr);
	}
	if (set != nullptr) {
		$set(this, translationTable, $cast($chars, set));
	} else {
		warning($$str({"Unknown RTF character set \""_s, name, "\""_s}));
		if (!$nc(name)->equals("ansi"_s)) {
			try {
				$set(this, translationTable, $cast($chars, getCharacterSet("ansi"_s)));
			} catch ($IOException& e) {
				$throwNew($InternalError, $$str({"RTFReader: Unable to find character set resources ("_s, e, ")"_s}), e);
			}
		}
	}
	$init($Constants);
	setTargetAttribute($Constants::RTFCharacterSet, name);
}

void RTFReader::defineCharacterSet($String* name, $chars* table) {
	$init(RTFReader);
	if ($nc(table)->length < 256) {
		$throwNew($IllegalArgumentException, "Translation table must have 256 entries."_s);
	}
	$nc(RTFReader::characterSets)->put(name, table);
}

$Object* RTFReader::getCharacterSet($String* name) {
	$init(RTFReader);
	$useLocalObjectStack();
	$beforeCallerSensitive();
	$var($chars, set, $cast($chars, $nc(RTFReader::characterSets)->get(name)));
	if (set == nullptr) {
		$var($InputStream, charsetStream, $cast($InputStream, $AccessController::doPrivileged($$new($RTFReader$1, name))));
		$assign(set, readCharset(charsetStream));
		defineCharacterSet(name, set);
	}
	return set;
}

$chars* RTFReader::readCharset($InputStream* strm) {
	$init(RTFReader);
	$useLocalObjectStack();
	$var($chars, values, $new($chars, 256));
	int32_t i = 0;
	$var($StreamTokenizer, in, $new($StreamTokenizer, $$new($BufferedReader, $$new($InputStreamReader, strm, "ISO-8859-1"_s))));
	in->eolIsSignificant(false);
	in->commentChar(u'#');
	in->slashSlashComments(true);
	in->slashStarComments(true);
	i = 0;
	while (i < 256) {
		int32_t ttype = 0;
		try {
			ttype = in->nextToken();
		} catch ($Exception& e) {
			$throwNew($IOException, $$str({"Unable to read from character set file ("_s, e, ")"_s}));
		}
		if (ttype != $StreamTokenizer::TT_NUMBER) {
			$throwNew($IOException, "Unexpected token in character set file"_s);
		}
		values->set(i, (char16_t)(in->nval));
		++i;
	}
	return values;
}

$chars* RTFReader::readCharset($URL* href) {
	$init(RTFReader);
	return readCharset($($nc(href)->openStream()));
}

void RTFReader::clinit$($Class* clazz) {
	$assignStatic(RTFReader::TabAlignmentKey, "tab_alignment"_s);
	$assignStatic(RTFReader::TabLeaderKey, "tab_leader"_s);
	{
		$assignStatic(RTFReader::straightforwardAttributes, $RTFAttributes::attributesByKeyword());
	}
	$assignStatic(RTFReader::textKeywords, nullptr);
	{
		$assignStatic(RTFReader::textKeywords, $new($Hashtable));
		RTFReader::textKeywords->put("\\"_s, "\\"_s);
		RTFReader::textKeywords->put("{"_s, "{"_s);
		RTFReader::textKeywords->put("}"_s, "}"_s);
		RTFReader::textKeywords->put(" "_s, u" "_s);
		RTFReader::textKeywords->put("~"_s, u" "_s);
		RTFReader::textKeywords->put("_"_s, u"‑"_s);
		RTFReader::textKeywords->put("bullet"_s, u"•"_s);
		RTFReader::textKeywords->put("emdash"_s, u"—"_s);
		RTFReader::textKeywords->put("emspace"_s, u" "_s);
		RTFReader::textKeywords->put("endash"_s, u"–"_s);
		RTFReader::textKeywords->put("enspace"_s, u" "_s);
		RTFReader::textKeywords->put("ldblquote"_s, u"“"_s);
		RTFReader::textKeywords->put("lquote"_s, u"‘"_s);
		RTFReader::textKeywords->put("ltrmark"_s, u"\u200e"_s);
		RTFReader::textKeywords->put("rdblquote"_s, u"”"_s);
		RTFReader::textKeywords->put("rquote"_s, u"’"_s);
		RTFReader::textKeywords->put("rtlmark"_s, u"\u200f"_s);
		RTFReader::textKeywords->put("tab"_s, "\t"_s);
		RTFReader::textKeywords->put("zwj"_s, u"\u200d"_s);
		RTFReader::textKeywords->put("zwnj"_s, u"\u200c"_s);
		RTFReader::textKeywords->put("-"_s, u"‧"_s);
	}
	RTFReader::useNeXTForAnsi = false;
	{
		$assignStatic(RTFReader::characterSets, $new($Hashtable));
		$init($AbstractFilter);
		RTFReader::defineCharacterSet("ansicpg"_s, $AbstractFilter::latin1TranslationTable);
	}
}

RTFReader::RTFReader() {
}

$Class* RTFReader::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"target", "Ljavax/swing/text/StyledDocument;", nullptr, 0, $field(RTFReader, target)},
		{"parserState", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/Object;Ljava/lang/Object;>;", 0, $field(RTFReader, parserState)},
		{"rtfDestination", "Ljavax/swing/text/rtf/RTFReader$Destination;", nullptr, 0, $field(RTFReader, rtfDestination)},
		{"documentAttributes", "Ljavax/swing/text/MutableAttributeSet;", nullptr, 0, $field(RTFReader, documentAttributes)},
		{"fontTable", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/Integer;Ljava/lang/String;>;", 0, $field(RTFReader, fontTable)},
		{"colorTable", "[Ljava/awt/Color;", nullptr, 0, $field(RTFReader, colorTable)},
		{"characterStyles", "[Ljavax/swing/text/Style;", nullptr, 0, $field(RTFReader, characterStyles)},
		{"paragraphStyles", "[Ljavax/swing/text/Style;", nullptr, 0, $field(RTFReader, paragraphStyles)},
		{"sectionStyles", "[Ljavax/swing/text/Style;", nullptr, 0, $field(RTFReader, sectionStyles)},
		{"rtfversion", "I", nullptr, 0, $field(RTFReader, rtfversion)},
		{"ignoreGroupIfUnknownKeyword", "Z", nullptr, 0, $field(RTFReader, ignoreGroupIfUnknownKeyword)},
		{"skippingCharacters", "I", nullptr, 0, $field(RTFReader, skippingCharacters)},
		{"straightforwardAttributes", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/String;Ljavax/swing/text/rtf/RTFAttribute;>;", $PRIVATE | $STATIC, $staticField(RTFReader, straightforwardAttributes)},
		{"mockery", "Ljavax/swing/text/rtf/MockAttributeSet;", nullptr, $PRIVATE, $field(RTFReader, mockery)},
		{"textKeywords", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/String;Ljava/lang/String;>;", $STATIC, $staticField(RTFReader, textKeywords)},
		{"TabAlignmentKey", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(RTFReader, TabAlignmentKey)},
		{"TabLeaderKey", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(RTFReader, TabLeaderKey)},
		{"characterSets", "Ljava/util/Dictionary;", "Ljava/util/Dictionary<Ljava/lang/String;[C>;", $STATIC, $staticField(RTFReader, characterSets)},
		{"useNeXTForAnsi", "Z", nullptr, $STATIC, $staticField(RTFReader, useNeXTForAnsi)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "(Ljavax/swing/text/StyledDocument;)V", nullptr, $PUBLIC, $method(RTFReader, init$, void, $StyledDocument*)},
		{"begingroup", "()V", nullptr, $PUBLIC, $virtualMethod(RTFReader, begingroup, void)},
		{"close", "()V", nullptr, $PUBLIC, $virtualMethod(RTFReader, close, void), "java.io.IOException"},
		{"defaultColor", "()Ljava/awt/Color;", nullptr, 0, $virtualMethod(RTFReader, defaultColor, $Color*)},
		{"defineCharacterSet", "(Ljava/lang/String;[C)V", nullptr, $PUBLIC | $STATIC, $staticMethod(RTFReader, defineCharacterSet, void, $String*, $chars*)},
		{"endgroup", "()V", nullptr, $PUBLIC, $virtualMethod(RTFReader, endgroup, void)},
		{"getCharacterSet", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $STATIC, $staticMethod(RTFReader, getCharacterSet, $Object*, $String*), "java.io.IOException"},
		{"handleBinaryBlob", "([B)V", nullptr, $PUBLIC, $virtualMethod(RTFReader, handleBinaryBlob, void, $bytes*)},
		{"handleKeyword", "(Ljava/lang/String;)Z", nullptr, $PUBLIC, $virtualMethod(RTFReader, handleKeyword, bool, $String*)},
		{"handleKeyword", "(Ljava/lang/String;I)Z", nullptr, $PUBLIC, $virtualMethod(RTFReader, handleKeyword, bool, $String*, int32_t)},
		{"handleText", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(RTFReader, handleText, void, $String*)},
		{"readCharset", "(Ljava/io/InputStream;)[C", nullptr, $STATIC, $staticMethod(RTFReader, readCharset, $chars*, $InputStream*), "java.io.IOException"},
		{"readCharset", "(Ljava/net/URL;)[C", nullptr, $STATIC, $staticMethod(RTFReader, readCharset, $chars*, $URL*), "java.io.IOException"},
		{"setCharacterSet", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(RTFReader, setCharacterSet, void, $String*)},
		{"setRTFDestination", "(Ljavax/swing/text/rtf/RTFReader$Destination;)V", nullptr, $PROTECTED, $virtualMethod(RTFReader, setRTFDestination, void, $RTFReader$Destination*)},
		{"setTargetAttribute", "(Ljava/lang/String;Ljava/lang/Object;)V", nullptr, $PRIVATE, $method(RTFReader, setTargetAttribute, void, $String*, Object$*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"javax.swing.text.rtf.RTFReader$DocumentDestination", "javax.swing.text.rtf.RTFReader", "DocumentDestination", 0},
		{"javax.swing.text.rtf.RTFReader$TextHandlingDestination", "javax.swing.text.rtf.RTFReader", "TextHandlingDestination", $ABSTRACT},
		{"javax.swing.text.rtf.RTFReader$AttributeTrackingDestination", "javax.swing.text.rtf.RTFReader", "AttributeTrackingDestination", $ABSTRACT},
		{"javax.swing.text.rtf.RTFReader$InfoDestination", "javax.swing.text.rtf.RTFReader", "InfoDestination", 0},
		{"javax.swing.text.rtf.RTFReader$StylesheetDestination", "javax.swing.text.rtf.RTFReader", "StylesheetDestination", 0},
		{"javax.swing.text.rtf.RTFReader$ColortblDestination", "javax.swing.text.rtf.RTFReader", "ColortblDestination", 0},
		{"javax.swing.text.rtf.RTFReader$FonttblDestination", "javax.swing.text.rtf.RTFReader", "FonttblDestination", 0},
		{"javax.swing.text.rtf.RTFReader$DiscardingDestination", "javax.swing.text.rtf.RTFReader", "DiscardingDestination", 0},
		{"javax.swing.text.rtf.RTFReader$Destination", "javax.swing.text.rtf.RTFReader", "Destination", $STATIC | $INTERFACE | $ABSTRACT},
		{"javax.swing.text.rtf.RTFReader$1", nullptr, nullptr, 0},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"javax.swing.text.rtf.RTFReader",
		"javax.swing.text.rtf.RTFParser",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"javax.swing.text.rtf.RTFReader$DocumentDestination,javax.swing.text.rtf.RTFReader$TextHandlingDestination,javax.swing.text.rtf.RTFReader$AttributeTrackingDestination,javax.swing.text.rtf.RTFReader$InfoDestination,javax.swing.text.rtf.RTFReader$StylesheetDestination,javax.swing.text.rtf.RTFReader$StylesheetDestination$StyleDefiningDestination,javax.swing.text.rtf.RTFReader$ColortblDestination,javax.swing.text.rtf.RTFReader$FonttblDestination,javax.swing.text.rtf.RTFReader$DiscardingDestination,javax.swing.text.rtf.RTFReader$Destination,javax.swing.text.rtf.RTFReader$1"
	};
	$loadClass(RTFReader, name, initialize, &classInfo$$, RTFReader::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(RTFReader));
	});
	return class$;
}

$Class* RTFReader::class$ = nullptr;

			} // rtf
		} // text
	} // swing
} // javax
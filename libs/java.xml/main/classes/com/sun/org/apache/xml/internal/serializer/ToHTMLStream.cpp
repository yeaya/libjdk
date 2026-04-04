#include <com/sun/org/apache/xml/internal/serializer/ToHTMLStream.h>
#include <com/sun/org/apache/xml/internal/serializer/AttributesImplSerializer.h>
#include <com/sun/org/apache/xml/internal/serializer/CharInfo.h>
#include <com/sun/org/apache/xml/internal/serializer/ElemContext.h>
#include <com/sun/org/apache/xml/internal/serializer/ElemDesc.h>
#include <com/sun/org/apache/xml/internal/serializer/Encodings.h>
#include <com/sun/org/apache/xml/internal/serializer/ExtendedContentHandler.h>
#include <com/sun/org/apache/xml/internal/serializer/Method.h>
#include <com/sun/org/apache/xml/internal/serializer/NamespaceMappings.h>
#include <com/sun/org/apache/xml/internal/serializer/OutputPropertiesFactory.h>
#include <com/sun/org/apache/xml/internal/serializer/OutputPropertyUtils.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerBase.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerConstants.h>
#include <com/sun/org/apache/xml/internal/serializer/SerializerTrace.h>
#include <com/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie.h>
#include <com/sun/org/apache/xml/internal/serializer/ToStream.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Messages.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/MsgKey.h>
#include <com/sun/org/apache/xml/internal/serializer/utils/Utils.h>
#include <java/io/IOException.h>
#include <java/io/Writer.h>
#include <java/lang/NumberFormatException.h>
#include <java/util/List.h>
#include <java/util/Properties.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/Result.h>
#include <org/xml/sax/Attributes.h>
#include <org/xml/sax/SAXException.h>
#include <org/xml/sax/helpers/AttributesImpl.h>
#include <jcpp.h>

#undef ASPECIAL
#undef ATTREMPTY
#undef ATTRURL
#undef BLOCK
#undef BLOCKFORM
#undef BLOCKFORMFIELDSET
#undef EMPTY
#undef EMPTYSTRING
#undef ER_OIERROR
#undef FONTSTYLE
#undef FORMCTRL
#undef HEAD
#undef HEADELEM
#undef HEADMISC
#undef HTML
#undef HTML_ATTREMPTY
#undef HTML_ATTRURL
#undef HTML_ENTITIES_RESOURCE
#undef INLINELABEL
#undef LIST
#undef NO_BAD_CHARS
#undef PHRASE
#undef PI_DISABLE_OUTPUT_ESCAPING
#undef PI_ENABLE_OUTPUT_ESCAPING
#undef PREFORMATTED
#undef RAW
#undef SPECIAL
#undef S_OMIT_META_TAG
#undef S_USE_URL_ESCAPING
#undef WHITESPACESENSITIVE

using $CharInfo = ::com::sun::org::apache::xml::internal::serializer::CharInfo;
using $ElemContext = ::com::sun::org::apache::xml::internal::serializer::ElemContext;
using $ElemDesc = ::com::sun::org::apache::xml::internal::serializer::ElemDesc;
using $Encodings = ::com::sun::org::apache::xml::internal::serializer::Encodings;
using $ExtendedContentHandler = ::com::sun::org::apache::xml::internal::serializer::ExtendedContentHandler;
using $Method = ::com::sun::org::apache::xml::internal::serializer::Method;
using $NamespaceMappings = ::com::sun::org::apache::xml::internal::serializer::NamespaceMappings;
using $OutputPropertiesFactory = ::com::sun::org::apache::xml::internal::serializer::OutputPropertiesFactory;
using $OutputPropertyUtils = ::com::sun::org::apache::xml::internal::serializer::OutputPropertyUtils;
using $SerializerConstants = ::com::sun::org::apache::xml::internal::serializer::SerializerConstants;
using $ToHTMLStream$Trie = ::com::sun::org::apache::xml::internal::serializer::ToHTMLStream$Trie;
using $ToStream = ::com::sun::org::apache::xml::internal::serializer::ToStream;
using $MsgKey = ::com::sun::org::apache::xml::internal::serializer::utils::MsgKey;
using $Utils = ::com::sun::org::apache::xml::internal::serializer::utils::Utils;
using $IOException = ::java::io::IOException;
using $Writer = ::java::io::Writer;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Properties = ::java::util::Properties;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $Result = ::javax::xml::transform::Result;
using $Attributes = ::org::xml::sax::Attributes;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace serializer {

$CharInfo* ToHTMLStream::m_htmlcharInfo = nullptr;
$ToHTMLStream$Trie* ToHTMLStream::m_elementFlags = nullptr;
$ElemDesc* ToHTMLStream::m_dummy = nullptr;

void ToHTMLStream::initTagReference($ToHTMLStream$Trie* m_elementFlags) {
	$init(ToHTMLStream);
	$useLocalObjectStack();
	$nc(m_elementFlags)->put("BASEFONT"_s, $$new($ElemDesc, 0 | $ElemDesc::EMPTY));
	m_elementFlags->put("FRAME"_s, $$new($ElemDesc, (0 | $ElemDesc::EMPTY) | $ElemDesc::BLOCK));
	m_elementFlags->put("FRAMESET"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("NOFRAMES"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("ISINDEX"_s, $$new($ElemDesc, (0 | $ElemDesc::EMPTY) | $ElemDesc::BLOCK));
	m_elementFlags->put("APPLET"_s, $$new($ElemDesc, 0 | $ElemDesc::WHITESPACESENSITIVE));
	m_elementFlags->put("CENTER"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("DIR"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("MENU"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("TT"_s, $$new($ElemDesc, 0 | $ElemDesc::FONTSTYLE));
	m_elementFlags->put("I"_s, $$new($ElemDesc, 0 | $ElemDesc::FONTSTYLE));
	m_elementFlags->put("B"_s, $$new($ElemDesc, 0 | $ElemDesc::FONTSTYLE));
	m_elementFlags->put("BIG"_s, $$new($ElemDesc, 0 | $ElemDesc::FONTSTYLE));
	m_elementFlags->put("SMALL"_s, $$new($ElemDesc, 0 | $ElemDesc::FONTSTYLE));
	m_elementFlags->put("EM"_s, $$new($ElemDesc, 0 | $ElemDesc::PHRASE));
	m_elementFlags->put("STRONG"_s, $$new($ElemDesc, 0 | $ElemDesc::PHRASE));
	m_elementFlags->put("DFN"_s, $$new($ElemDesc, 0 | $ElemDesc::PHRASE));
	m_elementFlags->put("CODE"_s, $$new($ElemDesc, 0 | $ElemDesc::PHRASE));
	m_elementFlags->put("SAMP"_s, $$new($ElemDesc, 0 | $ElemDesc::PHRASE));
	m_elementFlags->put("KBD"_s, $$new($ElemDesc, 0 | $ElemDesc::PHRASE));
	m_elementFlags->put("VAR"_s, $$new($ElemDesc, 0 | $ElemDesc::PHRASE));
	m_elementFlags->put("CITE"_s, $$new($ElemDesc, 0 | $ElemDesc::PHRASE));
	m_elementFlags->put("ABBR"_s, $$new($ElemDesc, 0 | $ElemDesc::PHRASE));
	m_elementFlags->put("ACRONYM"_s, $$new($ElemDesc, 0 | $ElemDesc::PHRASE));
	m_elementFlags->put("SUP"_s, $$new($ElemDesc, (0 | $ElemDesc::SPECIAL) | $ElemDesc::ASPECIAL));
	m_elementFlags->put("SUB"_s, $$new($ElemDesc, (0 | $ElemDesc::SPECIAL) | $ElemDesc::ASPECIAL));
	m_elementFlags->put("SPAN"_s, $$new($ElemDesc, (0 | $ElemDesc::SPECIAL) | $ElemDesc::ASPECIAL));
	m_elementFlags->put("BDO"_s, $$new($ElemDesc, (0 | $ElemDesc::SPECIAL) | $ElemDesc::ASPECIAL));
	m_elementFlags->put("BR"_s, $$new($ElemDesc, (((0 | $ElemDesc::SPECIAL) | $ElemDesc::ASPECIAL) | $ElemDesc::EMPTY) | $ElemDesc::BLOCK));
	m_elementFlags->put("BODY"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("ADDRESS"_s, $$new($ElemDesc, ((0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM) | $ElemDesc::BLOCKFORMFIELDSET));
	m_elementFlags->put("DIV"_s, $$new($ElemDesc, ((0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM) | $ElemDesc::BLOCKFORMFIELDSET));
	m_elementFlags->put("A"_s, $$new($ElemDesc, 0 | $ElemDesc::SPECIAL));
	m_elementFlags->put("MAP"_s, $$new($ElemDesc, ((0 | $ElemDesc::SPECIAL) | $ElemDesc::ASPECIAL) | $ElemDesc::BLOCK));
	m_elementFlags->put("AREA"_s, $$new($ElemDesc, (0 | $ElemDesc::EMPTY) | $ElemDesc::BLOCK));
	m_elementFlags->put("LINK"_s, $$new($ElemDesc, ((0 | $ElemDesc::HEADMISC) | $ElemDesc::EMPTY) | $ElemDesc::BLOCK));
	m_elementFlags->put("IMG"_s, $$new($ElemDesc, (((0 | $ElemDesc::SPECIAL) | $ElemDesc::ASPECIAL) | $ElemDesc::EMPTY) | $ElemDesc::WHITESPACESENSITIVE));
	m_elementFlags->put("OBJECT"_s, $$new($ElemDesc, (((0 | $ElemDesc::SPECIAL) | $ElemDesc::ASPECIAL) | $ElemDesc::HEADMISC) | $ElemDesc::WHITESPACESENSITIVE));
	m_elementFlags->put("PARAM"_s, $$new($ElemDesc, 0 | $ElemDesc::EMPTY));
	m_elementFlags->put("HR"_s, $$new($ElemDesc, (((0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM) | $ElemDesc::BLOCKFORMFIELDSET) | $ElemDesc::EMPTY));
	m_elementFlags->put("P"_s, $$new($ElemDesc, ((0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM) | $ElemDesc::BLOCKFORMFIELDSET));
	m_elementFlags->put("H1"_s, $$new($ElemDesc, (0 | $ElemDesc::HEAD) | $ElemDesc::BLOCK));
	m_elementFlags->put("H2"_s, $$new($ElemDesc, (0 | $ElemDesc::HEAD) | $ElemDesc::BLOCK));
	m_elementFlags->put("H3"_s, $$new($ElemDesc, (0 | $ElemDesc::HEAD) | $ElemDesc::BLOCK));
	m_elementFlags->put("H4"_s, $$new($ElemDesc, (0 | $ElemDesc::HEAD) | $ElemDesc::BLOCK));
	m_elementFlags->put("H5"_s, $$new($ElemDesc, (0 | $ElemDesc::HEAD) | $ElemDesc::BLOCK));
	m_elementFlags->put("H6"_s, $$new($ElemDesc, (0 | $ElemDesc::HEAD) | $ElemDesc::BLOCK));
	m_elementFlags->put("PRE"_s, $$new($ElemDesc, (0 | $ElemDesc::PREFORMATTED) | $ElemDesc::BLOCK));
	m_elementFlags->put("Q"_s, $$new($ElemDesc, (0 | $ElemDesc::SPECIAL) | $ElemDesc::ASPECIAL));
	m_elementFlags->put("BLOCKQUOTE"_s, $$new($ElemDesc, ((0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM) | $ElemDesc::BLOCKFORMFIELDSET));
	m_elementFlags->put("INS"_s, $$new($ElemDesc, 0));
	m_elementFlags->put("DEL"_s, $$new($ElemDesc, 0));
	m_elementFlags->put("DL"_s, $$new($ElemDesc, ((0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM) | $ElemDesc::BLOCKFORMFIELDSET));
	m_elementFlags->put("DT"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("DD"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("OL"_s, $$new($ElemDesc, (0 | $ElemDesc::LIST) | $ElemDesc::BLOCK));
	m_elementFlags->put("UL"_s, $$new($ElemDesc, (0 | $ElemDesc::LIST) | $ElemDesc::BLOCK));
	m_elementFlags->put("LI"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("FORM"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("LABEL"_s, $$new($ElemDesc, 0 | $ElemDesc::FORMCTRL));
	m_elementFlags->put("INPUT"_s, $$new($ElemDesc, ((0 | $ElemDesc::FORMCTRL) | $ElemDesc::INLINELABEL) | $ElemDesc::EMPTY));
	m_elementFlags->put("SELECT"_s, $$new($ElemDesc, (0 | $ElemDesc::FORMCTRL) | $ElemDesc::INLINELABEL));
	m_elementFlags->put("OPTGROUP"_s, $$new($ElemDesc, 0));
	m_elementFlags->put("OPTION"_s, $$new($ElemDesc, 0));
	m_elementFlags->put("TEXTAREA"_s, $$new($ElemDesc, (0 | $ElemDesc::FORMCTRL) | $ElemDesc::INLINELABEL));
	m_elementFlags->put("FIELDSET"_s, $$new($ElemDesc, (0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM));
	m_elementFlags->put("LEGEND"_s, $$new($ElemDesc, 0));
	m_elementFlags->put("BUTTON"_s, $$new($ElemDesc, (0 | $ElemDesc::FORMCTRL) | $ElemDesc::INLINELABEL));
	m_elementFlags->put("TABLE"_s, $$new($ElemDesc, ((0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM) | $ElemDesc::BLOCKFORMFIELDSET));
	m_elementFlags->put("CAPTION"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("THEAD"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("TFOOT"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("TBODY"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("COLGROUP"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("COL"_s, $$new($ElemDesc, (0 | $ElemDesc::EMPTY) | $ElemDesc::BLOCK));
	m_elementFlags->put("TR"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("TH"_s, $$new($ElemDesc, 0));
	m_elementFlags->put("TD"_s, $$new($ElemDesc, 0));
	m_elementFlags->put("HEAD"_s, $$new($ElemDesc, (0 | $ElemDesc::BLOCK) | $ElemDesc::HEADELEM));
	m_elementFlags->put("TITLE"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("BASE"_s, $$new($ElemDesc, (0 | $ElemDesc::EMPTY) | $ElemDesc::BLOCK));
	m_elementFlags->put("META"_s, $$new($ElemDesc, ((0 | $ElemDesc::HEADMISC) | $ElemDesc::EMPTY) | $ElemDesc::BLOCK));
	m_elementFlags->put("STYLE"_s, $$new($ElemDesc, ((0 | $ElemDesc::HEADMISC) | $ElemDesc::RAW) | $ElemDesc::BLOCK));
	m_elementFlags->put("SCRIPT"_s, $$new($ElemDesc, (((0 | $ElemDesc::SPECIAL) | $ElemDesc::ASPECIAL) | $ElemDesc::HEADMISC) | $ElemDesc::RAW));
	m_elementFlags->put("NOSCRIPT"_s, $$new($ElemDesc, ((0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM) | $ElemDesc::BLOCKFORMFIELDSET));
	m_elementFlags->put("HTML"_s, $$new($ElemDesc, 0 | $ElemDesc::BLOCK));
	m_elementFlags->put("FONT"_s, $$new($ElemDesc, 0 | $ElemDesc::FONTSTYLE));
	m_elementFlags->put("S"_s, $$new($ElemDesc, 0 | $ElemDesc::FONTSTYLE));
	m_elementFlags->put("STRIKE"_s, $$new($ElemDesc, 0 | $ElemDesc::FONTSTYLE));
	m_elementFlags->put("U"_s, $$new($ElemDesc, 0 | $ElemDesc::FONTSTYLE));
	m_elementFlags->put("NOBR"_s, $$new($ElemDesc, 0 | $ElemDesc::FONTSTYLE));
	m_elementFlags->put("IFRAME"_s, $$new($ElemDesc, ((0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM) | $ElemDesc::BLOCKFORMFIELDSET));
	m_elementFlags->put("LAYER"_s, $$new($ElemDesc, ((0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM) | $ElemDesc::BLOCKFORMFIELDSET));
	m_elementFlags->put("ILAYER"_s, $$new($ElemDesc, ((0 | $ElemDesc::BLOCK) | $ElemDesc::BLOCKFORM) | $ElemDesc::BLOCKFORMFIELDSET));
	$var($ElemDesc, elemDesc, nullptr);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("a"_s)));
	$nc(elemDesc)->setAttr("HREF"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("NAME"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("area"_s)));
	$nc(elemDesc)->setAttr("HREF"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("NOHREF"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("base"_s)));
	$nc(elemDesc)->setAttr("HREF"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("button"_s)));
	$nc(elemDesc)->setAttr("DISABLED"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("blockquote"_s)));
	$nc(elemDesc)->setAttr("CITE"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("del"_s)));
	$nc(elemDesc)->setAttr("CITE"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("dir"_s)));
	$nc(elemDesc)->setAttr("COMPACT"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("div"_s)));
	$nc(elemDesc)->setAttr("SRC"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("NOWRAP"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("dl"_s)));
	$nc(elemDesc)->setAttr("COMPACT"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("form"_s)));
	$nc(elemDesc)->setAttr("ACTION"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("frame"_s)));
	$nc(elemDesc)->setAttr("SRC"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("LONGDESC"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("NORESIZE"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("head"_s)));
	$nc(elemDesc)->setAttr("PROFILE"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("hr"_s)));
	$nc(elemDesc)->setAttr("NOSHADE"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("iframe"_s)));
	$nc(elemDesc)->setAttr("SRC"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("LONGDESC"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("ilayer"_s)));
	$nc(elemDesc)->setAttr("SRC"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("img"_s)));
	$nc(elemDesc)->setAttr("SRC"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("LONGDESC"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("USEMAP"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("ISMAP"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("input"_s)));
	$nc(elemDesc)->setAttr("SRC"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("USEMAP"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("CHECKED"_s, $ElemDesc::ATTREMPTY);
	elemDesc->setAttr("DISABLED"_s, $ElemDesc::ATTREMPTY);
	elemDesc->setAttr("ISMAP"_s, $ElemDesc::ATTREMPTY);
	elemDesc->setAttr("READONLY"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("ins"_s)));
	$nc(elemDesc)->setAttr("CITE"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("layer"_s)));
	$nc(elemDesc)->setAttr("SRC"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("link"_s)));
	$nc(elemDesc)->setAttr("HREF"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("menu"_s)));
	$nc(elemDesc)->setAttr("COMPACT"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("object"_s)));
	$nc(elemDesc)->setAttr("CLASSID"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("CODEBASE"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("DATA"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("ARCHIVE"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("USEMAP"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("DECLARE"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("ol"_s)));
	$nc(elemDesc)->setAttr("COMPACT"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("optgroup"_s)));
	$nc(elemDesc)->setAttr("DISABLED"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("option"_s)));
	$nc(elemDesc)->setAttr("SELECTED"_s, $ElemDesc::ATTREMPTY);
	elemDesc->setAttr("DISABLED"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("q"_s)));
	$nc(elemDesc)->setAttr("CITE"_s, $ElemDesc::ATTRURL);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("script"_s)));
	$nc(elemDesc)->setAttr("SRC"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("FOR"_s, $ElemDesc::ATTRURL);
	elemDesc->setAttr("DEFER"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("select"_s)));
	$nc(elemDesc)->setAttr("DISABLED"_s, $ElemDesc::ATTREMPTY);
	elemDesc->setAttr("MULTIPLE"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("table"_s)));
	$nc(elemDesc)->setAttr("NOWRAP"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("td"_s)));
	$nc(elemDesc)->setAttr("NOWRAP"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("textarea"_s)));
	$nc(elemDesc)->setAttr("DISABLED"_s, $ElemDesc::ATTREMPTY);
	elemDesc->setAttr("READONLY"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("th"_s)));
	$nc(elemDesc)->setAttr("NOWRAP"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("tr"_s)));
	$nc(elemDesc)->setAttr("NOWRAP"_s, $ElemDesc::ATTREMPTY);
	$assign(elemDesc, $cast($ElemDesc, m_elementFlags->get("ul"_s)));
	$nc(elemDesc)->setAttr("COMPACT"_s, $ElemDesc::ATTREMPTY);
}

void ToHTMLStream::setSpecialEscapeURLs(bool bool$) {
	this->m_specialEscapeURLs = bool$;
}

void ToHTMLStream::setOmitMetaTag(bool bool$) {
	this->m_omitMetaTag = bool$;
}

void ToHTMLStream::setOutputFormat($Properties* format) {
	$init($OutputPropertiesFactory);
	this->m_specialEscapeURLs = $OutputPropertyUtils::getBooleanProperty($OutputPropertiesFactory::S_USE_URL_ESCAPING, format);
	this->m_omitMetaTag = $OutputPropertyUtils::getBooleanProperty($OutputPropertiesFactory::S_OMIT_META_TAG, format);
	$ToStream::setOutputFormat(format);
}

bool ToHTMLStream::getSpecialEscapeURLs() {
	return this->m_specialEscapeURLs;
}

bool ToHTMLStream::getOmitMetaTag() {
	return this->m_omitMetaTag;
}

$ElemDesc* ToHTMLStream::getElemDesc($String* name) {
	$init(ToHTMLStream);
	$var($Object, obj, ToHTMLStream::m_elementFlags->get(name));
	if (nullptr != obj) {
		return $cast($ElemDesc, obj);
	}
	return ToHTMLStream::m_dummy;
}

$ElemDesc* ToHTMLStream::getElemDesc2($String* name) {
	$var($Object, obj, $nc(this->m_htmlInfo)->get2(name));
	if (nullptr != obj) {
		return $cast($ElemDesc, obj);
	}
	return ToHTMLStream::m_dummy;
}

void ToHTMLStream::init$() {
	ToHTMLStream::init$(nullptr);
}

void ToHTMLStream::init$($ErrorListener* l) {
	$ToStream::init$(l);
	this->m_inDTD = false;
	this->m_isprevblock = false;
	this->m_specialEscapeURLs = true;
	this->m_omitMetaTag = false;
	$set(this, m_htmlInfo, $new($ToHTMLStream$Trie, ToHTMLStream::m_elementFlags));
	$set(this, m_charInfo, ToHTMLStream::m_htmlcharInfo);
	$set(this, m_prefixMap, $new($NamespaceMappings));
}

void ToHTMLStream::startDocumentInternal() {
	$useLocalObjectStack();
	$ToStream::startDocumentInternal();
	this->m_needToCallStartDocument = false;
	this->m_needToOutputDocTypeDecl = true;
	this->m_startNewLine = false;
	setOmitXMLDeclaration(true);
	if (true == this->m_needToOutputDocTypeDecl) {
		$var($String, doctypeSystem, getDoctypeSystem());
		$var($String, doctypePublic, getDoctypePublic());
		if ((nullptr != doctypeSystem) || (nullptr != doctypePublic)) {
			$var($Writer, writer, this->m_writer);
			try {
				$nc(writer)->write("<!DOCTYPE html"_s);
				if (nullptr != doctypePublic) {
					writer->write(" PUBLIC \""_s);
					writer->write(doctypePublic);
					writer->write(u'\"');
				}
				if (nullptr != doctypeSystem) {
					if (nullptr == doctypePublic) {
						writer->write(" SYSTEM \""_s);
					} else {
						writer->write(" \""_s);
					}
					writer->write(doctypeSystem);
					writer->write(u'\"');
				}
				writer->write(u'>');
				outputLineSep();
			} catch ($IOException& e) {
				$throwNew($SAXException, e);
			}
		}
	}
	this->m_needToOutputDocTypeDecl = false;
}

void ToHTMLStream::endDocument() {
	if (this->m_doIndent) {
		flushCharactersBuffer(false);
	}
	flushPending();
	if (this->m_doIndent && !this->m_isprevtext) {
		try {
			outputLineSep();
		} catch ($IOException& e) {
			$throwNew($SAXException, e);
		}
	}
	flushWriter();
	if (this->m_tracer != nullptr) {
		$ToStream::fireEndDoc();
	}
}

bool ToHTMLStream::shouldIndentForText() {
	return $ToStream::shouldIndentForText() && this->m_isprevblock;
}

bool ToHTMLStream::shouldFormatOutput() {
	return this->m_doIndent;
}

void ToHTMLStream::startElement($String* namespaceURI, $String* localName, $String* name, $Attributes* atts) {
	$useLocalObjectStack();
	if (this->m_doIndent) {
		++this->m_childNodeNum;
		flushCharactersBuffer(false);
	}
	$var($ElemContext, elemContext, this->m_elemContext);
	if ($nc(elemContext)->m_startTagOpen) {
		closeStartTag();
		elemContext->m_startTagOpen = false;
	} else if (this->m_cdataTagOpen) {
		closeCDATA();
		this->m_cdataTagOpen = false;
	} else if (this->m_needToCallStartDocument) {
		startDocumentInternal();
		this->m_needToCallStartDocument = false;
	}
	if (nullptr != namespaceURI && namespaceURI->length() > 0) {
		$ToStream::startElement(namespaceURI, localName, name, atts);
		return;
	}
	try {
		$var($ElemDesc, elemDesc, getElemDesc2(name));
		int32_t elemFlags = $nc(elemDesc)->getFlags();
		if (this->m_doIndent) {
			bool isBlockElement = (elemFlags & $ElemDesc::BLOCK) != 0;
			if ((elemContext->m_elementName != nullptr) && (isBlockElement || (!(this->m_isprevtext || !this->m_isprevblock)))) {
				this->m_startNewLine = true;
				indent();
			}
			this->m_isprevblock = isBlockElement;
		}
		if (atts != nullptr) {
			addAttributes(atts);
		}
		this->m_isprevtext = false;
		$var($Writer, writer, this->m_writer);
		$nc(writer)->write(u'<');
		writer->write(name);
		if (this->m_doIndent) {
			$nc(this->m_childNodeNumStack)->add($($Integer::valueOf(this->m_childNodeNum)));
			this->m_childNodeNum = 0;
		}
		if (this->m_tracer != nullptr) {
			firePseudoAttributes();
		}
		if ((elemFlags & $ElemDesc::EMPTY) != 0) {
			$set(this, m_elemContext, elemContext->push());
			$set($nc(this->m_elemContext), m_elementName, name);
			$set(this->m_elemContext, m_elementDesc, elemDesc);
			return;
		} else {
			$assign(elemContext, elemContext->push(namespaceURI, localName, name));
			$set(this, m_elemContext, elemContext);
			$set($nc(elemContext), m_elementDesc, elemDesc);
			elemContext->m_isRaw = (elemFlags & $ElemDesc::RAW) != 0;
			if (this->m_doIndent) {
				bool isBlockElement = (elemFlags & $ElemDesc::BLOCK) != 0;
				if (isBlockElement) {
					this->m_startNewLine = true;
				}
			}
		}
		if ((elemFlags & $ElemDesc::HEADELEM) != 0) {
			closeStartTag();
			elemContext->m_startTagOpen = false;
			if (!this->m_omitMetaTag) {
				if (this->m_doIndent) {
					indent();
				}
				writer->write("<META http-equiv=\"Content-Type\" content=\"text/html; charset="_s);
				$var($String, encoding, getEncoding());
				$var($String, encode, $Encodings::getMimeEncoding(encoding));
				writer->write(encode);
				writer->write("\">"_s);
			}
		}
	} catch ($IOException& e) {
		$throwNew($SAXException, e);
	}
}

void ToHTMLStream::endElement($String* namespaceURI, $String* localName, $String* name) {
	$useLocalObjectStack();
	if (this->m_doIndent) {
		flushCharactersBuffer(false);
	}
	if (this->m_cdataTagOpen) {
		closeCDATA();
	}
	if (nullptr != namespaceURI && namespaceURI->length() > 0) {
		$ToStream::endElement(namespaceURI, localName, name);
		return;
	}
	try {
		$var($ElemContext, elemContext, this->m_elemContext);
		$var($ElemDesc, elemDesc, $nc(elemContext)->m_elementDesc);
		int32_t elemFlags = $nc(elemDesc)->getFlags();
		bool elemEmpty = (elemFlags & $ElemDesc::EMPTY) != 0;
		if (this->m_doIndent) {
			bool isBlockElement = (elemFlags & $ElemDesc::BLOCK) != 0;
			bool shouldIndent = false;
			if (isBlockElement || (!(this->m_isprevtext || !this->m_isprevblock))) {
				this->m_startNewLine = true;
				shouldIndent = true;
			}
			if (!elemContext->m_startTagOpen && shouldIndent && (this->m_childNodeNum > 1 || !this->m_isprevtext)) {
				indent(elemContext->m_currentElemDepth - 1);
			}
			this->m_isprevblock = isBlockElement;
		}
		$var($Writer, writer, this->m_writer);
		if (!elemContext->m_startTagOpen) {
			$nc(writer)->write("</"_s);
			writer->write(name);
			writer->write(u'>');
		} else {
			if (this->m_tracer != nullptr) {
				$ToStream::fireStartElem(name);
			}
			int32_t nAttrs = $nc(this->m_attributes)->getLength();
			if (nAttrs > 0) {
				processAttributes(this->m_writer, nAttrs);
				$nc(this->m_attributes)->clear();
			}
			if (!elemEmpty) {
				$nc(writer)->write("></"_s);
				writer->write(name);
				writer->write(u'>');
			} else {
				$nc(writer)->write(u'>');
			}
		}
		if (this->m_doIndent) {
			this->m_childNodeNum = $$sure($Integer, $nc(this->m_childNodeNumStack)->remove($nc(this->m_childNodeNumStack)->size() - 1))->intValue();
			this->m_isprevtext = false;
		}
		if (this->m_tracer != nullptr) {
			$ToStream::fireEndElem(name);
		}
		if (elemEmpty) {
			$set(this, m_elemContext, elemContext->m_prev);
			return;
		}
		$set(this, m_elemContext, elemContext->m_prev);
	} catch ($IOException& e) {
		$throwNew($SAXException, e);
	}
}

void ToHTMLStream::processAttribute($Writer* writer, $String* name, $String* value, $ElemDesc* elemDesc) {
	$nc(writer)->write(u' ');
	bool var$1 = $nc(value)->length() == 0;
	bool var$0 = (var$1 || value->equalsIgnoreCase(name)) && elemDesc != nullptr;
	if (var$0 && elemDesc->isAttrFlagSet(name, $ElemDesc::ATTREMPTY)) {
		writer->write(name);
	} else {
		writer->write(name);
		writer->write("=\""_s);
		if (elemDesc != nullptr && elemDesc->isAttrFlagSet(name, $ElemDesc::ATTRURL)) {
			writeAttrURI(writer, value, this->m_specialEscapeURLs);
		} else {
			writeAttrString(writer, value, $(this->getEncoding()));
		}
		writer->write(u'\"');
	}
}

bool ToHTMLStream::isASCIIDigit(char16_t c) {
	return (c >= u'0' && c <= u'9');
}

$String* ToHTMLStream::makeHHString(int32_t i) {
	$init(ToHTMLStream);
	$useLocalObjectStack();
	$var($String, s, $$nc($Integer::toHexString(i))->toUpperCase());
	if (s->length() == 1) {
		$assign(s, $str({"0"_s, s}));
	}
	return s;
}

bool ToHTMLStream::isHHSign($String* str) {
	bool sign = true;
	try {
		char16_t r = (char16_t)$Integer::parseInt(str, 16);
	} catch ($NumberFormatException& e) {
		sign = false;
	}
	return sign;
}

void ToHTMLStream::writeAttrURI($Writer* writer, $String* string, bool doURLEscaping) {
	$useLocalObjectStack();
	int32_t end = $nc(string)->length();
	if (end > $nc(this->m_attrBuff)->length) {
		$set(this, m_attrBuff, $new($chars, end * 2 + 1));
	}
	string->getChars(0, end, this->m_attrBuff, 0);
	$var($chars, chars, this->m_attrBuff);
	int32_t cleanStart = 0;
	int32_t cleanLength = 0;
	char16_t ch = 0;
	for (int32_t i = 0; i < end; ++i) {
		ch = $nc(chars)->get(i);
		if ((ch < 32) || (ch > 126)) {
			if (cleanLength > 0) {
				$nc(writer)->write(chars, cleanStart, cleanLength);
				cleanLength = 0;
			}
			if (doURLEscaping) {
				if (ch <= 127) {
					$nc(writer)->write(u'%');
					writer->write($(makeHHString(ch)));
				} else if (ch <= 2047) {
					int32_t high = (ch >> 6) | 0xc0;
					int32_t low = (ch & 0x3f) | 0x80;
					$nc(writer)->write(u'%');
					writer->write($(makeHHString(high)));
					writer->write(u'%');
					writer->write($(makeHHString(low)));
				} else if ($Encodings::isHighUTF16Surrogate(ch)) {
					int32_t highSurrogate = ((int32_t)ch) & 0x03ff;
					int32_t wwww = ((highSurrogate & 0x03c0) >> 6);
					int32_t uuuuu = wwww + 1;
					int32_t zzzz = (highSurrogate & 0x3c) >> 2;
					int32_t yyyyyy = ((highSurrogate & 3) << 4) & 0x30;
					ch = chars->get(++i);
					int32_t lowSurrogate = ((int32_t)ch) & 0x03ff;
					yyyyyy = yyyyyy | ((lowSurrogate & 0x03c0) >> 6);
					int32_t xxxxxx = (lowSurrogate & 0x3f);
					int32_t byte1 = 0xf0 | (uuuuu >> 2);
					int32_t byte2 = (0x80 | (((uuuuu & 3) << 4) & 0x30)) | zzzz;
					int32_t byte3 = 0x80 | yyyyyy;
					int32_t byte4 = 0x80 | xxxxxx;
					$nc(writer)->write(u'%');
					writer->write($(makeHHString(byte1)));
					writer->write(u'%');
					writer->write($(makeHHString(byte2)));
					writer->write(u'%');
					writer->write($(makeHHString(byte3)));
					writer->write(u'%');
					writer->write($(makeHHString(byte4)));
				} else {
					int32_t high = (ch >> 12) | 0xe0;
					int32_t middle = ((ch & 0x0fc0) >> 6) | 0x80;
					int32_t low = (ch & 0x3f) | 0x80;
					$nc(writer)->write(u'%');
					writer->write($(makeHHString(high)));
					writer->write(u'%');
					writer->write($(makeHHString(middle)));
					writer->write(u'%');
					writer->write($(makeHHString(low)));
				}
			} else if (escapingNotNeeded(ch)) {
				$nc(writer)->write(ch);
			} else {
				$nc(writer)->write("&#"_s);
				writer->write($($Integer::toString(ch)));
				writer->write(u';');
			}
			cleanStart = i + 1;
		} else if (ch == u'\"') {
			if (cleanLength > 0) {
				$nc(writer)->write(chars, cleanStart, cleanLength);
				cleanLength = 0;
			}
			if (doURLEscaping) {
				$nc(writer)->write("%22"_s);
			} else {
				$nc(writer)->write("&quot;"_s);
			}
			cleanStart = i + 1;
		} else if (ch == u'&') {
			if (cleanLength > 0) {
				$nc(writer)->write(chars, cleanStart, cleanLength);
				cleanLength = 0;
			}
			$nc(writer)->write("&amp;"_s);
			cleanStart = i + 1;
		} else {
			++cleanLength;
		}
	}
	if (cleanLength > 1) {
		if (cleanStart == 0) {
			$nc(writer)->write(string);
		} else {
			$nc(writer)->write(chars, cleanStart, cleanLength);
		}
	} else if (cleanLength == 1) {
		$nc(writer)->write(ch);
	}
}

void ToHTMLStream::writeAttrString($Writer* writer, $String* string, $String* encoding) {
	$useLocalObjectStack();
	int32_t end = $nc(string)->length();
	if (end > $nc(this->m_attrBuff)->length) {
		$set(this, m_attrBuff, $new($chars, end * 2 + 1));
	}
	string->getChars(0, end, this->m_attrBuff, 0);
	$var($chars, chars, this->m_attrBuff);
	int32_t cleanStart = 0;
	int32_t cleanLength = 0;
	char16_t ch = 0;
	for (int32_t i = 0; i < end; ++i) {
		ch = $nc(chars)->get(i);
		bool var$0 = escapingNotNeeded(ch);
		if (var$0 && (!$nc(this->m_charInfo)->isSpecialAttrChar(ch))) {
			++cleanLength;
		} else if (u'<' == ch || u'>' == ch) {
			++cleanLength;
		} else if ((u'&' == ch) && ((i + 1) < end) && (u'{' == chars->get(i + 1))) {
			++cleanLength;
		} else {
			if (cleanLength > 0) {
				$nc(writer)->write(chars, cleanStart, cleanLength);
				cleanLength = 0;
			}
			int32_t pos = accumDefaultEntity(writer, ch, i, chars, end, false, true);
			if (i != pos) {
				i = pos - 1;
			} else {
				bool var$1 = $Encodings::isHighUTF16Surrogate(ch);
				if (var$1 || $Encodings::isLowUTF16Surrogate(ch)) {
					if (writeUTF16Surrogate(ch, chars, i, end) >= 0) {
						if ($Encodings::isHighUTF16Surrogate(ch)) {
							++i;
						}
					}
				}
				$var($String, outputStringForChar, $nc(this->m_charInfo)->getOutputStringForChar(ch));
				if (nullptr != outputStringForChar) {
					$nc(writer)->write(outputStringForChar);
				} else if (escapingNotNeeded(ch)) {
					$nc(writer)->write(ch);
				} else {
					$nc(writer)->write("&#"_s);
					writer->write($($Integer::toString(ch)));
					writer->write(u';');
				}
			}
			cleanStart = i + 1;
		}
	}
	if (cleanLength > 1) {
		if (cleanStart == 0) {
			$nc(writer)->write(string);
		} else {
			$nc(writer)->write(chars, cleanStart, cleanLength);
		}
	} else if (cleanLength == 1) {
		$nc(writer)->write(ch);
	}
}

void ToHTMLStream::characters($chars* chars, int32_t start, int32_t length) {
	if ($nc(this->m_elemContext)->m_isRaw) {
		try {
			if (this->m_elemContext->m_startTagOpen) {
				closeStartTag();
				$nc(this->m_elemContext)->m_startTagOpen = false;
			}
			writeNormalizedChars(chars, start, length, false, this->m_lineSepUse);
			this->m_isprevtext = true;
			if (this->m_tracer != nullptr) {
				$ToStream::fireCharEvent(chars, start, length);
			}
			return;
		} catch ($IOException& ioe) {
			$init($Utils);
			$init($MsgKey);
			$throwNew($SAXException, $($nc($Utils::messages)->createMessage($MsgKey::ER_OIERROR, nullptr)), ioe);
		}
	} else {
		$ToStream::characters(chars, start, length);
	}
}

void ToHTMLStream::cdata($chars* ch, int32_t start, int32_t length) {
	bool var$0 = nullptr != $nc(this->m_elemContext)->m_elementName;
	if (var$0) {
		bool var$1 = this->m_elemContext->m_elementName->equalsIgnoreCase("SCRIPT"_s);
		var$0 = var$1 || this->m_elemContext->m_elementName->equalsIgnoreCase("STYLE"_s);
	}
	if (var$0) {
		try {
			if (this->m_elemContext->m_startTagOpen) {
				closeStartTag();
				$nc(this->m_elemContext)->m_startTagOpen = false;
			}
			if (shouldIndent()) {
				indent();
			}
			writeNormalizedChars(ch, start, length, true, this->m_lineSepUse);
		} catch ($IOException& ioe) {
			$init($Utils);
			$init($MsgKey);
			$throwNew($SAXException, $($nc($Utils::messages)->createMessage($MsgKey::ER_OIERROR, nullptr)), ioe);
		}
	} else {
		$ToStream::cdata(ch, start, length);
	}
}

void ToHTMLStream::processingInstruction($String* target, $String* data) {
	if (this->m_doIndent) {
		++this->m_childNodeNum;
		flushCharactersBuffer(false);
	}
	flushPending();
	$init($Result);
	if ($nc(target)->equals($Result::PI_DISABLE_OUTPUT_ESCAPING)) {
		startNonEscaping();
	} else if (target->equals($Result::PI_ENABLE_OUTPUT_ESCAPING)) {
		endNonEscaping();
	} else {
		try {
			if ($nc(this->m_elemContext)->m_startTagOpen) {
				closeStartTag();
				$nc(this->m_elemContext)->m_startTagOpen = false;
			} else if (this->m_needToCallStartDocument) {
				startDocumentInternal();
			}
			if (shouldIndent()) {
				indent();
			}
			$var($Writer, writer, this->m_writer);
			$nc(writer)->write("<?"_s);
			writer->write(target);
			bool var$0 = $nc(data)->length() > 0;
			if (var$0 && !$Character::isSpaceChar(data->charAt(0))) {
				writer->write(u' ');
			}
			writer->write(data);
			writer->write(u'>');
			if ($nc(this->m_elemContext)->m_currentElemDepth <= 0) {
				outputLineSep();
			}
			this->m_startNewLine = true;
		} catch ($IOException& e) {
			$throwNew($SAXException, e);
		}
	}
	if (this->m_tracer != nullptr) {
		$ToStream::fireEscapingEvent(target, data);
	}
}

void ToHTMLStream::entityReference($String* name) {
	try {
		$var($Writer, writer, this->m_writer);
		$nc(writer)->write(u'&');
		writer->write(name);
		writer->write(u';');
	} catch ($IOException& e) {
		$throwNew($SAXException, e);
	}
}

void ToHTMLStream::endElement($String* elemName) {
	endElement(nullptr, nullptr, elemName);
}

void ToHTMLStream::processAttributes($Writer* writer, int32_t nAttrs) {
	$useLocalObjectStack();
	for (int32_t i = 0; i < nAttrs; ++i) {
		$var($String, var$0, $nc(this->m_attributes)->getQName(i));
		processAttribute(writer, var$0, $(this->m_attributes->getValue(i)), $nc(this->m_elemContext)->m_elementDesc);
	}
}

void ToHTMLStream::closeStartTag() {
	try {
		if (this->m_tracer != nullptr) {
			$ToStream::fireStartElem($nc(this->m_elemContext)->m_elementName);
		}
		int32_t nAttrs = $nc(this->m_attributes)->getLength();
		if (nAttrs > 0) {
			processAttributes(this->m_writer, nAttrs);
			$nc(this->m_attributes)->clear();
		}
		$nc(this->m_writer)->write(u'>');
		if (this->m_StringOfCDATASections != nullptr) {
			$nc(this->m_elemContext)->m_isCdataSection = isCdataSection();
		}
	} catch ($IOException& e) {
		$throwNew($SAXException, e);
	}
}

void ToHTMLStream::namespaceAfterStartElement($String* prefix, $String* uri) {
	if ($nc(this->m_elemContext)->m_elementURI == nullptr) {
		$var($String, prefix1, getPrefixPart(this->m_elemContext->m_elementName));
		$init($SerializerConstants);
		if (prefix1 == nullptr && $nc($SerializerConstants::EMPTYSTRING)->equals(prefix)) {
			$set($nc(this->m_elemContext), m_elementURI, uri);
		}
	}
	startPrefixMapping(prefix, uri, false);
}

void ToHTMLStream::startDTD($String* name, $String* publicId, $String* systemId) {
	this->m_inDTD = true;
	$ToStream::startDTD(name, publicId, systemId);
}

void ToHTMLStream::endDTD() {
	this->m_inDTD = false;
}

void ToHTMLStream::attributeDecl($String* eName, $String* aName, $String* type, $String* valueDefault, $String* value) {
}

void ToHTMLStream::elementDecl($String* name, $String* model) {
}

void ToHTMLStream::internalEntityDecl($String* name, $String* value) {
}

void ToHTMLStream::externalEntityDecl($String* name, $String* publicId, $String* systemId) {
}

void ToHTMLStream::addUniqueAttribute($String* name, $String* value, int32_t flags) {
	$useLocalObjectStack();
	try {
		$var($Writer, writer, this->m_writer);
		if ((flags & $ExtendedContentHandler::NO_BAD_CHARS) > 0 && $nc(ToHTMLStream::m_htmlcharInfo)->onlyQuotAmpLtGt) {
			$nc(writer)->write(u' ');
			writer->write(name);
			writer->write("=\""_s);
			writer->write(value);
			writer->write(u'\"');
		} else {
			bool var$0 = (flags & $ExtendedContentHandler::HTML_ATTREMPTY) > 0;
			if (var$0) {
				bool var$1 = $nc(value)->length() == 0;
				var$0 = var$1 || value->equalsIgnoreCase(name);
			}
			if (var$0) {
				$nc(writer)->write(u' ');
				writer->write(name);
			} else {
				$nc(writer)->write(u' ');
				writer->write(name);
				writer->write("=\""_s);
				if ((flags & $ExtendedContentHandler::HTML_ATTRURL) > 0) {
					writeAttrURI(writer, value, this->m_specialEscapeURLs);
				} else {
					writeAttrString(writer, value, $(this->getEncoding()));
				}
				writer->write(u'\"');
			}
		}
	} catch ($IOException& e) {
		$throwNew($SAXException, e);
	}
}

void ToHTMLStream::comment($chars* ch, int32_t start, int32_t length) {
	if (this->m_inDTD) {
		return;
	}
	$ToStream::comment(ch, start, length);
}

bool ToHTMLStream::reset() {
	bool ret = $ToStream::reset();
	if (!ret) {
		return false;
	}
	initToHTMLStream();
	return true;
}

void ToHTMLStream::initToHTMLStream() {
	this->m_isprevblock = false;
	this->m_inDTD = false;
	this->m_omitMetaTag = false;
	this->m_specialEscapeURLs = true;
}

void ToHTMLStream::clinit$($Class* clazz) {
	$init($CharInfo);
	$init($Method);
	$assignStatic(ToHTMLStream::m_htmlcharInfo, $CharInfo::getCharInfoInternal($CharInfo::HTML_ENTITIES_RESOURCE, $Method::HTML));
	$assignStatic(ToHTMLStream::m_elementFlags, $new($ToHTMLStream$Trie));
	{
		ToHTMLStream::initTagReference(ToHTMLStream::m_elementFlags);
	}
	$assignStatic(ToHTMLStream::m_dummy, $new($ElemDesc, 0 | $ElemDesc::BLOCK));
}

ToHTMLStream::ToHTMLStream() {
}

$Class* ToHTMLStream::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"m_inDTD", "Z", nullptr, $PROTECTED, $field(ToHTMLStream, m_inDTD)},
		{"m_isprevblock", "Z", nullptr, $PRIVATE, $field(ToHTMLStream, m_isprevblock)},
		{"m_htmlcharInfo", "Lcom/sun/org/apache/xml/internal/serializer/CharInfo;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToHTMLStream, m_htmlcharInfo)},
		{"m_elementFlags", "Lcom/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie;", nullptr, $STATIC | $FINAL, $staticField(ToHTMLStream, m_elementFlags)},
		{"m_dummy", "Lcom/sun/org/apache/xml/internal/serializer/ElemDesc;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ToHTMLStream, m_dummy)},
		{"m_specialEscapeURLs", "Z", nullptr, $PRIVATE, $field(ToHTMLStream, m_specialEscapeURLs)},
		{"m_omitMetaTag", "Z", nullptr, $PRIVATE, $field(ToHTMLStream, m_omitMetaTag)},
		{"m_htmlInfo", "Lcom/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie;", nullptr, $PRIVATE, $field(ToHTMLStream, m_htmlInfo)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PUBLIC, $method(ToHTMLStream, init$, void)},
		{"<init>", "(Ljavax/xml/transform/ErrorListener;)V", nullptr, $PUBLIC, $method(ToHTMLStream, init$, void, $ErrorListener*)},
		{"addUniqueAttribute", "(Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, addUniqueAttribute, void, $String*, $String*, int32_t), "org.xml.sax.SAXException"},
		{"attributeDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, attributeDecl, void, $String*, $String*, $String*, $String*, $String*), "org.xml.sax.SAXException"},
		{"cdata", "([CII)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ToHTMLStream, cdata, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
		{"characters", "([CII)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ToHTMLStream, characters, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
		{"closeStartTag", "()V", nullptr, $PROTECTED, $virtualMethod(ToHTMLStream, closeStartTag, void), "org.xml.sax.SAXException"},
		{"comment", "([CII)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, comment, void, $chars*, int32_t, int32_t), "org.xml.sax.SAXException"},
		{"elementDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, elementDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
		{"endDTD", "()V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, endDTD, void), "org.xml.sax.SAXException"},
		{"endDocument", "()V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ToHTMLStream, endDocument, void), "org.xml.sax.SAXException"},
		{"endElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ToHTMLStream, endElement, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
		{"endElement", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ToHTMLStream, endElement, void, $String*), "org.xml.sax.SAXException"},
		{"entityReference", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $FINAL, $virtualMethod(ToHTMLStream, entityReference, void, $String*), "org.xml.sax.SAXException"},
		{"externalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, externalEntityDecl, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
		{"getElemDesc", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/ElemDesc;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticMethod(ToHTMLStream, getElemDesc, $ElemDesc*, $String*)},
		{"getElemDesc2", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/serializer/ElemDesc;", nullptr, $PRIVATE, $method(ToHTMLStream, getElemDesc2, $ElemDesc*, $String*)},
		{"getOmitMetaTag", "()Z", nullptr, $PRIVATE | $FINAL, $method(ToHTMLStream, getOmitMetaTag, bool)},
		{"getSpecialEscapeURLs", "()Z", nullptr, $PRIVATE | $FINAL, $method(ToHTMLStream, getSpecialEscapeURLs, bool)},
		{"initTagReference", "(Lcom/sun/org/apache/xml/internal/serializer/ToHTMLStream$Trie;)V", nullptr, $STATIC, $staticMethod(ToHTMLStream, initTagReference, void, $ToHTMLStream$Trie*)},
		{"initToHTMLStream", "()V", nullptr, $PRIVATE, $method(ToHTMLStream, initToHTMLStream, void)},
		{"internalEntityDecl", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, internalEntityDecl, void, $String*, $String*), "org.xml.sax.SAXException"},
		{"isASCIIDigit", "(C)Z", nullptr, $PRIVATE, $method(ToHTMLStream, isASCIIDigit, bool, char16_t)},
		{"isHHSign", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(ToHTMLStream, isHHSign, bool, $String*)},
		{"makeHHString", "(I)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticMethod(ToHTMLStream, makeHHString, $String*, int32_t)},
		{"namespaceAfterStartElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, namespaceAfterStartElement, void, $String*, $String*), "org.xml.sax.SAXException"},
		{"processAttribute", "(Ljava/io/Writer;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/serializer/ElemDesc;)V", nullptr, $PROTECTED, $method(ToHTMLStream, processAttribute, void, $Writer*, $String*, $String*, $ElemDesc*), "java.io.IOException,org.xml.sax.SAXException"},
		{"processAttributes", "(Ljava/io/Writer;I)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, processAttributes, void, $Writer*, int32_t), "java.io.IOException,org.xml.sax.SAXException"},
		{"processingInstruction", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, processingInstruction, void, $String*, $String*), "org.xml.sax.SAXException"},
		{"reset", "()Z", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, reset, bool)},
		{"setOmitMetaTag", "(Z)V", nullptr, $PUBLIC, $method(ToHTMLStream, setOmitMetaTag, void, bool)},
		{"setOutputFormat", "(Ljava/util/Properties;)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, setOutputFormat, void, $Properties*)},
		{"setSpecialEscapeURLs", "(Z)V", nullptr, $PUBLIC, $method(ToHTMLStream, setSpecialEscapeURLs, void, bool)},
		{"shouldFormatOutput", "()Z", nullptr, $PROTECTED, $virtualMethod(ToHTMLStream, shouldFormatOutput, bool)},
		{"shouldIndentForText", "()Z", nullptr, $PROTECTED, $virtualMethod(ToHTMLStream, shouldIndentForText, bool)},
		{"startDTD", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, startDTD, void, $String*, $String*, $String*), "org.xml.sax.SAXException"},
		{"startDocumentInternal", "()V", nullptr, $PROTECTED, $virtualMethod(ToHTMLStream, startDocumentInternal, void), "org.xml.sax.SAXException"},
		{"startElement", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/xml/sax/Attributes;)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, startElement, void, $String*, $String*, $String*, $Attributes*), "org.xml.sax.SAXException"},
		{"writeAttrString", "(Ljava/io/Writer;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $virtualMethod(ToHTMLStream, writeAttrString, void, $Writer*, $String*, $String*), "java.io.IOException,org.xml.sax.SAXException"},
		{"writeAttrURI", "(Ljava/io/Writer;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(ToHTMLStream, writeAttrURI, void, $Writer*, $String*, bool), "java.io.IOException"},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie", "com.sun.org.apache.xml.internal.serializer.ToHTMLStream", "Trie", $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$PUBLIC | $FINAL | $ACC_SUPER,
		"com.sun.org.apache.xml.internal.serializer.ToHTMLStream",
		"com.sun.org.apache.xml.internal.serializer.ToStream",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		"com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie,com.sun.org.apache.xml.internal.serializer.ToHTMLStream$Trie$Node"
	};
	$loadClass(ToHTMLStream, name, initialize, &classInfo$$, ToHTMLStream::clinit$, []($Class* clazz) -> $Object* {
		return $of($alloc(ToHTMLStream));
	});
	return class$;
}

$Class* ToHTMLStream::class$ = nullptr;

						} // serializer
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com
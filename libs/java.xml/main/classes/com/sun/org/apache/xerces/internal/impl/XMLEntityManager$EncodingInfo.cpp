#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo.h>

#include <com/sun/org/apache/xerces/internal/impl/XMLEntityManager.h>
#include <jcpp.h>

#undef EBCDIC
#undef FALSE
#undef STR_CP037
#undef STR_UCS2
#undef STR_UCS4
#undef STR_UTF16
#undef STR_UTF16BE
#undef STR_UTF16LE
#undef STR_UTF8
#undef TRUE
#undef UCS_4_BIG_ENDIAN
#undef UCS_4_LITTLE_ENDIAN
#undef UCS_4_UNUSUAL_BYTE_ORDER
#undef UTF_16_BIG_ENDIAN
#undef UTF_16_BIG_ENDIAN_WITH_BOM
#undef UTF_16_LITTLE_ENDIAN
#undef UTF_16_LITTLE_ENDIAN_WITH_BOM
#undef UTF_8
#undef UTF_8_WITH_BOM

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xerces {
					namespace internal {
						namespace impl {

$FieldInfo _XMLEntityManager$EncodingInfo_FieldInfo_[] = {
	{"STR_UTF8", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, STR_UTF8)},
	{"STR_UTF16", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, STR_UTF16)},
	{"STR_UTF16BE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, STR_UTF16BE)},
	{"STR_UTF16LE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, STR_UTF16LE)},
	{"STR_UCS4", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, STR_UCS4)},
	{"STR_UCS2", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, STR_UCS2)},
	{"STR_CP037", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, STR_CP037)},
	{"UTF_8", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, UTF_8)},
	{"UTF_8_WITH_BOM", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, UTF_8_WITH_BOM)},
	{"UTF_16_BIG_ENDIAN", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, UTF_16_BIG_ENDIAN)},
	{"UTF_16_BIG_ENDIAN_WITH_BOM", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, UTF_16_BIG_ENDIAN_WITH_BOM)},
	{"UTF_16_LITTLE_ENDIAN", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, UTF_16_LITTLE_ENDIAN)},
	{"UTF_16_LITTLE_ENDIAN_WITH_BOM", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, UTF_16_LITTLE_ENDIAN_WITH_BOM)},
	{"UCS_4_BIG_ENDIAN", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, UCS_4_BIG_ENDIAN)},
	{"UCS_4_LITTLE_ENDIAN", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, UCS_4_LITTLE_ENDIAN)},
	{"UCS_4_UNUSUAL_BYTE_ORDER", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, UCS_4_UNUSUAL_BYTE_ORDER)},
	{"EBCDIC", "Lcom/sun/org/apache/xerces/internal/impl/XMLEntityManager$EncodingInfo;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLEntityManager$EncodingInfo, EBCDIC)},
	{"autoDetectedEncoding", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(XMLEntityManager$EncodingInfo, autoDetectedEncoding)},
	{"readerEncoding", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(XMLEntityManager$EncodingInfo, readerEncoding)},
	{"isBigEndian", "Ljava/lang/Boolean;", nullptr, $PUBLIC | $FINAL, $field(XMLEntityManager$EncodingInfo, isBigEndian)},
	{"hasBOM", "Z", nullptr, $PUBLIC | $FINAL, $field(XMLEntityManager$EncodingInfo, hasBOM)},
	{}
};

$MethodInfo _XMLEntityManager$EncodingInfo_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/Boolean;Z)V", nullptr, $PRIVATE, $method(XMLEntityManager$EncodingInfo, init$, void, $String*, $Boolean*, bool)},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/Boolean;Z)V", nullptr, $PRIVATE, $method(XMLEntityManager$EncodingInfo, init$, void, $String*, $String*, $Boolean*, bool)},
	{}
};

$InnerClassInfo _XMLEntityManager$EncodingInfo_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xerces.internal.impl.XMLEntityManager$EncodingInfo", "com.sun.org.apache.xerces.internal.impl.XMLEntityManager", "EncodingInfo", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XMLEntityManager$EncodingInfo_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityManager$EncodingInfo",
	"java.lang.Object",
	nullptr,
	_XMLEntityManager$EncodingInfo_FieldInfo_,
	_XMLEntityManager$EncodingInfo_MethodInfo_,
	nullptr,
	nullptr,
	_XMLEntityManager$EncodingInfo_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xerces.internal.impl.XMLEntityManager"
};

$Object* allocate$XMLEntityManager$EncodingInfo($Class* clazz) {
	return $of($alloc(XMLEntityManager$EncodingInfo));
}

$String* XMLEntityManager$EncodingInfo::STR_UTF8 = nullptr;
$String* XMLEntityManager$EncodingInfo::STR_UTF16 = nullptr;
$String* XMLEntityManager$EncodingInfo::STR_UTF16BE = nullptr;
$String* XMLEntityManager$EncodingInfo::STR_UTF16LE = nullptr;
$String* XMLEntityManager$EncodingInfo::STR_UCS4 = nullptr;
$String* XMLEntityManager$EncodingInfo::STR_UCS2 = nullptr;
$String* XMLEntityManager$EncodingInfo::STR_CP037 = nullptr;
XMLEntityManager$EncodingInfo* XMLEntityManager$EncodingInfo::UTF_8 = nullptr;
XMLEntityManager$EncodingInfo* XMLEntityManager$EncodingInfo::UTF_8_WITH_BOM = nullptr;
XMLEntityManager$EncodingInfo* XMLEntityManager$EncodingInfo::UTF_16_BIG_ENDIAN = nullptr;
XMLEntityManager$EncodingInfo* XMLEntityManager$EncodingInfo::UTF_16_BIG_ENDIAN_WITH_BOM = nullptr;
XMLEntityManager$EncodingInfo* XMLEntityManager$EncodingInfo::UTF_16_LITTLE_ENDIAN = nullptr;
XMLEntityManager$EncodingInfo* XMLEntityManager$EncodingInfo::UTF_16_LITTLE_ENDIAN_WITH_BOM = nullptr;
XMLEntityManager$EncodingInfo* XMLEntityManager$EncodingInfo::UCS_4_BIG_ENDIAN = nullptr;
XMLEntityManager$EncodingInfo* XMLEntityManager$EncodingInfo::UCS_4_LITTLE_ENDIAN = nullptr;
XMLEntityManager$EncodingInfo* XMLEntityManager$EncodingInfo::UCS_4_UNUSUAL_BYTE_ORDER = nullptr;
XMLEntityManager$EncodingInfo* XMLEntityManager$EncodingInfo::EBCDIC = nullptr;

void XMLEntityManager$EncodingInfo::init$($String* autoDetectedEncoding, $Boolean* isBigEndian, bool hasBOM) {
	XMLEntityManager$EncodingInfo::init$(autoDetectedEncoding, autoDetectedEncoding, isBigEndian, hasBOM);
}

void XMLEntityManager$EncodingInfo::init$($String* autoDetectedEncoding, $String* readerEncoding, $Boolean* isBigEndian, bool hasBOM) {
	$set(this, autoDetectedEncoding, autoDetectedEncoding);
	$set(this, readerEncoding, readerEncoding);
	$set(this, isBigEndian, isBigEndian);
	this->hasBOM = hasBOM;
}

void clinit$XMLEntityManager$EncodingInfo($Class* class$) {
	$assignStatic(XMLEntityManager$EncodingInfo::STR_UTF8, "UTF-8"_s);
	$assignStatic(XMLEntityManager$EncodingInfo::STR_UTF16, "UTF-16"_s);
	$assignStatic(XMLEntityManager$EncodingInfo::STR_UTF16BE, "UTF-16BE"_s);
	$assignStatic(XMLEntityManager$EncodingInfo::STR_UTF16LE, "UTF-16LE"_s);
	$assignStatic(XMLEntityManager$EncodingInfo::STR_UCS4, "ISO-10646-UCS-4"_s);
	$assignStatic(XMLEntityManager$EncodingInfo::STR_UCS2, "ISO-10646-UCS-2"_s);
	$assignStatic(XMLEntityManager$EncodingInfo::STR_CP037, "CP037"_s);
	$assignStatic(XMLEntityManager$EncodingInfo::UTF_8, $new(XMLEntityManager$EncodingInfo, XMLEntityManager$EncodingInfo::STR_UTF8, nullptr, false));
	$assignStatic(XMLEntityManager$EncodingInfo::UTF_8_WITH_BOM, $new(XMLEntityManager$EncodingInfo, XMLEntityManager$EncodingInfo::STR_UTF8, nullptr, true));
	$init($Boolean);
	$assignStatic(XMLEntityManager$EncodingInfo::UTF_16_BIG_ENDIAN, $new(XMLEntityManager$EncodingInfo, XMLEntityManager$EncodingInfo::STR_UTF16BE, XMLEntityManager$EncodingInfo::STR_UTF16, $Boolean::TRUE, false));
	$assignStatic(XMLEntityManager$EncodingInfo::UTF_16_BIG_ENDIAN_WITH_BOM, $new(XMLEntityManager$EncodingInfo, XMLEntityManager$EncodingInfo::STR_UTF16BE, XMLEntityManager$EncodingInfo::STR_UTF16, $Boolean::TRUE, true));
	$assignStatic(XMLEntityManager$EncodingInfo::UTF_16_LITTLE_ENDIAN, $new(XMLEntityManager$EncodingInfo, XMLEntityManager$EncodingInfo::STR_UTF16LE, XMLEntityManager$EncodingInfo::STR_UTF16, $Boolean::FALSE, false));
	$assignStatic(XMLEntityManager$EncodingInfo::UTF_16_LITTLE_ENDIAN_WITH_BOM, $new(XMLEntityManager$EncodingInfo, XMLEntityManager$EncodingInfo::STR_UTF16LE, XMLEntityManager$EncodingInfo::STR_UTF16, $Boolean::FALSE, true));
	$assignStatic(XMLEntityManager$EncodingInfo::UCS_4_BIG_ENDIAN, $new(XMLEntityManager$EncodingInfo, XMLEntityManager$EncodingInfo::STR_UCS4, $Boolean::TRUE, false));
	$assignStatic(XMLEntityManager$EncodingInfo::UCS_4_LITTLE_ENDIAN, $new(XMLEntityManager$EncodingInfo, XMLEntityManager$EncodingInfo::STR_UCS4, $Boolean::FALSE, false));
	$assignStatic(XMLEntityManager$EncodingInfo::UCS_4_UNUSUAL_BYTE_ORDER, $new(XMLEntityManager$EncodingInfo, XMLEntityManager$EncodingInfo::STR_UCS4, nullptr, false));
	$assignStatic(XMLEntityManager$EncodingInfo::EBCDIC, $new(XMLEntityManager$EncodingInfo, XMLEntityManager$EncodingInfo::STR_CP037, nullptr, false));
}

XMLEntityManager$EncodingInfo::XMLEntityManager$EncodingInfo() {
}

$Class* XMLEntityManager$EncodingInfo::load$($String* name, bool initialize) {
	$loadClass(XMLEntityManager$EncodingInfo, name, initialize, &_XMLEntityManager$EncodingInfo_ClassInfo_, clinit$XMLEntityManager$EncodingInfo, allocate$XMLEntityManager$EncodingInfo);
	return class$;
}

$Class* XMLEntityManager$EncodingInfo::class$ = nullptr;

						} // impl
					} // internal
				} // xerces
			} // apache
		} // org
	} // sun
} // com
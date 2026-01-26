#include <sun/datatransfer/DataFlavorUtil.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/IllegalCharsetNameException.h>
#include <java/nio/charset/UnsupportedCharsetException.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/SortedSet.h>
#include <sun/datatransfer/DataFlavorUtil$CharsetComparator.h>
#include <sun/datatransfer/DataFlavorUtil$DataFlavorComparator.h>
#include <sun/datatransfer/DataFlavorUtil$DefaultDesktopDatatransferService.h>
#include <sun/datatransfer/DataFlavorUtil$IndexOrderComparator.h>
#include <sun/datatransfer/DataFlavorUtil$StandardEncodingsHolder.h>
#include <sun/datatransfer/DataFlavorUtil$TextFlavorComparator.h>
#include <sun/datatransfer/DesktopDatatransferService.h>
#include <jcpp.h>

#undef FALSE
#undef INSTANCE
#undef TRUE

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $IllegalCharsetNameException = ::java::nio::charset::IllegalCharsetNameException;
using $UnsupportedCharsetException = ::java::nio::charset::UnsupportedCharsetException;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $DataFlavorUtil$CharsetComparator = ::sun::datatransfer::DataFlavorUtil$CharsetComparator;
using $DataFlavorUtil$DataFlavorComparator = ::sun::datatransfer::DataFlavorUtil$DataFlavorComparator;
using $DataFlavorUtil$DefaultDesktopDatatransferService = ::sun::datatransfer::DataFlavorUtil$DefaultDesktopDatatransferService;
using $DataFlavorUtil$IndexOrderComparator = ::sun::datatransfer::DataFlavorUtil$IndexOrderComparator;
using $DataFlavorUtil$StandardEncodingsHolder = ::sun::datatransfer::DataFlavorUtil$StandardEncodingsHolder;
using $DataFlavorUtil$TextFlavorComparator = ::sun::datatransfer::DataFlavorUtil$TextFlavorComparator;
using $DesktopDatatransferService = ::sun::datatransfer::DesktopDatatransferService;

namespace sun {
	namespace datatransfer {

$FieldInfo _DataFlavorUtil_FieldInfo_[] = {
	{"textMIMESubtypeCharsetSupport", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Boolean;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil, textMIMESubtypeCharsetSupport)},
	{}
};

$MethodInfo _DataFlavorUtil_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(DataFlavorUtil, init$, void)},
	{"canonicalName", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DataFlavorUtil, canonicalName, $String*, $String*)},
	{"compareIndices", "(Ljava/util/Map;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Integer;)I", "<T:Ljava/lang/Object;>(Ljava/util/Map<TT;Ljava/lang/Integer;>;TT;TT;Ljava/lang/Integer;)I", $STATIC, $staticMethod(DataFlavorUtil, compareIndices, int32_t, $Map*, Object$*, Object$*, $Integer*)},
	{"doesSubtypeSupportCharset", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(DataFlavorUtil, doesSubtypeSupportCharset, bool, $DataFlavor*)},
	{"doesSubtypeSupportCharset", "(Ljava/lang/String;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(DataFlavorUtil, doesSubtypeSupportCharset, bool, $String*, $String*)},
	{"getCharsetComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticMethod(DataFlavorUtil, getCharsetComparator, $Comparator*)},
	{"getDataFlavorComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC | $STATIC, $staticMethod(DataFlavorUtil, getDataFlavorComparator, $Comparator*)},
	{"getDesktopService", "()Lsun/datatransfer/DesktopDatatransferService;", nullptr, $PUBLIC | $STATIC, $staticMethod(DataFlavorUtil, getDesktopService, $DesktopDatatransferService*)},
	{"getIndexOrderComparator", "(Ljava/util/Map;)Ljava/util/Comparator;", "(Ljava/util/Map<Ljava/lang/Long;Ljava/lang/Integer;>;)Ljava/util/Comparator<Ljava/lang/Long;>;", $PUBLIC | $STATIC, $staticMethod(DataFlavorUtil, getIndexOrderComparator, $Comparator*, $Map*)},
	{"getTextCharset", "(Ljava/awt/datatransfer/DataFlavor;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $staticMethod(DataFlavorUtil, getTextCharset, $String*, $DataFlavor*)},
	{"getTextFlavorComparator", "()Ljava/util/Comparator;", "()Ljava/util/Comparator<Ljava/awt/datatransfer/DataFlavor;>;", $PUBLIC | $STATIC, $staticMethod(DataFlavorUtil, getTextFlavorComparator, $Comparator*)},
	{"isEncodingSupported", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $staticMethod(DataFlavorUtil, isEncodingSupported, bool, $String*)},
	{"isFlavorCharsetTextType", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(DataFlavorUtil, isFlavorCharsetTextType, bool, $DataFlavor*)},
	{"isFlavorNoncharsetTextType", "(Ljava/awt/datatransfer/DataFlavor;)Z", nullptr, $PUBLIC | $STATIC, $staticMethod(DataFlavorUtil, isFlavorNoncharsetTextType, bool, $DataFlavor*)},
	{"standardEncodings", "()Ljava/util/Set;", "()Ljava/util/Set<Ljava/lang/String;>;", $PUBLIC | $STATIC, $staticMethod(DataFlavorUtil, standardEncodings, $Set*)},
	{}
};

$InnerClassInfo _DataFlavorUtil_InnerClassesInfo_[] = {
	{"sun.datatransfer.DataFlavorUtil$RMI", "sun.datatransfer.DataFlavorUtil", "RMI", $PUBLIC | $STATIC},
	{"sun.datatransfer.DataFlavorUtil$DefaultDesktopDatatransferService", "sun.datatransfer.DataFlavorUtil", "DefaultDesktopDatatransferService", $PRIVATE | $STATIC | $FINAL},
	{"sun.datatransfer.DataFlavorUtil$TextFlavorComparator", "sun.datatransfer.DataFlavorUtil", "TextFlavorComparator", $PRIVATE | $STATIC},
	{"sun.datatransfer.DataFlavorUtil$IndexOrderComparator", "sun.datatransfer.DataFlavorUtil", "IndexOrderComparator", $PRIVATE | $STATIC},
	{"sun.datatransfer.DataFlavorUtil$DataFlavorComparator", "sun.datatransfer.DataFlavorUtil", "DataFlavorComparator", $PRIVATE | $STATIC},
	{"sun.datatransfer.DataFlavorUtil$CharsetComparator", "sun.datatransfer.DataFlavorUtil", "CharsetComparator", $PRIVATE | $STATIC},
	{"sun.datatransfer.DataFlavorUtil$StandardEncodingsHolder", "sun.datatransfer.DataFlavorUtil", "StandardEncodingsHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DataFlavorUtil_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"sun.datatransfer.DataFlavorUtil",
	"java.lang.Object",
	nullptr,
	_DataFlavorUtil_FieldInfo_,
	_DataFlavorUtil_MethodInfo_,
	nullptr,
	nullptr,
	_DataFlavorUtil_InnerClassesInfo_,
	nullptr,
	nullptr,
	"sun.datatransfer.DataFlavorUtil$RMI,sun.datatransfer.DataFlavorUtil$DefaultDesktopDatatransferService,sun.datatransfer.DataFlavorUtil$TextFlavorComparator,sun.datatransfer.DataFlavorUtil$IndexOrderComparator,sun.datatransfer.DataFlavorUtil$DataFlavorComparator,sun.datatransfer.DataFlavorUtil$CharsetComparator,sun.datatransfer.DataFlavorUtil$StandardEncodingsHolder"
};

$Object* allocate$DataFlavorUtil($Class* clazz) {
	return $of($alloc(DataFlavorUtil));
}

$Map* DataFlavorUtil::textMIMESubtypeCharsetSupport = nullptr;

void DataFlavorUtil::init$() {
}

$Comparator* DataFlavorUtil::getCharsetComparator() {
	$init(DataFlavorUtil);
	$init($DataFlavorUtil$CharsetComparator);
	return $DataFlavorUtil$CharsetComparator::INSTANCE;
}

$Comparator* DataFlavorUtil::getDataFlavorComparator() {
	$init(DataFlavorUtil);
	$init($DataFlavorUtil$DataFlavorComparator);
	return $DataFlavorUtil$DataFlavorComparator::INSTANCE;
}

$Comparator* DataFlavorUtil::getIndexOrderComparator($Map* indexMap) {
	$init(DataFlavorUtil);
	return $new($DataFlavorUtil$IndexOrderComparator, indexMap);
}

$Comparator* DataFlavorUtil::getTextFlavorComparator() {
	$init(DataFlavorUtil);
	$init($DataFlavorUtil$TextFlavorComparator);
	return $DataFlavorUtil$TextFlavorComparator::INSTANCE;
}

$Set* DataFlavorUtil::standardEncodings() {
	$init(DataFlavorUtil);
	$init($DataFlavorUtil$StandardEncodingsHolder);
	return $DataFlavorUtil$StandardEncodingsHolder::standardEncodings;
}

$String* DataFlavorUtil::canonicalName($String* encoding) {
	$init(DataFlavorUtil);
	if (encoding == nullptr) {
		return nullptr;
	}
	try {
		return $nc($($Charset::forName(encoding)))->name();
	} catch ($IllegalCharsetNameException& icne) {
		return encoding;
	} catch ($UnsupportedCharsetException& uce) {
		return encoding;
	}
	$shouldNotReachHere();
}

bool DataFlavorUtil::doesSubtypeSupportCharset($DataFlavor* flavor) {
	$init(DataFlavorUtil);
	$useLocalCurrentObjectStackCache();
	$var($String, subType, $nc(flavor)->getSubType());
	if (subType == nullptr) {
		return false;
	}
	$var($Boolean, support, $cast($Boolean, $nc(DataFlavorUtil::textMIMESubtypeCharsetSupport)->get(subType)));
	if (support != nullptr) {
		return support->booleanValue();
	}
	bool ret_val = (flavor->getParameter("charset"_s) != nullptr);
	$nc(DataFlavorUtil::textMIMESubtypeCharsetSupport)->put(subType, $($Boolean::valueOf(ret_val)));
	return ret_val;
}

bool DataFlavorUtil::doesSubtypeSupportCharset($String* subType, $String* charset) {
	$init(DataFlavorUtil);
	$useLocalCurrentObjectStackCache();
	$var($Boolean, support, $cast($Boolean, $nc(DataFlavorUtil::textMIMESubtypeCharsetSupport)->get(subType)));
	if (support != nullptr) {
		return support->booleanValue();
	}
	bool ret_val = (charset != nullptr);
	$nc(DataFlavorUtil::textMIMESubtypeCharsetSupport)->put(subType, $($Boolean::valueOf(ret_val)));
	return ret_val;
}

bool DataFlavorUtil::isFlavorCharsetTextType($DataFlavor* flavor) {
	$init(DataFlavorUtil);
	$useLocalCurrentObjectStackCache();
	$init($DataFlavor);
	if ($nc($DataFlavor::stringFlavor)->equals(flavor)) {
		return true;
	}
	bool var$0 = !"text"_s->equals($($nc(flavor)->getPrimaryType()));
	if (var$0 || !doesSubtypeSupportCharset(flavor)) {
		return false;
	}
	$Class* rep_class = $nc(flavor)->getRepresentationClass();
	bool var$3 = flavor->isRepresentationClassReader();
	bool var$2 = var$3 || $of($String::class$)->equals(rep_class);
	bool var$1 = var$2 || flavor->isRepresentationClassCharBuffer();
	$load($chars);
	if (var$1 || $of($getClass($chars))->equals(rep_class)) {
		return true;
	}
	bool var$5 = flavor->isRepresentationClassInputStream();
	bool var$4 = var$5 || flavor->isRepresentationClassByteBuffer();
	$load($bytes);
	if (!(var$4 || $of($getClass($bytes))->equals(rep_class))) {
		return false;
	}
	$var($String, charset, flavor->getParameter("charset"_s));
	return (charset == nullptr) || isEncodingSupported(charset);
}

bool DataFlavorUtil::isFlavorNoncharsetTextType($DataFlavor* flavor) {
	$init(DataFlavorUtil);
	bool var$0 = !"text"_s->equals($($nc(flavor)->getPrimaryType()));
	if (var$0 || doesSubtypeSupportCharset(flavor)) {
		return false;
	}
	bool var$2 = $nc(flavor)->isRepresentationClassInputStream();
	bool var$1 = var$2 || $nc(flavor)->isRepresentationClassByteBuffer();
	$load($bytes);
	return (var$1 || $of($getClass($bytes))->equals($nc(flavor)->getRepresentationClass()));
}

$String* DataFlavorUtil::getTextCharset($DataFlavor* flavor) {
	$init(DataFlavorUtil);
	$useLocalCurrentObjectStackCache();
	if (!isFlavorCharsetTextType(flavor)) {
		return nullptr;
	}
	$var($String, encoding, $nc(flavor)->getParameter("charset"_s));
	return (encoding != nullptr) ? encoding : $nc($($Charset::defaultCharset()))->name();
}

bool DataFlavorUtil::isEncodingSupported($String* encoding) {
	$init(DataFlavorUtil);
	if (encoding == nullptr) {
		return false;
	}
	try {
		return $Charset::isSupported(encoding);
	} catch ($IllegalCharsetNameException& icne) {
		return false;
	}
	$shouldNotReachHere();
}

int32_t DataFlavorUtil::compareIndices($Map* indexMap, Object$* obj1, Object$* obj2, $Integer* fallbackIndex) {
	$init(DataFlavorUtil);
	$useLocalCurrentObjectStackCache();
	$var($Integer, index1, $cast($Integer, $nc(indexMap)->getOrDefault(obj1, fallbackIndex)));
	$var($Integer, index2, $cast($Integer, indexMap->getOrDefault(obj2, fallbackIndex)));
	return $nc(index1)->compareTo(index2);
}

$DesktopDatatransferService* DataFlavorUtil::getDesktopService() {
	$init(DataFlavorUtil);
	$init($DataFlavorUtil$DefaultDesktopDatatransferService);
	return $DataFlavorUtil$DefaultDesktopDatatransferService::INSTANCE;
}

void clinit$DataFlavorUtil($Class* class$) {
	{
		$var($Map, tempMap, $new($HashMap, 17));
		$init($Boolean);
		tempMap->put("sgml"_s, $Boolean::TRUE);
		tempMap->put("xml"_s, $Boolean::TRUE);
		tempMap->put("html"_s, $Boolean::TRUE);
		tempMap->put("enriched"_s, $Boolean::TRUE);
		tempMap->put("richtext"_s, $Boolean::TRUE);
		tempMap->put("uri-list"_s, $Boolean::TRUE);
		tempMap->put("directory"_s, $Boolean::TRUE);
		tempMap->put("css"_s, $Boolean::TRUE);
		tempMap->put("calendar"_s, $Boolean::TRUE);
		tempMap->put("plain"_s, $Boolean::TRUE);
		tempMap->put("rtf"_s, $Boolean::FALSE);
		tempMap->put("tab-separated-values"_s, $Boolean::FALSE);
		tempMap->put("t140"_s, $Boolean::FALSE);
		tempMap->put("rfc822-headers"_s, $Boolean::FALSE);
		tempMap->put("parityfec"_s, $Boolean::FALSE);
		$assignStatic(DataFlavorUtil::textMIMESubtypeCharsetSupport, $Collections::synchronizedMap(tempMap));
	}
}

DataFlavorUtil::DataFlavorUtil() {
}

$Class* DataFlavorUtil::load$($String* name, bool initialize) {
	$loadClass(DataFlavorUtil, name, initialize, &_DataFlavorUtil_ClassInfo_, clinit$DataFlavorUtil, allocate$DataFlavorUtil);
	return class$;
}

$Class* DataFlavorUtil::class$ = nullptr;

	} // datatransfer
} // sun
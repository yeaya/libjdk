#include <sun/datatransfer/DataFlavorUtil$CharsetComparator.h>

#include <java/nio/charset/Charset.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <jcpp.h>

#undef DEFAULT_CHARSET_INDEX
#undef INSTANCE
#undef MIN_VALUE
#undef OTHER_CHARSET_INDEX
#undef UNSUPPORTED_CHARSET
#undef UNSUPPORTED_CHARSET_INDEX
#undef WORST_CHARSET_INDEX

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;

namespace sun {
	namespace datatransfer {

$FieldInfo _DataFlavorUtil$CharsetComparator_FieldInfo_[] = {
	{"INSTANCE", "Lsun/datatransfer/DataFlavorUtil$CharsetComparator;", nullptr, $STATIC | $FINAL, $staticField(DataFlavorUtil$CharsetComparator, INSTANCE)},
	{"charsets", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$CharsetComparator, charsets)},
	{"DEFAULT_CHARSET_INDEX", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$CharsetComparator, DEFAULT_CHARSET_INDEX)},
	{"OTHER_CHARSET_INDEX", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$CharsetComparator, OTHER_CHARSET_INDEX)},
	{"WORST_CHARSET_INDEX", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$CharsetComparator, WORST_CHARSET_INDEX)},
	{"UNSUPPORTED_CHARSET_INDEX", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$CharsetComparator, UNSUPPORTED_CHARSET_INDEX)},
	{"UNSUPPORTED_CHARSET", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$CharsetComparator, UNSUPPORTED_CHARSET)},
	{}
};

$MethodInfo _DataFlavorUtil$CharsetComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DataFlavorUtil$CharsetComparator::*)()>(&DataFlavorUtil$CharsetComparator::init$))},
	{"compare", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getEncoding", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&DataFlavorUtil$CharsetComparator::getEncoding))},
	{}
};

$InnerClassInfo _DataFlavorUtil$CharsetComparator_InnerClassesInfo_[] = {
	{"sun.datatransfer.DataFlavorUtil$CharsetComparator", "sun.datatransfer.DataFlavorUtil", "CharsetComparator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DataFlavorUtil$CharsetComparator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.datatransfer.DataFlavorUtil$CharsetComparator",
	"java.lang.Object",
	"java.util.Comparator",
	_DataFlavorUtil$CharsetComparator_FieldInfo_,
	_DataFlavorUtil$CharsetComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/lang/String;>;",
	nullptr,
	_DataFlavorUtil$CharsetComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.datatransfer.DataFlavorUtil"
};

$Object* allocate$DataFlavorUtil$CharsetComparator($Class* clazz) {
	return $of($alloc(DataFlavorUtil$CharsetComparator));
}

DataFlavorUtil$CharsetComparator* DataFlavorUtil$CharsetComparator::INSTANCE = nullptr;
$Map* DataFlavorUtil$CharsetComparator::charsets = nullptr;
$Integer* DataFlavorUtil$CharsetComparator::DEFAULT_CHARSET_INDEX = nullptr;
$Integer* DataFlavorUtil$CharsetComparator::OTHER_CHARSET_INDEX = nullptr;
$Integer* DataFlavorUtil$CharsetComparator::WORST_CHARSET_INDEX = nullptr;
$Integer* DataFlavorUtil$CharsetComparator::UNSUPPORTED_CHARSET_INDEX = nullptr;
$String* DataFlavorUtil$CharsetComparator::UNSUPPORTED_CHARSET = nullptr;

void DataFlavorUtil$CharsetComparator::init$() {
}

int32_t DataFlavorUtil$CharsetComparator::compare($String* charset1$renamed, $String* charset2$renamed) {
	$useLocalCurrentObjectStackCache();
	$var($String, charset2, charset2$renamed);
	$var($String, charset1, charset1$renamed);
	$assign(charset1, getEncoding(charset1));
	$assign(charset2, getEncoding(charset2));
	int32_t comp = $DataFlavorUtil::compareIndices(DataFlavorUtil$CharsetComparator::charsets, charset1, charset2, DataFlavorUtil$CharsetComparator::OTHER_CHARSET_INDEX);
	if (comp == 0) {
		return $nc(charset2)->compareTo(charset1);
	}
	return comp;
}

$String* DataFlavorUtil$CharsetComparator::getEncoding($String* charset) {
	$init(DataFlavorUtil$CharsetComparator);
	if (charset == nullptr) {
		return nullptr;
	} else if (!$DataFlavorUtil::isEncodingSupported(charset)) {
		return DataFlavorUtil$CharsetComparator::UNSUPPORTED_CHARSET;
	} else {
		$var($String, canonicalName, $DataFlavorUtil::canonicalName(charset));
		return ($nc(DataFlavorUtil$CharsetComparator::charsets)->containsKey(canonicalName)) ? canonicalName : charset;
	}
}

int32_t DataFlavorUtil$CharsetComparator::compare(Object$* charset1, Object$* charset2) {
	return this->compare($cast($String, charset1), $cast($String, charset2));
}

void clinit$DataFlavorUtil$CharsetComparator($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(DataFlavorUtil$CharsetComparator::UNSUPPORTED_CHARSET, "UNSUPPORTED"_s);
	$assignStatic(DataFlavorUtil$CharsetComparator::INSTANCE, $new(DataFlavorUtil$CharsetComparator));
	$assignStatic(DataFlavorUtil$CharsetComparator::DEFAULT_CHARSET_INDEX, $Integer::valueOf(2));
	$assignStatic(DataFlavorUtil$CharsetComparator::OTHER_CHARSET_INDEX, $Integer::valueOf(1));
	$assignStatic(DataFlavorUtil$CharsetComparator::WORST_CHARSET_INDEX, $Integer::valueOf(0));
	$assignStatic(DataFlavorUtil$CharsetComparator::UNSUPPORTED_CHARSET_INDEX, $Integer::valueOf($Integer::MIN_VALUE));
	{
		$var($Map, charsetsMap, $new($HashMap, 8, 1.0f));
		$var($Object, var$0, $of($DataFlavorUtil::canonicalName("UTF-16LE"_s)));
		charsetsMap->put(var$0, $($Integer::valueOf(4)));
		$var($Object, var$1, $of($DataFlavorUtil::canonicalName("UTF-16BE"_s)));
		charsetsMap->put(var$1, $($Integer::valueOf(5)));
		$var($Object, var$2, $of($DataFlavorUtil::canonicalName("UTF-8"_s)));
		charsetsMap->put(var$2, $($Integer::valueOf(6)));
		$var($Object, var$3, $of($DataFlavorUtil::canonicalName("UTF-16"_s)));
		charsetsMap->put(var$3, $($Integer::valueOf(7)));
		charsetsMap->put($($DataFlavorUtil::canonicalName("US-ASCII"_s)), DataFlavorUtil$CharsetComparator::WORST_CHARSET_INDEX);
		charsetsMap->putIfAbsent($($nc($($Charset::defaultCharset()))->name()), DataFlavorUtil$CharsetComparator::DEFAULT_CHARSET_INDEX);
		charsetsMap->put(DataFlavorUtil$CharsetComparator::UNSUPPORTED_CHARSET, DataFlavorUtil$CharsetComparator::UNSUPPORTED_CHARSET_INDEX);
		$assignStatic(DataFlavorUtil$CharsetComparator::charsets, $Collections::unmodifiableMap(charsetsMap));
	}
}

DataFlavorUtil$CharsetComparator::DataFlavorUtil$CharsetComparator() {
}

$Class* DataFlavorUtil$CharsetComparator::load$($String* name, bool initialize) {
	$loadClass(DataFlavorUtil$CharsetComparator, name, initialize, &_DataFlavorUtil$CharsetComparator_ClassInfo_, clinit$DataFlavorUtil$CharsetComparator, allocate$DataFlavorUtil$CharsetComparator);
	return class$;
}

$Class* DataFlavorUtil$CharsetComparator::class$ = nullptr;

	} // datatransfer
} // sun
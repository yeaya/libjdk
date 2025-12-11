#include <sun/datatransfer/DataFlavorUtil$DataFlavorComparator.h>

#include <java/awt/datatransfer/DataFlavor.h>
#include <java/io/InputStream.h>
#include <java/io/Reader.h>
#include <java/io/Serializable.h>
#include <java/nio/ByteBuffer.h>
#include <java/nio/CharBuffer.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <sun/datatransfer/DataFlavorUtil$CharsetComparator.h>
#include <sun/datatransfer/DataFlavorUtil$RMI.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <jcpp.h>

#undef INSTANCE
#undef MAX_VALUE
#undef MIN_VALUE
#undef UNKNOWN_OBJECT_LOSES
#undef UNKNOWN_OBJECT_WINS

using $DataFlavor = ::java::awt::datatransfer::DataFlavor;
using $InputStream = ::java::io::InputStream;
using $Reader = ::java::io::Reader;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Float = ::java::lang::Float;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $ByteBuffer = ::java::nio::ByteBuffer;
using $CharBuffer = ::java::nio::CharBuffer;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;
using $DataFlavorUtil$CharsetComparator = ::sun::datatransfer::DataFlavorUtil$CharsetComparator;
using $DataFlavorUtil$RMI = ::sun::datatransfer::DataFlavorUtil$RMI;

namespace sun {
	namespace datatransfer {

$FieldInfo _DataFlavorUtil$DataFlavorComparator_FieldInfo_[] = {
	{"INSTANCE", "Lsun/datatransfer/DataFlavorUtil$DataFlavorComparator;", nullptr, $STATIC | $FINAL, $staticField(DataFlavorUtil$DataFlavorComparator, INSTANCE)},
	{"exactTypes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$DataFlavorComparator, exactTypes)},
	{"primaryTypes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$DataFlavorComparator, primaryTypes)},
	{"nonTextRepresentations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$DataFlavorComparator, nonTextRepresentations)},
	{"textTypes", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$DataFlavorComparator, textTypes)},
	{"decodedTextRepresentations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$DataFlavorComparator, decodedTextRepresentations)},
	{"encodedTextRepresentations", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/Class<*>;Ljava/lang/Integer;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$DataFlavorComparator, encodedTextRepresentations)},
	{"UNKNOWN_OBJECT_LOSES", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$DataFlavorComparator, UNKNOWN_OBJECT_LOSES)},
	{"UNKNOWN_OBJECT_WINS", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$DataFlavorComparator, UNKNOWN_OBJECT_WINS)},
	{}
};

$MethodInfo _DataFlavorUtil$DataFlavorComparator_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DataFlavorUtil$DataFlavorComparator::*)()>(&DataFlavorUtil$DataFlavorComparator::init$))},
	{"compare", "(Ljava/awt/datatransfer/DataFlavor;Ljava/awt/datatransfer/DataFlavor;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _DataFlavorUtil$DataFlavorComparator_InnerClassesInfo_[] = {
	{"sun.datatransfer.DataFlavorUtil$DataFlavorComparator", "sun.datatransfer.DataFlavorUtil", "DataFlavorComparator", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DataFlavorUtil$DataFlavorComparator_ClassInfo_ = {
	$ACC_SUPER,
	"sun.datatransfer.DataFlavorUtil$DataFlavorComparator",
	"java.lang.Object",
	"java.util.Comparator",
	_DataFlavorUtil$DataFlavorComparator_FieldInfo_,
	_DataFlavorUtil$DataFlavorComparator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Ljava/awt/datatransfer/DataFlavor;>;",
	nullptr,
	_DataFlavorUtil$DataFlavorComparator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.datatransfer.DataFlavorUtil"
};

$Object* allocate$DataFlavorUtil$DataFlavorComparator($Class* clazz) {
	return $of($alloc(DataFlavorUtil$DataFlavorComparator));
}

DataFlavorUtil$DataFlavorComparator* DataFlavorUtil$DataFlavorComparator::INSTANCE = nullptr;
$Map* DataFlavorUtil$DataFlavorComparator::exactTypes = nullptr;
$Map* DataFlavorUtil$DataFlavorComparator::primaryTypes = nullptr;
$Map* DataFlavorUtil$DataFlavorComparator::nonTextRepresentations = nullptr;
$Map* DataFlavorUtil$DataFlavorComparator::textTypes = nullptr;
$Map* DataFlavorUtil$DataFlavorComparator::decodedTextRepresentations = nullptr;
$Map* DataFlavorUtil$DataFlavorComparator::encodedTextRepresentations = nullptr;
$Integer* DataFlavorUtil$DataFlavorComparator::UNKNOWN_OBJECT_LOSES = nullptr;
$Integer* DataFlavorUtil$DataFlavorComparator::UNKNOWN_OBJECT_WINS = nullptr;

void DataFlavorUtil$DataFlavorComparator::init$() {
}

int32_t DataFlavorUtil$DataFlavorComparator::compare($DataFlavor* flavor1, $DataFlavor* flavor2) {
	$useLocalCurrentObjectStackCache();
	if ($nc(flavor1)->equals(flavor2)) {
		return 0;
	}
	int32_t comp = 0;
	$var($String, primaryType1, $nc(flavor1)->getPrimaryType());
	$var($String, subType1, flavor1->getSubType());
	$var($String, mimeType1, $str({primaryType1, "/"_s, subType1}));
	$Class* class1 = flavor1->getRepresentationClass();
	$var($String, primaryType2, $nc(flavor2)->getPrimaryType());
	$var($String, subType2, flavor2->getSubType());
	$var($String, mimeType2, $str({primaryType2, "/"_s, subType2}));
	$Class* class2 = flavor2->getRepresentationClass();
	bool var$0 = flavor1->isFlavorTextType();
	if (var$0 && flavor2->isFlavorTextType()) {
		comp = $DataFlavorUtil::compareIndices(DataFlavorUtil$DataFlavorComparator::textTypes, mimeType1, mimeType2, DataFlavorUtil$DataFlavorComparator::UNKNOWN_OBJECT_LOSES);
		if (comp != 0) {
			return comp;
		}
		if ($DataFlavorUtil::doesSubtypeSupportCharset(flavor1)) {
			comp = $DataFlavorUtil::compareIndices(DataFlavorUtil$DataFlavorComparator::decodedTextRepresentations, class1, class2, DataFlavorUtil$DataFlavorComparator::UNKNOWN_OBJECT_LOSES);
			if (comp != 0) {
				return comp;
			}
			$init($DataFlavorUtil$CharsetComparator);
			$var($String, var$1, $DataFlavorUtil::getTextCharset(flavor1));
			comp = $nc($DataFlavorUtil$CharsetComparator::INSTANCE)->compare(var$1, $($DataFlavorUtil::getTextCharset(flavor2)));
			if (comp != 0) {
				return comp;
			}
		}
		comp = $DataFlavorUtil::compareIndices(DataFlavorUtil$DataFlavorComparator::encodedTextRepresentations, class1, class2, DataFlavorUtil$DataFlavorComparator::UNKNOWN_OBJECT_LOSES);
		if (comp != 0) {
			return comp;
		}
	} else {
		if (flavor1->isFlavorTextType()) {
			return 1;
		}
		if (flavor2->isFlavorTextType()) {
			return -1;
		}
		comp = $DataFlavorUtil::compareIndices(DataFlavorUtil$DataFlavorComparator::primaryTypes, primaryType1, primaryType2, DataFlavorUtil$DataFlavorComparator::UNKNOWN_OBJECT_LOSES);
		if (comp != 0) {
			return comp;
		}
		comp = $DataFlavorUtil::compareIndices(DataFlavorUtil$DataFlavorComparator::exactTypes, mimeType1, mimeType2, DataFlavorUtil$DataFlavorComparator::UNKNOWN_OBJECT_WINS);
		if (comp != 0) {
			return comp;
		}
		comp = $DataFlavorUtil::compareIndices(DataFlavorUtil$DataFlavorComparator::nonTextRepresentations, class1, class2, DataFlavorUtil$DataFlavorComparator::UNKNOWN_OBJECT_LOSES);
		if (comp != 0) {
			return comp;
		}
	}
	return $nc($(flavor1->getMimeType()))->compareTo($(flavor2->getMimeType()));
}

int32_t DataFlavorUtil$DataFlavorComparator::compare(Object$* flavor1, Object$* flavor2) {
	return this->compare($cast($DataFlavor, flavor1), $cast($DataFlavor, flavor2));
}

void clinit$DataFlavorUtil$DataFlavorComparator($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$assignStatic(DataFlavorUtil$DataFlavorComparator::INSTANCE, $new(DataFlavorUtil$DataFlavorComparator));
	$assignStatic(DataFlavorUtil$DataFlavorComparator::UNKNOWN_OBJECT_LOSES, $Integer::valueOf($Integer::MIN_VALUE));
	$assignStatic(DataFlavorUtil$DataFlavorComparator::UNKNOWN_OBJECT_WINS, $Integer::valueOf($Integer::MAX_VALUE));
	{
		{
			$var($Map, exactTypesMap, $new($HashMap, 4, 1.0f));
			exactTypesMap->put("application/x-java-file-list"_s, $($Integer::valueOf(0)));
			exactTypesMap->put("application/x-java-serialized-object"_s, $($Integer::valueOf(1)));
			exactTypesMap->put("application/x-java-jvm-local-objectref"_s, $($Integer::valueOf(2)));
			exactTypesMap->put("application/x-java-remote-object"_s, $($Integer::valueOf(3)));
			$assignStatic(DataFlavorUtil$DataFlavorComparator::exactTypes, $Collections::unmodifiableMap(exactTypesMap));
		}
		{
			$var($Map, primaryTypesMap, $new($HashMap, 1, 1.0f));
			primaryTypesMap->put("application"_s, $($Integer::valueOf(0)));
			$assignStatic(DataFlavorUtil$DataFlavorComparator::primaryTypes, $Collections::unmodifiableMap(primaryTypesMap));
		}
		{
			$var($Map, nonTextRepresentationsMap, $new($HashMap, 3, 1.0f));
			$load($InputStream);
			nonTextRepresentationsMap->put($InputStream::class$, $($Integer::valueOf(0)));
			$load($Serializable);
			nonTextRepresentationsMap->put($Serializable::class$, $($Integer::valueOf(1)));
			$var($Object, var$0, $of($DataFlavorUtil$RMI::remoteClass()));
			nonTextRepresentationsMap->put(var$0, $($Integer::valueOf(2)));
			$assignStatic(DataFlavorUtil$DataFlavorComparator::nonTextRepresentations, $Collections::unmodifiableMap(nonTextRepresentationsMap));
		}
		{
			$var($Map, textTypesMap, $new($HashMap, 16, 1.0f));
			textTypesMap->put("text/plain"_s, $($Integer::valueOf(0)));
			textTypesMap->put("application/x-java-serialized-object"_s, $($Integer::valueOf(1)));
			textTypesMap->put("text/calendar"_s, $($Integer::valueOf(2)));
			textTypesMap->put("text/css"_s, $($Integer::valueOf(3)));
			textTypesMap->put("text/directory"_s, $($Integer::valueOf(4)));
			textTypesMap->put("text/parityfec"_s, $($Integer::valueOf(5)));
			textTypesMap->put("text/rfc822-headers"_s, $($Integer::valueOf(6)));
			textTypesMap->put("text/t140"_s, $($Integer::valueOf(7)));
			textTypesMap->put("text/tab-separated-values"_s, $($Integer::valueOf(8)));
			textTypesMap->put("text/uri-list"_s, $($Integer::valueOf(9)));
			textTypesMap->put("text/richtext"_s, $($Integer::valueOf(10)));
			textTypesMap->put("text/enriched"_s, $($Integer::valueOf(11)));
			textTypesMap->put("text/rtf"_s, $($Integer::valueOf(12)));
			textTypesMap->put("text/html"_s, $($Integer::valueOf(13)));
			textTypesMap->put("text/xml"_s, $($Integer::valueOf(14)));
			textTypesMap->put("text/sgml"_s, $($Integer::valueOf(15)));
			$assignStatic(DataFlavorUtil$DataFlavorComparator::textTypes, $Collections::unmodifiableMap(textTypesMap));
		}
		{
			$var($Map, decodedTextRepresentationsMap, $new($HashMap, 4, 1.0f));
			$load($chars);
			decodedTextRepresentationsMap->put($getClass($chars), $($Integer::valueOf(0)));
			$load($CharBuffer);
			decodedTextRepresentationsMap->put($CharBuffer::class$, $($Integer::valueOf(1)));
			decodedTextRepresentationsMap->put($String::class$, $($Integer::valueOf(2)));
			$load($Reader);
			decodedTextRepresentationsMap->put($Reader::class$, $($Integer::valueOf(3)));
			$assignStatic(DataFlavorUtil$DataFlavorComparator::decodedTextRepresentations, $Collections::unmodifiableMap(decodedTextRepresentationsMap));
		}
		{
			$var($Map, encodedTextRepresentationsMap, $new($HashMap, 3, 1.0f));
			$load($bytes);
			encodedTextRepresentationsMap->put($getClass($bytes), $($Integer::valueOf(0)));
			$load($ByteBuffer);
			encodedTextRepresentationsMap->put($ByteBuffer::class$, $($Integer::valueOf(1)));
			$load($InputStream);
			encodedTextRepresentationsMap->put($InputStream::class$, $($Integer::valueOf(2)));
			$assignStatic(DataFlavorUtil$DataFlavorComparator::encodedTextRepresentations, $Collections::unmodifiableMap(encodedTextRepresentationsMap));
		}
	}
}

DataFlavorUtil$DataFlavorComparator::DataFlavorUtil$DataFlavorComparator() {
}

$Class* DataFlavorUtil$DataFlavorComparator::load$($String* name, bool initialize) {
	$loadClass(DataFlavorUtil$DataFlavorComparator, name, initialize, &_DataFlavorUtil$DataFlavorComparator_ClassInfo_, clinit$DataFlavorUtil$DataFlavorComparator, allocate$DataFlavorUtil$DataFlavorComparator);
	return class$;
}

$Class* DataFlavorUtil$DataFlavorComparator::class$ = nullptr;

	} // datatransfer
} // sun
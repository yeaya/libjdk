#include <sun/datatransfer/DataFlavorUtil$StandardEncodingsHolder.h>

#include <java/nio/charset/Charset.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
#include <java/util/NavigableSet.h>
#include <java/util/SortedSet.h>
#include <java/util/TreeSet.h>
#include <sun/datatransfer/DataFlavorUtil.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $Collections = ::java::util::Collections;
using $Comparator = ::java::util::Comparator;
using $NavigableSet = ::java::util::NavigableSet;
using $SortedSet = ::java::util::SortedSet;
using $TreeSet = ::java::util::TreeSet;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;

namespace sun {
	namespace datatransfer {

$FieldInfo _DataFlavorUtil$StandardEncodingsHolder_FieldInfo_[] = {
	{"standardEncodings", "Ljava/util/SortedSet;", "Ljava/util/SortedSet<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$StandardEncodingsHolder, standardEncodings)},
	{}
};

$MethodInfo _DataFlavorUtil$StandardEncodingsHolder_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DataFlavorUtil$StandardEncodingsHolder::*)()>(&DataFlavorUtil$StandardEncodingsHolder::init$))},
	{"load", "()Ljava/util/SortedSet;", "()Ljava/util/SortedSet<Ljava/lang/String;>;", $PRIVATE | $STATIC, $method(static_cast<$SortedSet*(*)()>(&DataFlavorUtil$StandardEncodingsHolder::load))},
	{}
};

$InnerClassInfo _DataFlavorUtil$StandardEncodingsHolder_InnerClassesInfo_[] = {
	{"sun.datatransfer.DataFlavorUtil$StandardEncodingsHolder", "sun.datatransfer.DataFlavorUtil", "StandardEncodingsHolder", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DataFlavorUtil$StandardEncodingsHolder_ClassInfo_ = {
	$ACC_SUPER,
	"sun.datatransfer.DataFlavorUtil$StandardEncodingsHolder",
	"java.lang.Object",
	nullptr,
	_DataFlavorUtil$StandardEncodingsHolder_FieldInfo_,
	_DataFlavorUtil$StandardEncodingsHolder_MethodInfo_,
	nullptr,
	nullptr,
	_DataFlavorUtil$StandardEncodingsHolder_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.datatransfer.DataFlavorUtil"
};

$Object* allocate$DataFlavorUtil$StandardEncodingsHolder($Class* clazz) {
	return $of($alloc(DataFlavorUtil$StandardEncodingsHolder));
}

$SortedSet* DataFlavorUtil$StandardEncodingsHolder::standardEncodings = nullptr;

void DataFlavorUtil$StandardEncodingsHolder::init$() {
}

$SortedSet* DataFlavorUtil$StandardEncodingsHolder::load() {
	$init(DataFlavorUtil$StandardEncodingsHolder);
	$useLocalCurrentObjectStackCache();
	$var($SortedSet, tempSet, $new($TreeSet, $($nc($($DataFlavorUtil::getCharsetComparator()))->reversed())));
	tempSet->add("US-ASCII"_s);
	tempSet->add("ISO-8859-1"_s);
	tempSet->add("UTF-8"_s);
	tempSet->add("UTF-16BE"_s);
	tempSet->add("UTF-16LE"_s);
	tempSet->add("UTF-16"_s);
	tempSet->add($($nc($($Charset::defaultCharset()))->name()));
	return $Collections::unmodifiableSortedSet(tempSet);
}

void clinit$DataFlavorUtil$StandardEncodingsHolder($Class* class$) {
	$assignStatic(DataFlavorUtil$StandardEncodingsHolder::standardEncodings, DataFlavorUtil$StandardEncodingsHolder::load());
}

DataFlavorUtil$StandardEncodingsHolder::DataFlavorUtil$StandardEncodingsHolder() {
}

$Class* DataFlavorUtil$StandardEncodingsHolder::load$($String* name, bool initialize) {
	$loadClass(DataFlavorUtil$StandardEncodingsHolder, name, initialize, &_DataFlavorUtil$StandardEncodingsHolder_ClassInfo_, clinit$DataFlavorUtil$StandardEncodingsHolder, allocate$DataFlavorUtil$StandardEncodingsHolder);
	return class$;
}

$Class* DataFlavorUtil$StandardEncodingsHolder::class$ = nullptr;

	} // datatransfer
} // sun
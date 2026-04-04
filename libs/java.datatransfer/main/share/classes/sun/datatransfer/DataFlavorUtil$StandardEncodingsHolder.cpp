#include <sun/datatransfer/DataFlavorUtil$StandardEncodingsHolder.h>
#include <java/nio/charset/Charset.h>
#include <java/util/Collections.h>
#include <java/util/Comparator.h>
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
using $SortedSet = ::java::util::SortedSet;
using $TreeSet = ::java::util::TreeSet;
using $DataFlavorUtil = ::sun::datatransfer::DataFlavorUtil;

namespace sun {
	namespace datatransfer {

$SortedSet* DataFlavorUtil$StandardEncodingsHolder::standardEncodings = nullptr;

void DataFlavorUtil$StandardEncodingsHolder::init$() {
}

$SortedSet* DataFlavorUtil$StandardEncodingsHolder::load() {
	$init(DataFlavorUtil$StandardEncodingsHolder);
	$useLocalObjectStack();
	$var($SortedSet, tempSet, $new($TreeSet, $($$nc($DataFlavorUtil::getCharsetComparator())->reversed())));
	tempSet->add("US-ASCII"_s);
	tempSet->add("ISO-8859-1"_s);
	tempSet->add("UTF-8"_s);
	tempSet->add("UTF-16BE"_s);
	tempSet->add("UTF-16LE"_s);
	tempSet->add("UTF-16"_s);
	tempSet->add($($$nc($Charset::defaultCharset())->name()));
	return $Collections::unmodifiableSortedSet(tempSet);
}

void DataFlavorUtil$StandardEncodingsHolder::clinit$($Class* clazz) {
	$assignStatic(DataFlavorUtil$StandardEncodingsHolder::standardEncodings, DataFlavorUtil$StandardEncodingsHolder::load());
}

DataFlavorUtil$StandardEncodingsHolder::DataFlavorUtil$StandardEncodingsHolder() {
}

$Class* DataFlavorUtil$StandardEncodingsHolder::load$($String* name, bool initialize) {
	$FieldInfo fieldInfos$$[] = {
		{"standardEncodings", "Ljava/util/SortedSet;", "Ljava/util/SortedSet<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DataFlavorUtil$StandardEncodingsHolder, standardEncodings)},
		{}
	};
	$MethodInfo methodInfos$$[] = {
		{"<init>", "()V", nullptr, $PRIVATE, $method(DataFlavorUtil$StandardEncodingsHolder, init$, void)},
		{"load", "()Ljava/util/SortedSet;", "()Ljava/util/SortedSet<Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticMethod(DataFlavorUtil$StandardEncodingsHolder, load, $SortedSet*)},
		{}
	};
	$InnerClassInfo innerClassesInfo$$[] = {
		{"sun.datatransfer.DataFlavorUtil$StandardEncodingsHolder", "sun.datatransfer.DataFlavorUtil", "StandardEncodingsHolder", $PRIVATE | $STATIC},
		{}
	};
	$ClassInfo classInfo$$ = {
		$ACC_SUPER,
		"sun.datatransfer.DataFlavorUtil$StandardEncodingsHolder",
		"java.lang.Object",
		nullptr,
		fieldInfos$$,
		methodInfos$$,
		nullptr,
		nullptr,
		innerClassesInfo$$,
		nullptr,
		nullptr,
		nullptr,
		"sun.datatransfer.DataFlavorUtil"
	};
	$loadClass(DataFlavorUtil$StandardEncodingsHolder, name, initialize, &classInfo$$, DataFlavorUtil$StandardEncodingsHolder::clinit$, []($Class* clazz) -> $Object* {
		return $alloc(DataFlavorUtil$StandardEncodingsHolder);
	});
	return class$;
}

$Class* DataFlavorUtil$StandardEncodingsHolder::class$ = nullptr;

	} // datatransfer
} // sun